class Solution {
private:
    string helperJustify(vector<string>&words, int s, int e, int mw, int n){
        int numberOfWords=e-s;
        int wl=0;
        for(int k=s; k<e; k++){
            wl+=words[k].size();
        }
        int i=s, j=e, maxWidth=mw;
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
                return lastline;
        }
        else if(numberOfWords== 1){
            string onewordline="";
            onewordline+=words[i];
            while(onewordline.size()<maxWidth){
                onewordline.push_back(' ');
            }
            return onewordline;
        }
        else{
            int gaps=numberOfWords-1;
            int spaces=maxWidth-wl;
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
            return normalline;
        }
    }
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
       ans.push_back(helperJustify(words,i,j,maxWidth,n));
       i=j; 
  }
        return ans;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna