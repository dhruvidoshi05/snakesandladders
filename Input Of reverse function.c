#include<stdio.h>
#include<conio.h>
main()
{
	//1. declare the file pointer
	FILE *fp;
	char name[90];
	int ft,i=0;

	//2. oprn -read mode write,and append mode
	fp = fopen("fresh.txt","w");
	
	//3. red content from the file
	
	//4. write content to the file
	fprintf(fp,"Mycaptiandhruvi" , name);

	
	//5. append content to the file 
	
	//6. close the pointer
	fclose(fp);
	
	fp = fopen("fresh.txt","r");
	fscanf(fp,"%s", &name);
	printf("Output:%s" ,name);
	fclose(fp);
	
	fseek(fp,0,SEEK_END);
	ft=ftell(fp);
	fclose(fp);
//	int main()
//{
//    // File name in the directory
//    char x[] ="fresh.txt" ;
//  
//    // Function Call to reverse the
//    // File Content
//    reverseContent(x);
//    return 0;
//}
}
