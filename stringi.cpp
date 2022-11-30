#include <iostream>
#include <string>
using namespace std;

string itc_hello_str(string name) {
    string str = "Hello ";
    str += name;
    return str;
}

long long itc_len(string str) {
    return str.length();
}

void itc_print_copy_str(string str, int number) {
    string ans = "";
    for (int i = 1; i <= number; i++) {
        ans += str;
    }
    cout << ans;
}

void itc_first_end_three(string str) {
    if (str.length() <= 5) {
        cout << string(str.length(), str[0]);
        return;
    }
    cout << str.substr(0, 3) + str.substr(str.length() - 3, 3);
}

int itc_count_char_in_str(char ch, string str) {
    return 0;
}

string itc_even_place(string str) {
    string ans = "";
    for (int i = 1; i < str.length(); i+=2) {
        ans += str[i];
    }
    return ans;
}

double itc_percent_lower_uppercase(string str) {
    return 0;
}

string itc_reverse_str(string str) {
    string ans = "";
    for (int i = str.length() - 1; i >= 0; i--) {
        ans += str[i];
    }
    return ans;
}

string itc_slice_str(string str, int start, int end) {
    return 0;
}

bool itc_equal_reverse(string str) {
    bool flag = true;
    string s;
    int counter = 0;
    getline(cin, s);
    int size = s.size();

    for (int i = 0; i < size / 2; i++) {
        if (s[i] != s[size - i - 1]) flag = false;
    }

    return flag;
}

string itc_cmp_str(string str1, string str2, int num) {
    return 0;
}

int itc_find_str(string str1, string str2) {
    return 0;
}

string itc_three_str(string str1, string str2, string str3) {
    return 0;
}

int itc_max_char_on_end(string str) {
    return 0;

}
