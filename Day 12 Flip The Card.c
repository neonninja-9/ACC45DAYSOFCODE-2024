#include <stdio.h>

int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int total_cards, face_up;
        scanf("%d %d", &total_cards, &face_up);
        int cards_left = total_cards - face_up;
        if (cards_left < face_up)
        {
            printf("%d", cards_left);
        }
        else
        {
            printf("%d", face_up);
        }
    }

    return 0;
}
