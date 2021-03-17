/**
 * @file snowman.cpp
 * @author Shaked Gofin
 * @brief 
 * @version 0.1
 * @date 07-03-2021
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#include "snowman.hpp"

#include <iostream>
#include <stdexcept>
#include <charconv>
#include <bits/stdc++.h>
#include <string>
using namespace std;

//#define MAX_DIGITS 8
const char one = '1';
const char two = '2';
const char three = '3';
const char four = '4';
const int EIGHT = 8;

namespace ariel{

string snowman(int input) {
    auto snow = to_string(input);
    
    
try
{

  if(snow.size()==EIGHT){

     //checks each number to see if its between 1-4, else throws exeption and return 0
        int ind = TestChar(snow);
        if (ind == 0) return "0";
        
        // assign the right letter to the coresponsing number that was given as input 
        
        // char H,N,L,R,X,Y,T,B;
        
       
        
    
        char H = snow.at(0);
        char N = snow.at(1);
        char L = snow.at(2);
        char R = snow.at(3);
        char X = snow.at(4);
        char Y = snow.at(5);
        char T = snow.at(6);
        char B = snow.at(7);      
   
        string output("");        
        output.append(HeadBuild(H));
        output.append(FirstLeftArmBuild(X));
        output.append(EyeBuild(L));
        output.append(NoseBuild(N));
        output.append(EyeBuild(R));
        output.append(FirstRightArmBuild(Y));
        output.append(SecondLeftArmBuild(X));
        output.append(TorsoBuild(T));
        output.append(SecondRightArmBuild(Y));
        output.append(BaseBuild(B));


return output;
    }

    // throws the bad snowman string, with wrong size
    else
    {
      throw std::invalid_argument( "received negative value" );
      throw (snow);
    }
    
}
catch(string badsnow)
{
  //cout << "My Error with snowman from snowman.cpp: \n" << badsnow;
  return "0";
}


return "0";
}

int TestChar (string input_s){

   for (int i = 0; i < 8; i++)
        {   
          if ((input_s.at(i)>four) || (input_s.at(i) <one))
          {
            throw std::invalid_argument( "received negative value" );
            throw(input_s);
            return 0;
          }
        }
return 1;
}

// /n should work as expected and removed during testing
// also added a space char before and after the hats and on each side of /n so it will not align with hands
string HeadBuild ( char option){
  string curr;
  switch(option){
    case one: 
     return "       \n _===_ \n";
     break;

    case two:
     return "  ___  \n ..... \n";
     break;

    case three:
     return "   _   \n  /_\\  \n";
     break;

    case four:
     return "  ___  \n (_*_) \n";
     break;
    
    default : return curr;

  }
return curr;
}



string FirstLeftArmBuild ( char option){
  string curr;
  switch(option){
    case one:
      return " (";
      break;

    case two:
    return "\(";
    break;

    case three:
    return " (";
    break;

    case four:
    return " (";
    break;
    default : return curr;
  }
return curr;
}


string EyeBuild (char option){
  string curr;
  switch(option){
    case one:
    return ".";
    break;

    case two:
    return "o";
    break;

    case three:
    return "O";
    break;

    case four:
    return "-";
    break;

    default : return curr;
  }
return curr;
}

string NoseBuild (char option){
  string curr;
switch(option){
    case one:
    return ",";
    break;

    case two:
    return ".";
    break;

    case three:
    return "_";
    break;

    case four:
    return " ";
    break;

    default : return curr;
  }
return curr;
}




string FirstRightArmBuild (char option){
   string curr;
  switch(option){
    case one:
     return") \n";
     break;

    case two:
     return")/\n";
     break;

    case three:
     return ") \n";
     break;

    case four:
      return ") \n";
      break;

  }
 return curr;
}


string SecondLeftArmBuild (char option){
  string curr;
  switch(option){
    case one:
    return "<(";
    break;

    case two:
    return " (";
    break;

    case three:
    return "/(";
    break;

    case four:
    return " (";
    break;

  }
return curr;
}


string TorsoBuild (char option){
  string curr;
  switch(option){
    case one:
    return " : ";
    break;

    case two:
    return "] [";
    break;

    case three:
    return "> <";
    break;

    case four:
    return "   ";
    break;

  }
return curr;
}


string SecondRightArmBuild (char option){
  string curr;
  switch(option){
    case one:
    return ")>\n";
    break;

    case two:
    return ") \n";
    break;

    case three:
    return ")\\n";
    break;

    case four:
    return ") \n";
    break;

  }
return curr;
}


string BaseBuild ( char option){
  string curr;
  switch(option){
    case one:
    return " ( : ) ";
    break;

    case two:
    return " (" ") ";
    break;

    case three:
    return " (___) ";
    break;

    case four:
    return " (   ) ";
    break;

  }
return curr;
}



// int main()
// {
//   cout << "please Enter Snowman Numbers";
//   cin >> ;
  
// }

}



/**
  char snow_char[MAX_DIGITS + sizeof(char)];

    std::to_chars(snow_char, snow_char + MAX_DIGITS, input);
   std::printf("snow_char: %s \n", snow_char);

 * 
 */
/**
  int EIGHT = 8;
    char snow[8];

    cout << "please Enter Snowman Numbers";
    cin.getline(snow, 8);

    cout << snow << endl;

 */
