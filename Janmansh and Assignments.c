#include <stdio.h>

int main() {
    int t, finishing_time , starting_time;
    scanf("%d", &t);
    while(t--)
    {
    
    scanf("%d", &starting_time);
    finishing_time = starting_time + 3;
    
    
	if (finishing_time <= 10 ){
	    printf("YES\n");
	}else{
	    printf("No\n");
	}
    }
    return 0;

}
