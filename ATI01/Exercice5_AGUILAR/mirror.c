int mirror(unsigned char* chaine){
   int i = 0;
   int j = 0;
   for ( i=0 ; chaine[i] != '\0' ; i++){
       if (chaine[i] == '\0'){
           j = i;
       }
       for (i=0 ; chaine[i] != '\0' ; j--){
           chaine[i] = chaine [j];
           chaine[j] = chaine[i];
       }
   
   }
   return i;
}
