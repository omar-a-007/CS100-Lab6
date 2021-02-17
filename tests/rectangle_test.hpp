ifndef __RECTANGLE_TESTS__
#define __RECTANGLE_TESTS__
#include "../header/rectangle.hpp"

#include "gtest/gtest.h"}

TEST(Perimeter_Test, regularPerimeter) {
	Rectangle rectangle = new Rectangle(5, 6);
	EXPECT_EQ(rectangle->perimeter(), 22);
}

TEST(Perimeter_Test, oneNegativeValue) {
        Rectangle rectangle = new Rectangle(5, -6);
        EXPECT_EQ(rectangle->perimeter(), -2);
}

TEST(Perimeter_Test, twoNegativeValue) {
        Rectangle rectangle = new Rectangle(-5, -6);
        EXPECT_EQ(rectangle->perimeter(), -22);
}

TEST(Perimeter_Test, largePerimeter) {
        Rectangle rectangle = new Rectangle(5566432, 651231);
        EXPECT_EQ(rectangle->perimeter(), 12435326);
}

TEST(Perimeter_Test, singleZero) {
        Rectangle rectangle = new Rectangle(5, 0);
        EXPECT_EQ(rectangle->perimeter(), 10);
}

TEST(Perimeter_Test, doubleZero) {
        Rectangle rectangle = new Rectangle(0, 0);
        EXPECT_EQ(rectangle->perimeter(), 0);
}


#endif //__RECTANGLE_TESTS__
