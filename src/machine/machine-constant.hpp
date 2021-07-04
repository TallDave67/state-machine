#ifndef _MACHINE_CONSTANT_HPP_
#define _MACHINE_CONSTANT_HPP_

#include <string>

namespace Machine {

  namespace Constant {
  
    namespace State {
    
      const std::string have_peanut_butter {"have_peanut_butter"};
      const std::string have_jelly {"have_jelly"};
      const std::string have_bread {"have_bread"};
      const std::string have_plate {"have_plate"};
      const std::string have_knife {"have_knife"};
      const std::string have_spoon {"have_spoon"};
      const std::string have_toaster{"have_toaster"};
      const std::string bread_in_toaster {"bread_in_toaster"};
      const std::string toast_made {"toast_made"};
      const std::string toast_on_plate {"toast_on_plate"};
      const std::string peanut_butter_on_toast_one {"peanut_butter_on_toast_one"};
      const std::string jelly_on_toast_two {"jelly_on_toast_two"};
      const std::string sandwich_made {"sandwich_made"};
      
    }
    
    namespace Transition {
    
      const std::string got_peanut_butter {"got_peanut_butter"};
      const std::string got_jelly {"got_jelly"};
      const std::string got_bread {"got_bread"};
      const std::string got_plate {"got_plate"};
      const std::string got_knife {"got_knife"};
      const std::string got_spoon {"got_spoon"};
      const std::string got_toaster{"got_toaster"};
      const std::string placed_bread_in_toaster {"placed_bread_in_toaster"};
      const std::string toasted_bread {"toasted_bread"};
      const std::string moved_toast {"moved_toast"};
      const std::string spreaded_peanut_butter_on_toast_one {"spreaded_peanut_butter_on_toast_one"};
      const std::string spreaded_jelly_on_toast_two {"spreaded_jelly_on_toast_two"};
      const std::string joined_toast {"joined_toast"};
      const std::string ate_sandwich {"ate_sandwich"};
      const std::string got_tired {"got_tired"};
      
    }

    namespace Event {
    
      const std::string get_peanut_butter {"get_peanut_butter"};
      const std::string get_jelly {"get_jelly"};
      const std::string get_bread {"get_bread"};
      const std::string get_plate {"get_plate"};
      const std::string get_knife {"get_knife"};
      const std::string get_spoon {"get_spoon"};
      const std::string get_toaster{"get_toaster"};
      const std::string place_bread_in_toaster {"place_bread_in_toaster"};
      const std::string toast_bread {"toast_bread"};
      const std::string move_toast {"move_toast"};
      const std::string spread_peanut_butter_on_toast_one {"spread_peanut_butter_on_toast_one"};
      const std::string spread_jelly_on_toast_two {"spread_jelly_on_toast_two"};
      const std::string join_toast {"join_toast"};
      const std::string eat_sandwich {"eat_sandwich"};
      const std::string get_tired {"get_tired"};
      
    }
  }

}

#endif

