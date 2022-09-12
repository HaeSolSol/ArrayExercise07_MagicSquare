#include <iostream>

int main()
{
    const int odd{ 5 };
    int i{ 0 }, j{ odd / 2 };
    int magicSquare[odd][odd]{};

    for (int num = 1; num <= odd * odd; num++)
    {
        if (i < 0 || i >= odd)
        {
            i = (i + odd) % odd;
        }
        if (j < 0 || j >= odd)
        {
            j = (j + odd) % odd;
        }

        if (magicSquare[i][j] != 0)
        {
            i += 2;
            j--;
        }

        if (i < 0 || i >= odd)
        {
            i = (i + odd) % odd;
        }
        if (j < 0 || j >= odd)
        {
            j = (j + odd) % odd;
        }

        magicSquare[i][j] = num;

        i--;
        j++;
    }

    for (int m = 0; m < odd; ++m)
    {
        for (int n = 0; n < odd; ++n)
        {
            if (magicSquare[m][n] < 10)
            {
                std::cout << "0";
            }
            std::cout << magicSquare[m][n] << " ";
        }
        std::cout << "\n";
    }
}