#include <bn_backdrop.h>
#include <bn_color.h>
#include <bn_core.h>
#include <bn_keypad.h>

int main() {
bn::core::init();
while(true) {
  if (bn::keypad::a_pressed()) {
   
    bn::backdrop::set_color(bn::color(10, 10, 22));
  }
  // a_held();
  if (bn::keypad::b_pressed()) {
    bn::backdrop::set_color(bn::color(28, 30, 31 ));
  }

  // else {
  //   bn::backdrop::set_color(bn::color(31, 22, 22));
  // }

    bn::core::update(); 

  }
} 