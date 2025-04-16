#include <stdio.h>
int main(void)
{
    int n, cnt, tot = 0, brk = 0;
    printf("View the menu and place your order\n");
    printf("1. Americano:1800 Won\n2. Caffe Latte:2800 Won\n3. Caffe Mocha:3800 Won\n4. Caffe Americano:4300 Won\n5. Strawberry:3800 Won\n6. Order again(Reset)\n7. Order finished\n\n");
    while (1)
    {
        printf("Please select a menu: ");
        scanf("%d", &n);
        switch (n)
        {
        case 1:
            printf("How many cups of Americano do you want?");
            scanf("%d", &cnt);
            tot += cnt * 1800;
            break;
        case 2:
            printf("How many cups of Caffe Latte do you want?");
            scanf("%d", &cnt);
            tot += cnt * 2800;
            break;
        case 3:
            printf("How many cups of Caffe Mocha do you want?");
            scanf("%d", &cnt);
            tot += cnt * 3800;
            break;
        case 4:
            printf("How many cups of Caffe Americano do you want?");
            scanf("%d", &cnt);
            tot += cnt * 4300;
            break;
        case 5:
            printf("How many cups of Strawberry do you want?");
            scanf("%d", &cnt);
            tot += cnt * 3800;
            break;
        case 6:
            tot = 0;
            continue;
        case 7:
            brk = 1;
            break;
        default:
            break;
        }
        if (brk == 1)
            break;
    }
    printf("Total Cost: %d\n", tot);
}