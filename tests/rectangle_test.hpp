ifndef __RECTANGLE_TESTS__
#define __RECTANGLE_TESTS__
#include "../header/rectangle.hpp"

#include "gtest/gtest.h"}
TEST(Constructor_Test, defaultRectangle)
{
        Rectangle rectangle = new Rectangle();
        EXPECT_EQ(rectangle->getWidth(), 0);
        EXPECT_EQ(rectangle->getHeight(), 0);
}

TEST(Constructor_Test, basicRectangle)
{
        Rectangle rectangle = new Rectangle(4, 5);
        EXPECT_EQ(rectangle->getWidth(), 4);
        EXPECT_EQ(rectangle->getHeight(), 5);
}

TEST(Constructor_Test, negativeRectangle)
{
        Rectangle rectangle = new Rectangle(-4,-5);
        EXPECT_EQ(rectangle->getWidth(), -4);
        EXPECT_EQ(rectangle->getHeight(), -5);
}

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

TEST(Area_Test, noArea)
{
        Rectangle rectangle = new Rectangle();
        EXPECT_EQ(rectangle->area(), 0);
}

TEST(Area_Test, singleZero)
{
        Rectangle rectangle = new Rectangle(4,0);
        EXPECT_EQ(rectangle->area(), 0);
}

TEST(Area_Test, simpleArea)
{
        Rectangle rectangle = new Rectangle(4,5);
        EXPECT_EQ(rectangle->area(), 20);
}

TEST(Area_Test, massiveArea)
{
        Rectangle rectangle = new Rectangle(5566432, 10);
        EXPECT_EQ(rectangle->area(), 55664320);
}

TEST(Area_Test, oneNegative)
{
        Rectangle rectangle = new Rectangle(-4,5);
        EXPECT_EQ(rectangle->area(), -20);
}

TEST(Area_Test, doubleNegative)
{
        Rectangle rectangle = new Rectangle(-4,-5);
        EXPECT_EQ(rectangle->area(), 20);
}



#endif //__RECTANGLE_TESTS__
