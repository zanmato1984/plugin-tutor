#include <iostream>
#include "../sdk_3/sdk_3.h"
#include "../include/common.h"

extern "C" void before_say_sth() {
XX const std::string &sth = get_sth();
XX if (sth == "something") {
XX   set_sth("nothing");
XX }

  std::cout << "I think," << std::endl;
}

extern "C" void after_say_sth() {
  std::cout << "is wrong." << std::endl;
}
