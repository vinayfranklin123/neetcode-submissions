class Solution {
public:

    string encode(vector<string>& strs) {
        string res = "";
        for(int i = 0; i < strs.size(); i++) {
            res.append(strs[i]);
            res.push_back('|');
        }
        return res;
    }

    vector<string> decode(string s) {
        vector<string> res;
        string flag = "";
        for (int i = 0; i < s.length(); i++) {
            if(s[i] == '|'){
                res.push_back(flag);
                flag = "";
            } else {
                flag.push_back(s[i]);
            }
        }
        return res;
    }
};
