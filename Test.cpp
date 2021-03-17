/**
 * @file Test.cpp
 * @author Shaked Gofin 
 * @brief 
 * @version 0.1
 * @date 07-03-2021
 * 
 * @copyright Copyright (c) 2021
 * 
 */

#include "doctest.h"
#include "snowman.hpp"
#include <stdexcept>
using namespace ariel;

#include <cassert>
#include <string>
#include <algorithm>
#include <iostream> 
#include <string.h> 
using namespace std;

 string nospaces(string input) {
 	std::erase(input, ' ');
 	std::erase(input, '\t');
 	std::erase(input, '\n');
 	std::erase(input, '\r');
 	return input;
 }

TEST_CASE("Good snowman code") {
    CHECK(nospaces(snowman(11114411)) == nospaces("_===_\n(.,.)\n( : )\n( : )"));

}


TEST_CASE("Checks Bad Input for Amount of Body Parts") {
    CHECK(snowman(555)=="0");
    CHECK(snowman(1)=="0");
    CHECK(snowman(11)=="0");
    CHECK(snowman(111)=="0");
    CHECK(snowman(1111)=="0");
    CHECK(snowman(11111)=="0");
    CHECK(snowman(111111)=="0");
    CHECK(snowman(111111111)=="0");
    CHECK(snowman(5)=="0");

 }

TEST_CASE("Checks Bad Input for Approved Body Parts") {
    CHECK(snowman(55555555)=="0");
    CHECK(snowman(15555555)=="0");
    CHECK(snowman(61666666)=="0");
    CHECK(snowman(55155555)=="0");
    CHECK(snowman(55515555)=="0");
    CHECK(snowman(55551555)=="0");
    CHECK(snowman(55555155)=="0");
    CHECK(snowman(55555515)=="0");
    CHECK(snowman(55555551)=="0");
    
    


}

TEST_CASE("Checks Hat") {
    string H1 = "_===_";
    string H2 = "___.....";
    string H3 = "_/_\\";
    string H4 = "___(_*_)"; 
    
    CHECK(nospaces(snowman(11111111)).substr(0, 5 )== H1);
    CHECK(nospaces(snowman(21111111)).substr(0, 8 )== H2);
    CHECK(nospaces(snowman(31111111)).substr(0, 4 )== H3);
    CHECK(nospaces(snowman(41111111)).substr(0, 8 )== H4);

}

