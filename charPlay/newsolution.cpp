#include <iostream>
#include <cctype>
#include <cstring>
#include <algorithm>
using namespace std;

char* alpha_in(char* phrase){
    char *copy = new char[strlen(phrase) + 1];
    size_t j = 0;
    
    for(size_t i = 0; i < strlen(phrase); i++){
        if(isalpha(phrase[i])){
            phrase[i] = toupper(phrase[i]);
            copy[j++] = phrase[i];
        }
    }
   
    std::sort(copy, copy + strlen(copy)); 

    //New Code to remove Duplicates
    string copy_str = copy; // convert copy to string and save it as copy_str
    int i = 0;  // Initialize index i
    copy = new char[strlen(phrase)];  // Reassign the copy array to a new empty character array with a length of the string phrase;

    while (i < copy_str.size()) { // while index i is less than the lenth/size of the copy_str string
        int k = i + 1;  // Initialize index, j, it will always be one index ahead of i
        while (k < copy_str.size()) { // Start a new loop, starting at K and loop until we reach the last character of the copy_size string
            if (copy_str[i] == copy_str[k]) { // Check if the char at index k is the same as the one in index i
                copy_str.erase(k, 1);  // if the previous condition is true, remove the character at K
            } else { // If the first condition is not met
                k++; // Just increment k by 1
            }
        }
        i++; // Finally, increment i and move to the next char of the copy_str string
    }

    // Now that the copy_str string has been mutated to only include unique chars, loop it and save each character in the copy array
    for (int i = 0; i < copy_str.size(); i+=1){
      copy[i] = copy_str[i];
    }

    return copy;
}

int main() {
    char* phrase_ptr = new char[27];
    std:: strcpy(phrase_ptr, "Once more into the breach!");

    char *phrase_alphas = alpha_in(phrase_ptr); //contains: "ABCEHIMNORT\0"
    
    if(phrase_alphas != nullptr) {
        for(char *iter = phrase_alphas; *iter != '\0'; ++iter)
            std::cout << *iter << ' ';
        std::cout << std::endl;
    }
    
    delete [] phrase_ptr;
    delete [] phrase_alphas;

    return 0;
}
