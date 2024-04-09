#include <iostream>
#include <cctype>
#include <cstring>
#include <algorithm>
using namespace std;

char* alpha_in(char* phrase){
    char *copy = new char[strlen(phrase) + 1];
    int j = 0;
    
    for(int i = 0; i < strlen(phrase); i++){
        if(isalpha(phrase[i])){
            phrase[i] = toupper(phrase[i]);
            copy[j++] = phrase[i];
        }
    }
   
    sort(copy, copy + strlen(copy)); 
   

    // convert copy to a string. save it as copy_str
    string copy_str = copy; 
    int i = 0;  

    // Reassign the copy arr to a new empty char arr | length is length of phrase
    copy = new char[strlen(phrase)];  

    // Loop until i is equal to size of copy_str
    while (i < copy_str.size()) { 
        // index k is always starts at one index ahead of i in each iteration
        int k = i + 1;  
        // Start new loop | loop until k is = copy_str size
        while (k < copy_str.size()) { 
            // Compare the characters at index i and k
            if (copy_str[i] == copy_str[k]) { 
                // if char at i is the same as char at k, delete the char at k
                copy_str.erase(k, 1);  
            } else { 
                // If first condition is false, increment k by 1
                k++; 
            }
        }
        // when k = copy_str's size | loop ends | increment i by 1
        i++; 
    }

    // At the end of the previous loop, copy_str is mutated
    // loop copy_str and add each char to the copy array
    for (int i = 0; i < copy_str.size(); i+=1){
      copy[i] = copy_str[i];
    }

    return copy;
}

int main() {
    char* phrase_ptr = new char[27];
    strcpy(phrase_ptr, "Once more into the breach!");

    char *phrase_alphas = alpha_in(phrase_ptr); //contains: "ABCEHIMNORT\0"
    
    if(phrase_alphas != nullptr) {
        for(char *iter = phrase_alphas; *iter != '\0'; ++iter)
            cout << *iter << ' ';
        cout << endl;
    }
    
    delete [] phrase_ptr;
    delete [] phrase_alphas;

    return 0;
}
