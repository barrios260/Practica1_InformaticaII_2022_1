#include <iostream>

using namespace std;

int main()
{
short int opcion;
cout<<"MENU"<<endl;
cout<<"1.problema 2"<<endl;
cout<<"2.problema 4"<<endl;
cout<<"3.problema 6"<<endl;
cout<<"4.problema 8"<<endl;
cout<<"5.problema 10"<<endl;
cout<<"6.problema 12"<<endl;
cout<<"7.problema 14"<<endl;
cout<<"8.problema 16"<<endl;
cout<<"9.problema 17"<<endl;

cin>>opcion;
switch(opcion){
case 1:{
    int dinero,resto,faltante,b50k,b20k,b10k,b5k,b2k,b1k,m500,
            m200,m100,m50;//variables necesarias de billetes y monedas
    cout<<"ingrese la cantidad de dinero: ";
    cin>>dinero;

   if(dinero>0){
       b50k=dinero/50000;
       dinero=dinero-(b50k*50000);
       b20k=dinero/20000;
       dinero=dinero-(b20k*20000);
       b10k=dinero/10000;
       dinero=dinero-(b10k*10000);
       b5k=dinero/5000;
       dinero=dinero-(b5k*5000);
       b2k=dinero/2000;
       dinero=dinero-(b2k*2000);
       b1k=dinero/1000;
       dinero=dinero-(b1k*1000);
       m500=dinero/500;
       dinero=dinero-(m500*500);
       m200=dinero/200;
       dinero=dinero-(m200*200);
       m100=dinero/100;
       dinero=dinero-(m100*100);
       m50=dinero/50;
       faltante=dinero%50;

       cout<<"billetes de 50.000: "<<b50k<<endl;
       cout<<"billetes de 20.000: "<<b20k<<endl;
       cout<<"billetes de 10.000: "<<b10k<<endl;
       cout<<"billetes de 5.000: "<<b5k<<endl;
       cout<<"billetes de 2.000: "<<b2k<<endl;
       cout<<"billetes de 1.000: "<<b1k<<endl;
       cout<<"monedas de 500: "<<m500<<endl;
       cout<<"monedas de 200: "<<m200<<endl;
       cout<<"monedas de 100: "<<m100<<endl;
       cout<<"monedas de 50: "<<m50<<endl;
       cout<<"faltante: "<<faltante<<endl;

   }
   else if(dinero<=0){
       cout<<"debe ingresar una cantidad de dinero mayor que 0."<<endl;
       }
}
break;

case 2:{
    int pri,seg,horas1,minutos1,horas2,minutos2,minutos,horas;
    cout<<"ingrese la hora inicial: "<<endl;
    cin>>pri;
    cout<<"ingrese la hora que ha pasado: "<<endl;
    cin>>seg;
    if(pri<=2400 and pri%100<=59 and pri>0){//se valida que la hora inicial sea en el formato correcto
        if(seg<=2400 and seg%100<59 and seg>0){//se valida que la hora final sea formato correcto
            horas1=pri/100;
            minutos1 = pri % 100;
            horas2 = seg / 100;                 //con un proceso de divisiones se llega a cada valor de las horas
            minutos2 = pri % 100;
            minutos = minutos1 + minutos2;
            if (minutos>=60){
                horas += 1;
                minutos -= 60;
           }
           else{}
           horas=horas1+horas2+horas;
           if(horas>=24){
               horas-=24;
           }
           else{}
           if(minutos<10){
               cout<<"la hora es: "<<horas<<":0"<<minutos<<endl;
           }
           else{
                cout << "La hora es: " << horas << ":" << minutos << endl;
               }
    }//segundo condicional
        else{
             cout << "El tiempo " << seg << " no es valido" << endl;
            }


    }//primer condicional
    else {
           cout << "El tiempo " << pri<< " no es valido" << endl;
       }

}
break;
case 3:{
        int num_e,j;
        float resul=1, cont, oper;
        cout << "Ingrese la cantidad de sucesiones: ";
        cin >> num_e;
        oper=1;
        j=num_e-1;
        for (int i=1;i<=(num_e-1);i++){
            oper=oper*i;
            cont=(1 / oper);
            if(j>=0){
                resul=resul + cont;
                j-=1;
            }
        }
        cout << "e es aproximadamente: " << resul << endl;
    }
break;
case 4:{
    int a, b, c, cont, suma, x;
        cout << "Ingrese el valor de a: ";
        cin >> a;
        cout << "Ingrese el valor de b: ";
        cin >> b;
        cout << "Ingrese el valor de c: ";
        cin >> c;
        cont = 1;
        suma = 0;
        x=a;
        if (a<b){
            while(cont<c){
                a=a*cont;
                if (a<c){
                    cout << a << " + ";
                    cont += 1;
                    suma = suma + a;
                }
                else {
                    cont=c;
                }

            }
            cont = 1;
            while(cont<c){
                b=b*cont;
                if (b%x!=0){
                    if (b<c){
                        cout << b << " + ";
                        cont += 1;
                        suma = suma + b;
                    }
                    else {
                        cont=c;
                    }
                }
                else {
                    cont += 1;
                }

            }
        }
        if (b<a) {
            x=b;
            while(cont<c){
                b=b*cont;
                if (b<c){
                    cout << b << " + ";
                    cont += 1;
                    suma = suma + b;
                }
                else {
                    cont=c;
                }

            }
            cont = 1;
            while(cont<c){
                a=a*cont;
                if (a%x!=0){
                    if (a<c){
                        cout << a << " + ";
                        cont += 1;
                        suma = suma + a;
                    }
                    else {
                        cont=c;
                    }
                }
                else {
                    cont += 1;
                }

            }
        }
        cout << "0: "  << suma << endl;
}
break;
case 5:{
    unsigned int num, n, p, i;
       cout << "Introduzca la cantidad de numeros primos que quiere obtener: ";
       cin >> num;
       cout << '\n' << endl;
       n = 2;
       i = 1;
       while(i <= num)
       {
           for(p = 2; n % p != 0; p++);
           if(p == n)
           {
               i++;
           }
           n++;
       }
       n-=1;
       cout << "El primo numero " << num << " es : " << n << endl ;
       return 0;
}
break;
case 6:{
    int N, cont, primos, mayor;
       cout << "Ingresar numero a evaluar: ";
       cin >> N;
       mayor=0;
       for (int i= 1; i<=N; i++){
           cont=2;
           primos=1;
           while(cont<= i/2 && primos){
               if (i%cont==0){
                       primos =0;
               }
               cont++;
           }
           if(primos){
               if (N%i==0 && i>mayor){
                   mayor=i;}

           }

       }
       cout << "El mayor factor primo de "<< N << " es: " << mayor << endl;
}
break;
case 7:{
    int bin,i,j,aux,res,num,numInv;
    bin=1;
    for(i=999;i>=100;i--){
        for(j=999;j>=100;j--){
            num=i*j;
            aux=num;
            numInv=0;
            while(aux>0){
                res=aux % 10;
                aux=aux/10;
                numInv=numInv*10+res;
                    }

            if(num==numInv){
                cout<<i<<"*"<<j<< " = "<< num<<endl;
                bin=0;
                break;
            }

        }
        if(bin==0) break;
    }

}
break;
case 8:{
    int num,cont,mayor,semilla,n;
    cout<<"Digite un numero : "<<endl;cin>>num;
     cont=1;
     mayor=0;
     semilla=num;

    for(num;num>1;num--){
        n=num;
        while(n>1){
            cont++;
            if(n%2==0){
                n=n/2;
            }
            else{
                n=(3*n)+1;
            }
        }
        if(cont>mayor){
            mayor=cont;
            semilla=num;
        }
        cont=1;
    }
    cout<<"La serie mas larga es con la semilla: "<<semilla<<" teniendo "<<mayor<<" terminos, su serie es: "<<endl;
    cout<<semilla<<" ";
    while(semilla>1){
        cont++;
        if(semilla%2==0){
            semilla=semilla/2;
            cout<<semilla<<" ";
        }
        else{
            semilla=(3*semilla)+1;
            cout<<semilla<<" ";
        }
    }
    cout<<endl;

}
break;
case 9:{
cout<<"Ingrese un numero k para calcular el primer numero triangular con k divisores: ";
      int k;
      cin >> k;
      if (k == 1){
      cout << "El numero es: " << k << " que tiene " << k << " divisores";
      }
      else{
           int i = 2;
           int b = 2;
           int enesimo;
           while (b < k){
           enesimo = (i * (i + 1)) / 2;
           int nueve = enesimo / 2;
           b = 2;
            for (int j = 2; j <= nueve; j++){
                if ((enesimo % j) == 0){
                    b++;
                }
            }
            i++;
           }
           cout << "El numero es: " << enesimo << " que tiene " << b << " divisores";
    }
}
}//corchete del switch
    return 0;
}
