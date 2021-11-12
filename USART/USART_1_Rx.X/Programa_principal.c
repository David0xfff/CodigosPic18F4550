/*

 * Tutorial 12 PIC18F4550 - USART Tx
 * 
 * Descripci�n:     Configurar el USART en modo Tx 

 * Autor:           Wels (@welstheory) 
 
 * Copyright: 		Wels Theory 2018

 * Fecha			16 de Julio del 2018
  
 * Facebook:        https://www.facebook.com/welstheory
 
 * Youtube:         https://www.youtube.com/wels_theory
 
 * Instagram:       https://www.instagram.com/wels_theory/  
 
 * Twitter:         https://www.twitter.com/welstheory 

 */

#include <xc.h>
#include "Configuracion.h"
#include "USART_libreria.h"

void main(void) {
    TRISD = 0;
    USART_Init(9600);
    while(1){
        PORTD = USART_Rx();
    }
}
