// /**
//  * Unit tests.
//  * AUTHORS: <Lioz Akirav>
//  * Date: 2021-02
//  */

// #include "doctest.h"
// #include "snowman.hpp"
// using namespace ariel;

// #include <string>
// #include <algorithm>
// using namespace std;

// /**
//  * Returns the input string without the whitespace characters: space, newline and tab.
//  * Requires std=c++2a.
//  */
// string nospaces(string input)
// {
//     std::erase(input, ' ');
//     std::erase(input, '\t');
//     std::erase(input, '\n');
//     std::erase(input, '\r');
//     return input;
// }

// TEST_CASE("Valid and equal snowman code")
// {
//     /* Assert True */
//     CHECK(nospaces(snowman(11114411)) == nospaces("_===_\n(.,.)\n( : )\n( : )"));
//     CHECK(nospaces(snowman(21114411)) == nospaces("___\n.....\n(.,.)\n( : )\n( : )"));
//     CHECK(nospaces(snowman(33232124)) == nospaces("_\n/_\\\n\\(o_O)\n(] [)>\n(   )"));
//     CHECK(nospaces(snowman(43232124)) == nospaces("___\n(_*_)\n\\(o_O)\n(] [)>\n(   )"));
//     CHECK(nospaces(snowman(12114411)) == nospaces("_===_\n(...)\n( : )\n( : )"));
//     CHECK(nospaces(snowman(22114411)) == nospaces("___\n.....\n(...)\n( : )\n( : )"));
//     CHECK(nospaces(snowman(44232124)) == nospaces("___\n(_*_)\n\\(oO)\n(] [)>\n(   )"));
//     CHECK(nospaces(snowman(12214411)) == nospaces("_===_\n(o..)\n( : )\n( : )"));
//     CHECK(nospaces(snowman(21314411)) == nospaces("___\n.....\n(O,.)\n( : )\n( : )"));
//     CHECK(nospaces(snowman(43432124)) == nospaces("___\n(_*_)\n\\(-_O)\n(] [)>\n(   )"));
//     CHECK(nospaces(snowman(11124411)) == nospaces("_===_\n(.,o)\n( : )\n( : )"));
//     CHECK(nospaces(snowman(21134411)) == nospaces("___\n.....\n(.,O)\n( : )\n( : )"));
//     CHECK(nospaces(snowman(43242124)) == nospaces("___\n(_*_)\n\\(o_-)\n(] [)>\n(   )"));
//     CHECK(nospaces(snowman(11114111)) == nospaces("_===_\n(.,.)\n( : )>\n( : )"));
//     CHECK(nospaces(snowman(21114211)) == nospaces("___\n.....\n(.,.)/\n( : )\n( : )"));
//     CHECK(nospaces(snowman(33232324)) == nospaces("_\n/_\\\n\\(o_O)\n(] [)\\\n(   )"));
//     CHECK(nospaces(snowman(43232424)) == nospaces("___\n(_*_)\n\\(o_O)\n(] [)\n(   )"));
//     CHECK(nospaces(snowman(11114421)) == nospaces("_===_\n(.,.)\n(] [)\n( : )"));
//     CHECK(nospaces(snowman(33232134)) == nospaces("_\n/_\\\n\\(o_O)\n(> <)>\n(   )"));
//     CHECK(nospaces(snowman(33232122)) == nospaces("_\n/_\\\n\\(o_O)\n(] [)>\n("
//                                                   ")"));
//     CHECK(nospaces(snowman(21114413)) == nospaces("___\n.....\n(.,.)\n( : )\n(___)"));
//     CHECK(nospaces(snowman(11112211)) == nospaces("_===_\n\\(.,.)/\n( : )\n( : )"));
//     CHECK(nospaces(snowman(11113311)) == nospaces("_===_\n(.,.)\n/( : )\\\n( : )"));
// }

// TEST_CASE("Valid but not equal snowman code")
// {
//     /* Assert False */
//     CHECK(nospaces(snowman(33232124)) != nospaces("_===_\n\\(o_O)\n(] [)>\n(   )"));
//     CHECK(nospaces(snowman(11144311)) != nospaces("_===_\n(.,.)\n/( : )\\\n( : )"));
//     CHECK(nospaces(snowman(12232324)) != nospaces("_\n/_\\\n\\(o_O)\n(] [)\\\n(   )"));
// }

// TEST_CASE("Invalid snowman code")
// {
//     // CHECK_THROWS(snowman());
//     CHECK_THROWS(snowman(1));
//     CHECK_THROWS(snowman(123412345));
//     CHECK_THROWS(snowman(-12232324));
//     CHECK_THROWS(snowman(9));
//     CHECK_THROWS(snowman(11111119));
//     // CHECK_THROWS(snowman(fgf));
//     // CHECK_THROWS(snowman(1234123g));
//     // CHECK_THROWS(snowman(1234134));
//     // CHECK_THROWS(snowman(!@#$%^&*));
// }


#include "doctest.h"
#include "snowman.hpp"
using namespace ariel;

#include <string>
#include <algorithm>
using namespace std;

/**
 * Returns the input string without the whitespace characters: space, newline and tab.
 * Requires std=c++2a.
 */
string nospaces(string input) {
	std::erase(input, ' ');
	std::erase(input, '\t');
	std::erase(input, '\n');
	std::erase(input, '\r');
	return input;
}



TEST_CASE("Check each part without space") {
    //Each type of hat
    CHECK(nospaces(snowman(11111111)) == nospaces("_===_(.,.)<(:)>(:)"));
    CHECK(nospaces(snowman(21111111)) == nospaces("___\n.....(.,.)<(:)>(:)"));
    CHECK(nospaces(snowman(31111111)) == nospaces("_\n /_\\(.,.)<(:)>(:)"));
    CHECK(nospaces(snowman(41111111)) == nospaces("___\n(_*_)(.,.)<(:)>(:)"));

    //Each type of nose
    CHECK(nospaces(snowman(21222222)) == nospaces("___\n.....\\(o,o)/(] [)(\" \")"));
    CHECK(nospaces(snowman(22222222)) == nospaces("___\n.....\\(o.o)/(] [)(\" \")"));
    CHECK(nospaces(snowman(23222222)) == nospaces("___\n.....\\(o_o)/(] [)(\" \")"));
    CHECK(nospaces(snowman(24222222)) == nospaces("___\n.....\\(o o)/(] [)(\" \")"));

    //Each type of left eye
    CHECK(nospaces(snowman(33133333)) == nospaces("_\n /_\\(._O)/(><)\\(___)"));
    CHECK(nospaces(snowman(33233333)) == nospaces("_\n /_\\(o_O)/(><)\\(___)"));
    CHECK(nospaces(snowman(33333333)) == nospaces("_\n /_\\(O_O)/(><)\\(___)"));
    CHECK(nospaces(snowman(33433333)) == nospaces("_\n /_\\(-_O)/(><)\\(___)"));

    //Each type of right eye
    CHECK(nospaces(snowman(44414444)) == nospaces("___\n(_*_)(- .)(   )(   )"));
    CHECK(nospaces(snowman(44424444)) == nospaces("___\n(_*_)(- o)(   )(   )"));
    CHECK(nospaces(snowman(44434444)) == nospaces("___\n(_*_)(- O)(   )(   )"));
    CHECK(nospaces(snowman(44444444)) == nospaces("___\n(_*_)(- -)(   )(   )"));
    
    //Each type of left arm
    CHECK(nospaces(snowman(12341234)) == nospaces("_===_(O.-)/<(> <)(   )"));
    CHECK(nospaces(snowman(12342234)) == nospaces("_===_\\(O.-)/(> <)(   )"));
    CHECK(nospaces(snowman(12343234)) == nospaces("_===_(O.-)//(> <)(   )"));
    CHECK(nospaces(snowman(12344234)) == nospaces("_===_(O.-)/(> <)(   )"));

    // //Each type of right arm
    CHECK(nospaces(snowman(43214121)) == nospaces(" ___(_*_)(o_.)(] [)>( : )"));
    CHECK(nospaces(snowman(43214221)) == nospaces(" ___(_*_)(o_.)/(] [)( : )"));
    CHECK(nospaces(snowman(43214321)) == nospaces(" ___(_*_)(o_.)(] [)\\( : )"));
    CHECK(nospaces(snowman(43214421)) == nospaces(" ___(_*_)(o_.)(] [)( : )"));

    //Each type of torso
    CHECK(nospaces(snowman(11111111)) == nospaces(" _===_\n (.,.)\n<( : )>\n ( : )"));
    CHECK(nospaces(snowman(11111121)) == nospaces(" _===_\n (.,.)\n<(] [)>\n ( : )"));
    CHECK(nospaces(snowman(11111131)) == nospaces(" _===_\n (.,.)\n<(> <)>\n ( : )"));
    CHECK(nospaces(snowman(11111141)) == nospaces(" _===_\n (.,.)\n<(   )>\n ( : )"));
    
    //Each type of base
    CHECK(nospaces(snowman(22222221)) == nospaces("  ___\n .....\n\\(o.o)/ (] [)\n ( : )"));
    CHECK(nospaces(snowman(22222222)) == nospaces("  ___\n .....\n\\(o.o)/ (] [)\n (\" \")"));
    CHECK(nospaces(snowman(22222223)) == nospaces("  ___\n .....\n\\(o.o)/ (] [)\n (___)"));
    CHECK(nospaces(snowman(22222224)) == nospaces("  ___\n .....\n\\(o.o)/ (] [)\n (   )"));
}

TEST_CASE("Good random snowman code with space") {
    CHECK(snowman(11114411) == string("_===_\n(.,.)\n( : )\n( : )"));
    CHECK(snowman(33232124) == string("   _\n  /_\\\n\\(o_O)\n (] [)>\n (   )"));
    CHECK(snowman(21112332) == string("  ___\n .....\n\\(.,.)\n (> <)\\\n (\" \")"));
    CHECK(snowman(11111111) == string(" _===_\n (.,.)\n<( : )>\n ( : )"));
    CHECK(snowman(22222222) == string("  ___\n .....\n\\(o.o)/\n (] [)\n (\" \")"));
    CHECK(snowman(33333333) == string("   _\n  /_\\\n (O_O)\n/(> <)\\\n (___)"));
    CHECK(snowman(44444444) == string(" ___\n(_*_)\n(- -)\n(   )\n(   )"));
    CHECK(snowman(12341234) == string(" _===_\n (O.-)/\n<(> <)\n (   )"));
    CHECK(snowman(43214321) == string(" ___\n(_*_)\n(o_.)\n(] [)\\\n( : )"));
    CHECK(snowman(12121212) == string(" _===_\n (..o)/\n<( : )\n (\" \")"));
    CHECK(snowman(34343434) == string("   _\n  /_\\\n (O -)\n/(> <)\n (   )"));
    CHECK(snowman(12344321) == string("_===_\n(O.-)\n(] [)\\\n( : )"));
    CHECK(snowman(11112222) == string(" _===_\n\\(.,.)/\n (] [)\n (\" \")"));
    CHECK(snowman(44443333) == string("  ___\n (_*_)\n (- -)\n/(> <)\\\n (___)"));
    CHECK(snowman(33334444) == string("  _\n /_\\\n(O_O)\n(   )\n(   )"));
    CHECK(snowman(22221111) == string("  ___\n .....\n (o.o)\n<( : )>\n ( : )"));
    
}

TEST_CASE("Bad snowman code") {

    //Out of range
    CHECK_THROWS(snowman(555));
    CHECK_THROWS(snowman(00000000));
    CHECK_THROWS(snowman(77777777));

    //Negative number
    CHECK_THROWS(snowman(-12121212));
    CHECK_THROWS(snowman(-3333));
    CHECK_THROWS(snowman(-88888888));
    
    //Inserts char instead number
    CHECK_THROWS(snowman('c'));
    CHECK_THROWS(snowman('1'));
}