class Solution {
public:
    string intToRoman(int num) {
        vector<int> number ={1000,900,500,400,100,90,50,40,10,9,5,4,1};
        vector<string> roman={"M","CM","D","CD","C","XC","L","XL","X","IX","V","IV","I"};
        
        string romanRepresentation="";
        
        for(int i=0;i<number.size();i++){
            while(num>=number[i]){
                romanRepresentation=romanRepresentation+roman[i];
                num=num-number[i];
            }
        }
        return romanRepresentation;
    }
};