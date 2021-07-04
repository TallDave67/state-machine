#include "manager-event.h"

namespace Manager {

  Event::Event() {}
  Event::~Event() {}
    
  Entity::Event Event::make_commandline_event(std::string & command)
  {
    return Entity::Event(command, Property::Source::user, Property::Flow::pulse);
  }
    
}


