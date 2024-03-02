#include <string>
using namespace std;

string foo(const string& stroka) {
    string stroka2;
    for (char ch : stroka) {
        switch(ch) {
            case 'a':
                stroka2 += 'b';
                break;
            case 'b':
                stroka2 += 'a';
                break;
            case 'c':
                stroka2 += 'c';
                break;
            default:
                return "invalid input data";
        }
    }
    return stroka2;
}
