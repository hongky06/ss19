#include<stdio.h>
struct sinhvien {
	int id;
	char name[100];
	char sdt[25];
};

void goi(struct sinhvien danhsach [],int size){

	for(int i = 0 ; i < size;i++){
		printf("\nid: %d , ten : %s , std: %s\n",danhsach[i].id , danhsach[i].name , danhsach[i].sdt);
	}
}

void xoa(struct sinhvien danhsach [],int *size ){
int a;
printf("nhap id ban muon xoa: ");
scanf("%d",&a);
a=a-1;
	if(a > 0 && a <= *size){
	for(int i = a; i < *size-1 ; i ++){
		danhsach[i]=danhsach[i+1];
		}
	}else{
		printf("id khong co trong mang");
		}
		(*size)-=1;
printf("\nsau khi xoa");
goi(danhsach,*size);
}




int main(){
	struct sinhvien danhsach [50]= {
		{1, "Nguyen Van A", "0123456789"},
        {2, "Le Thi B", "0987654321"},
        {3, "Tran Van C", "0112233445"},
        {4, "Pham Thi D","0223344556"},
        {5, "Hoang Van E", "0334455667"}
	};
int size = 5;
printf("ban dau");
goi(danhsach , size );
xoa(danhsach, &size );


	return 0;
}
