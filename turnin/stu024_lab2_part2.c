/*	Author: kevin
 *  Partner(s) Name: 
 *	Lab Section:
 *	Assignment: Lab #  Exercise #
 *	Exercise Description: [optional - include for your own benefit]
 *
 *	I acknowledge all content contained herein, excluding template or example
 *	code, is my own original work.
 */
#include <avr/io.h>
#ifdef _SIMULATE_
#include "simAVRHeader.h"
#endif

int main(void) {
    DDRA = 0x00; PORTA = 0xFF; // Configure port A's 8 pins as inputs
    DDRC = 0xFF; PORTC = 0x00; // Configure port C's 8 pins as outputs, initialize to 0s
    // unsigned char tmpC = 0x00; // Temporary variable to hold the value of C
    unsigned char tmpA = 0x00; // Temporary variable to hold the value of A
    while(1) {
        // 1) Read input
        tmpA = PINA & 0x0F;
        // 2) Perform computation
        // if PA3...PA0 is 1, then full, set PORTC as available
	unsigned char cntavail;

        cntavail = ((tmpA & 0x08) >> 3) + ((tmpA & 0x04) >> 2) + ((tmpA & 0x02) >> 1) + (tmpA & 0x01);
	// 3) Write output
	PORTC = 4-cntavail;    
    }
    return 0;
}

