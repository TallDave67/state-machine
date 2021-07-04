#include <memory>
#include "bootstrap-state-transition.h"
#include "machine-state-transition.hpp"
#include "driver-machine.h"

int main()
{
  Bootstrap::StateTransition bootstrap {};
  Manager::State manager_state {};
  Machine::Factory machine_factory {};
  bootstrap.bootstrap(const_cast<Config::StateTransitionTable &>(Machine::state_transition_table), manager_state, machine_factory);
  Manager::Transition manager_transition {};
  Manager::Event manager_event {};  
  Driver::Machine driver_machine {manager_state, manager_transition, manager_event};
  driver_machine.run();
  return 0;
}
