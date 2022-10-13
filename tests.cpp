#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "doctest.h"
#include "caesar.h"
#include "vigenere.h"

// add your tests here
TEST_CASE("Shift Character")
{
	CHECK(shiftChar('c', 26) == 'c');
    CHECK(shiftChar('c', 126) == 'y');
    CHECK(shiftChar('z', -1) == 'y');
    CHECK(shiftChar('z', 0) == 'z');
}

TEST_CASE("Encypt Caesar")
{
	CHECK(encryptCaesar("I'm a NYG and NYY fan!", 3) == "L'p d QBJ dqg QBB idq!");
    CHECK(encryptCaesar("I'm a NYG and NYY fan!", 126) == "E'i w JUC wjz JUU bwj!");
    CHECK(encryptCaesar("I'm a NYG and NYY fan!", -1) == "H'l z MXF zmc MXX ezm!");
    CHECK(encryptCaesar("I'm a NYG and NYY fan!", 0) == "I'm a NYG and NYY fan!");
}

TEST_CASE("Encypt Vigenere")
{
	CHECK(encryptVigenere("Candles can't break bones!", "cake") == "Eaxhnec gcn'd fteko doxiu!");
    CHECK(encryptVigenere("Candles can't break bones!", "") == "Candles can't break bones!");
    CHECK(encryptVigenere("Candles can't break bones!", "jbawebfpbq") == "Lbnzpfx rbd'c crael gdoub!");
    CHECK(encryptVigenere("Candles can't break bones!", "tre mENd") == "Vrrdxif fte'x bdinn ufree!");
}