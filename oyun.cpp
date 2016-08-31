#include<stdio.h>

int main(){



	int y= 22;
		int dizi[24][24],i,j,a,k=1,out=0,t=0,x=0,q,b,cikis=0,v,yas=0,ya=0;
	printf("WELCOME TO GAME  \n");
	printf("You are marked in star(*). dont allow enemy to field where you are in \n");
		printf("Your enemy is marked in cross(x).  \n");
	printf("if your enemy indise to your field you will lose  \n");
	printf("you should catch your enemy  \n");
	printf("dont forget that it is your enemy and it is faster than you  \n \n");
	printf("GOOD LIKE \n");
		for(i=0;i<24;i++){
				for(j=0;j<24;j++){
					dizi[i][j]=0;
				}

		}

	for(i=0;i<24;i++){
		for(j=0;j<24;j++){
			if(j==22 && i==22){
				dizi[i][j]=1;


			}
		else	if(j==1 && i==1){
				dizi[i][j]=2;


			}

			else{
				dizi[i][j]=0;
			}



	}
}
	for(i=0; i<24; i++){
		for(j=0;j<24;j++){

		if(	dizi[i][j]==1){
			printf("x ");
		}
			else if(	dizi[i][j]==2){
			printf("* ");
		}
		else{
			printf(". ");
		}
	}
		printf("\n");

	}


	printf("click to 1 for learning game rule , click to 2 for starting  \n");
	scanf("%d",&q);
	if(q==1){

	printf("RULES  \n");
	printf("click to 6 for going to right a unit  \n");
	printf("click to 2 for going to below  a unit  \n");
	printf("click to 4 for going to left a unit  \n");
	printf("click to 8 for going to up a unit  \n");
		printf("please dont exceed boundary \n");
		printf(" click to 2 for starting ");
		scanf("%d",&b);

	}
	






if(q==2 || b==2){
		for(i=0;i<24;i++){
				for(j=0;j<24;j++){
					dizi[i][j]=0;
				}

		}

	for(i=0;i<24;i++){
		for(j=0;j<24;j++){
			if(j==22 && i==22){
				dizi[i][j]=1;


			}
		else	if(j==1 && i==1){
				dizi[i][j]=2;


			}

			else{
				dizi[i][j]=0;
			}



	}
}
	for(i=0; i<24; i++){
		for(j=0;j<24;j++){

		if(	dizi[i][j]==1){
			printf("x ");
		}
			else if(	dizi[i][j]==2){
			printf("* ");
		}
		else{
			printf(". ");
		}
	}
		printf("\n");

	}










	while(cikis!=1){
		x=0;k=1;
		out=0;
		k=1;
		

	int y= 22;

			printf("PLEASE START \n ");
		printf("you have 22 rights  \n");



		while(k<=22){
			out=0;

		scanf("%d",&a);




		if(a==6){

		y=y-1;

					for(i=0; i<24; i++){

						for(j=0;j<24;j++){

							if(dizi[i][j]==1){
								dizi[i][j]=0;
								dizi[y][y]=1;
								if(y==0){
									x=2;
									break;
								}


							}
							if(x==2){break;
							}
						}


					}


				for(i=0; i<24; i++){
						for(j=0;j<24;j++){
							if(dizi[i][j]==2){
								dizi[i][j]=0;

								dizi[i][j+1]=2;




									if(i==y && j+1==y){

									printf("\n");
									x=1;
									break;
								}
									if(i>23 || j+1>23){


									printf("\n");
									x=2;
									break;
								}


										out=1;
								break;


							}




						}
						if(out==1){
							break;
						}
						if(x==1){
							break;
						}
							if(x==2){
							break;
						}


				}





		}


			if(a==2){


						y=y-1;

					for(i=0; i<24; i++){

						for(j=0;j<24;j++){

							if(dizi[i][j]==1){
								dizi[i][j]=0;
								dizi[y][y]=1;
								if(y==0){
									x=2;
									break;
								}


							}
							if(x==2){
							break;
							}
						}


					}


				for(i=0; i<24; i++){
						for(j=0;j<24;j++){
							if(dizi[i][j]==2){
								dizi[i][j]=0;

								dizi[i+1][j]=2;
									if(i+1==y && j==y){

									printf("\n");
									x=1;
									break;
								}
									if(i+1>23 || j>23){


									printf("\n");
									x=2;
									break;
								}
								out=1;
								break;
							}


						}
						if(out==1){
							break;
						}
						if(x==1){
							break;
						}
							if(x==2){
							break;
						}


				}





		}
			if(a==4){

					y=y-1;

					for(i=0; i<24; i++){

						for(j=0;j<24;j++){

							if(dizi[i][j]==1){
								dizi[i][j]=0;
								dizi[y][y]=1;
								if(y==0){
									x=2;
									break;
								}


							}
							if(x==2){break;
							}
						}


					}
				for(i=0; i<24; i++){
						for(j=0;j<24;j++){
							if(dizi[i][j]==2){
								dizi[i][j]=0;

								dizi[i][j-1]=2;
								if(i==y && j-1==y){

									printf("\n");
									x=1;
									break;
								}
								out=1;
									if(i<0 || j-1<0){

									printf("\n");
									x=2;
									break;
								}
								break;

							}


						}
						if(out==1){
							break;
						}
							if(x==2){
							break;
						}


				}



		}
			if(a==8){

				y=y-1;

					for(i=0; i<24; i++){

						for(j=0;j<24;j++){

							if(dizi[i][j]==1){
								dizi[i][j]=0;
								dizi[y][y]=1;
								if(y==0){
									x=2;
									break;
								}


							}
							if(x==2){break;
							}
						}


					}
				for(i=0; i<24; i++){
						for(j=0;j<24;j++){
							if(dizi[i][j]==2){
								dizi[i][j]=0;

								dizi[i-1][j]=2;

								if(i-1==y && j==y){

									printf("\n");
									x=1;
									break;
								}
								out=1;
									if(i-1<0 || j<0){

									printf("\n");
									x=2;
									break;
								}
								break;

							}


						}
						if(out==1){
							break;
						}
							if(x==2){
							break;
						}


				}





		}
				for(i=0; i<24; i++){
		for(j=0;j<24;j++){

		if(	dizi[i][j]==1){
			printf("x ");
		}
			else if(	dizi[i][j]==2){
			printf("* ");
		}
		else{
			printf(". ");
		}
			if(x==1){
							break;
						}
	}
		printf("\n");
			if(x==1){
							break;
						}
	}
		if(x==1){
			for(i=0;i<24;i++){
	for(j=0;j<24;j++){
		printf("* ");
	}
	printf("\n");

}
	printf("WIN \n ");
	yas++;
							break;
						}
							if(x==2){
			for(i=0;i<24;i++){
	for(j=0;j<24;j++){
		printf("X ");
	}
	printf("\n");

}
	printf("LOSE \n ");
	ya++;
							break;
							
						}
						if(k!=15){
								printf("\n you have  %d rights   \n",22-k);

						}



	k++;
			if(k>22){
		for(i=0;i<24;i++){
	for(j=0;j<24;j++){
		printf("X ");
	}
	printf("\n");
}
		printf("LOSE \n");
	}
	}




	printf("click to 1 to out  \n");
		printf("click to a number excrpt 1 for contunie game \n");


		scanf("%d",&v);
		if(v!=1){

				for(i=0;i<24;i++){
		for(j=0;j<24;j++){
			if(j==22 && i==22){
				dizi[i][j]=1;


			}
		else	if(j==1 && i==1){
				dizi[i][j]=2;


			}

			else{
				dizi[i][j]=1;
			}



	}
}
for(i=0; i<24; i++){
		for(j=0;j<24;j++){

		if(	dizi[i][j]==1){
			printf("x ");
		}
			else if(	dizi[i][j]==2){
			printf("* ");
		}
		else{
			printf(". ");
		}
	}
		printf("\n");

	}

		}
		if(v==1){
			
			printf("you have won %d times  \n",yas);
				printf("you have losed %d times",ya);
			cikis=1;
		}
}











}

}
