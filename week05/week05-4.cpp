```cpp
```//week05-4.cpp
//LeetCode �ǲ߭p�e
class Solution {
public:
    string toLowerCase(string s) {
        for (int i=0; i<s.length(); i++){
            s[i] = tolower(s[i]);
        }
        return s;
    }
};
