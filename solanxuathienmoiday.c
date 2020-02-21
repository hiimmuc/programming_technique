//#include<stdio.h>
//#include<string.h>
//#include<conio.h>
//#include<stdlib.h>
//#define _CRT_SECURE_NO_WARNINGS_GLOBALS_

//int main() {
//	//input
//	char str1[30];
//	char str2[30];
//	printf("enter strings:\n");
//	printf("\nenter string 1: \n"); fflush(stdin);
//	gets(str1);
//	printf("\nenter string 2: \n"); fflush(stdin);
//	gets(str2);
//	//process
////string1	
//	
//	strcat_s(str1,30, str2);
//
//	char tmp1[30];
//	int i, j, k;
//	tmp1[0] = str1[0];
//	int dem1[30];
//	dem1[0] = 1;
//	tmp1[1] = '\0';
//	int num = 0;
//
//	for (i = 1; i <(int) strlen(str1); ++i) {
//		for (j = 0; j <(int) strlen(tmp1); ++j) {
//			if (tmp1[j] == str1[i]) {
//				num++;
//			}
//		}if (num == 0) {
//
//			k = strlen(tmp1) + 1;
//			tmp1[k] = tmp1[k - 1];
//			tmp1[k - 1] = str1[i];
//		}
//
//		num = 0;
//	}
//	for (i = 0; i < (int)strlen(tmp1); ++i) {
//		dem1[i] = 0;
//		for (j = 0; j < (int)strlen(str1); ++j) {
//			if (tmp1[i] == str1[j]) {
//				dem1[i]++;
//			}
//		}
//	}
//	k = (int)strlen(tmp1);
//	dem1[k + 1] = '\0';
//	printf("characters appear in two strings are: \n"); puts(tmp1);
//	printf("\nthe number of times that each character appear correspondingly is: \n");
//	for (i = 0; i < k; ++i) {
//		printf("%c: %d times\n", tmp1[i], dem1[i]);
//	}
//
//	//string2	
//	/*	char tmp2[30];
//		tmp2[0]=str2[0];
//		int dem2[100];
//		dem2[0]=1;
//		tmp2[1]='\0';
//
//		for(i=1;i<strlen(str2);++i){
//			for(j=0;j<strlen(tmp2);++j){
//				if(tmp2[j]==str2[i]){
//					num++;
//				}
//		}if(num==0){
//
//					k=strlen(tmp2)+1;
//					tmp2[k]=tmp2[k-1];
//					tmp2[k-1]=str2[i];
//				}
//
//			num=0;
//		}
//		for(i=0;i<strlen(tmp2);++i){
//			dem2[i]=0;
//			for(j=0;j<strlen(str2);++j){
//				if(tmp2[i]==str2[j]){
//					dem2[i]++;
//				}
//			}
//		}
//		k=strlen(tmp2);
//		dem2[k+1]='\0';
//		printf("\ncharacters appear in two strings are: \n");puts(tmp2);
//		printf("\nthe number of times that each character appear correspondingly is: \n");
//		for(i=0;i<strlen(tmp2);++i){
//			printf("%c: %d times\n",tmp2[i],dem2[i]);
//		}*/
//	_getch();
//	return 0;
//}