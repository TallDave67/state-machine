#ifndef _MACHINE_TRANSITION_H_
#define _MACHINE_TRANSITION_H_

#include "entity-transition.h"

namespace Machine {

  namespace Transition {
  
    class GotPeanutButter : public Entity::Transition {

    public:
      GotPeanutButter(std::string _state_begin, std::string _state_end, std::string _transition);
      ~GotPeanutButter() override;
      
      std::string do_transition(Entity::Event & event) override;

    };

    class GotJelly : public Entity::Transition {

    public:
      GotJelly(std::string _state_begin, std::string _state_end, std::string _transition);
      ~GotJelly() override;
      
      std::string do_transition(Entity::Event & event) override;

    };

    class GotBread : public Entity::Transition {

    public:
      GotBread(std::string _state_begin, std::string _state_end, std::string _transition);
      ~GotBread() override;
      
      std::string do_transition(Entity::Event & event) override;

    };

    class GotPlate : public Entity::Transition {

    public:
      GotPlate(std::string _state_begin, std::string _state_end, std::string _transition);
      ~GotPlate() override;
      
      std::string do_transition(Entity::Event & event) override;

    };

    class GotKnife : public Entity::Transition {

    public:
      GotKnife(std::string _state_begin, std::string _state_end, std::string _transition);
      ~GotKnife() override;
      
      std::string do_transition(Entity::Event & event) override;

    };

    class GotSpoon : public Entity::Transition {

    public:
      GotSpoon(std::string _state_begin, std::string _state_end, std::string _transition);
      ~GotSpoon() override;
      
      std::string do_transition(Entity::Event & event) override;

    };

    class GotToaster : public Entity::Transition {

    public:
      GotToaster(std::string _state_begin, std::string _state_end, std::string _transition);
      ~GotToaster() override;
      
      std::string do_transition(Entity::Event & event) override;

    };

    class PlacedBreadInToaster : public Entity::Transition {

    public:
      PlacedBreadInToaster(std::string _state_begin, std::string _state_end, std::string _transition);
      ~PlacedBreadInToaster() override;
      
      std::string do_transition(Entity::Event & event) override;

    };

    class ToastedBread : public Entity::Transition {

    public:
      ToastedBread(std::string _state_begin, std::string _state_end, std::string _transition);
      ~ToastedBread() override;
      
      std::string do_transition(Entity::Event & event) override;

    };

    class MovedToast : public Entity::Transition {

    public:
      MovedToast(std::string _state_begin, std::string _state_end, std::string _transition);
      ~MovedToast() override;
      
      std::string do_transition(Entity::Event & event) override;

    };

    class SpreadedPeanutButterOnToastOne : public Entity::Transition {

    public:
      SpreadedPeanutButterOnToastOne(std::string _state_begin, std::string _state_end, std::string _transition);
      ~SpreadedPeanutButterOnToastOne() override;
      
      std::string do_transition(Entity::Event & event) override;

    };

    class SpreadedJellyOnToastTwo : public Entity::Transition {

    public:
      SpreadedJellyOnToastTwo(std::string _state_begin, std::string _state_end, std::string _transition);
      ~SpreadedJellyOnToastTwo() override;
      
      std::string do_transition(Entity::Event & event) override;

    };

    class JoinedToast : public Entity::Transition {

    public:
      JoinedToast(std::string _state_begin, std::string _state_end, std::string _transition);
      ~JoinedToast() override;
      
      std::string do_transition(Entity::Event & event) override;

    };

    class AteSandwich : public Entity::Transition {

    public:
      AteSandwich(std::string _state_begin, std::string _state_end, std::string _transition);
      ~AteSandwich() override;
      
      std::string do_transition(Entity::Event & event) override;

    };

    class GotTired : public Entity::Transition {

    public:
      GotTired(std::string _state_begin, std::string _state_end, std::string _transition);
      ~GotTired() override;
      
      std::string do_transition(Entity::Event & event) override;

    };

  }

}

#endif

