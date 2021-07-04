#include "machine-factory.h"
#include <memory>
#include <iostream>
#include <stdexcept>
#include "machine-constant.hpp"
#include "machine-state.h"
#include "machine-transition.h"

namespace Machine
{
  Factory::Factory() {}
  Factory::~Factory() {}
  
  std::shared_ptr<Entity::State> Factory::make_state(std::string _state)
  {
    if(_state == Machine::Constant::State::have_peanut_butter)
    {
      return std::make_shared<Machine::State::HavePeanutButter>(_state);
    }
    else if(_state == Machine::Constant::State::have_jelly)
    {
      return std::make_shared<Machine::State::HaveJelly>(_state);
    }
    else if(_state == Machine::Constant::State::have_bread)
    {
      return std::make_shared<Machine::State::HaveBread>(_state);
    }
    else if(_state == Machine::Constant::State::have_plate)
    {
      return std::make_shared<Machine::State::HavePlate>(_state);
    }
    else if(_state == Machine::Constant::State::have_knife)
    {
      return std::make_shared<Machine::State::HaveKnife>(_state);
    }
    else if(_state == Machine::Constant::State::have_spoon)
    {
      return std::make_shared<Machine::State::HaveSpoon>(_state);
    }
    else if(_state == Machine::Constant::State::have_toaster)
    {
      return std::make_shared<Machine::State::HaveToaster>(_state);
    }
    else if(_state == Machine::Constant::State::bread_in_toaster)
    {
      return std::make_shared<Machine::State::BreadInToaster>(_state);
    }
    else if(_state == Machine::Constant::State::toast_made)
    {
      return std::make_shared<Machine::State::ToastMade>(_state);
    }
    else if(_state == Machine::Constant::State::toast_on_plate)
    {
      return std::make_shared<Machine::State::ToastOnPlate>(_state);
    }
    else if(_state == Machine::Constant::State::peanut_butter_on_toast_one)
    {
      return std::make_shared<Machine::State::PeanutButterOnToastOne>(_state);
    }
    else if(_state == Machine::Constant::State::jelly_on_toast_two)
    {
      return std::make_shared<Machine::State::JellyOnToastTwo>(_state);
    }
    else if(_state == Machine::Constant::State::sandwich_made)
    {
      return std::make_shared<Machine::State::SandwichMade>(_state);
    }
    else
    {
      throw std::invalid_argument("state does not exist");
    }
       
    return nullptr;
  }
  
  std::shared_ptr<Entity::Transition> Factory::make_transition(std::string _state_begin, std::string _state_end, std::string _transition)
  {
    //std::cout << "Factory::make_transition " << _transition << " from " << _state_begin<< " to " << _state_end << std::endl;
    Entity::Transition *pTransition = nullptr;
    if(_transition == Machine::Constant::Transition::got_peanut_butter)
    {
      return std::make_shared<Machine::Transition::GotPeanutButter>(_state_begin, _state_end, _transition);
    }
    else if(_transition == Machine::Constant::Transition::got_jelly)
    {
      return std::make_shared<Machine::Transition::GotJelly>(_state_begin, _state_end, _transition);
    }
    else if(_transition == Machine::Constant::Transition::got_bread)
    {
      return std::make_shared<Machine::Transition::GotBread>(_state_begin, _state_end, _transition);
    }
    else if(_transition == Machine::Constant::Transition::got_plate)
    {
      return std::make_shared<Machine::Transition::GotPlate>(_state_begin, _state_end, _transition);
    }
    else if(_transition == Machine::Constant::Transition::got_knife)
    {
      return std::make_shared<Machine::Transition::GotKnife>(_state_begin, _state_end, _transition);
    }
    else if(_transition == Machine::Constant::Transition::got_spoon)
    {
      return std::make_shared<Machine::Transition::GotSpoon>(_state_begin, _state_end, _transition);
    }
    else if(_transition == Machine::Constant::Transition::got_toaster)
    {
      return std::make_shared<Machine::Transition::GotToaster>(_state_begin, _state_end, _transition);
    }
    else if(_transition == Machine::Constant::Transition::placed_bread_in_toaster)
    {
      return std::make_shared<Machine::Transition::PlacedBreadInToaster>(_state_begin, _state_end, _transition);
    }
    else if(_transition == Machine::Constant::Transition::toasted_bread)
    {
      return std::make_shared<Machine::Transition::ToastedBread>(_state_begin, _state_end, _transition);
    }
    else if(_transition == Machine::Constant::Transition::moved_toast)
    {
      return std::make_shared<Machine::Transition::MovedToast>(_state_begin, _state_end, _transition);
    }
    else if(_transition == Machine::Constant::Transition::spreaded_peanut_butter_on_toast_one)
    {
      return std::make_shared<Machine::Transition::SpreadedPeanutButterOnToastOne>(_state_begin, _state_end, _transition);
    }
    else if(_transition == Machine::Constant::Transition::spreaded_jelly_on_toast_two)
    {
      return std::make_shared<Machine::Transition::SpreadedJellyOnToastTwo>(_state_begin, _state_end, _transition);
    }
    else if(_transition == Machine::Constant::Transition::joined_toast)
    {
      return std::make_shared<Machine::Transition::JoinedToast>(_state_begin, _state_end, _transition);
    }
    else if(_transition == Machine::Constant::Transition::ate_sandwich)
    {
      return std::make_shared<Machine::Transition::AteSandwich>(_state_begin, _state_end, _transition);
    }
    else if(_transition == Machine::Constant::Transition::got_tired)
    {
      return std::make_shared<Machine::Transition::GotTired>(_state_begin, _state_end, _transition);
    }
    
    return nullptr;
  }
}

