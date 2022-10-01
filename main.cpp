/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: angelcano
 *
 * Created on 8 de septiembre de 2022, 07:45
 */

#include <cstdio>
#include <string>
#include<iostream>
#include <math.h>
#include <iostream>
#include "touring_lb.h"
using namespace std;

int main() {
 unsigned long long int encriptado=touring_cryp_v1("Angel",13);
 unsigned long long int encriptado2=touring_cryp_v1("Gabriel",13);
 cout<<encriptado<<endl;
 cout<<encriptado2<<endl;
 vector<struct Lin_Comb>combinaciones;
 int res=mcd(16978534417,7800152204534443,combinaciones); 
 Lin_Comb resComb = combinaciones.back();
 cout << res<<endl;
 cout<<resComb.res<<" = "<<resComb.a<<"("<<resComb.s<<") + "<<resComb.b<<"("<<resComb.t<<")"<<endl;
}
