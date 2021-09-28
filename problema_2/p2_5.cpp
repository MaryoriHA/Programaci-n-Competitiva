#include <iostream>
#include <algorithm>
using namespace std;

int main()
{  
    int part, presupuesto, hoteles, semanas;
    while (cin >> part >> presupuesto >> hoteles >> semanas)
    {
        int minimo = presupuesto + 1;
        for (int h = 0; h < hoteles; ++h)
        {
            int sem;
            cin >> sem;
            for (int w = 0; w < semanas; ++w)
            {
                int num;
                cin >> num;
                if (num >= part && sem * part <= minimo)
                    minimo = sem * part;
            }
        }
        if (minimo <= presupuesto)
            cout << minimo << endl;
        else
            cout << "stay home" << endl;
    }
    return 0;
}