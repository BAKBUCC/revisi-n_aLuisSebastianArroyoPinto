#include <iostream>

using namespace std;

int main()
{
    //1
    cout<<"coloque un númerode 5 digitos" << endl;
    int n;
    cin >> n;
    if (n-10000>=0 && 100000-n>0)
    {
        int n_1 = n/10000;
        cout<<n_1<<'\t';
        int n_2 = n-(n_1*10000);
        cout << (n_2/1000)<< '\t';
        int n_3 = n_2- ((n_2/1000)*1000);
        cout << (n_3/100) <<'\t';
        int n_4 = n_3 - ((n_3/100)*100);
        cout << (n_4/10)<< '\t';
        int n_5 = n_4 - ((n_4/10)*10);
        cout << n_5 << endl;
    }
    else
    {
        cout<<"no colocó un número de 5 digitos"<<endl;
    }
    //2
    cout <<"coloque un número"<< endl;
    int number;
    cin >> number;
    int i;
    for (i=1; 10<=number ; i++)
    {
        number=number/10;
    }
    if (i==1)
    {
        cout << "hay 1 digito" << endl;
    }
    else if (i!=0)
    {
        cout << "hay " << i << " digitos" << endl;
    }

    //3
    cout<<"coloque un palindrome de 5 digitos"<<endl;
    int a;
    cin >> a;
    if (a-10000>=0 && 100000-a>0)
    {
        int primer_digito=a/10000;
        int a_1=a-(primer_digito*10000);
        int segundo_digito=a_1/1000;
        int a_2=a_1-(segundo_digito*1000);
        int tercer_digito=a_2/100;
        int a_3=a_2-(tercer_digito*100);
        int cuarto_digito=a_3/10;
        int a_4=a_3-(cuarto_digito*10);
        int quinto_digito=a_4;
        if (primer_digito == quinto_digito && segundo_digito == cuarto_digito)
        {
            cout<<a<<" es un numero palindrome"<<endl;
        }
        else if (primer_digito != quinto_digito || segundo_digito != cuarto_digito)
        {
            cout<< a << " no es un numero palindrome"<<endl;
        }
    }
    else
    {
        cout<<"no es un numero de 5 digitos"<< endl;
    }

    //4
    cout << "coloque cuantos números fibonacci quiere:" ;
    int cantidad;
    cin>> cantidad;


    //5
    char numero;
//    cin >> numero;
//    int f = static_cast<int>(numero);
//    cout << f << endl;

    // 5 correccion
    cin >> numero;
    int p = static_cast<int>(numero);
    if (p >= 48 && p <=57)
    {
        cout << numero << " es un número" << endl;
    }
    else
    {
        cout << numero << " no es un número" << endl;
    }

    //6
//    char variable;
//    cin >> variable;
//    int bu = static_cast<int>(variable);
//    if (0<=bu<=255)
//    {
//        cout << "si es una letra"<< endl;
//        if (65<=bu<=90)
//        {
//            //cout << lower_case(variable)<< endl;
//        }
//        else if(97<=bu<=122)
//        {
//            //cout<<upper_case(variable)<< endl;
//        }
//        else cout<<"no hay"<< endl;
//    }

    //6 coreccion
    char caracter;
    cin >> caracter;
    int m = static_cast<int>(caracter);
    cout << m << endl;
    if ( m >=65 && m <= 90)
    {
        cout << caracter << " es una letra mayuscula" << endl;
        m=m+32;
        cout << static_cast<char>(m) << endl;
    }
    else if ( m>=97 && m <= 122)
    {
        cout << caracter << " es una letra minuscula" << endl;
        m=m-32;
        cout << static_cast<char>(m) << endl;
    }

   return 0;


}
