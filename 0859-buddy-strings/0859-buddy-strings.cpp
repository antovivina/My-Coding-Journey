
class Solution {
public:
    bool buddyStrings(string s, string goal) {
        if (s.size() != goal.size()) return false;

        if (s == goal) {
            for (int i = 0; i < s.size(); i++) {
                if (s.find(s[i], i + 1) != string::npos)
                    return true;
            }
            return false;
        }

        int first = -1, second = -1, count = 0;

        for (int i = 0; i < s.size(); i++) {
            if (s[i] != goal[i]) {
                count++;

                if (count == 1) first = i;
                else if (count == 2) second = i;
                else return false;
            }
        }

        return count == 2 &&
               s[first] == goal[second] &&
               s[second] == goal[first];
    }
};
