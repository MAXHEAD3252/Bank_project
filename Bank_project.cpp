// BANK MANAGEMENT+
// PROJECT FOR TRAINING 
#include<stdio.h>
#include<string.h>
#include<conio.h>
#define nsize 20
#define asize 50
int create_account();
int deposit();
int withdrawal();
int loan();
int report();
int atm_card();
int credit_card();
int check_book();
int transection();
char fname[nsize],lname[nsize];
char faname[nsize],falname[nsize];
char mname[nsize],mlname[nsize];
char nofname[nsize],nolname[nsize];
int mono,age,gen,occu,type,acc,am,aadhar,pan,job,tyjob,an,lonty,lonamo,addop,re,acc1,acc2,report1,day,mon,year;
char address[asize],ofaddress[asize],com[20];
int main()
{
	int first_choice;
	printf("\t\t\t\t\t\t\t\t\t\t\t  --*-- INSTITUTIONAL TRANING PROJECT --*--\n");
	printf("\t\t\t\t\t\t\t\t\t\t\t      --*-- WELCOME TO SWISS BANK --*--\n");
	printf("\t\t\t\t\t\t\t\t\t --*-- PLEASE FOLLOW ALL SAFETY MEASURES AFTER YOU LEAVE YOUR HOUSE --*--\n");
	printf("==================================================================================================================================================================================================================\n");
	printf("\t\t\t__WEAR MASK ALL TIME IN THE BANK__\n");
	printf("\t\t\t__USE SANITISER BEFORE ENTERING__ \n");
	printf("\t\t\t__MANTAIN SOCIAL DISTANCING__\n");
	printf("\t\t\t__ALSO FOLLOW ALL GUIDANCE ISSUED BY GOVERNMENT__\n");
	printf("==================================================================================================================================================================================================================\n");
	printf("\t\t\t\t\t\t\t\t\t\t  --*-- CHOOSE YOUR SERVICES ((___ENTER THE CHOSEN NUMBER___))--*--\n");
	printf("\t\t\t--1--CREATE ACCOUNT IN OUR BANK--\n");
	printf("\t\t\t--2--DEPOSIT MONEY IN THE EXISTING ACCOUNT--\n");
	printf("\t\t\t--3--WITHDRAW MONEY FROM THE EXISTING ACCOUNT--\n");
	printf("\t\t\t--4--APPLY FOR CHECK BOOK--\n");
	printf("\t\t\t--5--APPLY FOR ATM CARD--\n");
	printf("\t\t\t--6--APPLY FOR CREDIT CARD--\n");
	printf("\t\t\t--7--APPLY FOR LOAN--\n");
	printf("\t\t\t--8--BANK TRANSECTION--\n");
	printf("\t\t\t--9--REPORT FOR ANY CIBER CRIME AND PHISHINGS OR ANY OTHER PROBLEMS--\n");
    printf("\t\t\t--10--EXIT--\n");
	printf("==================================================================================================================================================================================================================\n");
	scanf("%d",&first_choice);
	switch(first_choice)
	{
		case 1:
			create_account();
			break;
			case 2:
				deposit();
				break;
				case 3:
					withdrawal();
					break;
					case 4:
						check_book();
						break;
						case 5:
							atm_card();
							break;
							case 6:
								credit_card();
								break;
								case 7:
									loan();
									break;
									case 8:
										transection();
										break;
										case 9:
											report();
											break;
											case 10:
												printf("\t\t\t__THANK YOU __\n");
												break;
	}
return 0;	       	
}
//creation of account
int create_account()
{
	printf("\t\t\t\t\t\t\t\t\t\t  --*- ENTER YOUR PERSONAL INFORMATION --*--\n");
		printf("==================================================================================================================================================================================================================\n");
	printf("\t\t\t__ENTER YOUR FIRST NAME__\n");
	scanf("%s",&fname);
	printf("\t\t\t__ENTER YOUR LAST NAME__\n");
	scanf("%s",&lname);
	printf("\t\t\t__ENTER YOUR FATHER'S FIRST NAME__\n");
	scanf("%s",&faname);
	printf("\t\t\t__ENTER YOUR FATHER'S LAST NAME__\n");
	scanf("%s",&falname);
	printf("\t\t\t__ENTER YOUR MOTHER'S FIRST NAME__\n");
	scanf("%s",&mname);
	printf("\t\t\t__ENTER YOUR FATHER'S LAST NAME__\n");
	scanf("%s",mlname);
	printf("\t\t\t__ENTER YOUR MOBILE NO.__\n");
	scanf("%d",&mono);
	adh:
	printf("\t\t\t__ENTER YOUR AADHAR CARD NO.__\n");
	scanf("%d",&aadhar);
	if(aadhar==123456789)
	{
		goto ag;
	}
	else
	{
			printf("\t\t\t__INVALID AADHAR CARD NO. PLEASE TRY AGAIN__\n");
			goto adh;
	}
	ag:
    printf("\t\t\t__ENTER YOUR AGE__\n");
    scanf("%d",&age);
    if(age>=18 && age<=105)
    {
    	goto ge;
	}
	else
	{
		printf("\t\t\t__INVALID AGE PLEASE TRY AGAIN__\n");
		goto ag;
	}
	ge:
		printf("\t\t\t__ENTER YOUR GENDER (male='1',female='2',transegender='3')__\n");
		scanf("%d",&gen);
		if(gen=1)
		{
			goto next;
		}
		else if(gen=2)
		{
			goto next;
		}
		else if(gen=3)
		{
			goto next;
		}
		else
		{
			printf("\t\t\t__INVALID GENDER PLEASE TRY AGAIN__\n");
			goto ge;
		}
		next:
			printf("\t\t\t__ENTER YOUR ADDRESS__\n");
			scanf("%s",&address);
			occ:
				printf("\t\t\t__ENTER YOUR OCCUPATION__\n");
			    	printf("\t\t\t--1-- 10th+ --\n");
			    	printf("\t\t\t--2-- 12th+ --\n");
			    	printf("\t\t\t--3-- DIPLOMA --\n");
			    	printf("\t\t\t--4-- GRADUATED --\n");
			    	printf("\t\t\t--5-- POST GRADUATED --\n");
			    	printf("\t\t\t--6-- ILLITRATE --\n");
				    scanf("%d",&occu);
				    if(occu=1)
				    {
				    	goto ty;
					}
					else if(occu=2)
				    {
				    	goto ty;
					}
					else if(occu=3)
				    {
				    	goto ty;
					}
					else if(occu=4)
				    {
				    	goto ty;
					}
					else if(occu=5)
				    {
				    	goto ty;
					}
					else if(occu=6)
				    {
				    	goto ty;
					}
					else
					{
						printf("\t\t\t__INVALID occupation PLEASE TRY AGAIN__\n");
						goto occ;
				}
					ty:
						printf("\t\t\t__ENTER THE TYPE OF ACCOUNT YOU WANT TO CREATE__\n");
						printf("\t\t\t--1-- SAVING ACCOUNT --\n");
						printf("\t\t\t--2-- CURRENT ACCOUNT --\n");
						scanf("%d",&type);
						if(type=1)
						{
							goto dat;
						}
						else if(type=2)
						{
							goto dat;
						}
						else 
						{
						printf("\t\t\t__INVALID ACCOUNT TYPE PLEASE TRY AGAIN__\n");
						goto ty;
						}
						dat:
                             printf("\t\t\t__Enter date(MM/DD/YYY)__: \n");
                            scanf("%d/%d/%d", &mon, &day, &year);
                            if(day<=31 &&  mon<=12 &&  year==2021 )
                            {
                            goto nom;	
							}
							else
							{
							printf("\t\t\t__INVALID ACCOUNT TYPE PLEASE TRY AGAIN__\n");
							goto dat;
							}
						nom:
						printf("\t\t\t__ENTER THE NOMINIE FIRST NAME__\n");
						scanf("%s",&nofname);
						printf("\t\t\t__ENTER THE NOMINIE LAST NAME__\n");
						scanf("%s",&nolname);
						printf("\t\t\t__YOUR ACCOUNT HAS BEEN CREATED SUCCESSFULLY__\n");
						printf("\t\t\t__YOUR PASS BOOK WILL BE DELIVERD IN 2 DAYS__\n");
						printf("\t\t\t__IF YOU WANT TO REPEAT PRESS 0 ELSE YOU WANT TO EXIT ENTER ANY OTHER NUMBER__\n");
						scanf("%d",&re);
						if(re==0)
						{
		                   main();
		                }
		                else
		                {
		                	printf("\t\t\t__THANK YOU FOR CHOOSING OUR BANK__\n");
						}
}
int total_amount;
// deposit in account
int deposit()
{
	char sign[nsize];
	printf("\t\t\t\t\t\t\t\t\t\t  --*- ENTER YOUR INFORMATION --*--\n");
		printf("==================================================================================================================================================================================================================\n");
	printf("\t\t\t__ENTER YOUR FIRST NAME__\n");
	scanf("%s",&fname);
	printf("\t\t\t__ENTER YOUR LAST NAME__\n");
	scanf("%s",&lname);
	printf("\t\t\t__ENTER YOUR MOBILE NO.__\n");
	scanf("%d",&mono);
	printf("\t\t\t__ENTER YOUR ACCOUNT NO.__\n");
	scanf("%d",&acc);
	dat:
                             printf("\t\t\t__Enter date(MM/DD/YYY)__: \n");
                            scanf("%d/%d/%d", &mon, &day, &year);
                            if(day<=31 &&  mon<=12 &&  year==2021 )
                            {
                            goto amo;	
							}
							else
							{
							printf("\t\t\t__INVALID ACCOUNT TYPE PLEASE TRY AGAIN__\n");
							goto dat;
							}
	amo:
	printf("\t\t\t__ YOUR ACCOUNT DEPOSIT LIMIT IS 200-500,000 RUPEES YOU CAN'T DEPOSIT MORE THE YOUR LIMIT __\n");
	printf("\t\t\t__ENTER YOUR DEPOSITING AMMOUNT__\n");
	scanf("%d",&am);
	if(am>200 && am<=500000)
	{
		goto si;
	}
	else
	{
		printf("\t\t\t__INVALID AMOUNT PLEASE TRY AGAIN __\n");
		goto amo; 
	}
	si:
		total_amount=total_amount+am;
		printf("\t\t\t__ENTER YOUR SIGN__\n");
		scanf("%s",&sign);
		printf("\t\t\t__YOUR AMOUNT HAS BEEN DEPOSITED TO YOUR ACOUNT__\n");
		printf("\t\t\t__THANK YOU__\n");
		printf("\t\t\t__IF YOU WANT TO REPEAT PRESS 0 ELSE YOU WANT TO EXIT ENTER ANY OTHER NUMBER__\n");
						scanf("%d",&re);
						if(re==0)
						{
		                   main();
		                }
		                else
		                {
		                	printf("\t\t\t__THANK YOU FOR CHOOSING OUR BANK__\n");
						}
}
// withdrawal from account
int withdrawal()
{

	char sign[nsize];
	printf("\t\t\t\t\t\t\t\t\t\t  --*- ENTER YOUR INFORMATION --*--\n");
		printf("==================================================================================================================================================================================================================\n");
	printf("\t\t\t__ENTER YOUR FIRST NAME__\n");
	scanf("%s",&fname);
	printf("\t\t\t__ENTER YOUR LAST NAME__\n");
	scanf("%s",&lname);
	printf("\t\t\t__ENTER YOUR MOBILE NO.__\n");
	scanf("%d",&mono);
	printf("\t\t\t__ENTER YOUR ACCOUNT NO.__\n");
	scanf("%d",&acc);
	dat:
                             printf("\t\t\t__Enter date(MM/DD/YYY)__: \n");
                            scanf("%d/%d/%d", &mon, &day, &year);
                            if(day<=31 &&  mon<=12 &&  year==2021 )
                            {
                            goto amo;	
							}
							else
							{
							printf("\t\t\t__INVALID ACCOUNT TYPE PLEASE TRY AGAIN__\n");
							goto dat;
							}
	amo:
	printf("\t\t\t__ YOUR ACCOUNT WITHDRAWAL LIMIT IS 200-200,000 RUPEES YOU CAN'T WITHDRAWAL MORE THE YOUR LIMIT __\n");
	printf("\t\t\t__ENTER YOUR WITHDRAWAL AMMOUNT__\n");
	scanf("%d",&am);
	if(am>200 && am<=200000)
	{
		goto si;
	}
	else
	{
		printf("\t\t\t__INVALID AMOUNT PLEASE TRY AGAIN __\n");
		goto amo; 
	}
	si:
		hm:
		printf("\t\t\t__ENTER YOUR SIGN__\n");
		scanf("%s",&sign);
		printf("\t\t\t__YOUR AMOUNT HAS BEEN DEPOSITED TO YOUR ACOUNT__\n");
		printf("\t\t\t__THANK YOU__\n");
	    printf("\t\t\t__IF YOU WANT TO REPEAT PRESS 0 ELSE YOU WANT TO EXIT ENTER ANY OTHER NUMBER__\n");
						scanf("%d",&re);
						if(re==0)
						{
		                   main();
		                }
		                else
		                {
		                	printf("\t\t\t__THANK YOU FOR CHOOSING OUR BANK__\n");
						}
}
int loan()
{
	printf("\t\t\t\t\t\t\t\t\t\t  --*- ENTER YOUR INFORMATION --*--\n");
		printf("==================================================================================================================================================================================================================\n");
	printf("\t\t\t__ENTER YOUR FIRST NAME__\n");
	scanf("%s",&fname);
	printf("\t\t\t__ENTER YOUR LAST NAME__\n");
	scanf("%s",&lname);
	printf("\t\t\t__ENTER YOUR FATHER'S FIRST NAME__\n");
	scanf("%s",&faname);
	printf("\t\t\t__ENTER YOUR FATHER'S LAST NAME__\n");
	scanf("%s",&falname);
	printf("\t\t\t__ENTER YOUR MOTHER'S FIRST NAME__\n");
	scanf("%s",&mname);
	printf("\t\t\t__ENTER YOUR MOTHERS'S LAST NAME__\n");
	scanf("%s",mlname);
	printf("\t\t\t__ENTER YOUR MOBILE NO.__\n");
	scanf("%d",&mono);
	ag:
    printf("\t\t\t__ENTER YOUR AGE__\n");
    scanf("%d",&age);
    if(age>=18 && age<=105)
    {
    	goto ge;
	}
	else
	{
		printf("\t\t\t__INVALID AGE PLEASE TRY AGAIN__\n");
		goto ag;
	}
	ge:
		printf("\t\t\t__ENTER YOUR GENDER (male='1',female='2',transegender='3')__\n");
		scanf("%d",&gen);
		if(gen=1)
		{
			goto adh;
		}
		else if(gen=2)
		{
			goto adh;
		}
		else if(gen=3)
		{
			goto adh;
		}
		else
		{
			printf("\t\t\t__INVALID GENDER PLEASE TRY AGAIN__\n");
			goto ge;
		}
		dat:
                             printf("\t\t\t__Enter date(MM/DD/YYY)__: \n");
                            scanf("%d/%d/%d", &mon, &day, &year);
                            if(day<=31 &&  mon<=12 &&  year==2021 )
                            {
                            goto adh;	
							}
							else
							{
							printf("\t\t\t__INVALID ACCOUNT TYPE PLEASE TRY AGAIN__\n");
							goto dat;
							}
	adh:
	printf("\t\t\t__ENTER YOUR ADDRESS__\n");
	scanf("%s",&address);
	printf("\t\t\t__ENTER YOUR AADHAR CARD NO.__\n");
	scanf("%d",&aadhar);
	if(aadhar==123456789)
	{
		goto pan;
	}
	else
	{
			printf("\t\t\t__INVALID AADHAR CARD NO. PLEASE TRY AGAIN__\n");
			goto adh;
	}
		pan:
	printf("\t\t\t__ENTER YOUR PAN CARD NO.__\n");
	scanf("%d",&pan);
	if(pan==123456789)
	{
		goto occ;
	}
	else
	{
			printf("\t\t\t__INVALID AADHAR CARD NO. PLEASE TRY AGAIN__\n");
			goto pan;
	}
			occ:
				printf("\t\t\t__ENTER YOUR OCCUPATION__\n");
			    	printf("\t\t\t--1-- 10th+ --\n");
			    	printf("\t\t\t--2-- 12th+ --\n");
			    	printf("\t\t\t--3-- DIPLOMA --\n");
			    	printf("\t\t\t--4-- GRADUATED --\n");
			    	printf("\t\t\t--5-- POST GRADUATED --\n");
			    	printf("\t\t\t--6-- ILLITRATE --\n");
				    scanf("%d",&occu);
				    if(occu=1)
				    {
				    	goto sc;
					}
					else if(occu=2)
				    {
				    	goto sc;
					}
					else if(occu=3)
				    {
				    	goto sc;
					}
					else if(occu=4)
				    {
				    	goto sc;
					}
					else if(occu=5)
				    {
				    	goto sc;
					}
					else if(occu=6)
				    {
				    	goto sc;
					}
					else
					{
						printf("\t\t\t__INVALID occupation PLEASE TRY AGAIN__\n");
						goto occ;
				}
				sc:
				printf("\t\t\t__ENTER YOUR SOURCE OF INCOME__\n");
			    printf("\t\t\t--1-- JOB --\n");
			    printf("\t\t\t--2-- BUSINESS --\n");
				printf("\t\t\t--3-- ENTREPRENEUR --\n");	
			    scanf("%d",&job);
			    if(job=1)
			    {
			    printf("\t\t\t--1-- PRIVATE --\n");
			    printf("\t\t\t--2-- GOVERNMENT --\n");
				scanf("%d",&tyjob);
				if(tyjob=1)
				{
					printf("\t\t\t__ENTER YOUR COMPANY NAME__\n");
					scanf("%s",&com);
					goto anin;
					}	
				}
				else if(tyjob=2)
				{
					printf("\t\t\t__ENTER YOUR COMPANY NAME__\n");
					scanf("%s",&com);
					goto anin;
				}
				else if(tyjob=3)
				{
					printf("\t\t\t__ENTER YOUR WORK NAME__\n");
					scanf("%s",&com);
					goto anin;
				}
			    else{
			    	printf("\t\t\t__INVALID JOB PLEASE TRY AGAIN__\n");
			    	goto sc;
				}
				anin:
				printf("\t\t\t__ENTER YOUR ANNUAL INCOME__\n");
				scanf("%d",&an);
				if(an>=5000 && an<=1000000)
				{
					goto loanty;
				}
				else
				{
					printf("\t\t\t__INVALID ANNUAL INCOME PLEASE TRY AGAIN__\n");
					goto anin;
				}
				loanty:
					printf("\t\t\t__ENTER THE TYPE OF LOAN YOU WANT:-__\n");
					printf("\t\t\t--1-- HOME LOAN --\n");
			        printf("\t\t\t--2-- CAR LOAN --\n");
			        printf("\t\t\t--3-- EDUCATION LOAN --\n");
			        printf("\t\t\t--4-- BUSINESS LOAN --\n");
			        printf("\t\t\t--5-- PERSONAL LOAN --\n");
					scanf("%d",&lonty);
					if(lonty=1)
					{
						goto lonam;
					}
					else if(lonty=2)
					{
						goto lonam;
					}
					else if(lonty=3)
					{
						goto lonam;
					}
					else if(lonty=4)
					{
						goto lonam;
					}
					else if(lonty=5)
					{
						goto lonam;
					}
					else 
					{
						printf("\t\t\t__INVALID LOAN TYPE PLEASE TRY AGAIN__\n");
						goto loanty;
					}
					lonam:
						printf("\t\t\t__ENTER YOUR LOAN AMOUNT__\n");
						scanf("%d",&lonamo);
						if(lonamo>=50000 && lonamo<=10000000)
						{
							printf("\t\t\t__CONGRAULATIONS YOUR LOAN HAS BEEN APPROVED__\n");
							printf("\t\t\t__YOU %d RUPEES WILL BE TRANSFERED IN 1 DAY __\n",lonamo);
							printf("\t\t\t__THANK YOU__\n");
						}
						printf("\t\t\t__IF YOU WANT TO REPEAT PRESS 0 ELSE YOU WANT TO EXIT ENTER ANY OTHER NUMBER__\n");
						scanf("%d",&re);
						if(re==0)
						{
		                   main();
		                }
		                else
		                {
		                	printf("\t\t\t__THANK YOU FOR CHOOSING OUR BANK__\n");
						}
}
int atm_card()
{
	printf("\t\t\t\t\t\t\t\t\t\t  --*- ENTER YOUR INFORMATION --*--\n");
		printf("==================================================================================================================================================================================================================\n");
	printf("\t\t\t__ENTER YOUR FIRST NAME__\n");
	scanf("%s",&fname);
	printf("\t\t\t__ENTER YOUR LAST NAME__\n");
	scanf("%s",&lname);
	printf("\t\t\t__ENTER YOUR FATHER'S FIRST NAME__\n");
	scanf("%s",&faname);
	printf("\t\t\t__ENTER YOUR FATHER'S LAST NAME__\n");
	scanf("%s",&falname);
	printf("\t\t\t__ENTER YOUR MOTHER'S FIRST NAME__\n");
	scanf("%s",&mname);
	printf("\t\t\t__ENTER YOUR MOTHERS'S LAST NAME__\n");
	scanf("%s",mlname);
	printf("\t\t\t__ENTER YOUR MOBILE NO.__\n");
	scanf("%d",&mono);
	ag:
    printf("\t\t\t__ENTER YOUR AGE__\n");
    scanf("%d",&age);
    if(age>=18 && age<=105)
    {
    	goto ge;
	}
	else
	{
		printf("\t\t\t__INVALID AGE PLEASE TRY AGAIN__\n");
		goto ag;
	}
	ge:
		printf("\t\t\t__ENTER YOUR GENDER (male='1',female='2',transegender='3')__\n");
		scanf("%d",&gen);
		if(gen=1)
		{
			goto adh;
		}
		else if(gen=2)
		{
			goto adh;
		}
		else if(gen=3)
		{
			goto adh;
		}
		else
		{
			printf("\t\t\t__INVALID GENDER PLEASE TRY AGAIN__\n");
			goto ge;
		}
		dat:
                             printf("\t\t\t__Enter date(MM/DD/YYY)__: \n");
                            scanf("%d/%d/%d", &mon, &day, &year);
                            if(day<=31 &&  mon<=12 &&  year==2021)
                            {
                            goto adh;	
							}
							else
							{
							printf("\t\t\t__INVALID ACCOUNT TYPE PLEASE TRY AGAIN__\n");
							goto dat;
							}
	adh:
	printf("\t\t\t__ENTER YOUR RESIDENCE ADDRESS__\n");
	scanf("%s",&address);
	printf("\t\t\t__ENTER YOUR OFFICE ADDRESS__\n");
	scanf("%s",&ofaddress);
	printf("\t\t\t__ENTER YOUR AADHAR CARD NO.__\n");
	scanf("%d",&aadhar);
	printf("\t\t\t__ON WHICH ADDRESS YOU WANT TO RECIEVE YOUR ATM CARD__\n");
	printf("\t\t\t--1-- RESIDENCE ADDRESS --\n");
	printf("\t\t\t--2-- OFFICE ADDRESS --\n");
	adha:
	scanf("%d",&addop);
	if(aadhar==123456789)
	{
		printf("\t\t\t__YOU WILL RECIEVE YOU ATM CARD IN TWO WEEKS AT YOUR SELECTED ADDRESS__\n");
		printf("\t\t\t__THANK YOU__\n");
		printf("\t\t\t__IF YOU WANT TO REPEAT PRESS 0 ELSE YOU WANT TO EXIT ENTER ANY OTHER NUMBER__\n");
						scanf("%d",&re);
						if(re==0)
						{
		                   main();
		                }
		                else
		                {
		                	printf("\t\t\t__THANK YOU FOR CHOOSING OUR BANK__\n");
						}
	}
	else
	{
			printf("\t\t\t__INVALID AADHAR CARD NO. PLEASE TRY AGAIN__\n");
			goto adha;
	}
} 
int credit_card()
{
	printf("\t\t\t\t\t\t\t\t\t\t  --*- ENTER YOUR INFORMATION --*--\n");
		printf("==================================================================================================================================================================================================================\n");
  	printf("\t\t\t__ENTER YOUR FIRST NAME__\n");
	scanf("%s",&fname);
	printf("\t\t\t__ENTER YOUR LAST NAME__\n");
	scanf("%s",&lname);
	printf("\t\t\t__ENTER YOUR FIRST FATHER'S NAME__\n");
	scanf("%s",&faname);
	printf("\t\t\t__ENTER YOUR LAST FATHER'S NAME__\n");
	scanf("%s",&falname);
	printf("\t\t\t__ENTER YOUR MOTHER'S FIRST NAME__\n");
	scanf("%s",&mname);
	printf("\t\t\t__ENTER YOUR MOTHERS'S LAST NAME__\n");
	scanf("%s",mlname);
	printf("\t\t\t__ENTER YOUR MOBILE NO.__\n");
	scanf("%d",&mono);
	ag:
    printf("\t\t\t__ENTER YOUR AGE__\n");
    scanf("%d",&age);
    if(age>=18 && age<=105)
    {
    	goto ge;
	}
	else
	{
		printf("\t\t\t__INVALID AGE PLEASE TRY AGAIN__\n");
		goto ag;
	}
	ge:
		printf("\t\t\t__ENTER YOUR GENDER (male='1',female='2',transegender='3')__\n");
		scanf("%d",&gen);
		if(gen=1)
		{
			goto adh;
		}
		else if(gen=2)
		{
			goto adh;
		}
		else if(gen=3)
		{
			goto adh;
		}
		else
		{
			printf("\t\t\t__INVALID GENDER PLEASE TRY AGAIN__\n");
			goto ge;
		}
		dat:
                             printf("\t\t\t__Enter date(MM/DD/YYY)__: \n");
                            scanf("%d/%d/%d", &mon, &day, &year);
                            if(day<=31 &&  mon<=12 &&  year==2021)
                            {
                            goto adh;	
							}
							else
							{
							printf("\t\t\t__INVALID ACCOUNT TYPE PLEASE TRY AGAIN__\n");
							goto dat;
							}
	adh:
	printf("\t\t\t__ENTER YOUR RESIDENCE ADDRESS__\n");
	scanf("%s",&address);
	printf("\t\t\t__ENTER YOUR OFFICE ADDRESS__\n");
	scanf("%s",&ofaddress);
	printf("\t\t\t__ENTER YOUR AADHAR CARD NO.__\n");
	scanf("%d",&aadhar);
	printf("\t\t\t__ON WHICH ADDRESS YOU WANT TO RECIEVE YOUR CREDIT CARD__\n");
	printf("\t\t\t--1-- RESIDENCE ADDRESS --\n");
	printf("\t\t\t--2-- OFFICE ADDRESS --\n");
	dhar:
	scanf("%d",&addop);
	if(aadhar==123456789)
	{
		printf("\t\t\t__YOU WILL RECIEVE YOU CREDIT CARD IN TWO WEEKS AT YOUR SELECTED ADDRESS__\n");
		printf("\t\t\t__THANK YOU__\n");
		printf("\t\t\t__IF YOU WANT TO REPEAT PRESS 0 ELSE YOU WANT TO EXIT ENTER ANY OTHER NUMBER__\n");
						scanf("%d",&re);
						if(re==0)
						{
		                   main();
		                }
		                else
		                {
		                	printf("\t\t\t__THANK YOU FOR CHOOSING OUR BANK__\n");
						}
	}
	else
	{
			printf("\t\t\t__INVALID AADHAR CARD NO. PLEASE TRY AGAIN__\n");
			goto dhar;
	}
} 
int check_book()
{
	printf("\t\t\t\t\t\t\t\t\t\t  --*- ENTER YOUR INFORMATION --*--\n");
		printf("==================================================================================================================================================================================================================\n");
	printf("\t\t\t__ENTER YOUR FIRST NAME__\n");
	scanf("%s",&fname);
	printf("\t\t\t__ENTER YOUR LAST NAME__\n");
	scanf("%s",&lname);
	printf("\t\t\t__ENTER YOUR FATHER'S FIRST NAME__\n");
	scanf("%s",&faname);
	printf("\t\t\t__ENTER YOUR FATHER'S LAST NAME__\n");
	scanf("%s",&falname);
	printf("\t\t\t__ENTER YOUR MOTHER'S FIRST NAME__\n");
	scanf("%s",&mname);
	printf("\t\t\t__ENTER YOUR MOTHERS'S LAST NAME__\n");
	scanf("%s",&mlname);
	printf("\t\t\t__ENTER YOUR MOBILE NO.__\n");
	scanf("%d",&mono);
	ag:
    printf("\t\t\t__ENTER YOUR AGE__\n");
    scanf("%d",&age);
    if(age>=18 && age<=105)
    {
    	goto ge;
	}
	else
	{
		printf("\t\t\t__INVALID AGE PLEASE TRY AGAIN__\n");
		goto ag;
	}
	ge:
		printf("\t\t\t__ENTER YOUR GENDER (male='1',female='2',transegender='3')__\n");
		scanf("%d",&gen);
		if(gen=1)
		{
			goto adh;
		}
		else if(gen=2)
		{
			goto adh;
		}
		else if(gen=3)
		{
			goto adh;
		}
		else
		{
			printf("\t\t\t__INVALID GENDER PLEASE TRY AGAIN__\n");
			goto ge;
		}
		dat:
                             printf("\t\t\t__Enter date(MM/DD/YYY)__: \n");
                            scanf("%d/%d/%d", &mon, &day, &year);
                            if(day<=31 &&  mon<=12 &&  year==2021)
                            {
                            goto adh;	
							}
							else
							{
							printf("\t\t\t__INVALID ACCOUNT TYPE PLEASE TRY AGAIN__\n");
							goto dat;
							}
	adh:
	printf("\t\t\t__ENTER YOUR RESIDENCE ADDRESS__\n");
	scanf("%s",&address);
	printf("\t\t\t__ENTER YOUR OFFICE ADDRESS__\n");
	scanf("%s",&ofaddress);
	printf("\t\t\t__ENTER YOUR AADHAR CARD NO.__\n");
	scanf("%d",&aadhar);
	printf("\t\t\t__ON WHICH ADDRESS YOU WANT TO RECIEVE YOUR CREDIT CARD__\n");
	printf("\t\t\t--1-- RESIDENCE ADDRESS --\n");
	printf("\t\t\t--2-- OFFICE ADDRESS --\n");
	adhar:
	scanf("%d",&addop);
	if(aadhar==123456789)
	{
		printf("\t\t\t__YOU WILL RECIEVE YOU CHECK BOOK IN TWO WEEKS AT YOUR SELECTED ADDRESS__\n");
		printf("\t\t\t__500 RUPEES WILL BE DIDUCTED FROM YOUR ACCOUNT__\n");
		printf("\t\t\t__THANK YOU__\n");
		printf("\t\t\t__IF YOU WANT TO REPEAT PRESS 0 ELSE YOU WANT TO EXIT ENTER ANY OTHER NUMBER__\n");
						scanf("%d",&re);
						if(re==0)
						{
		                   main();
		                }
		                else
		                {
		                	printf("\t\t\t__THANK YOU FOR CHOOSING OUR BANK__\n");
						}
	}
	else
	{
			printf("\t\t\t__INVALID AADHAR CARD NO. PLEASE TRY AGAIN__\n");
			goto adhar;
	}
}
//transection from one account to another 
int transection()
{
	char sign[20];
	printf("\t\t\t\t\t\t\t\t\t\t  --*- ENTER YOUR INFORMATION --*--\n");
		printf("==================================================================================================================================================================================================================\n");
    printf("\t\t\t__ENTER YOUR FIRST NAME__\n");
	scanf("%s",&fname);
	printf("\t\t\t__ENTER YOUR LAST NAME__\n");
	scanf("%s",&lname);
	printf("\t\t\t__ENTER YOUR MOBILE NO.__\n");
	scanf("%d",&mono);
	printf("\t\t\t__ENTER YOUR ACCOUNT NO.__\n");
	scanf("%d",&acc);
	printf("\t\t\t__ENTER YOUR AMMOUNT TO BE TRANSECTED__\n");
	scanf("%d",&acc1);
	printf("\t\t\t__ENTER OTHER ACCOUNT'S NO.__\n");
	scanf("%d",&acc2);
	dat:
                             printf("\t\t\t__Enter date(MM/DD/YYY)__: \n");
                            scanf("%d/%d/%d", &mon, &day, &year);
                            if(day<=31 &&  mon<=12 &&  year==2021 )
                            {
                            goto sign;	
							}
							else
							{
							printf("\t\t\t__INVALID ACCOUNT TYPE PLEASE TRY AGAIN__\n");
							goto dat;
							}
							sign:
	printf("\t\t\t__ENTER YOUR SIGN__\n");
	scanf("%s",&sign);
	printf("\t\t\t__YOUR AMOUNT HAS BEEN TRANSFERED TO %d THIS ACCOUNT__\n",acc2);
	printf("\t\t\t__THANK YOU__\n");
	printf("\t\t\t__IF YOU WANT TO REPEAT PRESS 0 ELSE YOU WANT TO EXIT ENTER ANY OTHER NUMBER__\n");
	scanf("%d",&re);
						if(re==0)
						{
		                   main();
		                }
		                else
		                {
		                	printf("\t\t\t__THANK YOU FOR CHOOSING OUR BANK__\n");
						}
						
}
//report in bank
int report()
{
	printf("\t\t\t\t\t\t\t\t\t\t  --*- ENTER THE INFORMATION ABOUT THE PROBLEM --*--\n");
		printf("==================================================================================================================================================================================================================\n");
    printf("\t\t\t__ENTER YOUR FIRST NAME__\n");
	scanf("%s",&fname);
	printf("\t\t\t__ENTER YOUR LAST NAME__\n");
	scanf("%s",&lname);
	printf("\t\t\t__ENTER YOUR MOBILE NO.__\n");
	scanf("%d",&mono);
	printf("\t\t\t__ENTER YOUR ACCOUNT NO.__\n");
	scanf("%d",&acc);
	dat:
                             printf("\t\t\t__Enter date(MM/DD/YYY)__: \n");
                            scanf("%d/%d/%d", &mon, &day, &year);
                            if(day<=31 &&  mon<=12 &&  year==2021)
                            {
                            goto repo;	
							}
							else
							{
							printf("\t\t\t__INVALID ACCOUNT TYPE PLEASE TRY AGAIN__\n");
							goto dat;
							}
							repo:
	printf("\t\t\t__CHOOSE YOU OPTION TO REPORT__\n");
			        printf("\t\t\t--1-- CYBER CRIME --\n");
			        printf("\t\t\t--2-- ACCOUNT HACK --\n");
			        printf("\t\t\t--3-- PHISHING --\n");
			        printf("\t\t\t--4-- FAKE RANSECTION --\n");
			        scanf("%d",&report1);
			        if(report1==1)
			        {
			        	printf("\t\t\t__WE WILL INFORM YOU IF WE GET ANY INFORMATION ABOUT YOUR CASE__\n ");
			        	printf("\t\t\t__THANK YOU FOR REPORTING YOUR CASE__\n");
			        }
			        	else if(report1==2)
			        	{
			        		printf("\t\t\t__WE WILL INFORM YOU IF WE GET ANY INFORMATION ABOUT YOUR CASE__\n ");
			        	printf("\t\t\t__THANK YOU FOR REPORTING YOUR CASE__\n");
			        	goto re;
						}
						else if(report1==3)
						{
							printf("\t\t\t__WE WILL INFORM YOU IF WE GET ANY INFORMATION ABOUT YOUR CASE__\n ");
			        	printf("\t\t\t__THANK YOU FOR REPORTING YOUR CASE__\n");
			        	goto re;
						}
						else if(report1==4)
						{
							printf("\t\t\t__WE WILL INFORM YOU IF WE GET ANY INFORMATION ABOUT YOUR CASE__\n ");
			        	printf("\t\t\t__THANK YOU FOR REPORTING YOUR CASE__\n");
			        	goto re;
						}
						else
						{
							printf("\t\t\t__INVALID REPORT PLEASE TRY AGAIN__\n");
							goto repo;
						}
						re:
			        	printf("\t\t\t__IF YOU WANT TO REPEAT PRESS 0 ELSE YOU WANT TO EXIT ENTER ANY OTHER NUMBER__\n");
						scanf("%d",&re);
						if(re==0)
						{
		                   main();
		                }
		                else
		                {
		                	printf("\t\t\t__THANK YOU FOR CHOOSING OUR BANK__\n");
						}
					
}
// end of the project 
