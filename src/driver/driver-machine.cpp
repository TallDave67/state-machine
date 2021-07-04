#include "driver-machine.h"
#include <iostream>
#include <string>
#include <memory>
#include "driver-command.hpp"
#include "entity-event.h"
#include "constant.hpp"

namespace Driver {
  
  Machine::Machine(Manager::State & _manager_state, Manager::Transition & _manager_transition, Manager::Event & _manager_event) 
    : manager_state(_manager_state), manager_transition(_manager_transition), manager_event(_manager_event) {}
  Machine::~Machine() {}
      
  void Machine::run()
  {
    //std::cout << "Driver::Machine::run" << std::endl;
    while(true) {
      std::string command;
      std::cout << "what is the event? ";
      std::getline(std::cin, command);        

      if(command.compare(Driver::Command::stop) == 0)
      {
        std::cout << "driver stopped" << std::endl;
        break;
      }
      else if(command.compare(Driver::Command::show_state_transition_table) == 0)
      {
        std::cout << "driver shows state transition table" << std::endl;
        manager_state.show_state_transition_table();
      }
      else
      {
        Entity::Event event = manager_event.make_commandline_event(command);
        //std::cout << "event name = " << event.name << std::endl;
        std::shared_ptr<Entity::State> current_state = manager_state.get_current_state();
        std::string next_state = manager_transition.get_next_state(current_state, event);
        if(next_state != Constant::State::none)
        {
          if(manager_state.set_current_state(next_state))
          {
              current_state->exit_state();
              std::shared_ptr<Entity::State> new_current_state = manager_state.get_current_state();
              new_current_state->enter_state();
          }
          else
          {
            std::cout << "could not set new_current_state " << next_state << ", current_state remains " << current_state->name << std::endl;
          }        
        }
        else
        {
          std::cout << "current_state remains " << current_state->name << std::endl;
        }        
      }
    }
  }
  
}

