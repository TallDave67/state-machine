#include "bootstrap-state-transition.h"

namespace Bootstrap {

  StateTransition::StateTransition() {}
  StateTransition::~StateTransition() {}
    
  void StateTransition::bootstrap(Config::StateTransitionTable & state_transition_table, Manager::State & manager_state, Machine::Factory & machine_factory)
  {
    for(auto& state_transition: state_transition_table) {
      if(!manager_state.is_state(state_transition.state_begin))
      {
          manager_state.add_state(machine_factory.make_state(state_transition.state_begin));
      }
      std::shared_ptr<Entity::State> state = manager_state.get_state(state_transition.state_begin);
      state->add_transition(machine_factory.make_transition(state_transition.state_begin, state_transition.state_end, state_transition.transition));
    }
  }

}

