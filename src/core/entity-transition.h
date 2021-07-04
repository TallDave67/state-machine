#ifndef _ENTITY_TRANSITION_H_
#define _ENTITY_TRANSITION_H_

#include <string>
#include "entity-event.h"

namespace Entity {

  class Transition {

  public:
    Transition(std::string _state_begin, std::string _state_end, std::string _name);
    virtual ~Transition();
    
    virtual std::string do_transition(Entity::Event & event);
    
  public:
    std::string state_begin;
    std::string state_end;
    std::string name;

  };

}

#endif

