#ifndef _ENTITY_STATE_H_
#define _ENTITY_STATE_H_

#include <string>
#include <vector>
#include <memory>
#include "entity-transition.h"

namespace Entity {

  class State {

  public:
    State(std::string & _name);
    virtual ~State();  
    
    void add_transition(std::shared_ptr<Entity::Transition> transition);
    
    virtual void enter_state();
    virtual void in_state();
    virtual void exit_state();
    
    void show_transitions();
    
  public:
    std::string name;
    std::vector<std::shared_ptr<Entity::Transition>> transitions;

  };

}

#endif

