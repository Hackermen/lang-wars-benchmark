#include <string>
#include <iostream>
using namespace std;

int main()
{
    for (int i = 0; i < 10000000; i++) {
        string s1 = "abacate" + to_string(i);
        string s2 = "palmeiras" + to_string(i);
        string result;
        int x = 0;

        if (s1.size() < s2.size()) {
            while (x < s1.size()) {
                result += s1[x];
                result += s2[x];
                x++;
            }
            result += s2.substr(x);
        }

        else {
            while (x < s2.size()) {
                result += s1[x];
                result += s2[x];
                x++;
            }
            result += s1.substr(x);
        }
    }

    return 0;
}
