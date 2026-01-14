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

    bn::core::update(); 

  }
} 