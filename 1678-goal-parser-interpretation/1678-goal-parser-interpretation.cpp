class Solution {
public:
    string interpret(string command) {
        string goal,ch="";
        for(int i:command){
            ch+=i;
            if(ch=="G"){
                goal+="G";
                ch="";
            }else if(ch=="()"){
                goal+="o";
                ch="";
            }else if(ch=="(al)"){
                goal+="al";
                ch="";
            }
        }
        return goal;
    }
};