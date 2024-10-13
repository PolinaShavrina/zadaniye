#include <string>
#include <iostream>
using namespace std;
int main()
{
    float sred;
    float sum = 0.0;
    float kolvo = 0.0;
    int kol_vo_p = 0;
    int kol_vo_0 = 0;
    int kol_ch = 0; 
    int kol_nech = 0;
    int min = 0;
    int max = 0;
    int are[4][4] = { {5, -2, -3, 4}, {1, 6, -7, -5}, {-5, 3, 4, -3}, {-6, 3, 2, -9} };
    for (size_t i = 0; i < 4; i++)
    {
        for (size_t j = 0; j < 4; j++)
        { 
            kolvo++;
            sum = sum + are[i][j];
            sred = sum / kolvo;
            if (are[i][j] % 2 == 0)
            {
             
                kol_ch++;
            }
            else if (are[i][j] % 2 != 0)
            {
                kol_nech++;
            }
            if (are[i][j] < min)
            {
                min = are[i][j];
            }
            else if (are[i][j] > max)
            {
                max = are[i][j];
            }
            if (are[i][j] > 0)
            {

                kol_vo_p++;
            }
            else if (are[i][j] < 0)
            {
                kol_vo_0++;
            }
        }
    }
    cout << endl;
    //cout << "kol_vo_p=" << kol_vo_p;
    cout << " kol_ch = " << kol_ch<<endl;
    cout << " kol_nech = " << kol_nech<<endl;
    cout << "maxmalnoye = "<< max << endl;
    cout << "manimalnoye = " << min << endl;
    cout << "kolvo polojitelnuh = " << kol_vo_p << endl;
    cout << "kolvo otrisatelnuh = " << kol_vo_0 << endl;
    cout << "kolvo polojitelnuh = " << kol_vo_p << endl;
    cout<< "summa = "<< sum << endl;
    cout << " kolvo = " << kolvo << endl;
    cout << "srednee = " << sred << endl;
}