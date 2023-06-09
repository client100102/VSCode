#include <iostream>
#include <string>
#include <io.h>
#include <fcntl.h>
using namespace std;

int main()
{
    _setmode(_fileno(stdin), _O_U16TEXT);
    _setmode(_fileno(stdout), _O_U16TEXT);
    wstring input;
    wcout << L"Nhập vào chuỗi kí tự đi bé yêu: ";
    // wcin >>
    getline(wcin, input);
    int count = 0;
    for(int i = 0; i < input.length(); i++)
    {
        if(isalnum(input[i]))
        {
            count ++;
        }
    }
    wcout << L"Tổng kí tự bé yêu đã nhập vào là: " << count << endl;
    return 0;
}