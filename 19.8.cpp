	#include<stdio.h>
	#include<string.h>
	struct gakusei{
		int shikibetsubangou;
		char namae[100];
		char denwabangou[25];
	};
	void yobu(struct gakusei risuto[],int size){
		for(int i = 0 ; i < size ; i++){
			printf("\n shikibetsu bangou = %d , namaen = %s ,enwa bangou = %s\n ",risuto[i].shikibetsubangou ,risuto[i].namae ,risuto[i].denwabangou  );
		}
	}
	void naraberu(struct gakusei risuto[],int size){
		for(int i = 0 ;i<size;i++){
			for(int j = i+1 ; j < size ; j++){
				if(strcmp(risuto[i].namae , risuto[j].namae) > 0){
					struct gakusei temp = risuto[i];
					risuto[i] = risuto[j];
					risuto[j] = temp;
				}
			}
		}
	printf("sau \n");	
		yobu(risuto,size);	
	}
	int main (){
		struct gakusei risuto[50] = {
			{1, "Ky Do ", "0123456789"},
		    {2, "bach nguyn hahahihi","0987654321"},
		    {3, "sensei","0133654546"},
		    {4, "hehe", "0112233445"},
		    {5, "hihi","0334455667"}
		};
	int size = 5;
	printf("truoc ");	
		yobu(risuto,size);
		naraberu(risuto,size);
		return 0;
	} 
