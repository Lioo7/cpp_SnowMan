#include "snowman.hpp"
#include <iostream>
#include <string>

using namespace std;
namespace ariel
{
    // Utility functions 
    string hat(char num)
    {
        string str;
        switch (num)
        {
        case '1':
            str = "_===_";
            break;
        case '2':
            str = "___\n.....";
            break;
        case '3':
            str = "   _\n  /_\\";
            break;
        case '4':
            str = "___\n(_*_)";
            break;
        default:
            throw std::out_of_range{"The input must be an integer between '1'-'4'"};
        }
        return str;
    }

    string nose(char num)
    {
        string str;
        switch (num)
        {
        case '1':
            str = ",";
            break;
        case '2':
            str = ".";
            break;
        case '3':
            str = "_";
            break;
        case '4':
            str = "";
            break;
        default:
            throw std::out_of_range{"The input must be an integer between 1-4"};
        }
        return str;
    }

    string left_eye(char num)
    {
        string str;
        switch (num)
        {
        case '1':
            str = ".";
            break;
        case '2':
            str = "o";
            break;
        case '3':
            str = "O";
            break;
        case '4':
            str = "-";
            break;
        default:
            throw std::out_of_range{"The input must be an integer between '1'-'4'"};
        }
        return str;
    }

    string right_eye(char num)
    {
        string str;
        switch (num)
        {
        case '1':
            str = ".";
            break;
        case '2':
            str = "o";
            break;
        case '3':
            str = "O";
            break;
        case '4':
            str = "-";
            break;
        default:
            throw std::out_of_range{"The input must be an integer between '1'-'4'"};
        }
        return str;
    }

    string left_arm(char num)
    {
        string str;
        switch (num)
        {
        case '1':
            str = "<";
            break;
        case '2':
            str = "\\";
            break;
        case '3':
            str = "/";
            break;
        case '4':
            str = "";
            break;
        default:
            throw std::out_of_range{"The input must be an integer between '1'-'4'"};
        }
        return str;
    }

    string right_arm(char num)
    {
        string str;
        switch (num)
        {
        case '1':
            str = ">";
            break;
        case '2':
            str = "/";
            break;
        case '3':
            str = "\\";
            break;
        case '4':
            str = "";
            break;
        default:
            throw std::out_of_range{"The input must be an integer between '1'-'4'"};
        }
        return str;
    }

    string torso(char num)
    {
        string str;
        switch (num)
        {
        case '1':
            str = ":";
            break;
        case '2':
            str = "] [";
            break;
        case '3':
            str = "> <";
            break;
        case '4':
            str = "";
            break;
        default:
            throw std::out_of_range{"The input must be an integer between '1'-'4'"};
        }
        return str;
    }

    string base(char num)
    {
        string str;
        switch (num)
        {
        case '1':
            str = ":";
            break;
        case '2':
            str = "\" \"";
            break;
        case '3':
            str = "___";
            break;
        case '4':
            str = "";
            break;
        default:
            throw std::out_of_range{"The input must be an integer between '1'-'4'"};
        }
        return str;
    }

// Main function
string snowman(int x)
    {
        string str = to_string(x);
        if (str.length() != 8)
        {
            throw std::out_of_range{"The length of the input must be eight"};
        }

        bool left_check = false;
        bool right_check = false;
        bool third_hat = false;
        bool first_hat = false;
        if (str[4] == '2')
            left_check = true;
        if (str[5] == '2')
            right_check = true;
        if (str[0] == '1')
            first_hat = true;
        if (str[0] == '3')
            third_hat = true;

        string snow = "";
        // hat
        snow += hat(str[0]);
        snow += "\n";
        // hands + eyes + nose
        if (left_check)
        {
            snow += left_arm(str[4]);
        }
        snow += "(";
        snow += left_eye(str[2]);
        snow += nose(str[1]);
        snow += right_eye(str[3]);
        snow += ")";
        if (right_check)
        {
            snow += right_arm(str[5]);
        }
        snow += "\n";
        // hands + body
        if (!left_check)
        {
            snow += left_arm(str[4]);
        }
        else
        {
            snow += " ";
        }
        snow += "(";
         if (first_hat && str[6] != '2' && str[6] != '3')
        {
            snow += " ";
        }
        snow += torso(str[6]);
         if (first_hat && str[6] != '2' && str[6] != '3')
        {
            snow += " ";
        }
        snow += ")";
        if (!right_check)
        {
            snow += right_arm(str[5]);
        }
        snow += "\n";
        // base
        if (third_hat)
        {
            snow += " ";
        }
        snow += "(";
        snow += base(str[7]);
        if (third_hat)
        {
            snow += " ";
        }
        snow += ")";

        return snow;
    }

} // namespace ariel
