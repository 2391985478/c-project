#include <stdio.h>

char arr[1024];
int index = 0;

int isMingan(char x){

    int count = 0;
    for(int i=0;i<index;i++){
        if(x == arr[i]){
            count++;
        }
    }

    if(count == 0){
        return 0;
    }else{
        return 1;
    }

}


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
            printf("shuruyiduanyingwen\n");
            char neirong[1024];

            scanf("%s",&neirong);

             for(int i = 0;1;i++){

                if(neirong[i] == '\0'){
                    break;
                }

                if(isMingan(arr[i]) == 1){
                    neirong[i] = '*';
                }

                printf("%c",neirong[i]);


            }

            printf("\n");

            printf("tihuanwancheng,dianjihuichejixu\n");
            char x;
            scanf("%c", &x);
            scanf("%c", &x);

            
        }
        if(code == 5){
            printf("tuichuxitong\n");
            break;
            
        }
    }
    


    return 0;

}