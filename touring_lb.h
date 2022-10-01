/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   touring_lb.h
 * Author: angelcano
 *
 * Created on 24 de septiembre de 2022, 17:20
 */

#ifndef TOURING_LB_H
#define TOURING_LB_H
#include <vector>
using namespace std;
struct Lin_Comb{
  unsigned long long int a;
  unsigned long long int b;
  signed long long int s;
  signed long long int t;
  unsigned long long int res;
  Lin_Comb(){};
  Lin_Comb(unsigned long long int a, unsigned long long int b , unsigned long long int s, unsigned long long int t, unsigned long long int res):a(a),b(b),s(s),t(t),res(res){};
};
bool esPrimo(unsigned long long int numero);
int mcd(unsigned long long int a,unsigned long long int b);
int mcd(unsigned long long int n1,unsigned long long int n2,vector<Lin_Comb>&);
unsigned long long int touring_cryp_v1(const char * mensaje ,long long key);
unsigned long long int touring_cryp_v2(const char * mensaje ,long long public_key , long long private_key);
#endif /* TOURING_LB_H */

