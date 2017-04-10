#include<stdio.h>
#include<conio.h>


void main()
	{
			int principle,rate,omi,toti,time,totalamt;
				clrscr();
					printf("\n Enter Priniciple AMount :");
						scanf("%d",&principle);
							printf("\n Enter rate of Intrest");
								scanf("%d",&rate);
									omi=principle*rate/100;
										printf("\n The one month itrest is %d",omi);

											 printf("\n Enter Number of Months:");
											 	 scanf("%d",&time);
												 	 toti=omi*time;
													 	 printf("\n The Total Intrest is %d",toti);
														 totalamt=principle+toti;
														 	 printf("\n The Total Payable Amount is %d",totalamt);
															 	 getch();
																 }
