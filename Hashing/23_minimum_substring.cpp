#include<iostream>
#include<unordered_map>
using namespace std;
string substring(const string &s,const string &t){
    if(t.size()>s.size()){
        return "";
    }
    unordered_map<char,int>tpp;
    unordered_map<char,int>spp;
    for(int ch:t){
        tpp[ch]++;
    }
    int req = tpp.size();
    int best = -1,left=0;
    int formed = 0;
    int minlength = INT_MAX;
    for(int right=0;right<s.length();right++){
        spp[s[right]]++;
        if(tpp.find(s[right])!= tpp.end() && spp[s[right]] == tpp[s[right]] ) {
            formed++;
        }
        while(formed == req){
            int currentlength = right-left+1;
            if(currentlength<minlength){
                minlength = currentlength;
                best = left;
            }
            char ch = s[left];
            if(tpp.find(ch)!= tpp.end()&&
                spp[ch] == tpp[ch]){
                    formed--;
            }
            spp[ch]--;
            left++;

        }

    }
    if(best == -1){
        return "";
    }
    return s.substr(best,minlength);


}
int main(){
    string s,t;
    cout<<"enter a string :";
    cin>>s;
    cout<<"enter targerted string :";
    cin>>t;

  string result = substring(s,t);
  cout<<"result of finding string :"<<result;
}

// 1. Edge Case
// If target string is larger than source string,
// answer is impossible.

// --------------------------------------------------

// 2. Create Required Frequency Map
// Store frequency of every character in t.

// --------------------------------------------------

// 3. Create Current Window Frequency Map
// This stores frequency of characters inside
// current sliding window.

// --------------------------------------------------

// 4. Initialize Variables

// left = 0

// required = number of distinct characters needed

// formed = number of character types currently satisfied

// bestStart = stores answer starting index

// minLength = stores smallest valid window

// --------------------------------------------------

// 5. Expand Window

// Move right pointer

// Add current character into window frequency

// If this character now satisfies its required frequency,
// increase formed.

// --------------------------------------------------

// 6. Window Valid?

// If formed == required,

// Current window contains every required character.

// --------------------------------------------------

// 7. Shrink Window

// Before removing anything,
// update minimum answer.

// Remove left character.

// If removing it breaks required frequency,
// formed--

// Move left.

// Continue shrinking until window becomes invalid.

// --------------------------------------------------

// 8. Continue Expanding

// Again move right.

// Again try to make window valid.

// Repeat until end of string.

// --------------------------------------------------

// 9. Return Answer

// If no valid window found,
// return ""

// Else

// return substring(bestStart, minLength)




// ==============================
// TIME COMPLEXITY ANALYSIS
// ==============================

// Step 1
// Build frequency map of target string.
//
// Traverse t once.
//
// TC = O(m)

// --------------------------------------

// Step 2
// Expand right pointer.
//
// Right moves:
//
// 0 → 1 → 2 → ... → n-1
//
// It never moves backward.
//
// Total movements = n
//
// TC = O(n)

// --------------------------------------

// Step 3
// Shrink left pointer.
//
// Although it is inside a while loop,
// left only moves:
//
// 0 → 1 → 2 → ... → n-1
//
// It never moves backward.
//
// Across the whole algorithm,
// left can move at most n times.
//
// TC = O(n)

// --------------------------------------

// Total Time Complexity
//
// O(m) + O(n) + O(n)
//
// = O(m + 2n)
//
// Ignore constants.
//
// Final:
//
// TC = O(n + m)
//
// If n >> m
//
// TC = O(n)

// ==============================
// SPACE COMPLEXITY
// ==============================

// need map
//
// Stores frequency of target string.
//
// window map
//
// Stores frequency of current window.
//
// Total:
//
// O(k)
//
// where k = number of distinct characters.
//
// If only English letters:
//
// k <= 26
//
// Therefore:
//
// SC = O(1)
//
// Otherwise:
//
// SC = O(k)