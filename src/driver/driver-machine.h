#ifndef _DRIVER_MACHINE_H_
#define _DRIVER_MACHINE_H_

#include "manager-state.h"
#include "manager-transition.h"
#include "manager-event.h"

namespace Driver {
  
  class Machine {
  
    public:
      Machine(Manager::State & _manager_state, Manager::Transition & _manager_transition, Manager::Event & _manager_event);
      ~Machine();
      
      void run();
      
    private:
      Manager::State & manager_state;
      Manager::Transition & manager_transition;
      Manager::Event & manager_event;
  
  };

}

#endif

