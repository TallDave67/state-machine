#ifndef _BOOTSTRAP_STATE_TRANSITION_H_
#define _BOOTSTRAP_STATE_TRANSITION_H_

#include <memory>
#include "config-state-transition.hpp"
#include "manager-state.h"
#include "machine-factory.h"

namespace Bootstrap {

  class StateTransition {

  public:
    StateTransition();
    ~StateTransition();
    
    void bootstrap(Config::StateTransitionTable & state_transition_table, Manager::State & manager_state, Machine::Factory & machine_factory);
  };
}

#endif

