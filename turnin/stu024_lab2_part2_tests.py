tests = [ {'description': 'PINA: 0x00 => PORTC: 0x04',
    'steps': [ {'inputs': [('PINA',0x00)], 'iterations': 5 } ],
    'expected': [('PORTC',0x04)],
    },
    {'description': 'PINA: 0x01 => PORTC: 0x03',
    'steps': [ {'inputs': [('PINA',0x01)], 'iterations': 5 } ],
    'expected': [('PORTC',0x03)],
    },
    {'description': 'PINA: 0x02 => PORTC: 0x03',
    'steps': [ {'inputs': [('PINA',0x02)], 'iterations': 5 } ],
    'expected': [('PORTC',0x03)],
    },
    {'description': 'PINA: 0x0F => PORTC: 0x00',
    'steps': [ {'inputs': [('PINA',0x0F)], 'iterations': 5 } ],
    'expected': [('PORTC',0x00)],
    },
    {'description': 'PINA: 0x10 => PORTC: 0x04',
    'steps': [ {'inputs': [('PINA',0x10)], 'iterations': 5 } ],
    'expected': [('PORTC',0x04)],
    },

    ]
#watch = ['PORTB']

