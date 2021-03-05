#include <snowman.hpp>
#include <iostream>
#include <string>

using namespace std;

int run(string str)
{
    if (str.length() != 8)
    {
        throw std::out_of_range{"The length of the input must be eight"};
    }

    string snowman = "";
    // hat
    snowman += hat(str[0]);
    snowman += "\n";
    // hands + eyes + nose
    snowman += left_arm(str[4]);
    snowman += "(";
    snowman += left_eye(str[2]);
    snowman += nose(str[1]);
    snowman += right_eye(str[3]);
    snowman += ")";
    snowman += right_arm(str[5]);
    snowman += "\n";
    // hands + body
    snowman += left_arm(str[4]);
    snowman += "(";
    snowman += torso(str[6]);
    snowman += ")";
    snowman += right_arm(str[5]);
    snowman += "\n";
    // base
    snowman += "(";
    snowman += base(str[7]);
    snowman += ")";

    return 0;
}

string hat(char c)
{
    switch (c)
    {
    case 1:
        return "_===_";
        break;
    case 2:
        return "___\n.....";
        break;
    case 3:
        return "_\n/_\";
        break;
    case 4:
        return "___\n(_*_)";
        break;
    default:
        throw std::out_of_range{"The input must to be an integer between 1-4"};
    }
}

string nose(char c)
{
    switch (c)
    {
    case 1:
        return ",";
        break;
    case 2:
        return ".";
        break;
    case 3:
        return "_";
        break;
    case 4:
        return "";
        break;
    default:
        throw std::out_of_range{"The input must to be an integer between 1-4"};
    }
}

string left_eye(char c)
{
    switch (c)
    {
    case 1:
        return ".";
        break;
    case 2:
        return "o";
        break;
    case 3:
        return "O";
        break;
    case 4:
        return "-";
        break;
    default:
        throw std::out_of_range{"The input must to be an integer between 1-4"};
    }
}

string right_eye(char c)
{
    switch (c)
    {
    case 1:
        return ".";
        break;
    case 2:
        return "o";
        break;
    case 3:
        return "O";
        break;
    case 4:
        return "-";
        break;
    default:
        throw std::out_of_range{"The input must to be an integer between 1-4"};
    }
}

string left_arm(char c)
{
    switch (c)
    {
    case 1:
        return "<";
        break;
    case 2:
        return "\";
            break;
    case 3:
        return "/";
        break;
    case 4:
        return "";
        break;
    default:
        throw std::out_of_range{"The input must to be an integer between 1-4"};
    }
}

string right_arm(char c)
{
    switch (c)
    {
    case 1:
        return ">";
        break;
    case 2:
        return "/";
        break;
    case 3:
        return "\";
            break;
    case 4:
        return "";
        break;
    default:
        throw std::out_of_range{"The input must to be an integer between 1-4"};
    }
}

string torso(char c)
{
    switch (c)
    {
    case 1:
        return ":";
        break;
    case 2:
        return "] [";
        break;
    case 3:
        return "> <";
        break;
    case 4:
        return "";
        break;
    default:
        throw std::out_of_range{"The input must to be an integer between 1-4"};
    }
}

string base(char c)
{
    switch (c)
    {
    case 1:
        return ":";
        break;
    case 2:
        return ""
               "";
        break;
    case 3:
        return "___";
        break;
    case 4:
        return "";
        break;
    default:
        throw std::out_of_range{"The input must to be an integer between 1-4"};
    }
}
