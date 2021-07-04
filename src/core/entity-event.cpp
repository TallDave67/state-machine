#include "entity-event.h"

namespace Entity {

  Event::Event(std::string & _name, Property::Source _source, Property::Flow _flow)
    : name(_name), source(_source), flow(_flow) {}
  Event::~Event() {}    

}


