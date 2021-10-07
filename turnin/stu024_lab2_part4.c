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
    DDRB = 0x00; PORTB = 0xFF; // Configure port B's 8 pins as inputs
    DDRC = 0x00; PORTC = 0xFF; // Configure port C's 8 pins as inputs
    DDRD = 0xFF; PORTD = 0x00; // Configure port D's 8 pins as outputs, initialize to 0s
    // unsigned char tmpD = 0x00; // Temporary variable to hold the value of D
    unsigned char tmpA = 0x00; // Temporary variable to hold the value of A
    unsigned char tmpB = 0x00; // Temporary variable to hold the value of B
    unsigned char tmpC = 0x00; // Temporary variable to hold the value of C
    while(1) {
        // 1) Read input
        tmpA = PINA & 0xFF;
	tmpB = PINB & 0xFF;
	tmpC = PINC & 0xFF;
        // 2) Perform computation
        // if PA3...PA0 is 1, then full, set PORTC as available
	unsigned short totalWeight;
	unsigned char maxExceeded = 0;
	unsigned char unbalanced;
	signed short difference;
	
	totalWeight = tmpA + tmpB + tmpC;
	maxExceeded = (totalWeight > 141);
	difference = tmpC - tmpA;
	unbalanced = ((difference > 80) || (difference < -80));

	// 3) Write result

	PORTD = (maxExceeded | unbalanced << 1 | ((totalWeight >> 2) & 0xFFFC));    
    }
    return 0;
}

