#include <stdio.h>
#include<math.h>
#include<stdlib.h>
#include <stdbool.h>
char var_name;
float a,b,c,d,e;
char user_choice;
float res;



float opAB(char user_choice)
{
    float res;
    float num1,num2,answer;
char num1c, num2c;
    char ch;
    
    printf("Enter first number:");
    if (scanf("%f", &num1)==false)
    {
      puts("enter a variable: ");
      scanf("%c", &num1c);
      switch(num1c)
        {
         case 'a':
         num1 = a;
         break;
         case 'b':
         num1 = b;
         break;
         case 'c':
         num1 = c;
         break;
         case 'd':
         num1 = d;
         break;
         case 'e':
         num1 = e;
         break;
        }
      
      
    }
    
    printf("Enter second number:");
     if (scanf("%f", &num2)==false)  
     {
      puts("enter a variable: ");
      scanf("%c", &num2c);
      switch(num2c)
        {
         case 'a':
         num2 = a;
         break;
         case 'b':
         num2 = b;
         break;
         case 'c':
         num2 = c;
         break;
         case 'd':
         num2 = d;
         break;
         case 'e':
         num2 = e;
         break;
        }
      
      
    }
    


    printf("Enter operator ( +, -, *, /, % , P, X, I): ");
    getchar();
    scanf("%c",&ch);
    
    
    while(true) {
    switch(ch)
    {
      
        case '+':
            answer  = num1+num2;
            printf("%f", answer);
            break;
        case '-':
            answer  = num1 - num2;
            printf("%f", answer);
            break;
        case '*':
            answer  = num1 * num2;
            printf("%f", answer);
            break;
        case '/':
            
            while (num2==0)
                {
                    printf("Please enter a non-zero number 2");
                    while (scanf("%f",&num2)==0)
                    {
                        printf("Invalid input. Please enter a number");
                        scanf("%*s");
                    }
                }
                answer = num1 / num2;
                printf("%f", answer);
            break;
        case '%':
            answer  = remainder(num1,num2);
            printf("%f", answer);
            
            break;
        case 'X':
            if(num1<num2)
            printf("%f", num2);
            break;
        case 'I':
            if(num1>num2)
            printf("%f", num2);
            break;
        
        
        
        
    }
      break;
    }
  scanf("%c", &user_choice);
  res = (main(user_choice));
        printf("\n%f",res);
}
float opB(char user_choice)
{
   float res; 
    float num1,num2,answer;
    char ch;
    
    printf("Enter first number:");
    while (scanf("%f", &num1) == false) {
      while(getchar() != '\n')
      puts("enter a proper float number: ");
      
    }
    
    printf("Enter second number:");
    while (scanf("%f", &num2) == false) {
      while(getchar() != '\n')
      puts("enter a proper float number: ");
      
    }
    


    printf("Enter operator ( +, -, *, /, % , P, X, I): ");
    getchar();
    scanf("%c",&ch);
    
    
    while(true) {
    switch(ch)
    {
        case '+':
            answer  = num1+num2;
            printf("%f", answer);
            break;
        case '-':
            answer  = num1 - num2;
            printf("%f", answer);
            break;
        case '*':
            answer  = num1 * num2;
            printf("%f", answer);
            break;
        case '/':
            
            while (num2==0)
                {
                    printf("Please enter a non-zero number 2");
                  while (scanf("%f", &num2) == false) {
            while(getchar() != '\n')
      puts("enter a proper float number: ");
                    
                    }
                }
                answer = num1 / num2;
                printf("%f", answer);
            break;
        case '%':
            answer  = remainder(num1,num2);
            printf("%f", answer);
            
            break;
        case 'X':
            if(num1<num2)
            printf("%f", num2);
            break;
        case 'I':
            if(num1>num2)
            printf("%f", num2);
            break;
      default:
      printf("wrong operator, enter a proper one ( +, -, *, /, % , P, X, I): ");
        getchar();
      scanf("%c", &ch);
      break;
        
    }
      break;
    }
  scanf("%c", &user_choice);
  res = (main(user_choice));
  printf("\n%f",res);
    
  
}

float opAU(char user_choice)
{
  float res;
    float num1,answer;
  char num1c;
    char ch;
    printf("Enter one number: ");
    if (scanf("%f", &num1)==false)  {
      puts("enter a variable: ");
      scanf("%c", &num1c);
      while(true){
      switch(num1c)
        {
         case 'a':
         num1 = a;
         break;
         case 'b':
         num1 = b;
         break;
         case 'c':
         num1 = c;
         break;
         case 'd':
         num1 = d;
         break;
         case 'e':
         num1 = e;
         break;
          default:
          printf("That is not a valid variable.\n");
          getchar();
          scanf("%c", &num1c);
          while(getchar() != '\n');
            break;
        }
      }
      
    }
    printf("Enter operator (S,L,E,C,F): ");
    getchar();
    scanf("%c",&ch);
  while(true) {
    switch(ch)
    {
        case 'S':
          while (num1<=0)
                {
                    printf("Please enter a positve number ");
                  while (scanf("%f", &num1) == false) {
                  while(getchar() != '\n')
              puts("enter a proper float number: ");
                    
                    }
                }
          answer = sqrt(num1);
            printf("%f", answer);
        case 'L':
          while (num1<=0)
                {
                    printf("Please enter a positve number ");
                  while (scanf("%f", &num1) == false) {
                  while(getchar() != '\n')
              puts("enter a proper float number: ");
                    
                    }
                }
            answer = log(num1);
            printf("%f", answer);
        case 'E':
            answer = exp(num1);
            printf("%f", answer);
        case 'C':
            answer = ceil(num1);
            printf("%f", answer);
        case 'F':
            answer = floor(num1);
            printf("%f", answer);
        default:
            printf("That is not a valid operation.\n");
          getchar();
          scanf("%c", &ch);
            break;
    }
   break; 
  }
  scanf("%c", &user_choice);
   res = (main(user_choice));
        printf("\n%f",res); 
}


float opU(char user_choice)
{
  float res;
    float num1,answer;
    char ch;
    printf("Enter one number: ");
    while (scanf("%f", &num1) == false) {
      while(getchar() != '\n');
      puts("enter a proper float number: ");
      
    }
    
    printf("Enter operator (S,L,E,C,F): ");
    getchar();
    scanf("%c",&ch);
  while(true) {
    switch(ch)
    {
        case 'S':
          while (num1<=0)
                {
                    printf("Please enter a positve number ");
                  while (scanf("%f", &num1) == false) {
                  while(getchar() != '\n')
              puts("enter a proper float number: ");
                    
                    }
                }
            answer = sqrt(num1);
            printf("%f", answer);
      break;
        case 'L':
          while (num1<=0)
                {
                    printf("Please enter a positve number ");
                  while (scanf("%f", &num1) == false) {
                  while(getchar() != '\n')
              puts("enter a proper float number: ");
                    
                    }
                }
            answer = log(num1);
            printf("%f", answer);
      break;
        case 'E':
            answer = exp(num1);
            printf("%f", answer);
      break;
        case 'C':
            answer = ceil(num1);
            printf("%f", answer);
      break;
        case 'F':
            answer = floor(num1);
            printf("%f", answer);
      break;
        default:
            printf("That is not a valid operation.\n");
          getchar();
          scanf("%c", &ch);
          while(getchar() != '\n');
            break;
    }   
    break;
  }
  scanf("%c", &user_choice);
    res = (main(user_choice));
        printf("\n%f",res);
}


float opA(char user_choice)
{   char choice;
    float answer;
 float res;
    printf("Enter B, U or E:");
    getchar();
    scanf("%c",&choice);
    if(choice == 'B')
    {
        answer = opAB(user_choice);
        printf("%f",answer);
    }
    if(choice == 'U')
    {
        answer = opAU(user_choice);
        printf("%f",answer);
    }
  if(choice == 'E') {
       res = (main(choice));
        printf("\n%f",res);
    
  }
}

float opV(char user_choice)
{ 
    float init_val;
 float res;
    printf("Enter variable name between a and e: ");
    var_name = getchar();
    while(scanf("%c",&var_name)==0)
    {
        printf("Wrong variable enter between a and e:");
        scanf("%*s");
    }
    printf("Enter float value:");
    scanf("%f",&init_val);
    printf("%c = %f",var_name,init_val);
  while(true) {
     switch(var_name)
       {
         case 'a':
         a = init_val;
         break;
         case 'b':
         b = init_val;
         break;
         case 'c':
         c = init_val;
         break;
         case 'd':
         d = init_val;
         break;
         case 'e':
         e = init_val;
         break;
         default:
         printf("That is not a valid operation.\n");
          getchar();
          scanf("%c", &var_name);
          while(getchar() != '\n')
            break;
       }
    break;
  }

  scanf("%c", &user_choice);
   res = (main(user_choice));
        printf("\n%f",res);
    }

int main()
{ 
  char user_choice;
    float res;
  printf("\n----------------------------------------\n");
    printf("Welcome to my Command-Line Calculator (CLC) \n Developer: Sankalp talreja" );
    printf("\nVersion: 1\n"
    "Date: 25/03/23");
    printf("\n----------------------------------------\n");
    printf("Select one of the following items:\n"
         "B) - Binary Mathematical Operations, such as addition and subtraction.\n"
         "U) - Unary Mathematical Operations, such as square root, and log.\n"
         "A) - Advances in Mathematical Operations, using variables, and arrays.\n"
         "V) – Define variables and assign them values.\n"
         "E) - Exit\n");
     scanf("%s", &user_choice);
    if(user_choice == 'B')
    {
        res = (opB(user_choice));
        printf("%f",res);
    }
    else if(user_choice == 'U')
    {
        res = (opU(user_choice));
        printf("%f",res);
    }
    else if(user_choice == 'V')
    {
        res = (opV(user_choice));
        printf("%f", res);
        
    }
      else if(user_choice == 'A')
    {
        res = opA(user_choice);
    }
    else if(user_choice == 'E')
    {   printf("Program Terminated ");
        exit(0);
    }

    return 0;
}
