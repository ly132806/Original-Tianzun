#include <stdio.h>
#define h  3
#define l  3
void csh(char qipan[h][l],int f,int g)//初始化棋盘
{
	int i = 0;
	int j = 0;
	for(i = 0;i < f;i++)
	{
		for(j = 0;j < g;j++)
		{
			qipan[i][j] =' ';
			//printf("%c",qipan[i][j]);
		}
	}
	//return 0;
}
void qp(char qipan[h][l],int k,int c)
{
	int i = 0;
	int j = 0;
	for(i = 0;i < k;i++)
	{
		//for(j = 0;j < l;j++)
		//{
			printf(" %c | %c | %c \n",qipan[i][0],qipan[i][1],qipan[i][2]);
			if(i < k -1)
			printf("---|---|---\n");
		//}
	}
}
int main()
{
	int a = 0;
	printf("*******************************************\n");
	printf("************  1 开始游戏 ******************\n");
	printf("************  0 退出游戏 ******************\n");
	printf("*******************************************\n");
	do
	{
		printf("请选择:");
		scanf("%d",&a);
		switch(a)
		{
			case 1:{
			printf("游戏开始\n");
			char qipan[h][l];
			csh(qipan,h,l);
			int x = 0;
			int y = 0;
			while(1)
			{
er:			//printf("\n");		
			qp(qipan,h,l);
			    printf("玩家走棋\n");
			    scanf("%d %d",&x,&y);
			    if(x >= 0 && x <= 2 && y >= 0 && y <= 2)
			    {
			   		 qipan[x][y] = '*';
			   		// qp(qipan,h,l);
			    	printf("电脑走棋\n");
			    	for(x = 0;x < h;x++)
			    	{
			    		for(y = 0;y < l;y++)
			    		{
			    			//printf("%d\n",y);
			    			if(qipan[x][y] == ' ')
			    			{
			    				qipan[x][y] = '#';
			    				//qp(qipan,h,l);
			    				goto er;
			    			}
			    		}
			    	}
			    }
			    else
			    {
			   		 printf("输入错误，重新输入:\n");
			  		 goto er;
			    }
			    qp(qipan,h,l);
			}
			break;}
			case 0:{
			printf("game over");
			break;}
			default:
			printf("输入错误，请重新输入");
		}
		
	}
	while(a);
	return 0;
}
