#include <iostream>
#include "../header/rectangle.hpp"
#include "../tests/test/cpp"
#include "gtest/gtest.h"
using namespace std;

int main(int argc, char **argv) 
{
	::testing::InitGoogleTest(&argc, argv);
	return RUN_ALL_TESTS();
}
