#ifndef _MANAGER_TRANSITION_H_
#define _MANAGER_TRANSITION_H_

#include <string>
#include <memory>
#include "entity-state.h"
#include "entity-event.h"

namespace Manager {

  class Transition {

  public:
    Transition();
    ~Transition();
    
    std::string get_next_state(std::shared_ptr<Entity::State> current_state, Entity::Event & event);
    
  private:
    static const Entity::Transition default_transition;
  };

}

#endif

