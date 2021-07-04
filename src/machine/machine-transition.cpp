#include "machine-transition.h"
#include <iostream>
#include "machine-state-transition.hpp"

namespace Machine {

  namespace Transition {
  
    GotPeanutButter::GotPeanutButter(std::string _state_begin, std::string _state_end, std::string _transition)
      : Entity::Transition(_state_begin, _state_end, _transition) {}
    GotPeanutButter::~GotPeanutButter() {}
    
    std::string GotPeanutButter::do_transition(Entity::Event & event)
    {
      if(event.name == Machine::Constant::Event::get_peanut_butter)
      {
        std::cout << "GotPeanutButter::do_transition to " << state_end << std::endl;
        return state_end;
      }
      return Entity::Transition::do_transition(event);
    }

    GotJelly::GotJelly(std::string _state_begin, std::string _state_end, std::string _transition)
      : Entity::Transition(_state_begin, _state_end, _transition) {}
    GotJelly::~GotJelly() {}
    
    std::string GotJelly::do_transition(Entity::Event & event)
    {
      if(event.name == Machine::Constant::Event::get_jelly)
      {
        std::cout << "GotJelly::do_transition to " << state_end << std::endl;
        return state_end;
      }
      return Entity::Transition::do_transition(event);
    }

    GotBread::GotBread(std::string _state_begin, std::string _state_end, std::string _transition)
      : Entity::Transition(_state_begin, _state_end, _transition) {}
    GotBread::~GotBread() {}
    
    std::string GotBread::do_transition(Entity::Event & event)
    {
      if(event.name == Machine::Constant::Event::get_bread)
      {
        std::cout << "GotBread::do_transition to " << state_end << std::endl;
        return state_end;
      }
      return Entity::Transition::do_transition(event);
    }

    GotPlate::GotPlate(std::string _state_begin, std::string _state_end, std::string _transition)
      : Entity::Transition(_state_begin, _state_end, _transition) {}
    GotPlate::~GotPlate() {}
    
    std::string GotPlate::do_transition(Entity::Event & event)
    {
      if(event.name == Machine::Constant::Event::get_plate)
      {
        std::cout << "GotPlate::do_transition to " << state_end << std::endl;
        return state_end;
      }
      return Entity::Transition::do_transition(event);
    }

    GotKnife::GotKnife(std::string _state_begin, std::string _state_end, std::string _transition)
      : Entity::Transition(_state_begin, _state_end, _transition) {}
    GotKnife::~GotKnife() {}
    
    std::string GotKnife::do_transition(Entity::Event & event)
    {
      if(event.name == Machine::Constant::Event::get_knife)
      {
        std::cout << "GotKnife::do_transition to " << state_end << std::endl;
        return state_end;
      }
      return Entity::Transition::do_transition(event);
    }

    GotSpoon::GotSpoon(std::string _state_begin, std::string _state_end, std::string _transition)
      : Entity::Transition(_state_begin, _state_end, _transition) {}
    GotSpoon::~GotSpoon() {}
    
    std::string GotSpoon::do_transition(Entity::Event & event)
    {
      if(event.name == Machine::Constant::Event::get_spoon)
      {
        std::cout << "GotSpoon::do_transition to " << state_end << std::endl;
        return state_end;
      }
      return Entity::Transition::do_transition(event);
    }

    GotToaster::GotToaster(std::string _state_begin, std::string _state_end, std::string _transition)
      : Entity::Transition(_state_begin, _state_end, _transition) {}
    GotToaster::~GotToaster() {}
    
    std::string GotToaster::do_transition(Entity::Event & event)
    {
      if(event.name == Machine::Constant::Event::get_toaster)
      {
        std::cout << "GotToaster::do_transition to " << state_end << std::endl;
        return state_end;
      }
      return Entity::Transition::do_transition(event);
    }

    PlacedBreadInToaster::PlacedBreadInToaster(std::string _state_begin, std::string _state_end, std::string _transition)
      : Entity::Transition(_state_begin, _state_end, _transition) {}
    PlacedBreadInToaster::~PlacedBreadInToaster() {}
    
    std::string PlacedBreadInToaster::do_transition(Entity::Event & event)
    {
      if(event.name == Machine::Constant::Event::place_bread_in_toaster)
      {
        std::cout << "PlacedBreadInToaster::do_transition to " << state_end << std::endl;
        return state_end;
      }
      return Entity::Transition::do_transition(event);
    }

    ToastedBread::ToastedBread(std::string _state_begin, std::string _state_end, std::string _transition)
      : Entity::Transition(_state_begin, _state_end, _transition) {}
    ToastedBread::~ToastedBread() {}
    
    std::string ToastedBread::do_transition(Entity::Event & event)
    {
      if(event.name == Machine::Constant::Event::toast_bread)
      {
        std::cout << "ToastedBread::do_transition to " << state_end << std::endl;
        return state_end;
      }
      return Entity::Transition::do_transition(event);
    }

    MovedToast::MovedToast(std::string _state_begin, std::string _state_end, std::string _transition)
      : Entity::Transition(_state_begin, _state_end, _transition) {}
    MovedToast::~MovedToast() {}
    
    std::string MovedToast::do_transition(Entity::Event & event)
    {
      if(event.name == Machine::Constant::Event::move_toast)
      {
        std::cout << "MovedToast::do_transition to " << state_end << std::endl;
        return state_end;
      }
      return Entity::Transition::do_transition(event);
    }

    SpreadedPeanutButterOnToastOne::SpreadedPeanutButterOnToastOne(std::string _state_begin, std::string _state_end, std::string _transition)
      : Entity::Transition(_state_begin, _state_end, _transition) {}
    SpreadedPeanutButterOnToastOne::~SpreadedPeanutButterOnToastOne() {}
    
    std::string SpreadedPeanutButterOnToastOne::do_transition(Entity::Event & event)
    {
      if(event.name == Machine::Constant::Event::spread_peanut_butter_on_toast_one)
      {
        std::cout << "SpreadedPeanutButterOnToastOne::do_transition to " << state_end << std::endl;
        return state_end;
      }
      return Entity::Transition::do_transition(event);
    }

    SpreadedJellyOnToastTwo::SpreadedJellyOnToastTwo(std::string _state_begin, std::string _state_end, std::string _transition)
      : Entity::Transition(_state_begin, _state_end, _transition) {}
    SpreadedJellyOnToastTwo::~SpreadedJellyOnToastTwo() {}
    
    std::string SpreadedJellyOnToastTwo::do_transition(Entity::Event & event)
    {
      if(event.name == Machine::Constant::Event::spread_jelly_on_toast_two)
      {
        std::cout << "SpreadedJellyOnToastTwo::do_transition to " << state_end << std::endl;
        return state_end;
      }
      return Entity::Transition::do_transition(event);
    }

    JoinedToast::JoinedToast(std::string _state_begin, std::string _state_end, std::string _transition)
      : Entity::Transition(_state_begin, _state_end, _transition) {}
    JoinedToast::~JoinedToast() {}
    
    std::string JoinedToast::do_transition(Entity::Event & event)
    {
      if(event.name == Machine::Constant::Event::join_toast)
      {
        std::cout << "JoinedToast::do_transition to " << state_end << std::endl;
        return state_end;
      }
      return Entity::Transition::do_transition(event);
    }

    AteSandwich::AteSandwich(std::string _state_begin, std::string _state_end, std::string _transition)
      : Entity::Transition(_state_begin, _state_end, _transition) {}
    AteSandwich::~AteSandwich() {}
    
    std::string AteSandwich::do_transition(Entity::Event & event)
    {
      if(event.name == Machine::Constant::Event::eat_sandwich)
      {
        std::cout << "AteSandwich::do_transition to " << state_end << std::endl;
        return state_end;
      }
      return Entity::Transition::do_transition(event);
    }

    GotTired::GotTired(std::string _state_begin, std::string _state_end, std::string _transition)
      : Entity::Transition(_state_begin, _state_end, _transition) {}
    GotTired::~GotTired() {}
    
    std::string GotTired::do_transition(Entity::Event & event)
    {
      if(event.name == Machine::Constant::Event::get_tired)
      {
        std::cout << "GotTired::do_transition to " << state_end << std::endl;
        return state_end;
      }
      return Entity::Transition::do_transition(event);
    }

  }

}


