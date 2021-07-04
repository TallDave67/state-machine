#include "manager-state.h"
#include <utility>
#include <iostream>
#include <stdexcept>
#include "constant.hpp"

namespace Manager {

  State::State()
  {
    std::shared_ptr<Entity::State> state = std::make_shared<Entity::State>(const_cast<std::string &>(Constant::State::zero));
    add_state(state);
    current_state = Constant::State::zero;
  }
  
  State::~State() {}

  bool State::is_state(std::string & _state)
  {
    //std::cout << "is_state " << _state << " returns ";
    std::vector<std::shared_ptr<Entity::State>>::iterator itr = find_state(_state);
    if (itr != states.end())
    {
      //std::cout << "true" << std::endl;
      return true;
    }
    else
    {
      //std::cout << "false" << std::endl;
      return false;
    }
  }
  
  void State::add_state(std::shared_ptr<Entity::State> _state)
  {
      states.push_back(_state);
  }
  
  std::shared_ptr<Entity::State> State::get_state(std::string & _state)
  {
    //std::cout << "get_state " << _state << " returns ";
    std::vector<std::shared_ptr<Entity::State>>::iterator itr = find_state(_state);
    if (itr != states.end())
    {
      //std::cout << "reference" << std::endl;
      return *itr;
    }
    else
    {
      throw std::invalid_argument("state does not exist");
    }
  }
  
  bool State::set_current_state(std::string _current_state)
  {
    std::vector<std::shared_ptr<Entity::State>>::iterator itr = find_state(_current_state);
    if (itr != states.end())
    {
      current_state = _current_state;
      return true;
    }
    else
      return false;
  }
  
  std::shared_ptr<Entity::State> State::get_current_state()
  {
    return get_state(current_state);
  }

  std::vector<std::shared_ptr<Entity::State>>::iterator State::find_state(std::string & _state)
  {
    return std::find_if(states.begin(), states.end(), [&_state](const std::shared_ptr<Entity::State> state) {return state->name == _state;});
  }
  
  void State::show_state_transition_table()
  {
    std::for_each(states.begin(), states.end(), 
      [](std::shared_ptr<Entity::State> st) {std::cout << st->name << std::endl; st->show_transitions();}
    );
  }
  
}
