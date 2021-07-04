#ifndef _MANAGER_STATE_H_
#define _MANAGER_STATE_H_

#include <string>
#include <memory>
#include "entity-state.h"

namespace Manager {

  class State {

  public:
    State();
    ~State();
    
    bool is_state(std::string & _state);
    void add_state(std::shared_ptr<Entity::State> _state);
    std::shared_ptr<Entity::State> get_state(std::string & _state);    
    
    bool set_current_state(std::string _current_state);
    std::shared_ptr<Entity::State> get_current_state();
    
    void show_state_transition_table();
    
  private:
    std::vector<std::shared_ptr<Entity::State>>::iterator find_state(std::string & _state);

  private:
    std::vector<std::shared_ptr<Entity::State>> states;
    std::string current_state;

  };

}

#endif

