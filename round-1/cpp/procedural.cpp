#include <string>
#include <iostream> // DEBUG
using namespace std;

int main()
{
    string s1_base = "abacate";
    string s2_base = "palmeiras";
    string result;
    string i_str;
    int x;

    for (int i = 0; i < 10000000; i++) {
        i_str = to_string(i);
        string s1 = s1_base + i_str;
        string s2 = s2_base + i_str;

        int s1_size = s1.size();
        int s2_size = s2.size();

        result = "";
        x = 0;

        if (s1_size < s2_size) {
            while (x < s1_size) {
                result += s1[x] + s2[x];
                x++;
            }
            result += s2.substr(x);
        }

        else {
            while (x < s2_size) {
                result += s1[x] + s2[x];
                x++;
            }
            result += s1.substr(x);
        }

        // cout << result << endl; // DEBUG
    }

    return 0;
}
