#include <iostream>
#include <random>
#include <ctime>


using namespace std;

void Bubble(int* m_mas, int mas)
{
    bool k = false;

    for (int i = 0; i < mas; i++)
    {
        for (int j = 0; j < mas - 1; j++) 
        {
            if (m_mas[j] > m_mas[j + 1]) 
            {
                int temp = m_mas[j];
                m_mas[j] = m_mas[j + 1];
                m_mas[j + 1] = temp;
             
                k = true;
            }
        }
        if (k == false)
        {
            break;
        }
    }
}

int main() {

  int mas = 10;
  int* m_mas = new int [mas];

  srand(time(NULL));

  for (int i = 0; i < mas; i++)
        {
            m_mas[i] = rand() % 100 + 1;
        }

        cout << endl;

        cout << "Array:" << endl;

        for (int i = 0; i < mas; i++)
        {
            cout << "|" << m_mas[i] << "|";
        }

  
    Bubble(m_mas, mas);
    cout << "\nSorted array: ";
    cout << "\n";
    for (int i = 0; i < mas; i++)
        {
            cout <<"|" << m_mas[i] << "|";
        }
        
        cout << endl;
    return 0;
}