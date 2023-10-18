#include <iostream>
#include <string>
#include "randword.h"


/**
 * Problem 1 takes in an input at edits the string to move each
 * letter one to the left it does this by iterating through
 * the string and checking the input array and adding the output 
 * arrau to the new string
*/
std::string problem1(std::string input){
    char inputArr[] = {'w','e','r','t','y','u','i','o','p','[',']','s','d','f','g','h','j'
    ,'k','l',';','x','c','v','b','n','m',',','.'};
    char outputArr[] = {'q','w','e','r','t','y','u','i','o','p','[','a','s','d','f','g','h','j'
    ,'k','l','z','x','c','v','b','n','m',','};
    int length = 30;
    for(int k = 0; k < length; k++){
        inputArr[k] = toupper(inputArr[k]);
    }
    for(int m = 0; m < length; m++){
        outputArr[m] = toupper(outputArr[m]);
    }

    std::string temp;
    for(int i = 0; i < input.length(); i++){
        for(int j = 0; j < 30; j++){
            if(input[i] == inputArr[j]){  
                temp += outputArr[j];
            }
        }
        if(input[i] == ' '){
            temp += ' ';
        }
    }
    return temp;
}
/**
 * Helper function for problem 3
 * returns the reverse of a number
*/
int reverseDigits(int number){
        int reverse = 0;
        while( number > 0){
            reverse = (reverse*10) + (number % 10);
            number = number/10;
        }
        return reverse;
    };
/**
 * Helper function for problem 3
 * returns true/false of a number if it is a palindrome
*/
bool checkIfPalindrome(int number){
    if(reverseDigits(number) == number) return true;
    return false;
}

/**
 * Problem 3 returns a numbers palindrome by reversing and adding
 * until a palindrome is returned
*/
void problem3(int number){
    int steps = 0;
    while(checkIfPalindrome(number) == false){
        if(steps == 1000){
            break;
        }
        number = number + reverseDigits(number);
        steps++;
    }
    if(steps == 1000){
        std::cout << "Palindrome not found" << std::endl;
    }
    std::cout << "The Palindrom number is " << number << std::endl;
    std::cout << "Steps took is " << steps << std::endl;
}


struct bookT{
    std::string Title;
    std::string authors[5];
    long congressID;
    std::string subjects[5];
    std::string publisher;
    int year;
    bool circulating;
};


bookT libraryT[1000];

void problem4(std::string subject){
    std::cout << "Search for subject " << subject << std::endl;
    std::cout<< "----------------------------" << std::endl;
    for(int i = 0; i < 1000; i++){
        bookT temp = libraryT[i];
        for(int j = 0; j < 5; j++){
            if(temp.subjects[j] == subject){
                std::cout << "Title: " << temp.Title << std::endl;
                std::cout << "First Author: " << temp.authors[0] << std::endl;
                std::cout << "Congress ID: " << temp.congressID;
                std::cout << std::endl;
            }
        }
    }

}


int main(){
    /**
     * Test for problem 1
    */
    //std::cout << problem1("O S, GOMR YPFSU")<< std::endl; 
    /**
     * Test for problem 3
    */
    //problem3(195);
    /**
     * Test for problem 4
    */
//    bookT book1;
//    book1.Title = "Odyssey";
//    book1.authors[0] = "Homer";
//    book1.congressID = 101110011;
//    book1.subjects[0] = "greek";
//    book1.subjects[1] = "myth";

//    bookT book2;
//    book2.Title = "Ragnorok";
//    book2.authors[0] = "Zoëga";
//    book2.congressID = 101110012;
//    book2.subjects[0] = "norse";
//    book2.subjects[1] = "myth";

//    bookT book3;
//    book3.Title = "Fault in our stars";
//    book3.authors[0] = "John Green";
//    book3.congressID = 101110013;
//    book3.subjects[0] = "Romance";
//    book3.subjects[1] = "Tradgedy";

//    bookT book4;
//    book4.Title = "Kaikeyi";
//    book4.authors[0] = "Vaishnavi Patel";
//    book4.congressID = 101110014;
//    book4.subjects[0] = "indian";
//    book4.subjects[1] = "myth";

//    bookT book5;
//    book5.Title = "Lord Of the Mysteries";
//    book5.authors[0] = "Cuttlefish";
//    book5.congressID = 101110015;
//    book5.subjects[0] = "Chinese";
//    book5.subjects[1] = "Mystery";

//     libraryT[0] = book1;
//     libraryT[1] = book2;
//     libraryT[2] = book3;
//     libraryT[3] = book4;
//     libraryT[4] = book5;
    
//     problem4("myth");



}