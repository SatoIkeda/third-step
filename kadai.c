#include<stdio.h>
#include<math.h>

int main(){
	double rika[20] ={65,80,67,35,58,60,72,75,68,92,36,50,2,58.5,46,42,78,62,84,70};
	double eigo[20] = {44,87,100,63,52,60,58,73,55,86,29,56,89,23,65,84,64,27,86,84};
	double rika_ave=0.0;
	double eigo_ave=0.0;	
	double rika_hensa=0.0;
	double eigo_hensa=0.0;			
	double rika_all = 0.0;
	double eigo_all = 0.0;	
	double rika_hensati[20];
	double eigo_hensati[20];	
	double rika_temp,eigo_temp;
	int i,j;	
	
	for(i=0;i<20;i++){
		rika_ave+=rika[i];
		eigo_ave+=eigo[i];
	}
	rika_all = rika_ave;
	eigo_all = eigo_ave;	
	rika_ave = rika_ave/20;	
	eigo_ave = eigo_ave/20;
	for(i=0;i<20;i++){
		rika_hensa += (pow(rika[i]-rika_ave,2.0));	
		eigo_hensa += (pow(eigo[i]-eigo_ave,2.0));	
	}
		
	rika_hensa = sqrt(rika_hensa/20.0);
	eigo_hensa = sqrt(eigo_hensa/20.0);


	for(i=0;i<20;i++){
		rika_hensati[i] = 50.0+(rika[i]-rika_ave)/2.0;
		eigo_hensati[i] = 50.0+(eigo[i]-rika_ave)/2.0;
	}
	for(i=0;i<20;++i){
		for(j=0;j<20;++j){
			if(rika[i]>rika[j]){
				rika_temp = rika[i];
				rika[i] = rika[j];
				rika[j] = rika_temp;
			}
			if(eigo[i]>eigo[j]){
				eigo_temp = eigo[i];
				eigo[i] = eigo[j];
				eigo[j] = eigo_temp;
			}
		}
	}

	printf("理科の平均点：%lf\n",rika_ave);	
	printf("英語の平均点；%lf\n",eigo_ave);
	printf("理科の標準偏差:%lf\n",rika_hensa);
	printf("英語の標準偏差：%lf\n",eigo_hensa);
	printf("理科の合計点：%lf\n",rika_all);
	printf("英語の合計点：%lf\n",eigo_all);
	printf("理科の偏差値\n");	
	for(i=0;i<20;i++){
		printf("%d：%lf\n",i,rika_hensati[i]);
	}
	printf("英語の偏差値\n");	
	for(i=0;i<20;i++){	
		printf("%d：%lf\n",i,eigo_hensati[i]);
	}
	printf("理科の点数：");
	for(i=0;i<20;i++){
		printf("%d ",(int)rika[i]);
	}	
	printf("\n英語の点数：");
	for(i=0;i<20;i++){
		printf("%d ",(int)eigo[i]);
	}
	printf("\n");
	return 0;
}


