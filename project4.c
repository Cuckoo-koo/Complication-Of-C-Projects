#include<stdio.h>

int main(){
    FILE*fp;
    fp = fopen("feedback_guiz.txt","w");

    if (fp==NULL){
        printf("FILE cannot be open");
        return 1;
    }
    fprintf(fp,"FEEDBACK ABOUT C PROGRAMMING:\n\n"
            "C seems straightforward though it is dry yet it is simple enough.\n"
            "With the sole exception of pointers and memory management when actually implemented in leetcode problems becomes a nightmare.\n"
            "Despite having a sense of familarity with C# with unity i barely knew wat C would like like and remember just Unity keywords and Functions\n"
            "urgghh Despite that i am kinda satsified with C and looking foward to its implementation and challenges it harbours up ahead.\n"
            "atlast here we go C is prettuy niche if u ask me\n\n\n\n");
    fclose(fp);
    printf("written successfully\n\n\n");

    fp = fopen("feedback_guiz.txt","a");

    fprintf(fp,"FEEDBACK about C Trainer:\n"
            "I acknowledge his skill yet he has tough time getting along with the students on the whole, while a few do observe him and understand \n"
            "Couldnt ask for better i am satisfied with more than wat i have at the time being and the trainer is the best i have at the moment..\n");
            fclose(fp);
            printf("appended succesfully \n");
    return 0;
}
