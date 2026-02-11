class Solution {
public:
    string removeStars(string s) {
        string answer = "";

        for(char c : s){
            if(c != '*'){
                answer += c;
            }
            else{
                answer.pop_back();
            }
        }

        return answer;
    }
};

// class Solution {     // O(2n) -> O(n) = string to stack && O(n) = for()
// public:
//     string removeStars(string s) {
//         stack<char> ans;
//         string answer;

//         for(int i = 0; i < s.size(); i++){
//             if(s[i]!='*'){
//                 ans.push(s[i]);
//             }
//             else{
//                 ans.pop();
//             }
//         }

//         while(!ans.empty()){
//             answer = ans.top() + answer;
//             ans.pop();
//         }

//         return answer;
//     }
// };