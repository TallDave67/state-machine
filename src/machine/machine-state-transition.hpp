#ifndef _MACHINE_STATE_TRANSITION_HPP_
#define _MACHINE_STATE_TRANSITION_HPP_

#include "config-state-transition.hpp"
#include "constant.hpp"
#include "machine-constant.hpp"

namespace Machine {

  const Config::StateTransitionTable state_transition_table {{
      {::Constant::State::zero, Machine::Constant::State::have_peanut_butter, Machine::Constant::Transition::got_peanut_butter},
      {Machine::Constant::State::have_peanut_butter, Machine::Constant::State::have_jelly, Machine::Constant::Transition::got_jelly},
      {Machine::Constant::State::have_jelly, Machine::Constant::State::have_bread, Machine::Constant::Transition::got_bread},
      {Machine::Constant::State::have_bread, ::Constant::State::zero, Machine::Constant::Transition::got_tired},
      {Machine::Constant::State::have_bread, Machine::Constant::State::have_plate, Machine::Constant::Transition::got_plate},
      {Machine::Constant::State::have_plate, Machine::Constant::State::have_knife, Machine::Constant::Transition::got_knife},
      {Machine::Constant::State::have_knife, Machine::Constant::State::have_spoon, Machine::Constant::Transition::got_spoon},
      {Machine::Constant::State::have_spoon, ::Constant::State::zero, Machine::Constant::Transition::got_tired},
      {Machine::Constant::State::have_spoon, Machine::Constant::State::have_toaster, Machine::Constant::Transition::got_toaster},
      {Machine::Constant::State::have_toaster, Machine::Constant::State::bread_in_toaster, Machine::Constant::Transition::placed_bread_in_toaster},
      {Machine::Constant::State::bread_in_toaster, Machine::Constant::State::toast_made, Machine::Constant::Transition::toasted_bread},
      {Machine::Constant::State::toast_made, Machine::Constant::State::toast_on_plate, Machine::Constant::Transition::moved_toast},
      {Machine::Constant::State::toast_on_plate, ::Constant::State::zero, Machine::Constant::Transition::got_tired},
      {Machine::Constant::State::toast_on_plate, Machine::Constant::State::peanut_butter_on_toast_one, Machine::Constant::Transition::spreaded_peanut_butter_on_toast_one},
      {Machine::Constant::State::peanut_butter_on_toast_one, Machine::Constant::State::jelly_on_toast_two, Machine::Constant::Transition::spreaded_jelly_on_toast_two},
      {Machine::Constant::State::jelly_on_toast_two, Machine::Constant::State::sandwich_made, Machine::Constant::Transition::joined_toast},
      {Machine::Constant::State::sandwich_made, ::Constant::State::zero, Machine::Constant::Transition::ate_sandwich}
  }};

}

#endif

