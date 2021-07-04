#ifndef _MACHINE_FACTORY_H_
#define _MACHINE_FACTORY_H_

#include <string>
#include <memory>
#include "entity-state.h"

namespace Machine
{
  class Factory {
    
    public:
      Factory();
      ~Factory();
      
      std::shared_ptr<Entity::State> make_state(std::string _state);
      std::shared_ptr<Entity::Transition> make_transition(std::string _state_begin, std::string _state_end, std::string _transition);
  };
}

#endif

