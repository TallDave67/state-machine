#include "machine-state.h"
#include <iostream>

namespace Machine {

  namespace State {
  
    HavePeanutButter::HavePeanutButter(std::string & _name)
      : Entity::State(_name) {}
    HavePeanutButter::~HavePeanutButter() {} 
      
    void HavePeanutButter::enter_state()
    {
      std::cout << "HavePeanutButter::enter_state" << std::endl;
    }
    
    void HavePeanutButter::in_state()
    {
      std::cout << "HavePeanutButter::in_state" << std::endl;
    }
    
    void HavePeanutButter::exit_state()
    {
      std::cout << "HavePeanutButter::exit_state" << std::endl;
    }

    HaveJelly::HaveJelly(std::string & _name)
      : Entity::State(_name) {}
    HaveJelly::~HaveJelly() {} 
      
    void HaveJelly::enter_state()
    {
      std::cout << "HaveJelly::enter_state" << std::endl;
    }
    
    void HaveJelly::in_state()
    {
      std::cout << "HaveJelly::in_state" << std::endl;
    }
    
    void HaveJelly::exit_state()
    {
      std::cout << "HaveJelly::exit_state" << std::endl;
    }

    HaveBread::HaveBread(std::string & _name)
      : Entity::State(_name) {}
    HaveBread::~HaveBread() {} 
      
    void HaveBread::enter_state()
    {
      std::cout << "HaveBread::enter_state" << std::endl;
    }
    
    void HaveBread::in_state()
    {
      std::cout << "HaveBread::in_state" << std::endl;
    }
    
    void HaveBread::exit_state()
    {
      std::cout << "HaveBread::exit_state" << std::endl;
    }

    HavePlate::HavePlate(std::string & _name)
      : Entity::State(_name) {}
    HavePlate::~HavePlate() {} 
      
    void HavePlate::enter_state()
    {
      std::cout << "HavePlate::enter_state" << std::endl;
    }
    
    void HavePlate::in_state()
    {
      std::cout << "HavePlate::in_state" << std::endl;
    }
    
    void HavePlate::exit_state()
    {
      std::cout << "HavePlate::exit_state" << std::endl;
    }

    HaveKnife::HaveKnife(std::string & _name)
      : Entity::State(_name) {}
    HaveKnife::~HaveKnife() {} 
      
    void HaveKnife::enter_state()
    {
      std::cout << "HaveKnife::enter_state" << std::endl;
    }
    
    void HaveKnife::in_state()
    {
      std::cout << "HaveKnife::in_state" << std::endl;
    }
    
    void HaveKnife::exit_state()
    {
      std::cout << "HaveKnife::exit_state" << std::endl;
    }

    HaveSpoon::HaveSpoon(std::string & _name)
      : Entity::State(_name) {}
    HaveSpoon::~HaveSpoon() {} 
      
    void HaveSpoon::enter_state()
    {
      std::cout << "HaveSpoon::enter_state" << std::endl;
    }
    
    void HaveSpoon::in_state()
    {
      std::cout << "HaveSpoon::in_state" << std::endl;
    }
    
    void HaveSpoon::exit_state()
    {
      std::cout << "HaveSpoon::exit_state" << std::endl;
    }

    HaveToaster::HaveToaster(std::string & _name)
      : Entity::State(_name) {}
    HaveToaster::~HaveToaster() {} 
      
    void HaveToaster::enter_state()
    {
      std::cout << "HaveToaster::enter_state" << std::endl;
    }
    
    void HaveToaster::in_state()
    {
      std::cout << "HaveToaster::in_state" << std::endl;
    }
    
    void HaveToaster::exit_state()
    {
      std::cout << "HaveToaster::exit_state" << std::endl;
    }

    BreadInToaster::BreadInToaster(std::string & _name)
      : Entity::State(_name) {}
    BreadInToaster::~BreadInToaster() {} 
      
    void BreadInToaster::enter_state()
    {
      std::cout << "BreadInToaster::enter_state" << std::endl;
    }
    
    void BreadInToaster::in_state()
    {
      std::cout << "BreadInToaster::in_state" << std::endl;
    }
    
    void BreadInToaster::exit_state()
    {
      std::cout << "BreadInToaster::exit_state" << std::endl;
    }

    ToastMade::ToastMade(std::string & _name)
      : Entity::State(_name) {}
    ToastMade::~ToastMade() {} 
      
    void ToastMade::enter_state()
    {
      std::cout << "ToastMade::enter_state" << std::endl;
    }
    
    void ToastMade::in_state()
    {
      std::cout << "ToastMade::in_state" << std::endl;
    }
    
    void ToastMade::exit_state()
    {
      std::cout << "ToastMade::exit_state" << std::endl;
    }

    ToastOnPlate::ToastOnPlate(std::string & _name)
      : Entity::State(_name) {}
    ToastOnPlate::~ToastOnPlate() {} 
      
    void ToastOnPlate::enter_state()
    {
      std::cout << "ToastOnPlate::enter_state" << std::endl;
    }
    
    void ToastOnPlate::in_state()
    {
      std::cout << "ToastOnPlate::in_state" << std::endl;
    }
    
    void ToastOnPlate::exit_state()
    {
      std::cout << "ToastOnPlate::exit_state" << std::endl;
    }

    PeanutButterOnToastOne::PeanutButterOnToastOne(std::string & _name)
      : Entity::State(_name) {}
    PeanutButterOnToastOne::~PeanutButterOnToastOne() {} 
      
    void PeanutButterOnToastOne::enter_state()
    {
      std::cout << "PeanutButterOnToastOne::enter_state" << std::endl;
    }
    
    void PeanutButterOnToastOne::in_state()
    {
      std::cout << "PeanutButterOnToastOne::in_state" << std::endl;
    }
    
    void PeanutButterOnToastOne::exit_state()
    {
      std::cout << "PeanutButterOnToastOne::exit_state" << std::endl;
    }

    JellyOnToastTwo::JellyOnToastTwo(std::string & _name)
      : Entity::State(_name) {}
    JellyOnToastTwo::~JellyOnToastTwo() {} 
      
    void JellyOnToastTwo::enter_state()
    {
      std::cout << "JellyOnToastTwo::enter_state" << std::endl;
    }
    
    void JellyOnToastTwo::in_state()
    {
      std::cout << "JellyOnToastTwo::in_state" << std::endl;
    }
    
    void JellyOnToastTwo::exit_state()
    {
      std::cout << "JellyOnToastTwo::exit_state" << std::endl;
    }

    SandwichMade::SandwichMade(std::string & _name)
      : Entity::State(_name) {}
    SandwichMade::~SandwichMade() {} 
      
    void SandwichMade::enter_state()
    {
      std::cout << "SandwichMade::enter_state" << std::endl;
    }
    
    void SandwichMade::in_state()
    {
      std::cout << "SandwichMade::in_state" << std::endl;
    }
    
    void SandwichMade::exit_state()
    {
      std::cout << "SandwichMade::exit_state" << std::endl;
    }

  }

}

