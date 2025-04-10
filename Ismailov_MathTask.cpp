#include <iostream>
#include "Ismailov_MathTask.h"

using namespace std;

int main()
{
    int NumberA = 0, NumberB = 0;
    EnterDigit(NumberA, "Input height A");
    EnterDigit(NumberB, "Input height B");
    int RecangleArea = Calcost(NumberA,NumberB);
    cout<<"Area of Ost is "<< Calcost <<endl;
    int RecangleArea = Calccel(NumberA,NumberB);
    cout<<"Area of Cel is "<< Calccel <<endl;
}
