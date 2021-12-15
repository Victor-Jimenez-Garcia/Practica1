#include <iostream>
using namespace std;
int main()
{
  int opcion=1;
  while(opcion !=0)
  {
    cout <<"-------------------------------------------------------------------------------------------------------"<<endl;
    cout <<"Ingrese una opcion"<<endl;
    cout <<"1. Para saber si una letra ingresada es una vocal o consonante."<<endl;
    cout <<"2. Para determinar la cantidad de billetes y monedas para una cantidad determinada de dinero."<<endl;
    cout <<"3. Imprimir un rombo dado un numero impar."<<endl;
    cout <<"4. Para encontrar el valor aproximado del numero euler."<<endl;
    cout <<"5. Para saber la suma de todos los multiplos de a y b menores a c."<<endl;
    cout <<"6. Para conocer la suma de todos los digitos de N elevados a si mismos."<<endl;
    cout <<"7. Para calcular el maximo factor primo de un numero."<<endl;
    cout <<"8. Para calcular la suma de todos los numeros primos menores a un numero ingresado."<<endl;
    cout <<"9. Para calcular la suma de los numeros en la diagonal de una matriz nxn, con n impar."<<endl;
    cout <<"10. Para saber la serie de Collatz mas larga que produce una semilla j menor a un numero k."<<endl;
    cout <<"0 para salir"<<endl;
    cin>>opcion;
    switch (opcion)
    {
     case 1:
            {
        char letra; int c=1;
            while(c!=0){
            cout<<"Ingrese una letra ";cin>>letra;
            if(letra=='a'||letra=='e'||letra=='i'||letra=='o'||letra=='u'||letra=='A'||letra=='E'||letra=='I'||letra=='O'||letra=='U'){
                cout<<letra<<" es una vocal"<<endl;
                c=0;
            }
            else if((letra>='B'&&letra<='D')||(letra>='F'&&letra<='H')||(letra>='J'&&letra<='N')||(letra>='P'&&letra<='T')||(letra>='V'&&letra<='Z')||(letra>='b'&&letra<='d')||(letra>='f'&&letra<='h')||(letra>='j'&&letra<='n')||(letra>='p'&&letra<='t')||(letra>='v'&&letra<='z')){
                cout<<letra<<" es una consnante"<<endl;
                c=0;
            }
            else {
                cout<<"No es una letra"<<endl;
                c=0;
            }
                }
            break;
            }
    case 2:{
        int valor;
        cout<<"Ingrese una cantidad de dinero: "<<endl;
        cin>>valor;
        int cont50k=0,cont20k=0,cont10k=0,cont5k=0,cont2k=0,cont1k=0,cont500=0,cont200=0,cont100=0,cont50=0;
        while(valor>=50000){
            valor-=50000;
            cont50k++;
        }
        while(valor>=20000){
            valor-=20000;
            cont20k++;
        }
        while(valor>=10000){
            valor-=10000;
            cont10k++;
        }
        while(valor>=5000){
            valor-=5000;
            cont5k++;
        }
        while(valor>=2000){
            valor-=2000;
            cont2k++;
        }
        while(valor>=1000){
            valor-=1000;
            cont1k++;
        }
        while(valor>=500){
            valor-=500;
            cont500++;
        }
        while(valor>=200){
            valor-=200;
            cont200++;
        }
        while(valor>=100){
            valor-=100;
            cont100++;
        }
        while(valor>=50){
            valor-=50;
            cont50++;
        }
        cout<<"50.000: "<<cont50k<<endl; cout<<"20.000: "<<cont20k<<endl;
        cout<<"10.000: "<<cont10k<<endl; cout<<"5.000: "<<cont5k<<endl;
        cout<<"2.000: "<<cont2k<<endl; cout<<"1.000: "<<cont1k<<endl;
        cout<<"500: "<<cont500<<endl; cout<<"200: "<<cont200<<endl;
        cout<<"100: "<<cont100<<endl; cout<<"50: "<<cont50<<endl;
        cout<<"Faltante: "<<valor<<endl;
        break;
    }
      case 3:{
        int n;
        cout<<"Ingrese un numero impar "; cin>>n;
        if(n%2==1){
        for(int i=0; i<=n/2; i++){
            int tope1=n/2-i;
            for(int h=0; h<tope1;h++){
                cout<<' ';
            }
            for(int j=0; j<2*i+1; j++){
                cout<<'*';
            }
            for(int h=0; h<tope1;h++){
                cout<<' ';
            }
            cout<<endl;
        }
        for(int i=n/2; i>0; i--){
            int tope2=n/2-i;
            for(int h=tope2; h>=0;h--){
                cout<<' ';
            }
            for(int j=0; j<2*i-1; j++){
                cout<<'*';
            }
            for(int h=tope2; h>=0;h--){
                cout<<' ';
            }
            cout<<endl;
            }
        }
        else cout<<"Solo se reciben numeros impares"<<endl;
        }
        break;
     case 4:{
        int num, factorial;
        float ter_v, ter_n=1;

        cout<<"Ingrese un numero de elementos: "; cin>>num;

        factorial=1;
        for(int i=1; i<=num-1; i++){
            factorial=(factorial*i);
            ter_v=1.0/factorial;
            ter_n=ter_n+ter_v;
        }
        cout<<"e es aproximadamente "<<ter_n<<endl;
       break;
    }
     case 5:{
        int a, b, c, mul1,mul2,s1=0, s2=0,st=0;
            cout<<"Ingrese un numero "; cin>>a;
            cout<<"Ingrese un numero "; cin>>b;
            cout<<"Ingrese un numero "; cin>>c;
            if(a!=b){
            for(int i=1; i<c;i++){
                mul1=a*i;
                if(mul1<c){
                s1+=mul1;
                cout<<'+'<<mul1;
                }
            }
            for(int j=1; j<c;j++){
                mul2=b*j;
                if(mul2%a!=0){
                if(mul2>=c) break;
                s2+=mul2;
                cout<<'+'<<mul2;
                }
           }
            st=s1+s2;cout<<'='<<st<<endl;
        }else cout<<st<<endl;
       break;
    }
     case 6:{
        int n, aux,res=1,suma=0;
            cout<<"Ingrese un numero "; cin>>n;
            while(n!=0){
                aux=n%10;
                for(int i=1;i<=aux;i++){
                   res=res*aux;
                    }
                suma=res+suma;
                res=1;
                n=n/10;
            }
                cout<<"El resultado de la suma es: "<<suma<<endl;
       break;
    }
     case 7:{
        int n,mayor=0,c=0;
            cout<<"Ingrese un numero "; cin>>n;

            for(int i=n/2;i>=1;i--){
                if(n%i==0 && i>mayor){   //verifico si es multiplo
                    for(int j=i/2;j>=1;j--){
                    if(i%j==0)c++;
                    }
                    if(c==1)mayor=i;
                    c=0;
                }
            }
            cout<<"El mayor factor primo de "<<n<<" es "<<mayor<<endl;
       break;
    }
     case 8:{
        int n,suma=0;
        cout<<"Ingrese un numero: "; cin>>n;
        for(int a=1;a<n;a++){
            int aux=0;
            for(int div=1;div<=a;div++)
                if(a%div==0)
                     aux++;
                   if(aux==2){
                     suma+=a;
                   }
             }
       cout<<"El resultado de la suma es "<<suma<<endl;
       break;
    }
     case 9:{
        int n;
        cout<<"Ingrese un numero impar "; cin>>n;
        int n2=1, c=2, suma=1;
        if(n%2==1){
            while(n2!=n*n){
                for(int j=0;j<4;j++){
                    n2=n2+c;
                    suma=suma+n2;
                }
                c+=2;
            }
            cout<<"En una espiral "<<n<<"x"<<n<<", la suma de los numeros en la diagonal es: "<<suma<<endl;
        }else cout<<"El numero ingresado no es impar."<<endl;
       break;
    }
     case 10:{
        int n,aux,terminos=0,sem=0;
            int mayor=terminos;
            cout<<"Ingrese una semilla  ";cin>>n;
            aux=n;
            for(int i=n;i>=2;i--){
                while(aux!=1){
                    if(aux%2==0){
                        aux=aux/2;
                        terminos+=1;
                    }
                    else{
                        aux=3*aux+1;
                        terminos+=1;
                    }
               }
                if(terminos>mayor){
                    mayor=terminos;
                    sem=i;
                }
                terminos=1;
                aux=i-1;
            }
            cout<<"La serie mas larga es con la semilla: "<<sem<<" teniendo "<<mayor<< " terminos."<<endl;
       break;
    }
    default:
          cout<<"opcion no valida"<<endl;
        break;
      }
    }
    return 0;
}
