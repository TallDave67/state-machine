#include "entity-state.h"
#include <utility>
#include <iostream>

namespace Entity {

  State::State(std::string & _name)
    : name(_name) {}
  State::~State() {}    

  void State::add_transition(std::shared_ptr<Entity::Transition> transition)
  {
    //std::cout << "Entity::State::add_transition to " << transition.state_end << std::endl;
    transitions.push_back(transition);
  }

  void State::enter_state()
  {
    std::cout << "Entity::State::enter_state " << name << std::endl;
  }
  
  void State::in_state()
  {
    std::cout << "Entity::State::in_state " << name << std::endl;
  }
  
  void State::exit_state()
  {
    std::cout << "Entity::State::exit_state " << name << std::endl;
  }

  void State::show_transitions()
  {
    std::for_each(transitions.begin(), transitions.end(), 
      [](std::shared_ptr<Entity::Transition> & tr) {std::cout << "  " << tr->state_begin << " to " << tr->state_end << " by " << tr->name << std::endl;}
    );
  }
}


