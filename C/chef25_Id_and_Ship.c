//Id and Ship
#include<stdio.h>
int main(){
      int t;
      char id,en;
      scanf("%d",&t); 
    // scanf("%c",&en);//for enter
      while(t--){  
        scanf("%c",&en);// because we press enter after each id input
           scanf("%c",&id);
           
           if(id=='B'|| id=='b')printf("BattleShip\n");
           
           else if(id=='C' || id=='c') printf("Cruiser\n");
           
           else if(id=='D' || id=='d')printf("Destroyer\n");
           
           else if(id=='F' || id=='f')printf("Frigate\n");
           
          // printf("%c,%c",id,en);
           
      }
return 0;
}
