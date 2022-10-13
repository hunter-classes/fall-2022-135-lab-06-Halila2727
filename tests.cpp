#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "doctest.h"
#include "caesar.h"
#include "vigenere.h"
#include "decrypt.h"

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

TEST_CASE("Decypt Caesar")
{
	CHECK(decryptCaesar("L'p d QBJ dqg QBB idq!", 3) == "I'm a NYG and NYY fan!");
    CHECK(decryptCaesar("E'i w JUC wjz JUU bwj!", 126) == "I'm a NYG and NYY fan!");
    CHECK(decryptCaesar("H'l z MXF zmc MXX ezm!", -1) == "I'm a NYG and NYY fan!");
    CHECK(decryptCaesar("I'm a NYG and NYY fan!", 0) == "I'm a NYG and NYY fan!");
}

TEST_CASE("Decypt Vigenere")
{
	CHECK(decryptVigenere("Eaxhnec gcn'd fteko doxiu!", "cake") == "Candles can't break bones!");
    CHECK(decryptVigenere("Candles can't break bones!", "") == "Candles can't break bones!");
    CHECK(decryptVigenere("Lbnzpfx rbd'c crael gdoub!", "jbawebfpbq") == "Candles can't break bones!");
    CHECK(decryptVigenere("Vrrdxif fte'x bdinn ufree!", "tre mENd") == "Candles can't break bones!");
}