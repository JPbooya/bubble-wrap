#include <bn_backdrop.h>
#include <bn_color.h>
#include <bn_core.h>
#include <bn_keypad.h>

int main() {
bn::core::init();

int counter = 0; // initialize counter 

while(true) {
  if (bn::keypad::a_held()) {
    bn::backdrop::set_color(bn::color(10, 10, 22));
    counter = 60;
  }
  
  else if (bn::keypad::b_held()) {
    bn::backdrop::set_color(bn::color(28, 30, 31 ));
    counter = 60;
  }

  if (counter > 0) {
    counter = counter -1; // Count down
  }

  if (counter == 0) {
     bn::backdrop::set_color(bn::color(31, 22, 22)); // Defualt color
  }

  if (bn::keypad::a_pressed() && bn::keypad::b_pressed()) {
    bn::backdrop::set_color(bn::color(12, 22, 30));
  }

    bn::core::update(); 
  }
} 