// Calculator.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

int main()
{
    std::cout << "Welcome to your calculator. Which operation do you want to do? \n 1. For Adding \n 2. Substracting\n 3.Dividing \n 4.Multiplication \n 5. Square \n 6.Power";

    char operation;

    std::cin >> operation;

    int m_firstnumber;
    int m_secondnumber;

    std::cout << " Input your first number";
    std::cin >> m_firstnumber;
    std::cout << " Input your second number";
    std::cin >> m_secondnumber;

    switch (operation)
    {
    default:
    case '1':
        std::cout << m_firstnumber + m_secondnumber;
        std::cout << " Input your second number";
        std::cin >> m_secondnumber;
    case '2':
        std::cout << m_firstnumber - m_secondnumber;
        std::cout << " Input your second number";
        std::cin >> m_secondnumber;
    case '4':
        std::cout << m_firstnumber * m_secondnumber;
        std::cout << " Input your second number";
        std::cin >> m_secondnumber;
    case '3':
        std::cout << m_firstnumber / m_secondnumber;
        std::cout << " Input your second number";
        std::cin >> m_secondnumber;
    case '5':
        std::cout << m_firstnumber * m_firstnumber;
    case'6':
        int m_poweresult;
        m_poweresult = m_firstnumber;
        for(int i = m_secondnumber;  1 < i;  i--)
        {
            m_poweresult = m_poweresult * m_firstnumber;
        }
       
        std::cout << m_poweresult;
        break;
    }

}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
