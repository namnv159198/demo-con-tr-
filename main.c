#include <stdio.h>

int HoanDoiViTri(int *a,int *b) { // khai bao bien con tro: con tro a, con tro b
    int temp = *a;
    *a = *b;
    *b = temp;
    return 0;
}
int main() {
    int a,b,temp;
    printf("nhap so a : \n");
    scanf("%d", &a);
    printf("nhap so b : \n");
    scanf("%d", &b);
    if (a > b) {
        HoanDoiViTri(&a, &b); // truyen dia chi a va b vao ham (hoan doi vi tri). & : dia chi, * : gia tri
    }
    printf("So a la : %d\n", a);
    printf("So b  la : %d\n", b);

}