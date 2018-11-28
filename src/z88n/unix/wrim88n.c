/***********************************************************************
* 
*               *****   ***    ***
*                  *   *   *  *   *
*                 *     ***    ***
*                *     *   *  *   *
*               *****   ***    ***
*
* A FREE Finite Elements Analysis Program in ANSI C for the UNIX and
* the Windows OS.
*
* Composed and edited and copyright by 
* Professor Dr.-Ing. Frank Rieg, University of Bayreuth, Germany
*
* eMail: 
* frank.rieg@uni-bayreuth.de
* dr.frank.rieg@t-online.de
* 
* V15.0  November 18 2015
*
* This program is free software; you can redistribute it and/or modify
* it under the terms of the GNU General Public License as published by
* the Free Software Foundation; either version 2, or (at your option)
* any later version.
*
* This program is distributed in the hope that it will be useful,
* but WITHOUT ANY WARRANTY; without even the implied warranty of
* MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
* GNU General Public License for more details.
*
* You should have received a copy of the GNU General Public License
* along with this program; see the file COPYING.  If not, write to
* the Free Software Foundation, 675 Mass Ave, Cambridge, MA 02139, USA.
***********************************************************************/ 
/***********************************************************************
* Function wrim88n gibt Texte aus
* 31.7.2011 Rieg
***********************************************************************/ 

/***********************************************************************
* Fuer UNIX
***********************************************************************/
#ifdef FR_UNIX
#include <z88n.h>
#include <stdio.h>    /* printf */
#endif

/***********************************************************************
* Formate
***********************************************************************/
#ifdef FR_XINT
#define PD "%d"
#endif

#ifdef FR_XLONG
#define PD "%ld"
#endif

#ifdef FR_XLOLO
#define PD "%lld"
#endif

/***********************************************************************
* hier beginnt Function wrim88n
***********************************************************************/
int wrim88n(FR_INT4 i,int iatx)
{
extern FR_INT4 LANG;

switch(iatx)
  {
  case TX_SUPERELE:
    if(LANG == 1) printf("\rSuperelement " PD,i);
    if(LANG == 2) printf("\rsuper element " PD,i);
    break;
  case TX_REANI:
    if(LANG == 1) printf("Z88NI.TXT einlesen\n");
    if(LANG == 2) printf("reading Z88NI.TXT\n");
    break;
  case TX_BERJOIN:
    if(LANG == 1) printf("Vektor Join berechnen\n");
    if(LANG == 2) printf("computing vector Join\n");
    break;
  case TX_BERKOOR:
    if(LANG == 1) printf("Koordinaten berechnen:\n");
    if(LANG == 2) printf("computing coordinates:\n");
    break;
  case TX_BERKOIN:
    if(LANG == 1) printf("\nKoinzidenz berechnen:\n");
    if(LANG == 2) printf("\ncomputing element information:\n");
    break;
  case TX_WRII1:
    if(LANG == 1) printf("\nZ88I1.TXT beschreiben, Ende Z88N\n");
    if(LANG == 2) printf("\nwriting Z88I1.TXT, Z88N done\n");
    break;
  }
return(0);
}

