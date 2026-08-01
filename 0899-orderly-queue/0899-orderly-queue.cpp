class Solution {
public:
    string orderlyQueue(string s, int k) {
        if(k>1){
            sort(s.begin(),s.end());
            return s; 
        }
        string small=s;
        int n=s.size();
        for(int i=1;i<n;i++){
            string substring=s.substr(i)+s.substr(0,i);
            if(substring<small){
                small=substring;
            }
        }
        return small;
    }
};


// for shi(/int sum+0){
    // first[i]++second[i+1]{
        // an this is juts the;
    // }
    // and then you may need to include the first order brother that is just a first thing that are there  
// }
// for(this you may need someoif thiskind of thing that are nt )