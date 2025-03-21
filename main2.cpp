#include <iostream>
#include <windows.h> // Sleep fonksiyonu için
using namespace std;

void clearScreen()
{
    // Windows'ta ekranı temizlemek için
    system("cls");
}

int main()
{
    char donut1[] =
        "      ****      \n"
        "   *  -   - *   \n"
        "  *     ʖ    *  \n"
        "  *   ----   *  \n"
        "   *        *   \n"
        "      ****      \n";

    char donut2[] =
        "      ****      \n"
        "   *  O   O *   \n"
        "  *     ʖ    *  \n"
        "  *     ᗜ    *  \n"
        "   *        *   \n"
        "      ****      \n";

    // Animasyon döngüsü
    for (int i = 0; i < 20; i++)
    {
        clearScreen();

        if (i % 2 == 0)
            cout << donut1;
        else
            cout << donut2;

        Sleep(200); // 200 milisaniye bekleme
    }

    return 0;
}
