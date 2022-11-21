#include<stdio.h>

main(){
	
	int r,a,v,i;
	
	printf("Enter A :- ");
	scanf("%i",&r);

	printf("Enter B :- ");
	scanf("%i",&a);

	printf("Enter C :- ");
	scanf("%i",&v);

	printf("Enter D :- ");
	scanf("%i",&i);
	
	if(r>a){
		
		if(r>v){
			
				if(r>i){
					printf("A is Max");
				}			
				else{
					printf("D is Max");
				}
		}
		
		else{
			
			printf("C is max");
		}
}
		
	else if(a>v){
		
			if(a>i) {
		
			printf(" B is max");
	}
			else{ 
		
			printf("D is max");
		
		}
	}	
	else if(v>i){
		
		printf("C is Max");
	}
	
	else{
		printf("D is max");
	}
}


