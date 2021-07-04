# State Machine (C++11)

This project demonstrates how a state machine can be used to fromalize the control flow of your program in C++20.

Linux distro "Pop!_OS 21.04"

cmake version 3.16.3

Ubuntu clang version 11.0.0-2

## Steps

./build.sh

./build/state-machine

## History

dates: June 29 - July 4, 2021

duration: 30 hours

### Code from Another Developer

These folks inspired me to use transition arcs as the core of the state machine.

[Embedded State Machines](https://www.embedded.com/object-oriented-state-machines/)

## CMake / Project Tree

I looked at a few examples of how people are structuring their CMake projects.

[Gitlab](https://cliutils.gitlab.io/modern-cmake/chapters/basics/structure.html)

[Medium](https://medium.com/swlh/c-project-structure-for-cmake-67d60135f6f5)

I also tried to follow the advice of Daniel Pfiefer who gave a great talk on CMake a few years back.  For example, I don't use any GLOBbing.

[Effective CMake](https://youtu.be/bsXLMQ6WgIk) 

My tree looks like many you have seen before and I figured out a way to have CMake and the tree work together.  There is one executable built at the root level with main.cpp, and it links to any libraries that are built one level below.  The libraries one level below build any cpp files in their directory and then link to any libraries one level below.  And so on and so on.

## Description

If you only look at one file then choose /src/machine/machine-state-transition.hpp where you will find the state transition table from which the rest of the code sprung.

When you run the program enter the events that occur on the command line and you will see the state machine progress through its states.

## Output

From a run where we march through the state machine from the zero state through all the other states and back to zero.

> what is the event? get_peanut_butter
> 
> GotPeanutButter::do_transition to have_peanut_butter
> 
> Entity::State::exit_state zero
> 
> HavePeanutButter::enter_state
> 
> what is the event? what
> 
> current_state remains have_peanut_butter
> 
> what is the event? get_jelly
> 
> GotJelly::do_transition to have_jelly
> 
> HavePeanutButter::exit_state
> 
> HaveJelly::enter_state
> 
> what is the event? get_bread
> 
> GotBread::do_transition to have_bread
> 
> HaveJelly::exit_state
> 
> HaveBread::enter_state
> 
> what is the event? get_tired
> 
> GotTired::do_transition to zero
> 
> HaveBread::exit_state
> 
> Entity::State::enter_state zero
> 
> what is the event? get_peanut_butter
> 
> GotPeanutButter::do_transition to have_peanut_butter
> 
> Entity::State::exit_state zero
> 
> HavePeanutButter::enter_state
> 
> what is the event? get_jelly
> 
> GotJelly::do_transition to have_jelly
> 
> HavePeanutButter::exit_state
> 
> HaveJelly::enter_state
> 
> what is the event? get_bread
> 
> GotBread::do_transition to have_bread
> 
> HaveJelly::exit_state
> 
> HaveBread::enter_state
> 
> what is the event? get_plate
> 
> GotPlate::do_transition to have_plate
> 
> HaveBread::exit_state
> 
> HavePlate::enter_state
> 
> what is the event? get_knife
> 
> GotKnife::do_transition to have_knife
> 
> HavePlate::exit_state
> 
> HaveKnife::enter_state
> 
> what is the event? get_spoon
> 
> GotSpoon::do_transition to have_spoon
> 
> HaveKnife::exit_state
> 
> HaveSpoon::enter_state
> 
> what is the event? get_toaster
> 
> GotToaster::do_transition to have_toaster
> 
> HaveSpoon::exit_state
> 
> HaveToaster::enter_state
> 
> what is the event? toast_bread
> 
> current_state remains have_toaster
> 
> what is the event? place_bread_in_toaster
> 
> PlacedBreadInToaster::do_transition to bread_in_toaster
> 
> HaveToaster::exit_state
> 
> BreadInToaster::enter_state
> 
> what is the event? toast_bread
> 
> ToastedBread::do_transition to toast_made
> 
> BreadInToaster::exit_state
> 
> ToastMade::enter_state
> 
> what is the event? move_toast
> 
> MovedToast::do_transition to toast_on_plate
> 
> ToastMade::exit_state
> 
> ToastOnPlate::enter_state
> 
> what is the event? spread_peanut_butter_on_toast_one
> 
> SpreadedPeanutButterOnToastOne::do_transition to peanut_butter_on_toast_one
> 
> ToastOnPlate::exit_state
> 
> PeanutButterOnToastOne::enter_state
> 
> what is the event? spread_jelly_on_toast_two
> 
> SpreadedJellyOnToastTwo::do_transition to jelly_on_toast_two
> 
> PeanutButterOnToastOne::exit_state
> 
> JellyOnToastTwo::enter_state
> 
> what is the event? join_toast
> 
> JoinedToast::do_transition to sandwich_made
> 
> JellyOnToastTwo::exit_state
> 
> SandwichMade::enter_state
> 
> what is the event? eat_sandwich
> 
> AteSandwich::do_transition to zero
> 
> SandwichMade::exit_state
> 
> Entity::State::enter_state zero
> 
> what is the event? show-stt
> 
> driver shows state transition table
> 
> zero
> 
>   zero to have_peanut_butter by got_peanut_butter
>   
> have_peanut_butter
> 
>   have_peanut_butter to have_jelly by got_jelly
>   
> have_jelly
> 
>   have_jelly to have_bread by got_bread
>   
> have_bread
> 
>   have_bread to zero by got_tired
>   
>   have_bread to have_plate by got_plate
>   
> have_plate
> 
>   have_plate to have_knife by got_knife
>   
> have_knife
> 
>   have_knife to have_spoon by got_spoon
>   
> have_spoon
> 
>   have_spoon to zero by got_tired
>   
>   have_spoon to have_toaster by got_toaster
>   
> have_toaster
> 
>   have_toaster to bread_in_toaster by placed_bread_in_toaster
>   
> bread_in_toaster
> 
>   bread_in_toaster to toast_made by toasted_bread
>   
> toast_made
> 
>   toast_made to toast_on_plate by moved_toast
>   
> toast_on_plate
> 
>   toast_on_plate to zero by got_tired
>   
>   toast_on_plate to peanut_butter_on_toast_one by spreaded_peanut_butter_on_toast_one
>   
> peanut_butter_on_toast_one
> 
>   peanut_butter_on_toast_one to jelly_on_toast_two by spreaded_jelly_on_toast_two
>   
> jelly_on_toast_two
> 
>   jelly_on_toast_two to sandwich_made by joined_toast
>   
> sandwich_made
> 
>   sandwich_made to zero by ate_sandwich
>   
> what is the event? stop
> 
> driver stopped
> 

