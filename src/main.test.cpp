#include <doctest/doctest.h>

#include <string_view>

std::string_view get() { return "a"; }

TEST_CASE("test") { CHECK_EQ(get(), std::string_view{"a"}); }
