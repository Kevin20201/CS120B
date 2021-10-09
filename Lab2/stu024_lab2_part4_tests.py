tests = [ {'description': 'PINA: 0x32, PINB: 0x32, PINC: 0x32 => PORTD: 0x25',
    'steps': [ {'inputs': [('PINA',0x32),('PINB',0x32),('PINC',0x32)], 'iterations': 5 } ],
    'expected': [('PORTD',0x25)],
    },

    {'description': 'PINA: 0x00, PINB: 0x00, PINC: 0x51 => PORTD: 0x16',
    'steps': [ {'inputs': [('PINA',0x00),('PINB',0x00),('PINC',0x51)], 'iterations': 5 } ],
    'expected': [('PORTD',0x16)],
    },

    {'description': 'PINA: 0x24, PINB: 0x1C, PINC: 0x1E => PORTD: 0x14',
    'steps': [ {'inputs': [('PINA',0x24),('PINB',0x1C),('PINC',0x1E)], 'iterations': 5 } ],
    'expected': [('PORTD',0x14)],
    },

    {'description': 'PINA: 0x00, PINB: 0x23, PINC: 0x55 => PORTD: 0x1E',
    'steps': [ {'inputs': [('PINA',0x00),('PINB',0x23),('PINC',0x55)], 'iterations': 5 } ],
    'expected': [('PORTD',0x1E)],
    },

    {'description': 'PINA: 0x00, PINB: 0x00, PINC: 0x00 => PORTD: 0x00',
    'steps': [ {'inputs': [('PINA',0x00),('PINB',0x00),('PINC',0x00)], 'iterations': 5 } ],
    'expected': [('PORTD',0x00)],
    },
    
    ]
#watch = ['PORTD']

