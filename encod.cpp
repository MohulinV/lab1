#include <iostream>
using namespace std;
int main()
{
    setlocale(0, "RUS");
    
    char buff[26]={'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};
    int j;
    
    cout << "текст для шифрування" << endl;
    cin >> buff;
    
    cout << "введіть ключ(число)" << endl;
    cin >> j;
    
    for(int i = 0; i < buff[i]; i++)
        for(int n = 0; n < j; n++)
            buff[i] +=n;
    cout << "Зфшифрований текст: "  << buff << endl;
    
    for(int i = 0; i < buff[i]; i++)
        for(int n = j; n > 0; n--)
            buff[i] -=n;
    cout << "Розшифрований текст: " << buff << endl;
    
    system("pause");
    return 0;
    
    
    
    
    /* Зміна на сайті */
