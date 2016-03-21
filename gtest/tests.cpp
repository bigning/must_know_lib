#include "add.h"
#include <iostream>
#include <gtest/gtest.h>


TEST(addTest, pos) {
    EXPECT_EQ(100.1, add(40,60));
    EXPECT_EQ(100.1, add(50.0, 50.0));
    EXPECT_EQ(60, add(40,20));
}

TEST(addTest, neg) {
    EXPECT_EQ(100, add(40,60));
    EXPECT_EQ(100, add(50.0, 50.0));
    EXPECT_EQ(60, add(40,20));
}

int main(int argc, char* argv[]) {
    testing::InitGoogleTest(&argc, argv);
    int test_res = 0;
    test_res = RUN_ALL_TESTS();
    //
    if (test_res == 0) {
        std::cout << "All tests passed." << std::endl;
    }
    else {
        std::cout << "At least 1 test failed" << std::endl;
    }
    return 0;
}
