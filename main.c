#include <stdio.h>

char arr[1024];
int index = 0;


int main(){

    printf("jinrumingnacixitong\n");

    while(1){

        printf("1---tianjia\n");
        printf("2---shanchu\n");
        printf("3---xianshi\n");
        printf("4---tihuan\n");
        printf("5---tuichu\n");

        printf("xuanze gongneng\n");

        int code;
        scanf("%d",&code);

        if(code == 1){
            printf("qingshuruyaotianjiade\n");
            char m;
            scanf("%c",&m);
            scanf("%c",&m);

            arr[index] = m;
            index++;

            printf("chenggong,huichejixu\n");
            char x;
            scanf("%c",&x);
            scanf("%c",&x);


        }
        if(code == 2){
            printf("shanchuzuihouyige\n");
            index--;

            printf("shanchuchenggong,huiche\n");
            char x;
            scanf("%c",&x);
            scanf("%c",&x);

            
        }
        if(code == 3){
            printf("mingancuruxia：\n");

            for (int i = 0; i < index; i++)
            {
                printf("第%d个敏感字符为%c\n", i + 1, arr[i]);
            }

            printf("chenggong,dianjihuichejixu\n");
            char x;
            scanf("%c", &x);
            scanf("%c", &x);

            
        }
        if(code == 4){

            
        }
        if(code == 5){
            printf("tuichuxitong\n");
            break;
            
        }
    }
    


    return 0;

}