#include <stdio.h>

int main(int argc, char const *argv[])
{
	int F,B,T,FD,BD,SD,ST,ED,i;
	ST =0;
	SD =0;

	scanf("%d%d%d%d%d",&F,&B,&T,&FD,&BD);

	if (F == B)
	{
		if (FD>F)
		{
			for (int i = 1; SD <=FD; ++i)
			{
				if (i%2 == 0)
				{
					SD = SD -B;
					ST +=(T*B);	
				}
				else
				{
					SD = SD + F;
					ST += (T*F);

				}
			}
			if (SD>FD)
			{
				ED = (SD - FD);
				ST -= (ED*T);
			}
			printf("%d F\n",ST );

	
		}
		else
		{
			printf("No ditch\n");
		}
		
	}
	else
	{
		if (F>B)
		{
			for (int i = 1; SD <=FD; ++i)
			{
				if (i%2 == 0)
				{
					SD = SD -B;
					ST +=(T*B);	
				}
				else
				{
					SD = SD + F;
					ST += (T*F);

				}
			}
			if (SD>FD)
			{
				ED = (SD - FD);
				ST -= (ED*T);
			}
			printf("%d F\n",ST );
		}
		else
		{
			printf("2nd part\n");

			for(i=1;SD<=BD;i++)
				{
    			if(i%2==0)
    			{
       				SD=SD+B;
       				ST+=(T*B);
    			}
    			else
    			{
 
    				SD=SD-F;
   					ST+=(T*F);
    			}
			}

			if (SD>BD)
				{
					ED = (SD - BD);
					ST -= (ED*T);
			}
			printf("%d B\n",ST );

		}
	}
	return 0;
}
