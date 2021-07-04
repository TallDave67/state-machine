#ifndef _CONFIG_STATE_TRANSITION_H_
#define _CONFIG_STATE_TRANSITION_H_

#include <string>
#include <vector>

namespace Config {

  class StateTransition {

    public:
      StateTransition(const std::string & _state_begin, const std::string & _state_end, const std::string & _transition)
          : state_begin(_state_begin), state_end(_state_end), transition(_transition) {}
      ~StateTransition() {}
      
    public:
      std::string state_begin;
      std::string state_end;
      std::string transition;

  };

  typedef std::vector<StateTransition> StateTransitionTable;

}

#endif

