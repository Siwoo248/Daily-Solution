class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        string ans;
        int small;
        int num=0;

        if(size(word1)>=size(word2)){
            small = size(word2);
            num = 2;
        }

        else{
            small = size(word1);
            num = 1;
        }
        
        for(int i=0;i<small;i++){
            ans+=word1[i];
            ans+=word2[i];
        }

        if(num==1){
            for(int i=small;i<size(word2);i++){
                ans+=word2[i];
            }
        }

        else{
            for(int i=small;i<size(word1);i++){
                ans+=word1[i];
            }
        }
        return ans;
    }
};