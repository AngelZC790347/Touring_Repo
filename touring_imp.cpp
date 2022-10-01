/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
#include "touring_lb.h"
#include<iostream>
#include <algorithm>
#include <vector>
#include <cstring>
#include <iostream>
#include <locale>
#include <cstdlib>
#include <valarray>
#include <stdbool.h>
#include <type_traits>
int mcd(unsigned long long int n1, unsigned long long int n2,vector<Lin_Comb>&combinations){
  static unsigned long long int a , b;
  unsigned long long int mayor = n1;
  unsigned long long int menor = n2;
  if (n2 > n1) {
    mayor = n2;
    menor = n1;
  }
  if (combinations.size() == 0) {
    a = mayor;
    b = menor;
    combinations.push_back(Lin_Comb(a,b,1,0,a));
    combinations.push_back(Lin_Comb(a,b,0,1,b));
  }
  if (menor == 0){
    combinations.pop_back();
    return mayor;
  } 
  unsigned long long int res = mayor%menor;
  signed long long int s = combinations[combinations.size()-2].s+((combinations[combinations.size()-1].s)*(mayor/menor))*-1;
  signed long long int t = combinations[combinations.size()-2].t+((combinations[combinations.size()-1].t)*(mayor/menor))*-1;
  //cout<<res<<" = "<<a<<"("<<s<<") + "<<b<<"("<<t<<")"<<endl;
  combinations.push_back(Lin_Comb(a,b,s,t,res));
  return mcd(res,menor,combinations);
}

unsigned long long int touring_cryp_v1(const char* mensaje, long long key){
  int exponente = 0;
  unsigned long long int m=0;
  char * tmp_msg;
  tmp_msg = new char[strlen(mensaje)];
  strcpy(tmp_msg,mensaje);
  for (int i = 0; i < strlen(mensaje); i++) {
    tmp_msg[i]=toupper(mensaje[i]);
    int cod =tmp_msg[i] - 'A';
    m *= pow(10,2);
    m += cod;
  }
  if (!esPrimo(m)){
    m*=100;
  }
  do{
    m += 1;
  }while (!esPrimo(m));
  return m*key;
}

bool esPrimo(unsigned long long int numero){
  int cantDiv = 0;
  for (int i = 1; i < numero; i++) {
    if (numero % i == 0) {
      cantDiv ++;
    }
    if (cantDiv >=2){
      return false;
    }
  }
  return true;
}
int mcd(unsigned long long int a,unsigned long long int b){
  if (b == 0) return a;
  return mcd(b,a%b);
}



