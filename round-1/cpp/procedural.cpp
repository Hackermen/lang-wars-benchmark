#include <string>
#include <iostream>

// faster integer to string conversion
void fast_cast(int source, char dest[]);

int main()
{
    const std::string s1_base = "ABCDEFH";
    const std::string s2_base = "123456789";
    std::string result;
    char i_str[9];

    for (int i = 0; i < 10'000'000; i++) {
        fast_cast(i, i_str);

        const std::string s1 = s1_base + i_str;
        const std::string s2 = s2_base + i_str;
        const int s1_size = s1.size();
        const int s2_size = s2.size();

        result = "";
        int x = 0;

        if (s1_size < s2_size) {
            while (x < s1_size) {
                result.push_back(s1[x]);
                result.push_back(s2[x]);
                x++;
            }
            result += s2.substr(x);
        }

        else {
            while (x < s2_size) {
                result.push_back(s1[x]);
                result.push_back(s2[x]);
                x++;
            }
            result += s1.substr(x);
        }

        if (i == 0) std::cout << result << std::endl;
    }

    return 0;
}

void fast_cast(int source, char dest[])
{
    char* p = dest;
    char const digit[] = "0123456789";
    int shifter = source;
    do {
        ++p;
        shifter = shifter / 10;
    } while (shifter);
    *p = '\0';
    do {
        *--p = digit[source % 10];
        source = source / 10;
    } while(source);
}
