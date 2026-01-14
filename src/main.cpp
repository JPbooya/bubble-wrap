#include <bn_backdrop.h>
#include <bn_color.h>
#include <bn_core.h>
#include <bn_keypad.h>

int main() {

while(true) {
  if (bn::keypad::a_pressed()) {
   // bn::core::init();
    bn::backdrop::set_color(bn::color(15, 29, 15));
  }

  if (bn::keypad::b_pressed()) {
    bn::backdrop::set_color(bn::color(20, 25, 31 ));
  }

  else {
    bn::backdrop::set_color(bn::color(31, 22, 22));
  }

    bn::core::update(); 

  }
} 