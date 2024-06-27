#include<stdio.h>
#include<string.h>
struct profile {
	char name[20];
	int birth[3];
	char blood[5];
};

int main(viod) {
	struct profile n;

	printf("–¼‘O‚ğ“ü—Í : ");
	scanf("%s", n.name);
	printf("¶”NŒ“ú‚ğ‹ó”’‚Å‹æØ‚Á‚Ä“ü—Í : ");
	scanf("%d%d%d", n.birth, n.birth+1, n.birth+2);
	printf("ŒŒ‰tŒ^‚ğ“ü—Í : ");
	scanf("%s", n.blood);

	printf("%s--%d”N%dŒ%d“ú¶ ŒŒ‰tŒ^-%sŒ^", n.name, n.birth[0], n.birth[1], n.birth[2], n.blood);
}