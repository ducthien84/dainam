#include <stdio.h>
#include <stdlib.h>
#include <string.h>

const int MAX_LENGTH = 100;

//prototype
void DaoChuoi();//Bạn A làm
void TachChuoi();//Bạn B làm
void DocFileText();//Bạn C làm
void GhiFileText();
void DocFileBin();
void GhiFileBin();

int main() 
{

}

void DaoChuoi()
{
    //......

}


    while (1)
    {   
        printf("\n*****************************\n");     
        printf("CÁC CHỨC NĂNG CỦA CHƯƠNG TRÌNH:\n");
        printf("- Nhấn số 1 -> Đảo chuỗi\n");
        printf("- Nhấn số 2 -> Tách chuỗi\n");
        printf("- Nhấn số 3 -> Lưu dữ liệu vào file Text\n");
        printf("- Nhấn số 4 -> Đọc dữ liệu từ file Text\n");
        printf("- Nhấn số 5 -> Lưu dữ liệu vào file Binary\n");
        printf("- Nhấn số 6 -> Đọc dữ liệu từ file Binary\n");
        printf("- Nhấn số 9 -> Exit\n");
                
        int functionCode;
        printf("Vui lòng chọn chức năng: ");            
        scanf("%d", &functionCode);

        switch (functionCode)
        {
            case 1:
                DaoChuoi();
                break;
            case 2:
                TachChuoi();
                break;
            case 3:
                GhiFileText();
                break;
            case 4:
                DocFileText();
                break;     
            case 5:
                GhiFileBin();
                break;
            case 6:
                DocFileBin();
                break;                                
            case 9:
                exit(0);
            default:
                break;
        }        

        printf("\nNHẤN PHÍM BẤT KỲ ĐỂ TIẾP TỤC...");
        getchar();
    }
}

void DaoChuoi()
{   
    fflush(stdin);
    char str[MAX_LENGTH];
    printf("Nhập vào chuỗi: ");    
    gets(str);
    //scanf("%s", str);
    printf("Chuỗi sau khi đảo: ");
    for(int i=strlen(str)-1;i>=0;i--)
    {
        printf("%c", str[i]);
    }

    fflush(stdin);
}

void TachChuoi()
{
    fflush(stdin);

    char str[MAX_LENGTH];	
	printf("Nhập vào chuỗi cần tách:");
    gets(str); 
    //scanf("%s", str);
    fflush(stdin);

    char separator;
    printf("Nhập vào ký tự phân tách chuỗi:");
    scanf("%c", &separator);
    
    printf("Các chuỗi sau khi tách:\n");    
    for(int i=0;i<strlen(str);i++)
    {
        if(str[i]!=separator)
        {
            printf("%c",str[i]);
        }
        else
        {
            printf("\n");
        }
    }

    fflush(stdin);    
}

void GhiFileText()
{
    char sentence[MAX_LENGTH];
    FILE *fptr;
    
    fptr = fopen("test.txt", "w");
    if(fptr == NULL)
    {
        printf("Error!");
        exit(1);
    }
    fflush(stdin);   
    printf("Nhập vào chuỗi cần ghi: ");
    gets(sentence);
    
    fprintf(fptr,"%s", sentence);
    fclose(fptr);
    printf("Ghi chuỗi thành công!");
    fflush(stdin);   
}

void DocFileText()
{
    char c[MAX_LENGTH];
    FILE *fptr;
 
    if ((fptr = fopen("test.txt", "r")) == NULL)
    {
        printf("Error! opening file");
        // Program exits if file pointer returns NULL.
        exit(1);         
    }
 
    // reads text until newline 
    fscanf(fptr,"%[^\n]", c);
 
    printf("Dữ liệu đọc từ file: %s", c);
    fclose(fptr);

    fflush(stdin);
}

struct threeNum
{
   int n1, n2, n3;
};
 
void DocFileBin()
{
    int n;
    struct threeNum num;
    FILE *fptr;
    
    if ((fptr = fopen("test.bin","rb")) == NULL){
        printf("Error! opening file");
    
        // Program exits if the file pointer returns NULL.
        exit(1);
    }

    for(n = 1; n < 5; ++n)
    {
        fread(&num, sizeof(struct threeNum), 1, fptr); 
        printf("n1: %d\tn2: %d\tn3: %d\n", num.n1, num.n2, num.n3);
    }
    fclose(fptr); 
}

void GhiFileBin()
{
    int n;
    struct threeNum num;
    FILE *fptr;
    
    if ((fptr = fopen("test.bin","wb")) == NULL){
        printf("Error! opening file");
    
        // Program exits if the file pointer returns NULL.
        exit(1);
    }
    
    for(n = 1; n < 5; ++n)
    {
        num.n1 = n;
        num.n2 = 5*n;
        num.n3 = 5*n + 1;
        fwrite(&num, sizeof(struct threeNum), 1, fptr); 
    }
    fclose(fptr); 
}
