#ifndef _MANAGER_EVENT_H_
#define _MANAGER_EVENT_H_

#include <string>
#include "entity-event.h"

namespace Manager {

  class Event {

  public:
    Event();
    ~Event();
    
    Entity::Event make_commandline_event(std::string & command);
    
  };

}

#endif

