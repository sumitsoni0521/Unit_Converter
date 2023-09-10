#include <stdio.h>

int main() {
  char category;
  int tempChoice;
  int currencyChoice;
  int massChoice;
  int userinputF; // User inputted Fahreinheit;
  int userinputC; // User inputted Celsius;
  int userinputUSDtoEuro; // User inputted for USD to EURO;
  int userinputUSDtoJPY; // User inputted for USD to JPY;
  int userinputUSDtoRMB; // User inputted for USD to RMB;
  int userinputOunce; // User inputted for Ounce;
  int userinputGram; // User inputted for Gram;
  int fahrenheitToCelcius; // variable that stores the converted F->C;
  int celciusToFahrenheit; // variable that stores the converted C->F;
  float USDtoEURO ; // varaible that stores the converted USD->EURO;
  float USDtoJPY; // stores the converted USD->JPY;
  float USDtoRMB; // stores the converted USD->RMB;
  float ounceToPounds; // stores the converted Ounce->Pounds;
  float gramsToPounds; // stores the vonerted Grams->Pounds;
  
  printf("******************************************************** Welcome to Unit Converter ********************************************************\n");
  printf("\n");
  printf("List of conversation to choose: \n");
  printf("Temperature(T)\nCurrency(C)\nMass(M)\n");
  printf("\n");
  printf("-- Enter the letter which you want to convert : ");
  scanf("%c",&category);
  
  if(category == 'T'){
      printf("\n********************************************* Welcome to Temperature Converter ********************************************* \n");
      printf("List of conversation to choose: \n");
      printf("Enter 1 : - Fahrenheit to Celsius. \n");
      printf("Enter 2 :-  Celsius to Fahrenheit. \n");
      scanf("%d",&tempChoice);
      if(tempChoice == 1){
          printf("Enter the Fahrenheit degree: \n");
          scanf("%d",&userinputF);
          fahrenheitToCelcius =  ((userinputF-32) * (5.0/9.0));
          printf("Celcius: %d",fahrenheitToCelcius);
      }
      else if(tempChoice == 2){
        printf("Enter the Celcius degree: \n");
        scanf("%d",&userinputC);
        celciusToFahrenheit = ((9.0/5.0)*userinputC + 32);
        printf("Fahrenheit: %d",celciusToFahrenheit);
      }
      else
        printf("Enter the correct choice. \n");
  }
  
  else if(category == 'C') {
      printf("******************************************** Welcome to Currency Converter ********************************************\n");
      printf("List of conversation to choose: \n");
      printf("Enter 1 :- USD to Euro. \n");
      printf("Enter 2 :- USD to INR. \n");
      printf("Enter 3 :- INR to USD. \n");
      scanf("%d",&currencyChoice);
      if(currencyChoice == 1){
          printf("Please enter the USD amount: \n");
          scanf("%d",&userinputUSDtoEuro);
          USDtoEURO = userinputUSDtoEuro * 0.87;
          printf("Euro: %.2f",USDtoEURO); // %.2f = rounds the float to only 2 decimal places;
      }
      else if(currencyChoice == 2){
          printf("Please enter the USD amount: \n");
          scanf("%d",&userinputUSDtoJPY);
          USDtoJPY = userinputUSDtoJPY * 82.78;
          printf("INR: %.2f",USDtoJPY);
      }
      else if(currencyChoice == 3) {
        printf("Please enter the USD amount: \n");
        scanf("%d",&userinputUSDtoRMB);
        USDtoRMB = userinputUSDtoRMB * 0.012;
        printf("USD: %.2f",USDtoRMB);
      }
      else
        printf("Please enter correct choice. \n");
   }
  else if(category == 'M'){
      printf("******************************************** Welcome to Mass Converter ********************************************\n");
      printf("List of conversation to choose: \n");
      printf("Enter 1 :- ounces to pounds. \n");
      printf("Enter 2 :- gram to pounds. \n");
      scanf("%d",&massChoice);
      if(massChoice == 1){
          printf("Please enter the ounce amount: \n");
          scanf("%d",&userinputOunce);
          ounceToPounds = userinputOunce * 0.0625;
          printf("Pounds: %.2f",ounceToPounds);
      }
      else if(massChoice == 2) {
          printf("Please enter the gram amount: \n");
          scanf("%d",&userinputGram);
          gramsToPounds = userinputGram * 0.00220462;
          printf("Pounds: %.2f",gramsToPounds);
      }
      else 
        printf("Please enter the correct choice. \n");
   }
  return 0;
}
