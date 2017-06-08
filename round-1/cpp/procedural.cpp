#include <string>
#include <iostream>
using namespace std;

int main()
{
    string s1_base = "ABCDEFH";
    string s2_base = "123456789";
    string result;
    string i_str;
    int x;
    int s1_size;
    int s2_size;

    for (int i = 0; i < 10000000; i++) {
        i_str = to_string(i);
        string s1 = s1_base + i_str;
        string s2 = s2_base + i_str;
        s1_size = s1.size();
        s2_size = s2.size();
        result = "";
        x = 0;

        if (s1_size < s2_size) {
            while (x < s1_size) {
                result += s1[x];
                result += s2[x];
                x++;
            }
            result += s2.substr(x);
        }

        else {
            while (x < s2_size) {
                result += s1[x];
                result += s2[x];
                x++;
            }
            result += s1.substr(x);
        }

        if (i == 0) cout << result << endl;
    }

    return 0;
}
