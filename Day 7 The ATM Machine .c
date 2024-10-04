#include <stdio.h>
#include <stdlib.h>
int main() {
	int t ;//number of test cases
	scanf(%d",t);
	while (t--)
	{
	    int k,n, withdrawal_money = 0;
	    scanf(%d %d " , n ,k);
	    int*withdrawal = (*int)malloc(n*sizeof(int));
	    if(withdrawal == NULL){
	        printf("memory allocation failed");
	    }
	    for(int i =0 ; i < n ; i++){
	        scanf("%d", &withdrawal[i]);
	        
	    }
	    for(int i =0 ;i <n ;i++){
	        if(withdrawal[i] < k){
	            printf ('1');
	        }
	        else{
	            printf("0");
	        }
	        k -= withdrawal[i];
	    }
	    
	}

}
