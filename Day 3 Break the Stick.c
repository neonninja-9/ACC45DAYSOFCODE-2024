/*

---

**Break the Stick**

Chef has a stick of length \( N \).

He can break the stick into 2 or more parts such that the parity of the length of each part is the same. For example, a stick of length 11 can be broken into three sticks of lengths {3, 3, 5} since each part is odd, but it cannot be broken into two sticks of lengths {5, 6} since one is even and the other is odd.

Chef can then continue applying this operation on the smaller sticks he obtains, as many times as he likes.

**Can Chef obtain a stick of length exactly \( X \) by doing this?**

---

### **Input Format**
- The first line of input will contain a single integer \( T \), denoting the number of test cases. The description of the test cases follows.
- Each test case consists of a single line of input, containing two space-separated integers \( N \), \( X \).

### **Output Format**
For each test case, output on a new line "YES" if Chef can obtain a stick of length exactly \( X \), and "NO" otherwise.

Each letter of the output may be printed in either lowercase or uppercase. For example, the strings "yes", "Yes", and "YES" will be considered identical.

---

*/

#include <stdio.h>

int main()
{
    int n; // test case
    printf("enter leanth of the stick :\n");
    scanf("%d", &n);
    int x; // target sticks
    printf("enter the length of the stick you want to get :\n");
    scanf("%d", &x);
    /*If 𝑁  and X have the same parity (both are odd or both are even), then Chef can possibly get a stick of length 𝑋*/

    if (n % 2 == 0 && x % 2 == 0)
    {
        printf("YES\n");
    }
    // If N and X have different parity (one is odd, the other is even), then Chef cannot get a stick of length X
    else if (n % 2 != 0 && x % 2 != 0)
    {
        printf("YES\n");
    }
    else if(n = x){
        printf("YES\n");
    }
    else
    {
        printf("NO\n");
    }
    return 0;
}
