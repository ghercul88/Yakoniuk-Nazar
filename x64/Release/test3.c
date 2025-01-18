#include <stdio.h>
int main() {
int _JJJJJJJJJ;
int _IIIIIIIII;
int _XXXXXXXXX;
int _BBBBBBBBB;
int _AAAAAAAAA;

printf("Enter _AAAAAAAAA: ");
scanf("%d", &_AAAAAAAAA);
printf("Enter _BBBBBBBBB: ");
scanf("%d", &_BBBBBBBBB);
for(
_XXXXXXXXX = _AAAAAAAAA;
_XXXXXXXXX <= _BBBBBBBBB;
++_XXXXXXXXX
) printf("%d\n", (_XXXXXXXXX * _XXXXXXXXX));
_XXXXXXXXX = 0;
for(
_IIIIIIIII = 1;
_IIIIIIIII <= _AAAAAAAAA;
++_IIIIIIIII
) for(
_JJJJJJJJJ = 1;
_JJJJJJJJJ <= _BBBBBBBBB;
++_JJJJJJJJJ
) _XXXXXXXXX = (_XXXXXXXXX + 1);
printf("%d\n", _XXXXXXXXX);
return 0;
}
