#ifndef _MACHINE_STATE_H_
#define _MACHINE_STATE_H_

#include "entity-state.h"

namespace Machine {

  namespace State {
  
    class HavePeanutButter : public Entity::State {

    public:
      HavePeanutButter(std::string & _name);
      ~HavePeanutButter() override;  
      
      void enter_state() override;
      void in_state() override;
      void exit_state() override;
      
    };
  
    class HaveJelly : public Entity::State {

    public:
      HaveJelly(std::string & _name);
      ~HaveJelly() override;  
      
      void enter_state() override;
      void in_state() override;
      void exit_state() override;
      
    };
  
    class HaveBread : public Entity::State {

    public:
      HaveBread(std::string & _name);
      ~HaveBread() override;  
      
      void enter_state() override;
      void in_state() override;
      void exit_state() override;
      
    };
  
    class HavePlate : public Entity::State {

    public:
      HavePlate(std::string & _name);
      ~HavePlate() override;  
      
      void enter_state() override;
      void in_state() override;
      void exit_state() override;
      
    };
  
    class HaveKnife : public Entity::State {

    public:
      HaveKnife(std::string & _name);
      ~HaveKnife() override;  
      
      void enter_state() override;
      void in_state() override;
      void exit_state() override;
      
    };
  
    class HaveSpoon : public Entity::State {

    public:
      HaveSpoon(std::string & _name);
      ~HaveSpoon() override;  
      
      void enter_state() override;
      void in_state() override;
      void exit_state() override;
      
    };
  
    class HaveToaster : public Entity::State {

    public:
      HaveToaster(std::string & _name);
      ~HaveToaster() override;  
      
      void enter_state() override;
      void in_state() override;
      void exit_state() override;
      
    };
  
    class BreadInToaster : public Entity::State {

    public:
      BreadInToaster(std::string & _name);
      ~BreadInToaster() override;  
      
      void enter_state() override;
      void in_state() override;
      void exit_state() override;
      
    };
  
    class ToastMade : public Entity::State {

    public:
      ToastMade(std::string & _name);
      ~ToastMade() override;  
      
      void enter_state() override;
      void in_state() override;
      void exit_state() override;
      
    };
  
    class ToastOnPlate : public Entity::State {

    public:
      ToastOnPlate(std::string & _name);
      ~ToastOnPlate() override;  
      
      void enter_state() override;
      void in_state() override;
      void exit_state() override;
      
    };
  
    class PeanutButterOnToastOne : public Entity::State {

    public:
      PeanutButterOnToastOne(std::string & _name);
      ~PeanutButterOnToastOne() override;  
      
      void enter_state() override;
      void in_state() override;
      void exit_state() override;
      
    };
  
    class JellyOnToastTwo : public Entity::State {

    public:
      JellyOnToastTwo(std::string & _name);
      ~JellyOnToastTwo() override;  
      
      void enter_state() override;
      void in_state() override;
      void exit_state() override;
      
    };
  
    class SandwichMade : public Entity::State {

    public:
      SandwichMade(std::string & _name);
      ~SandwichMade() override;  
      
      void enter_state() override;
      void in_state() override;
      void exit_state() override;
      
    };
  
  }

}

#endif

