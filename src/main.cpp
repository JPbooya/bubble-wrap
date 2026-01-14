#include <bn_backdrop.h>
#include <bn_color.h>
#include <bn_core.h>

int main() {
  bn::core::init();
  bn::backdrop::set_color(bn::color(15, 29, 15));

  while(true) {
    bn::core::update();
  }
}