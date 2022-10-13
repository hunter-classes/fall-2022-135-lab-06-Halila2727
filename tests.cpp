#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "doctest.h"
#include "caesar.h"

// add your tests here
TEST_CASE("Shift Character")
{
	CHECK(shiftChar('c', 26) == 'c');
    CHECK(shiftChar('c', 126) == 'y');
    CHECK(shiftChar('z', 1) == 'a');
}

TEST_CASE("Encypt Caesar")
{
	CHECK(encryptCaesar("I'm a NYG and NYY fan!", 3) == "L'p d QBJ dqg QBB idq!");
    CHECK(encryptCaesar("I'm a NYG and NYY fan!", 126) == "E'i w JUC wjz JUU bwj!");
}