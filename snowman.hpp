/**
 * @file snowman.hpp
 * @author Shaked Gofin
 * @brief 
 * @version 0.1
 * @date 07-03-2021
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#include <string>
using namespace std;

#define MAX_DIGITS 8
namespace ariel{
string snowman(int input);
int TestChar (string input_s);
string HeadBuild (char option);
string FirstLeftArmBuild (char option);
string EyeBuild (char option);
string NoseBuild (char option);
string FirstRightArmBuild (char option);
string SecondLeftArmBuild (char option);
string TorsoBuild (char option);
string SecondRightArmBuild (char option);
string BaseBuild (char option);
};
