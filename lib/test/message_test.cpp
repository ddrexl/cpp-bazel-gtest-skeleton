#include "lib/message.h"

#include <gmock/gmock.h>

namespace lib {
namespace {

using testing::Eq;

TEST(message_test, content) { ASSERT_THAT(get_message(), Eq("Hello World!")); }

}  // namespace
}  // namespace lib
