#include <iostream>

int findLen(char array[]) {
	int len = 0;
	for (int i = 0; array[i] != '\0'; ++i) {
        len++;
	}
    return len;
}

void replaceSpaceToLenWord( char input_text[]){
    int countLetter = 0;
    int lenText = findLen(input_text);
    for(int index = 0;index <= lenText;++index){
        if(input_text[index] == ' ' || input_text[index] == '\0'){            
            if (countLetter < 10){
                if (input_text[index] == '\0') {
                    input_text[index] = countLetter + '0';  
                    input_text[index + 1] = '\0';  
                    break;
                }
                input_text[index] = countLetter + '0';
                countLetter = 0;
            }else{

                int tens = countLetter / 10;
                int units = countLetter % 10;

                for(int j = lenText;j > index;--j){
                    input_text[j+1] = input_text[j];
                }
                lenText++;
                if (input_text[index] == '\0') {
                    input_text[index] = tens + '0';
                    input_text[++index] = units + '0'; 
                    input_text[index + 1] = '\0';  
                    break;
                }
                input_text[index] = tens + '0';
                input_text[++index] = units + '0';
            }
            countLetter = 0;
        }else {
            countLetter++;
        }
    }
}

int main(){
    setlocale(LC_ALL, "ru_RU.UTF-8");
    char input_text[100];
    std::cout << "Введите текст до 100 символов: ";
    std::cin.getline(input_text, 100);
    replaceSpaceToLenWord(input_text);
    std::cout << "Замененный текст: "<< input_text;


    return 0 ;
}