#include <stdio.h>
#include<stdlib.h>
#include<iostream>
#include<conio.h>
using namespace std;

void Menu();
void Sumaresta();
void Parimpar();
void ConversionD();
void Palindromo();
/*void Nombres();
void PideDatos(int *Dim, float Sist[][102]);
void EscribeDatos(int Dim, float Sist[][102]);
void ResuelveGauss(int Dim, float Sist[][102]);
void Menu();
void Nombres();
void PideDatos(int *Dim, float Sist[][102]);
void EscribeDatos(int Dim, float Sist[][102]);
void ResuelveGauss(int Dim, float Sist[][102]);
void Menu();
void Nombres();
void PideDatos(int *Dim, float Sist[][102]);
void EscribeDatos(int Dim, float Sist[][102]);
void ResuelveGauss(int Dim, float Sist[][102]);
void Menu();
void Nombres();*/

int main(void)
{
    
    Menu();
   
    scanf("");
    return(0);
}

void Menu(){
	int op;
	
	do{
		cout<<"Menu:."<<endl;
		cout<<"1. Suma, Resta, Multiplicacion y Division de dos numeros"<<endl;
		cout<<"2. Determinar si un número es par o impar"<<endl;
		cout<<"3. Convertir de kilometros a millas, metros a pulgadas, de libras a kilos y viceversa"<<endl;
		cout<<"4. Determinar si una palabra o un numero es palindromo."<<endl;
		cout<<"5. Ingresar Datos"<<endl;
		cout<<"6. Mostrar Matriz Resuelta"<<endl;
		cout<<"7. Integrantes del Grupo que realizaron el proyecto"<<endl;
		cout<<"8. Salir"<<endl;
		cout<<"9. Ingresar Datos"<<endl;
		cout<<"10. Mostrar Matriz Resuelta"<<endl;
		cout<<"11. Integrantes del Grupo que realizaron el proyecto"<<endl;
		cout<<"12. Salir"<<endl;
		cout<<"13. Ingresar Datos"<<endl;
		cout<<"14. Mostrar Matriz Resuelta"<<endl;
		cout<<"15. Integrantes del Grupo que realizaron el proyecto"<<endl;
		cout<<"16. Salir"<<endl;
		cout<<"17. Ingresar Datos"<<endl;
		cout<<"18. Mostrar Matriz Resuelta"<<endl;
		cout<<"19. Integrantes del Grupo que realizaron el proyecto"<<endl;
		cout<<"20. Salir"<<endl;
		cout<<"21. Salir"<<endl;
		cout<<"Escoja la opcion a reaizar: ";
		cin>>op;
		
		switch(op){
			case 1: Sumaresta();
			system("pause");
			break;
			
			case 2: Parimpar();
				    system("pause");
					break;
			
			case 3:ConversionD();
			system("pause");
			break;			    
		
		case 4: Palindromo();
		system("pause");
		break;
			
		/*	case 5: printf("\n\n\nEl SISTEMA introducido es el siguiente: \n\n");
				    EscribeDatos(Dimension,Sistema);
				    ResuelveGauss(Dimension,Sistema);
				    printf("\n\n\nLas soluciones son:\n");
				    for(C=1;C<=Dimension;C++) printf("\n X%d=%f\n",C,Sistema[C][Dimension+1]);
				    system("pause");break;
			
			case 6: ConversionD();
			system("pause");
			break;			    
		
		case 7: PideDatos(&Dimension,Sistema);system("pause");break;
			
			case 8: printf("\n\n\nEl SISTEMA introducido es el siguiente: \n\n");
				    EscribeDatos(Dimension,Sistema);
				    ResuelveGauss(Dimension,Sistema);
				    printf("\n\n\nLas soluciones son:\n");
				    for(C=1;C<=Dimension;C++) printf("\n X%d=%f\n",C,Sistema[C][Dimension+1]);
				    system("pause");break;
			
			case 9: Nombres();system("pause");break;			    
	
		case 10: PideDatos(&Dimension,Sistema);system("pause");break;
			
			case 11: printf("\n\n\nEl SISTEMA introducido es el siguiente: \n\n");
				    EscribeDatos(Dimension,Sistema);
				    ResuelveGauss(Dimension,Sistema);
				    printf("\n\n\nLas soluciones son:\n");
				    for(C=1;C<=Dimension;C++) printf("\n X%d=%f\n",C,Sistema[C][Dimension+1]);
				    system("pause");break;
			
			case 12: Nombres();system("pause");break;			    
		
		case 13: PideDatos(&Dimension,Sistema);system("pause");break;
			
			case 14: printf("\n\n\nEl SISTEMA introducido es el siguiente: \n\n");
				    EscribeDatos(Dimension,Sistema);
				    ResuelveGauss(Dimension,Sistema);
				    printf("\n\n\nLas soluciones son:\n");
				    for(C=1;C<=Dimension;C++) printf("\n X%d=%f\n",C,Sistema[C][Dimension+1]);
				    system("pause");break;
			
			case 15: Nombres();system("pause");break;			    
		
		case 16: PideDatos(&Dimension,Sistema);system("pause");break;
			
			case 17: printf("\n\n\nEl SISTEMA introducido es el siguiente: \n\n");
				    EscribeDatos(Dimension,Sistema);
				    ResuelveGauss(Dimension,Sistema);
				    printf("\n\n\nLas soluciones son:\n");
				    for(C=1;C<=Dimension;C++) printf("\n X%d=%f\n",C,Sistema[C][Dimension+1]);
				    system("pause");break;
			
			case 18: Nombres();system("pause");break;			    
		
			case 19: printf("\n\n\nEl SISTEMA introducido es el siguiente: \n\n");
				    EscribeDatos(Dimension,Sistema);
				    ResuelveGauss(Dimension,Sistema);
				    printf("\n\n\nLas soluciones son:\n");
				    for(C=1;C<=Dimension;C++) printf("\n X%d=%f\n",C,Sistema[C][Dimension+1]);
				    system("pause");break;
			
			case 20: Nombres();system("pause");break;	*/		    
		}
		system("cls");
		
	}while(op!=21);
}

void Sumaresta()
{
    double a, b;
int c;

cout << "Introduzca el primer número " << endl ;
cin >> a;
cout << "Introduzca el segundo número" << endl ;
cin >> b;
cout << "Que operación deseas hacer, 1(suma), 2(multiplicacion) , 3 (division), 4 (resta)/n" ;
cin >> c;


if (c==1) {
cout <<"el resultado de suma es:"<<a+b<<endl;
}

if (c==2) {
cout <<"el resultado de producto es:"<<a*b<<endl;
}

if (c==3) {
cout <<"el resultado de division es:"<<a/b<<endl;
}

if (c==4) {
cout <<"el resultado de resta es:"<<a-b<<endl;
}



    }

void Parimpar()
{
     int num;
    std::cout << "Ingresa un número: ";
    std::cin >> num;

    if (num % 2 == 0) {
        std::cout << num << " es un número par." << std::endl;
    } else {
        std::cout << num << " es un número impar." << std::endl;
    }


    }

void ConversionD()
{
    
     double a, b;
int c;

cout << "Opciones " << endl ;
cout << "1.kilometros a millas" << endl ;
cout << "2.metros a pulgadas" << endl ;
cout << "3.libras a kilos" << endl ;
cout << "4.millas a kilometros" ;
cout << "5.pulgadas a metros" << endl ;
cout << "6.kilos a libras" << endl ;
cin >> c;


if (c==1) {
cout <<"Ingrese el dato a convertir: "<<endl;
cin>>a;
b = a/1.609;
cout <<"Los kilometros a millas son: "<<b;
}

if (c==2) {
cout <<"Ingrese el dato a convertir: "<<endl;
cin>>a;
b=a*39.37;
cout <<"Los metros a pulgadas son: "<<b;
}

if (c==3) {
cout <<"Ingrese el dato a convertir: "<<endl;
cin>>a;
b=a/2.205;
cout <<"Las libras a kilos son: "<<b;
}

if (c==4) {
cout <<"Ingrese el dato a convertir: "<<endl;
cin>>a;
b=a*1.609;
cout <<"Las millas a kilometros son: "<<b;
}
if (c==5) {
cout <<"Ingrese el dato a convertir: "<<endl;
cin>>a;
b=a/39.37;
cout <<"Las pulgadas a metros son: "<<b;
}
if (c==6) {
cout <<"Ingrese el dato a convertir: "<<endl;
cin>>a;
b=a*2.205;
cout <<"Los kilos a libras son: "<<b;
}
    
}

bool esPalindromo(int num)
 {
  
    string str = to_string(num);

  
    string str_inversa = string(str.rbegin(), str.rend());

   
    return str == str_inversa;
}
void Palindromo()
{
	int o;
	cout <<"Ingrese la opcion:"<<endl;
	cout<<"1.Numero"<<endl;
	cout<<"2.Palabra"<<endl;
	cin>>o;
	if (o==1)
	{
		int num;

    cout << "Ingrese un numero: ";
    cin >> num;

    if (esPalindromo(num)) {
        cout << num << " es un palindromo" << endl;
    } else {
        cout << num << " no es un palindromo" << endl;
    }

	}
if (o==2)
	{
	string palabra;
    cout << "Ingrese una palabra: ";
    cin >> palabra;

    string palabraInvertida = palabra;
   (palabraInvertida.begin(), palabraInvertida.end());
    if (palabra == palabraInvertida) {
        cout << "La palabra es palindromo." << endl;
    } else {
        cout << "La palabra no es palindromo." << endl;

}
	
}
}

/*void PideDatos(int *Dim,float Sist[][102])
{
    int A,B;
    printf("\n\n ||RESUELVE SISTEMAS LINEALES DETERMINADOS POR GAUSS||");
    printf("\n\n\n Introduce el numero de incognitas:(menor que 100)");
    scanf("%d",&*Dim);
    printf("\n\n PASE A INTRODUCIR CADA COMPONENTE DEL SISTEMA (A|B):");
    printf("\n\n MATRIZ A:\n");
    for(A=1;A<=*Dim;A++) for(B=1;B<=*Dim;B++){
        printf("\n Termino A(%d,%d):",A,B); scanf("%f",&Sist[A][B]);}
    printf("\n\n\n VECTOR B:\n");
    for(A=1;A<=*Dim;A++){
        printf("\n Termino B(%d):",A);scanf("%f",&Sist[A][*Dim+1]);
    }}

void EscribeDatos(int Dim, float Sist[][102])
{
    int A,B;
    for(A=1;A<=Dim;A++){
        for(B=1;B<=(Dim+1);B++){
            printf("%7.2f",Sist[A][B]);
            if(B==Dim) printf("   |");}
        //printf("\n");
    }

void ResuelveGauss(int Dim, float Sist[][102])
{
    int NoCero,Col,C1,C2,A;
    float Pivote,V1;
   
    for(Col=1;Col<=Dim;Col++){
        NoCero=0;A=Col;
        while(NoCero==0){
           if((Sist[A][Col]>0.0000001)||((Sist[A][Col]<-0.0000001))){
                NoCero=1;}
            else A++;}
        Pivote=Sist[A][Col];
        for(C1=1;C1<=(Dim+1);C1++){
            V1=Sist[A][C1];
            Sist[A][C1]=Sist[Col][C1];
            Sist[Col][C1]=V1/Pivote;}
        for(C2=Col+1;C2<=Dim;C2++){
            V1=Sist[C2][Col];
            for(C1=Col;C1<=(Dim+1);C1++){
                Sist[C2][C1]=Sist[C2][C1]-V1*Sist[Col][C1];}
    }}
   
    for(Col=Dim;Col>=1;Col--) for(C1=(Col-1);C1>=1;C1--){
        Sist[C1][Dim+1]=Sist[C1][Dim+1]-Sist[C1][Col]*Sist[Col][Dim+1];
        Sist[C1][Col]=0;
    }
}

void Nombres(){
	cout<<"\nMostrando integrantes del Grupo: "<<endl;
	cout<<"1. Nombre: Karen Marleny  Tejaxun Puc \nCarne: 1290-22-13292"<<endl;
	cout<<"2. Nombre: Juan Esteban Can Lopez \nCarne: 1290-22-10376"<<endl;
	cout<<"3. Nombre: Jose Maria Santizo Guillermo \nCarne: 1290-22-9030\n"<<endl;
	
	
}
void PideDatos(int *Dim,float Sist[][102])
{
    int A,B;
    printf("\n\n ||RESUELVE SISTEMAS LINEALES DETERMINADOS POR GAUSS||");
    printf("\n\n\n Introduce el numero de incognitas:(menor que 100)");
    scanf("%d",&*Dim);
    printf("\n\n PASE A INTRODUCIR CADA COMPONENTE DEL SISTEMA (A|B):");
    printf("\n\n MATRIZ A:\n");
    for(A=1;A<=*Dim;A++) for(B=1;B<=*Dim;B++){
        printf("\n Termino A(%d,%d):",A,B); scanf("%f",&Sist[A][B]);}
    printf("\n\n\n VECTOR B:\n");
    for(A=1;A<=*Dim;A++){
        printf("\n Termino B(%d):",A);scanf("%f",&Sist[A][*Dim+1]);
    }}

void EscribeDatos(int Dim, float Sist[][102])
{
    int A,B;
    for(A=1;A<=Dim;A++){
        for(B=1;B<=(Dim+1);B++){
            printf("%7.2f",Sist[A][B]);
            if(B==Dim) printf("   |");}
        //printf("\n");
    }}

void ResuelveGauss(int Dim, float Sist[][102])
{
    int NoCero,Col,C1,C2,A;
    float Pivote,V1;
   
    for(Col=1;Col<=Dim;Col++){
        NoCero=0;A=Col;
        while(NoCero==0){
           if((Sist[A][Col]>0.0000001)||((Sist[A][Col]<-0.0000001))){
                NoCero=1;}
            else A++;}
        Pivote=Sist[A][Col];
        for(C1=1;C1<=(Dim+1);C1++){
            V1=Sist[A][C1];
            Sist[A][C1]=Sist[Col][C1];
            Sist[Col][C1]=V1/Pivote;}
        for(C2=Col+1;C2<=Dim;C2++){
            V1=Sist[C2][Col];
            for(C1=Col;C1<=(Dim+1);C1++){
                Sist[C2][C1]=Sist[C2][C1]-V1*Sist[Col][C1];}
    }}
   
    for(Col=Dim;Col>=1;Col--) for(C1=(Col-1);C1>=1;C1--){
        Sist[C1][Dim+1]=Sist[C1][Dim+1]-Sist[C1][Col]*Sist[Col][Dim+1];
        Sist[C1][Col]=0;
    }
}

void Nombres(){
	cout<<"\nMostrando integrantes del Grupo: "<<endl;
	cout<<"1. Nombre: Karen Marleny  Tejaxun Puc \nCarne: 1290-22-13292"<<endl;
	cout<<"2. Nombre: Juan Esteban Can Lopez \nCarne: 1290-22-10376"<<endl;
	cout<<"3. Nombre: Jose Maria Santizo Guillermo \nCarne: 1290-22-9030\n"<<endl;
	
	
}
void PideDatos(int *Dim,float Sist[][102])
{
    int A,B;
    printf("\n\n ||RESUELVE SISTEMAS LINEALES DETERMINADOS POR GAUSS||");
    printf("\n\n\n Introduce el numero de incognitas:(menor que 100)");
    scanf("%d",&*Dim);
    printf("\n\n PASE A INTRODUCIR CADA COMPONENTE DEL SISTEMA (A|B):");
    printf("\n\n MATRIZ A:\n");
    for(A=1;A<=*Dim;A++) for(B=1;B<=*Dim;B++){
        printf("\n Termino A(%d,%d):",A,B); scanf("%f",&Sist[A][B]);}
    printf("\n\n\n VECTOR B:\n");
    for(A=1;A<=*Dim;A++){
        printf("\n Termino B(%d):",A);scanf("%f",&Sist[A][*Dim+1]);
    }}

void EscribeDatos(int Dim, float Sist[][102])
{
    int A,B;
    for(A=1;A<=Dim;A++){
        for(B=1;B<=(Dim+1);B++){
            printf("%7.2f",Sist[A][B]);
            if(B==Dim) printf("   |");}
        //printf("\n");
    }}

void ResuelveGauss(int Dim, float Sist[][102])
{
    int NoCero,Col,C1,C2,A;
    float Pivote,V1;
   
    for(Col=1;Col<=Dim;Col++){
        NoCero=0;A=Col;
        while(NoCero==0){
           if((Sist[A][Col]>0.0000001)||((Sist[A][Col]<-0.0000001))){
                NoCero=1;}
            else A++;}
        Pivote=Sist[A][Col];
        for(C1=1;C1<=(Dim+1);C1++){
            V1=Sist[A][C1];
            Sist[A][C1]=Sist[Col][C1];
            Sist[Col][C1]=V1/Pivote;}
        for(C2=Col+1;C2<=Dim;C2++){
            V1=Sist[C2][Col];
            for(C1=Col;C1<=(Dim+1);C1++){
                Sist[C2][C1]=Sist[C2][C1]-V1*Sist[Col][C1];}
    }}
   
    for(Col=Dim;Col>=1;Col--) for(C1=(Col-1);C1>=1;C1--){
        Sist[C1][Dim+1]=Sist[C1][Dim+1]-Sist[C1][Col]*Sist[Col][Dim+1];
        Sist[C1][Col]=0;
    }
}

void Nombres(){
	cout<<"\nMostrando integrantes del Grupo: "<<endl;
	cout<<"1. Nombre: Karen Marleny  Tejaxun Puc \nCarne: 1290-22-13292"<<endl;
	cout<<"2. Nombre: Juan Esteban Can Lopez \nCarne: 1290-22-10376"<<endl;
	cout<<"3. Nombre: Jose Maria Santizo Guillermo \nCarne: 1290-22-9030\n"<<endl;
	
	
}
void PideDatos(int *Dim,float Sist[][102])
{
    int A,B;
    printf("\n\n ||RESUELVE SISTEMAS LINEALES DETERMINADOS POR GAUSS||");
    printf("\n\n\n Introduce el numero de incognitas:(menor que 100)");
    scanf("%d",&*Dim);
    printf("\n\n PASE A INTRODUCIR CADA COMPONENTE DEL SISTEMA (A|B):");
    printf("\n\n MATRIZ A:\n");
    for(A=1;A<=*Dim;A++) for(B=1;B<=*Dim;B++){
        printf("\n Termino A(%d,%d):",A,B); scanf("%f",&Sist[A][B]);}
    printf("\n\n\n VECTOR B:\n");
    for(A=1;A<=*Dim;A++){
        printf("\n Termino B(%d):",A);scanf("%f",&Sist[A][*Dim+1]);
    }}

void EscribeDatos(int Dim, float Sist[][102])
{
    int A,B;
    for(A=1;A<=Dim;A++){
        for(B=1;B<=(Dim+1);B++){
            printf("%7.2f",Sist[A][B]);
            if(B==Dim) printf("   |");}
        //printf("\n");
    }}

void ResuelveGauss(int Dim, float Sist[][102])
{
    int NoCero,Col,C1,C2,A;
    float Pivote,V1;
   
    for(Col=1;Col<=Dim;Col++){
        NoCero=0;A=Col;
        while(NoCero==0){
           if((Sist[A][Col]>0.0000001)||((Sist[A][Col]<-0.0000001))){
                NoCero=1;}
            else A++;}
        Pivote=Sist[A][Col];
        for(C1=1;C1<=(Dim+1);C1++){
            V1=Sist[A][C1];
            Sist[A][C1]=Sist[Col][C1];
            Sist[Col][C1]=V1/Pivote;}
        for(C2=Col+1;C2<=Dim;C2++){
            V1=Sist[C2][Col];
            for(C1=Col;C1<=(Dim+1);C1++){
                Sist[C2][C1]=Sist[C2][C1]-V1*Sist[Col][C1];}
    }}
   
    for(Col=Dim;Col>=1;Col--) for(C1=(Col-1);C1>=1;C1--){
        Sist[C1][Dim+1]=Sist[C1][Dim+1]-Sist[C1][Col]*Sist[Col][Dim+1];
        Sist[C1][Col]=0;
    }
}

void Nombres(){
	cout<<"\nMostrando integrantes del Grupo: "<<endl;
	cout<<"1. Nombre: Karen Marleny  Tejaxun Puc \nCarne: 1290-22-13292"<<endl;
	cout<<"2. Nombre: Juan Esteban Can Lopez \nCarne: 1290-22-10376"<<endl;
	cout<<"3. Nombre: Jose Maria Santizo Guillermo \nCarne: 1290-22-9030\n"<<endl;
	
	
}*/
