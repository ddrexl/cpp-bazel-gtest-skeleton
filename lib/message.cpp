#include "lib/message.h"
#include <sched.h>

namespace lib {

struct Foo {
  int bar;
};

std::string get_message() {
  Foo foo{};

  foo.bar = 2;

  return "Hello World!";
}

} // namespace lib
