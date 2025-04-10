#include "D:\study\IST\Ismailov_IST\Ismailov_LR5\Ismailov_LR5_part2\CUTE\cute\cute.h"
#include "D:\study\IST\Ismailov_IST\Ismailov_LR5\Ismailov_LR5_part2\CUTE\cute\cute_listener.h"
#include"D:\study\IST\Ismailov_IST\Ismailov_LR5\Ismailov_LR5_part2\CUTE\cute\cute_runner.h"

#include "Ismailov_MathTask.h"
using namespace cute;
void testUserInput_Empty(){
    string str = "";
    bool expected = false;
    bool actual = UserInput(str);
    ASSERT_EQUAL(expected,actual);

}
void testUserInput_Letter(){
    string str = "a";
    bool expected = false;
    bool actual = UserInput(str);
    ASSERT_EQUAL(expected,actual);

}
void testUserInput_DigitLetterValue(){
    string str = "5a";
    bool expected = false;
    bool actual = UserInput(str);
    ASSERT_EQUAL(expected,actual);

}
void testUserInput_Negative(){
    string str = "-5";
    bool expected = false;
    bool actual = UserInput(str);
    ASSERT_EQUAL(expected,actual);

}
