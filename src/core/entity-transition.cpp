#include "entity-transition.h"
#include <iostream>
#include "entity-event.h"
#include "constant.hpp"

namespace Entity {
  
  Transition::Transition(std::string _state_begin, std::string _state_end, std::string _name)
    : state_begin(_state_begin), state_end(_state_end), name(_name) {}
  Transition::~Transition() {}
    
  std::string Transition::do_transition(Entity::Event & event)
  {
    //std::cout << "base class: try transition " << name << " to go from " << state_begin << " to " << state_end << std::endl;
    return std::string(Constant::State::none);
  }
    
}

