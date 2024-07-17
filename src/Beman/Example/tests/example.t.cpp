// SPDX-License-Identifier: MIT
// Copyright © 2024 Bret Brown

#include <Beman/Example/example.hpp>

#include <gtest/gtest.h>

TEST(ExampleTest, call_identity) {
    for (int i = -100; i < 100; ++i) {
        EXPECT_EQ(i, beman::example::identity(i));
    }
}