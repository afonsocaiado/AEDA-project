#ifndef TRABALHOAEDAPARTE1_UTIL_H
#define TRABALHOAEDAPARTE1_UTIL_H

#include <algorithm>
#include <cctype>
#include <string>

using namespace std;

string to_lower(string s)
{
    string newS;
    for (unsigned int i = 0; i < s.size(); i++)
        newS[i] = tolower(s[i]);

    return newS;
}

#endif //TRABALHOAEDAPARTE1_UTIL_H
