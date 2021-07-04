#ifndef _ENTITY_EVENT_H_
#define _ENTITY_EVENT_H_

#include <string>
#include "property-source.hpp"
#include "property-flow.hpp"

namespace Entity {

  class Event {

  public:
    Event(std::string & _name, Property::Source _source, Property::Flow _flow);
    ~Event();  
    
  public:
    std::string name;
    Property::Source source;
    Property::Flow flow;

  };

}

#endif

