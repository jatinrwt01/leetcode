class Solution {
public:
    vector<string> fullJustify(vector<string>& words, int maxWidth) {
        vector<string>ans;
        int n=words.size();
        int i=0;
        while(i<n){
            int j=i;
            int l=0;
            while(j<n){
            if(j==i){ 
                l+=words[j].size();
                j++;
            } else if(l+words[j].size()+1<=maxWidth){
                l+=words[j].size()+1;
                j++;
            } else{
                break;
            }
            }
        if(j == n){
            string lastline="";
            for(int k=i; k<j; k++){
                 if(k>i){
                    lastline.push_back(' ');
                }
                lastline+=words[k];
            }
             while(lastline.size()<maxWidth){
                    lastline.push_back(' ');
                }
                ans.push_back(lastline);
                break;
        }
        else if(j-i == 1){
            string onewordline="";
            onewordline+=words[i];
            while(onewordline.size()<maxWidth){
                onewordline.push_back(' ');
            }
            ans.push_back(onewordline);
        }
        else{
            int numberOfWords=j-i;
            int gaps=numberOfWords-1;
            int spaces=maxWidth-l+gaps;
            int spacePerGap=spaces/gaps;
            int extraSpaces=spaces%gaps;
            string normalline="";
            for(int k=i; k<j; k++){
                normalline+=words[k];
                if(k<j-1){
                    int cnt=spacePerGap;
                    if(k-i<extraSpaces){
                        cnt++;
                    }
                for(int s=0; s<cnt; s++){
                    normalline.push_back(' ');
                }
                }
            }
            ans.push_back(normalline);
        }
        i=j;
        }
        return ans;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna