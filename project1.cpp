#include <iostream>
#include <string>


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


int main(){
    std::cout << problem1("O S, GOMR YPFSU")<< std::endl; 
    problem3(195);
}