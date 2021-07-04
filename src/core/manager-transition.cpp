#include "manager-transition.h"
#include <iostream>
#include <memory>
#include "constant.hpp"

namespace Manager {

  const Entity::Transition Manager::Transition::default_transition = {"","",""};
  
  Transition::Transition() {}
  Transition::~Transition() {}
    
  std::string Transition::get_next_state(std::shared_ptr<Entity::State> current_state, Entity::Event & event)
  {
    //std::cout << "Transition::get_next_state from state " << current_state->name << " using event " << event.name << std::endl; 
    std::vector<std::shared_ptr<Entity::Transition>>::iterator itr = current_state->transitions.begin();
    for(; itr != current_state->transitions.end(); itr++)
    {
      //std::cout << "try transition " << (*itr)->name << " to go from " << (*itr)->state_begin << " to " << (*itr)->state_end << std::endl;
      std::string next_state = (*itr)->do_transition(event);
      //std::cout << "next state is " << next_state << std::endl;
      if(next_state != Constant::State::none)
        return next_state;
    }
    
    return std::string(Constant::State::none);
  }

}

