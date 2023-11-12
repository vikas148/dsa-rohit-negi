// class Solution {
// public:
//      string sortSentence(string s) {
//         string words[9], temp;
        
//         for(int i=0; i<s.size(); ++i){
//           if(s[i]==' '){
//             int index = temp[temp.size()-1]-'1';
//             temp.pop_back();
//             words[index] = temp;
//             temp.clear();
//           }else{
//             temp += s[i];
//           }
//         }

//         int index = temp[temp.size()-1]-'1';
//         temp.pop_back();
//         words[index] = temp;
//         temp.clear();

//         for(int i=0; i<9; ++i){
//           if(words[i].empty()) break;
//           temp += words[i] + " ";  
//         }

//         temp.pop_back();

//         return temp;
//     }
// };