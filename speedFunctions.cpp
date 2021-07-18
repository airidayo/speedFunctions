#include <Arduino.h>
#include "speedFunctions.h"

fast::fast(){}

fast::high(unsigned char pin) {
    switch(pin) {
        case 0:  PORTD |= _BV(0); break;
        case 1:  PORTD |= _BV(1); break;
        case 2:  PORTD |= _BV(2); break;
        case 3:  PORTD |= _BV(3); break;
        case 4:  PORTD |= _BV(4); break;
        case 5:  PORTD |= _BV(5); break;
        case 6:  PORTD |= _BV(6); break;
        case 7:  PORTD |= _BV(7); break;
        case 8:  PORTB |= _BV(0); break;
        case 9:  PORTB |= _BV(1); break;
        case 10: PORTB |= _BV(2); break;
        case 11: PORTB |= _BV(3); break;
        case 12: PORTB |= _BV(4); break;
        case 13: PORTB |= _BV(5); break;
        case 14: PORTC |= _BV(0); break;
        case 15: PORTC |= _BV(1); break;
        case 16: PORTC |= _BV(2); break;
        case 17: PORTC |= _BV(3); break;
        case 18: PORTC |= _BV(4); break;
        case 19: PORTC |= _BV(5); break;
        default: return; break;
    }
}

fast::low(unsigned char pin) {
    switch(pin) {
        case 0:  PORTD &= ~_BV(0); break;
        case 1:  PORTD &= ~_BV(1); break;
        case 2:  PORTD &= ~_BV(2); break;
        case 3:  PORTD &= ~_BV(3); break;
        case 4:  PORTD &= ~_BV(4); break;
        case 5:  PORTD &= ~_BV(5); break;
        case 6:  PORTD &= ~_BV(6); break;
        case 7:  PORTD &= ~_BV(7); break;
        case 8:  PORTB &= ~_BV(0); break;
        case 9:  PORTB &= ~_BV(1); break;
        case 10: PORTB &= ~_BV(2); break;
        case 11: PORTB &= ~_BV(3); break;
        case 12: PORTB &= ~_BV(4); break;
        case 13: PORTB &= ~_BV(5); break;
        case 14: PORTC &= ~_BV(0); break;
        case 15: PORTC &= ~_BV(1); break;
        case 16: PORTC &= ~_BV(2); break;
        case 17: PORTC &= ~_BV(3); break;
        case 18: PORTC &= ~_BV(4); break;
        case 19: PORTC &= ~_BV(5); break;
        default: return; break;
    }
}

fast::check(unsigned char pin){
    switch(pin) {
        case 0:  PIND & _BV(0); break;
        case 1:  PIND & _BV(1); break;
        case 2:  PIND & _BV(2); break;
        case 3:  PIND & _BV(3); break;
        case 4:  PIND & _BV(4); break;
        case 5:  PIND & _BV(5); break;
        case 6:  PIND & _BV(6); break;
        case 7:  PIND & _BV(7); break;
        case 8:  PINB & _BV(0); break;
        case 9:  PINB & _BV(1); break;
        case 10: PINB & _BV(2); break;
        case 11: PINB & _BV(3); break;
        case 12: PINB & _BV(4); break;
        case 13: PINB & _BV(5); break;
        case 14: PINC & _BV(0); break;
        case 15: PINC & _BV(1); break;
        case 16: PINC & _BV(2); break;
        case 17: PINC & _BV(3); break;
        case 18: PINC & _BV(4); break;
        case 19: PINC & _BV(5); break;
        default: return; break;
    }
}

fast::input(unsigned char pin) {
    switch(pin) {
        case 0:  DDRD &= ~_BV(0); break;
        case 1:  DDRD &= ~_BV(1); break;
        case 2:  DDRD &= ~_BV(2); break;
        case 3:  DDRD &= ~_BV(3); break;
        case 4:  DDRD &= ~_BV(4); break;
        case 5:  DDRD &= ~_BV(5); break;
        case 6:  DDRD &= ~_BV(6); break;
        case 7:  DDRD &= ~_BV(7); break;
        case 8:  DDRB &= ~_BV(0); break;
        case 9:  DDRB &= ~_BV(1); break;
        case 10: DDRB &= ~_BV(2); break;
        case 11: DDRB &= ~_BV(3); break;
        case 12: DDRB &= ~_BV(4); break;
        case 13: DDRB &= ~_BV(5); break;
        case 14: DDRC &= ~_BV(0); break;
        case 15: DDRC &= ~_BV(1); break;
        case 16: DDRC &= ~_BV(2); break;
        case 17: DDRC &= ~_BV(3); break;
        case 18: DDRC &= ~_BV(4); break;
        case 19: DDRC &= ~_BV(5); break;
        default: return; break;
    }
}

fast::pullup(unsigned char pin) {
    switch(pin) {
        case 0:  DDRD &= ~_BV(0); PORTD |= _BV(0); break;
        case 1:  DDRD &= ~_BV(1); PORTD |= _BV(1); break;
        case 2:  DDRD &= ~_BV(2); PORTD |= _BV(2); break;
        case 3:  DDRD &= ~_BV(3); PORTD |= _BV(3); break;
        case 4:  DDRD &= ~_BV(4); PORTD |= _BV(4); break;
        case 5:  DDRD &= ~_BV(5); PORTD |= _BV(5); break;
        case 6:  DDRD &= ~_BV(6); PORTD |= _BV(6); break;
        case 7:  DDRD &= ~_BV(7); PORTD |= _BV(7); break;
        case 8:  DDRB &= ~_BV(0); PORTB |= _BV(0); break;
        case 9:  DDRB &= ~_BV(1); PORTB |= _BV(1); break;
        case 10: DDRB &= ~_BV(2); PORTB |= _BV(2); break;
        case 11: DDRB &= ~_BV(3); PORTB |= _BV(3); break;
        case 12: DDRB &= ~_BV(4); PORTB |= _BV(4); break;
        case 13: DDRB &= ~_BV(5); PORTB |= _BV(5); break;
        case 14: DDRC &= ~_BV(0); PORTC |= _BV(0); break;
        case 15: DDRC &= ~_BV(1); PORTC |= _BV(1); break;
        case 16: DDRC &= ~_BV(2); PORTC |= _BV(2); break;
        case 17: DDRC &= ~_BV(3); PORTC |= _BV(3); break;
        case 18: DDRC &= ~_BV(4); PORTC |= _BV(4); break;
        case 19: DDRC &= ~_BV(5); PORTC |= _BV(5); break;
        default: return; break;
    }
}

fast::output(unsigned char pin) {
    switch(pin) {
        case 0:  DDRD |= _BV(0); break;
        case 1:  DDRD |= _BV(1); break;
        case 2:  DDRD |= _BV(2); break;
        case 3:  DDRD |= _BV(3); break;
        case 4:  DDRD |= _BV(4); break;
        case 5:  DDRD |= _BV(5); break;
        case 6:  DDRD |= _BV(6); break;
        case 7:  DDRD |= _BV(7); break;
        case 8:  DDRB |= _BV(0); break;
        case 9:  DDRB |= _BV(1); break;
        case 10: DDRB |= _BV(2); break;
        case 11: DDRB |= _BV(3); break;
        case 12: DDRB |= _BV(4); break;
        case 13: DDRB |= _BV(5); break;
        case 14: DDRC |= _BV(0); break;
        case 15: DDRC |= _BV(1); break;
        case 16: DDRC |= _BV(2); break;
        case 17: DDRC |= _BV(3); break;
        case 18: DDRC |= _BV(4); break;
        case 19: DDRC |= _BV(5); break;
        default: return; break;
    }
}