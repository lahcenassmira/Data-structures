#include <stdio.h>
#include <stdlib.h>


    void echanger(int *a, int *b){

        int tmp = *a;
        *a = *b;
        *b = tmp;
      }
    void triSelection(int T[] , int taille){
      for(int i = 0; i< taille - 1 ; i++){
        int min = i;
        for(int j = i + 1; j< taille; j++){
            if(T[j] < T[min])  // < asghar element > akbar
                min = j;
        }
        echanger(&T[min], & T[i]);

      }
   }


   void affichage(int T[] , int taille){
      for(int i = 0; i< taille ; ++i){
        printf("%d ", T[i]);

      }
      printf("\n");
   }

int main()
{
   int taille = 6;
   int T[] = {20,12,10,35,25,0};
   printf("Tableau initial : \n");
   affichage(T, taille);
   triSelection(T,taille);
   printf("tableau trie dans l'ordre croissant : \n");
   affichage(T,taille);

}
