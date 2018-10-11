/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   TugasEdmodo.h
 * Author: prana Septia 5170411184
 *
 * Created on October 11, 2018, 1:00 PM
 */
#include <iostream>
#include <stdlib.h>
#define PRANA 5

using namespace std;

struct input{
    char movie[50];
    char tahun[5];
}films[PRANA];
main()
{
    char buffer [50];
    int pilih,pav;
    pranaganteng :
    cout<<"Movie Program "<<endl;
    cout<<"___________"<<endl;
    cout<<"1. Masukan Data"<<endl;
    cout<<"2. Tampil Dara"<<endl;
    cout<<"3. Keluar"<<endl;
    cout<<"Pilih : ";
    cin>>pilih;
    int i;
    switch (pilih)
    {
        case 1:
        {
            cout<<"Masukan Jumlah Filem Favorit Anda :";
            cin>>pav;
            for(i=1;i<=pav;i++)
            {
            cout<<"Data Ke :"<<i<<endl;
            cout<<"Masukan Nama Filem :"; cin>>films[i].movie;
            cout<<"Tahun Filem :";cin>>films[i].tahun;
            }
        }
        goto pranaganteng;
        break;
        case 2:
        {
            cout<<" "<<endl;
            
            cout<<"Film Favorit anda adalah :"<<endl;
            for (i=1;i<=pav;i++)
            {
                cout<<films[i].movie;
                cout<<"("<<films[i].tahun<<")"<<endl;
            }
            
        }
        break;
        goto pranaganteng;
        case 3:
            cout<<"Terima Kasih ";
    }
}