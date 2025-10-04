class Solution {
public:
    void solve(int ind, string& s, int target, string curr, vector<string>& ans,
               long prev, long res) {
        if (ind == s.size()) {
            if (res == target) {
                ans.push_back(curr);
            }
            return;
        }

        string st = "";
        long curres = 0;

        for (int i = ind; i < s.size(); i++) {
            if (i > ind && s[ind] == '0')
                break;

            st += s[i];
            curres = (curres * 10) + (s[i] - '0');

            if (ind == 0) {
                solve(i + 1, s, target, st, ans, curres, curres);
            } else {
                solve(i + 1, s, target, curr + "+" + st, ans, curres,
                      res + curres);
                solve(i + 1, s, target, curr + "-" + st, ans, -curres,
                      res - curres);
                solve(i + 1, s, target, curr + "*" + st, ans, prev * curres,
                      res - prev + (prev * curres));
            }
        }
    }
    vector<string> addOperators(string num, int target) {
        vector<string> ans;
        if (num.size() == 0)
            return ans;
        solve(0,num, target, "", ans, 0, 0);
        return ans;
    }
};
