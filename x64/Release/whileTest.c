#include <stdio.h>
int main() {
int _BBBBBBBBB;
int _AAAAAAAAA;

printf("Enter _AAAAAAAAA: ");
scanf("%d", &_AAAAAAAAA);
while((_AAAAAAAAA < 10)) {
printf("%d\n", _AAAAAAAAA);
_AAAAAAAAA = (_AAAAAAAAA + 1);
continue;
break;
}
return 0;
}
