#include <stdio.h>
#include<stdlib.h>
#include<iostream>
#include<conio.h>
#include<windows.h>
#include <iomanip>
#include<Math.h>
#include <cstdlib>
#include <ctime>

using namespace std;

void Menu();
void Sumaresta();
void Parimpar();
void ConversionD();
void Palindromo();
void ConversionN();
void ConversionL();
void ConversionDL();
void Tablam();
void Tablas();
void Mgrafica();
void ConversionB();
void ConversionH();
void Geometricas();
void MPunto();
void Cajero();
void Hipo();
void F();
void Ordenamiento();
void Alea();
void Arte();

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
		cout<<"2. Determinar si un numero es par o impar"<<endl;
		cout<<"3. Convertir de kilometros a millas, metros a pulgadas, de libras a kilos y viceversa"<<endl;
		cout<<"4. Determinar si una palabra o un numero es palindromo."<<endl;
		cout<<"5. Conversion de numeros arabigos a romanos"<<endl;
		cout<<"6. Conversion de numeros enteros a letras"<<endl;
		cout<<"7. Conversion de numeros enteros con decimal a letras"<<endl;
		cout<<"8. Una tabla de multiplicar"<<endl;
		cout<<"9. Tablas de multiplicar del 1 al 10"<<endl;
		cout<<"10. Crear de forma grafica la multiplicacion manual"<<endl;
		cout<<"11. Conversion de numeros decimales a binario"<<endl;
		cout<<"12. Conversion de numeros decimales a hexadecimales"<<endl;
		cout<<"13. Crear Figuras Geometricas Basicas"<<endl;
		cout<<"14. Mover un punto en toda la pantalla"<<endl;
		cout<<"15. Simulacion de un Cajero (Automata)"<<endl;
		cout<<"16. Calcular la hipotenusa"<<endl;
		cout<<"17. F"<<endl;
		cout<<"18. Ordenamiento Nombres"<<endl;
		cout<<"19. 10 pokemones aleatorios"<<endl;
		cout<<"20. Arte ASCII"<<endl;
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
			
	    	case 5: ConversionN();
		    system("pause");
		    break;
		
	        case 6: ConversionL();
			system("pause");
			break;			    
			
			case 7:ConversionDL();
		    system("pause");
		    break;
			
			case 8: Tablam();	  
		    system("pause");
			break;
			
			case 9: Tablas();
			system("pause");
			break;			    
	
		    case 10: Mgrafica();
		    system("pause");
	    	break;
			
		    case 11: ConversionB();
		    system("pause");
		    break;
			
			case 12: ConversionH();
		    system("pause");
		    break;			    
		
	    	case 13: Geometricas();
			system("pause");
			break;
			
			case 14: MPunto();
			system("pause");
			break;
			
			case 15: Cajero();
			system("pause");
			break;			    
			
		    case 16: Hipo();
			system("pause");
			break;
			
			case 17: F();
			system("pause");
			break;

			case 18: Ordenamiento();
			system("pause");
			break;			    
		
			case 19: Alea();
			system("pause");
			break;
			
			case 20: Arte();
			system("pause");
			break;		    
		}
		system("cls");
		
	}while(op!=21);
}
void Sumaresta()
{
    double a, b;
int c;

cout << "Introduzca el primer numero " << endl ;
cin >> a;
cout << "Introduzca el segundo numero" << endl ;
cin >> b;
cout << "Que operacion deseas hacer, 1(suma), 2(multiplicacion) , 3 (division), 4 (resta)\n" ;
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
    std::cout << "Ingresa un numero: ";
    std::cin >> num;

    if (num % 2 == 0) {
        std::cout << num << " es un numero par." << std::endl;
    } else {
        std::cout << num << " es un numero impar." << std::endl;
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

    if (esPalindromo(num)) 
	{
        cout << num << " es un palindromo" << endl;
    }
	 else 
	{
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
    if (palabra == palabraInvertida)
	 {
        cout << "La palabra es palindromo." << endl;
    } 
	else 
	{
        cout << "La palabra no es palindromo." << endl;
		}
	
}
}

string arabicToRoman(int n)
 {
    string rn = "";
    int na[] = {1000, 900, 500, 400, 100, 90, 50, 40, 10, 9, 5, 4, 1};
    string romanNumerals[] = {"M", "CM", "D", "CD", "C", "XC", "L", "XL", "X", "IX", "V", "IV", "I"};

    for (int i = 0; i < 13; i++)
	 {
        while (n >= na[i]) 
		{
            rn += romanNumerals[i];
            n -= na[i];
        }
    }

    return rn;
}
void ConversionN()
{
	int n;
    cout << "Ingrese un numero arabigo: ";
    cin >> n;
    cout << "Numero romano: " << arabicToRoman(n) << endl;
   
}

string u[] = {"", "uno", "dos", "tres", "cuatro", "cinco", "seis", "siete", "ocho", "nueve"};
string d[] = {"", "diez", "veinte", "treinta", "cuarenta", "cincuenta", "sesenta", "setenta", "ochenta", "noventa"};
string a[] = {"diez", "once", "doce", "trece", "catorce", "quince", "dieciséis", "diecisiete", "dieciocho", "diecinueve"};
string c[] = {"", "ciento", "doscientos", "trescientos", "cuatrocientos", "quinientos", "seiscientos", "setecientos", "ochocientos", "novecientos"};

string nl(int n)
 {
    string l = "";

    if (n < 0 || n > 999) {
        return "Numero fuera de rango";
    }

    if (n == 0) {
        return "cero";
    }

    if (n == 100) {
        return "cien";
    }

    if (n >= 1 && n <= 9) {
        return u[n];
    }

    if (n >= 10 && n <= 99) {
        if (n % 10 == 0) {
            return d[n / 10];
        } else if (n >= 11 && n <= 19) {
            return a[n % 10];
        } else {
            return d[n / 10] + " y " + u[n % 10];
        }
    }

    if (n >= 100 && n <= 999) {
        if (n % 100 == 0) {
            return c[n / 100];
        } else if (n >= 101 && n <= 199) {
            return "ciento " + nl(n % 100);
        } else {
            return c[n / 100] + " " + nl(n % 100);
        }
    }
}
void ConversionL()
{
	int n;
	cout <<"Ingrese un numero entero entre el 0 y el 999: ";
    cout <<"\nEl numero en letras es :"<< nl(n)<<endl;
    }
string p[] = {"punto"};
string un[] = {"", "uno", "dos", "tres", "cuatro", "cinco", "seis", "siete", "ocho", "nueve"};
string de[] = {"", "diez", "veinte", "treinta", "cuarenta", "cincuenta", "sesenta", "setenta", "ochenta", "noventa"};
string ac[] = {"diez", "once", "doce", "trece", "catorce", "quince", "dieciséis", "diecisiete", "dieciocho", "diecinueve"};
string ce[] = {"", "ciento", "doscientos", "trescientos", "cuatrocientos", "quinientos", "seiscientos", "setecientos", "ochocientos", "novecientos"};


void ConversionDL()
{
double valor; int miles,cientos,unidades,decimales;
    char numeros[100][20] = 
 {
  {""},{"uno"},{"dos"},{"tres"},{"cuatro"},{"cinco"},{"seis"},{"siete"},{"ocho"},{"nueve"},
  {"diez"},{"once"},{"doce"},{"trece"},{"catorce"},{"quince"},{"dieciseis"},{"dieceisiete"},{"dieciocho"},{"diecinueve"},
  {"veinte"},{"veintuno"},{"veintidos"},{"veintitres"},{"veinticuatro"},{"veinticinco"},{"veintiseis"},{"veintisiete"},{"veintiocho"},{"veintinueve"},
  {"treinta"},{"treinta y uno"},{"treinta y dos"},{"treinta y tres"},{"treinta y cuatro"},{"treinta y cinco"},{"treinta y seis"},{"treinta y siete"},{"treinta y ocho"},{"treinta y nueve"},
  {"cuarenta"},{"cuarenta y uno"},{"cuarenta y dos"},{"cuarenta y tres"},{"cuarenta y cuatro"},{"cuarenta y cinco"},{"cuarenta y seis"},{"cuarenta y siete"},{"cuarenta y ocho"},{"cuarenta y nueve"},
  {"cincuenta"},{"cincuenta y uno"},{"cincuenta y dos"},{"cincuenta y tres"},{"cincuenta y cuatro"},{"cincuenta y cinco"},{"cincuenta y seis"},{"cincuenta y siete"},{"cincuenta y ocho"},{"cincuenta y nueve"},
  {"sesenta"},{"sesenta y uno"},{"sesenta y dos"},{"sesenta y tres"},{"sesenta y cuatro"},{"sesenta y cinco"},{"sesenta y seis"},{"sesenta y siete"},{"sesenta y ocho"},{"sesenta y nueve"},
  {"setenta"},{"setenta y uno"},{"setenta y dos"},{"setenta y tres"},{"setenta y cuatro"},{"setenta y cinco"},{"setenta y seis"},{"setenta y siete"},{"setenta y ocho"},{"setenta y nueve"},
  {"ochenta"},{"ochenta y uno"},{"ochenta y dos"},{"ochenta y tres"},{"ochenta y cuatro"},{"ochenta y cinco"},{"ochenta y seis"},{"ochenta y siete"},{"ochenta y ocho"},{"ochenta y nueve"},
  {"noventa"},{"noventa y uno"},{"noventa y dos"},{"noventa y tres"},{"noventa y cuatro"},{"noventa y cinco"},{"noventa y seis"},{"noventa y siete"},{"noventa y ocho"},{"noventa y nueve"},
 };
 char centenas[10][20] = 
 {
  {""},{"ciento"},{"doscientos"},{"trescientos"},{"cuatrocientos"},{"quinientos"},{"seiscientos"},{"sietecientos"},{"ochocientos"},{"novecientos"},
 };
  cout <<"Ingrese un numero entero entre el 0 y el 999: ";
    cin >>valor;
    miles = ((int)valor)/1000;
 cientos = (((int)valor)%1000)/100;
 unidades = ((int)valor)%100;
 decimales = ((int) (valor*100.0))%100 ;
  if (miles)
  std::cout << numeros[miles] << " mil ";
 
 if (cientos)
  std::cout << centenas[cientos] << " ";
 
 if (unidades) 
  std::cout << numeros[unidades];
 
 if (decimales)
 {
  if(miles || cientos || unidades)
  {
   std::cout << " punto ";
  }
 
  std::cout << numeros[decimales] ;
 }

 std::cout << std::endl;

  
}

void Tablam(){
	int n,r,m;
	cout<<"Ingrese un numero: ";
	cin>>m;
	 for (n=0;n<=10;n++)
    {

     r =n*m;
     cout << m << "x" << n << "=" << r<< endl;
      cout << "\n";
    }
	
	
}
void Tablas()
{
for(int i = 1; i <= 10; i++) {
      cout << "Tabla de multiplicar de " << i << ":" << endl;
      for(int j = 1; j <= 10; j++) {
         cout << i << " x " << j << " = " << i * j << endl;
      }
      cout << endl;
   }
}

void Mgrafica()
{
    int num1, num2;

   cout << "Ingrese dos numeros para multiplicar: ";
   cin >> num1 >> num2;

   cout << "   " << setw(2) << num1 << endl;
   cout << "x  " << setw(2) << num2 << endl;
   cout << "-----" << endl;

   for(int i = 1; i <= num2; i++) {
      int result = num1 * i;
      cout << setw(2) << "   " << setw(2) << result << endl;
   }

    }

void ConversionB()
{
    int decimal, cociente, resto, i = 1;
   int binario = 0;
   cout << "Ingrese un numero decimal: ";
   cin >> decimal;
   cociente = decimal;
   while (cociente != 0) {
      resto = cociente % 2;
      cociente = cociente / 2;
      binario = binario + resto * i;
      i = i * 10;
   }
   cout << "El numero binario es: " << binario << endl;
}

void ConversionH()
{
	int decimal, cociente, resto;
   string hexadecimal = "";
   char digito_hexa;
   cout << "Ingrese un numero decimal: ";
   cin >> decimal;
   cociente = decimal;
   while (cociente != 0) {
      resto = cociente % 16;
      if (resto < 10) {
         digito_hexa = resto + 48;
      } else {
         digito_hexa = resto + 55;
      }
      hexadecimal = digito_hexa + hexadecimal;
      cociente = cociente / 16;
   }
   cout << "El numero hexadecimal es: " << hexadecimal << endl;
}
void Geometricas()
{
   std::cout << "Triangulo:\n\n";
    std::cout << "     *     \n";
    std::cout << "    ***    \n";
    std::cout << "   *****   \n";
    std::cout << "  *******  \n";
    std::cout << " ********* \n\n";

    std::cout << "Cuadrado:\n\n";
    std::cout << " ********* \n";
    std::cout << " *       * \n";
    std::cout << " *       * \n";
    std::cout << " *       * \n";
    std::cout << " ********* \n\n";
    std::cout << "Rectangulo:\n\n";
    std::cout << " ******* \n";
    std::cout << " *     * \n";
    std::cout << " *     * \n";
    std::cout << " *     * \n";
    std::cout << " *     * \n";
    std::cout << " *     * \n";
    std::cout << " *     * \n";
    std::cout << " ******* \n\n";
     
    std::cout << "Rombo:\n\n";
    std::cout << "     *     \n";
    std::cout << "          \n";
    std::cout << " *   *   * \n";
    std::cout << "         \n";
    std::cout << "     *      \n\n"; 
     
    }


void MPunto()
{
	int x = 0, y = 0; 
    int dx = 1, dy = 1; 

    while (true)
    {
       
        system("cls");

       
        for (int i = 0; i < y; i++)
            std::cout << std::endl;
        for (int i = 0; i < x; i++)
            std::cout << " ";
        std::cout << "o" << std::endl;

       
        x += dx;
        y += dy;

       
        if (x == 0 || x == 79) 
            dx = -dx;
        if (y == 0 || y == 24) 
            dy = -dy;

        break;
    }
    }
    
	
void Cajero()
{
     float contador;
	 string contrasena;
	 float deposito;
	 int respuesta;
	 float retiro;
	 float saldo;
	 saldo = 1000;
	 contador = 1;
 	while (contador<=3) {
		cout<<"\n"<< "Escribe la contraseña" << endl;
		cin >> contrasena;
		if (contrasena=="12345") {
			contador = 4;
			respuesta = 0;
			while (respuesta!=4) {
				cout<<"\n"<<  "1: = Consultar saldo" << endl;
				cout<<"\n"<< "2: = Ingresar saldo" << endl;
				cout<<"\n"<< "3: = Retirar saldo" << endl;
				cout<<"\n"<< "4: = Salir" << endl;
				cin >> respuesta;
				switch (respuesta) {
				case 1:
					cout<<"\n"<< "Tu saldo actual es: $" << saldo << endl;
					break;
				case 2:
					cout << "Ingresa la cantidad a depositar" << endl;
					cin >> deposito;
					saldo = saldo+deposito;
					cout<<"\n"<< "Tu saldo actual es es: $" << saldo << endl;
					break;
				case 3:
					cout<<"\n"<< "Ingresa la cantidad a retirar" << endl;
					cin >> retiro;
					if (retiro>saldo) {
						cout<<"\n"<< "La cantidad supera el saldo" << endl;
						cout<<"\n"<< "Tu saldo actual es: $" << saldo << endl;
					} else {
						saldo = saldo-retiro;
						cout<<"\n"<<  "Tu saldo actual es: $" << saldo << endl;
					}
					break;
				}
			}
		} else {
			contador = contador+1;
			if (contador==4) {
				cout<<"\n"<< "Has fallado los 3 intentos" << endl;
			} else {
				cout<<"\n"<<  "La contrasena es incorrecta" << endl;
			}
		}
	 }
}

void Hipo(){
	 float a, b, c; 

    std::cout<<"\n"<< "Ingrese la longitud del primer cateto: ";
    std::cin >> a;

    std::cout<<"\n"<<"Ingrese la longitud del segundo cateto: ";
    std::cin >> b;

    c = sqrt(a*a + b*b); 

    std::cout<<"\n"<< "La longitud de la hipotenusa es: " << c << std::endl;
	
}
void F()
{
    cout<<"|||||||||||||||||||||"<<endl;
    cout<<"||/////////////////||"<<endl;
    cout<<"||///||||||||||||||||"<<endl;
    cout<<"||///||"<<endl;
    cout<<"||///|||||||||"<<endl;
    cout<<"||//////////||"<<endl;
    cout<<"||//||||||||||"<<endl;
    cout<<"||//||"<<endl;
    cout<<"||//||"<<endl;
    cout<<"||//||"<<endl;
    cout<<"||//||"<<endl;
    cout<<"||||||"<<endl;
    }
struct persona
{
    string nombre; 
};

persona e[10];
void Ordenamiento()
{
   for (int i = 0; i <=9; i++) 
    {
        system("cls");
        cout << "Ingrese los nombres: " << endl;
        cin >> e[i].nombre;
    }
    
   
    int i, j;
    persona tempo;
    cout <<"Imprimiendo los nombres sin ordenar" << endl;
     for (int i = 0;i < 10; i++)
	 {
     cout << e[i].nombre << endl;
	 }

    cout<<"Ordenando los nombres"<< endl;
    for (int i = 0;i < 10; i++)
	{
        for (int j = 0; j< 10-1; j++)
		{
            if (e[j].nombre > e[j+1].nombre)
			{
                tempo = e[j]; 
                e[j] = e[j+1]; 
                e[j+1] = tempo;
            }
        }
    }
    cout<<"Imprimiendo los nombres ordenados" << endl;
    for (int j = 0; j < 10; j++) 
    {
        cout << e[j].nombre << "\n";
}
}

void  Alea()
{
   srand(time(NULL));

  int na = rand() % 11 + 1;

  
if (na==1) {
cout <<"El pokemon aleatorio es: Bulbasaur"<<endl;
}

if (na==2) {
cout <<"El pokemon aleatorio es: Ivysaur "<<endl;
}

if (na==3) {
cout <<"El pokemon aleatorio es:Venusaur "<<endl;
}

if (na==4) {
cout <<"El pokemon aleatorio es: Charmander "<<endl;
}
  if (na==5) {
cout <<"El pokemon aleatorio es: Charmeleon"<<endl;
}

if (na==6) {
cout <<"El pokemon aleatorio es: Charizard "<<endl;
}

if (na==7) {
cout <<"El pokemon aleatorio es: Squirtle "<<endl;
}

if (na==8) {
cout <<"El pokemon aleatorio es: Wartortle "<<endl;
}
   if (na==9) {
cout <<"El pokemon aleatorio es: Blastoise "<<endl;
}

if (na==10) {
cout <<"El pokemon aleatorio es: Caterpie "<<endl;
}
    
}

void Arte()
{  
cout<<"________$$$$.."<<endl;
cout<<"______$$$$$$$$$"<<endl;
cout<<"______$$$$$$$_$"<<endl;
cout<<"_____$$$$$$$$$$"<<endl;
cout<<"______$$$$$$$$$$"<<endl;
cout<<"_____$$$$$$_$$$$$"<<endl;
cout<<"____$$$$$$$_____$$$"<<endl;
cout<<"____$$$$$$$$_____$"<<endl;
cout<<"____$$$$$$$$$$"<<endl;
cout<<"_____$$$$$$$$$$"<<endl;
cout<<"_____$$$$$$$$$$$"<<endl;
cout<<"______$$$$$$$$$$$"<<endl;
cout<<"_$$$$___$$$$$$$$$"<<endl;
cout<<"__$$$$$$$$$$$$$$$"<<endl;
cout<<"_$$$$$$$$$$$$$$$"<<endl;
cout<<"__$$$$$$$$$$$$$"<<endl;
cout<<"$$$$$$$$$$$$$"<<endl;
cout<<"__$__$$$$$$"<<endl;
cout<<"____$$$$$$"<<endl;
cout<<"____$$$$$"<<endl;
cout<<"___$$$$$$_____$"<<endl;
cout<<"___$$$$$$___$$_$$"<<endl;
cout<<"____$$$$$___$__$$"<<endl;
cout<<"____$$$$$______$$"<<endl;
cout<<"_____$$$$$____$$$"<<endl;
cout<<"_______$$$$$$$$$"<<endl;
cout<<"__________$$$$"<<endl;
}
