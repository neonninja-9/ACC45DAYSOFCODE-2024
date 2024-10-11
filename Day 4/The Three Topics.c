/* "The Three Topics."

**Problem Statement:**

Chef is a participant in the finals of an inter-school declamation contest. Each contestant was asked to prepare for 10 topics. However, Chef has only prepared for three topics: **A**, **B**, and **C**. If Chef is asked to speak on any topic other than **A**, **B**, or **C**, he will not know what to say, meaning he can only win the contest if the assigned topic is one of those three.

You are asked to determine if Chef has a chance of winning the contest when given a topic **X**. If **X** matches one of the prepared topics (**A**, **B**, or **C**), print "Yes". Otherwise, print "No". The case of the characters (uppercase or lowercase) does not matter.

### Input/Output Specifications:

- **Input:** The topic **X** Chef is assigned (as a single character).
- **Output:**
  - Print `"Yes"` if Chef can speak on that topic (i.e., if **X** is one of the topics Chef has prepared for: **A**, **B**, or **C**).
  - Print `"No"` otherwise.

You are allowed to print the output in any case (uppercase or lowercase). For example, "yes", "YES", and "yEs" would all be considered correct.

### Plan:

1. Take the input for the topic **X**.
2. Check if **X** matches one of the topics Chef prepared for: **A**, **B**, or **C**.
3. Print "Yes" if it matches, otherwise print "No".

Would you like to see the code implementation for this problem?*/
#include <stdio.h>

int main()
{
    int A, B, C, X;

    // Read the prepared topics
    printf("Enter prepared topics1 A, B, C: ");
    scanf("%d %d %d", & A, & B, & C);

    // Read the assigned topic
    printf("Enter assigned topic X: ");
    scanf("%d", & X);

    // Check if X is one of the prepared topics
    if (X == A || X == B || X == C)
    {
        printf("Yes\n");
    }
    else
    {
        printf("No\n");
    }

    return 0;
}