int ti83font(char this_ascii, char *mem_array) {
	switch (this_ascii) {
		case 32: //Space
			mem_array[0] = 0b00000000;
			mem_array[1] = 0b00000000;
			mem_array[2] = 0b00000000;
			mem_array[3] = 0b00000000;
			mem_array[4] = 0b00000000;
			return 0;
		
		case 65: //A
			mem_array[0] = 0b00111111;
			mem_array[1] = 0b01001000;
			mem_array[2] = 0b01001000;
			mem_array[3] = 0b01001000;
			mem_array[4] = 0b00111111;
			return 0;

		case 66: //B
			mem_array[0] = 0b01111111;
			mem_array[1] = 0b01001001;
			mem_array[2] = 0b01001001;
			mem_array[3] = 0b01001001;
			mem_array[4] = 0b00110110;
			return 0;

		case 67: //C
			mem_array[0] = 0b00111110;
			mem_array[1] = 0b01000001;
			mem_array[2] = 0b01000001;
			mem_array[3] = 0b01000001;
			mem_array[4] = 0b00100010;
			return 0;

		case 68: //D
			mem_array[0] = 0b01111111;
			mem_array[1] = 0b01000001;
			mem_array[2] = 0b01000001;
			mem_array[3] = 0b01000001;
			mem_array[4] = 0b00111110;
			return 0;

		case 69: //E
			mem_array[0] = 0b01111111;
			mem_array[1] = 0b01001001;
			mem_array[2] = 0b01001001;
			mem_array[3] = 0b01001001;
			mem_array[4] = 0b01000001;
			return 0;

		case 70: //F
			mem_array[0] = 0b01111111;
			mem_array[1] = 0b01001000;
			mem_array[2] = 0b01001000;
			mem_array[3] = 0b01001000;
			mem_array[4] = 0b01000000;
			return 0;

		case 71: //G
			mem_array[0] = 0b00111110;
			mem_array[1] = 0b01000001;
			mem_array[2] = 0b01001001;
			mem_array[3] = 0b01001001;
			mem_array[4] = 0b00101111;
			return 0;

		case 72: //H
			mem_array[0] = 0b01111111;
			mem_array[1] = 0b00001000;
			mem_array[2] = 0b00001000;
			mem_array[3] = 0b00001000;
			mem_array[4] = 0b01111111;
			return 0;

		case 73: //I
			mem_array[0] = 0b00000000;
			mem_array[1] = 0b01000001;
			mem_array[2] = 0b01111111;
			mem_array[3] = 0b01000001;
			mem_array[4] = 0b00000000;
			return 0;

		case 74: //J
			mem_array[0] = 0b00000010;
			mem_array[1] = 0b00000001;
			mem_array[2] = 0b01000001;
			mem_array[3] = 0b01111110;
			mem_array[4] = 0b01000000;
			return 0;

		case 75: //K
			mem_array[0] = 0b01111111;
			mem_array[1] = 0b00001000;
			mem_array[2] = 0b00010100;
			mem_array[3] = 0b00100010;
			mem_array[4] = 0b01000001;
			return 0;

		case 76: //L
			mem_array[0] = 0b01111111;
			mem_array[1] = 0b00000001;
			mem_array[2] = 0b00000001;
			mem_array[3] = 0b00000001;
			mem_array[4] = 0b00000001;
			return 0;

		case 77: //M
			mem_array[0] = 0b01111111;
			mem_array[1] = 0b00100000;
			mem_array[2] = 0b00011000;
			mem_array[3] = 0b00100000;
			mem_array[4] = 0b01111111;
			return 0;

		case 78: //N
			mem_array[0] = 0b01111111;
			mem_array[1] = 0b00010000;
			mem_array[2] = 0b00001000;
			mem_array[3] = 0b00000100;
			mem_array[4] = 0b01111111;
			return 0;

		case 79: //O
			mem_array[0] = 0b00111110;
			mem_array[1] = 0b01000001;
			mem_array[2] = 0b01000001;
			mem_array[3] = 0b01000001;
			mem_array[4] = 0b00111110;
			return 0;

		case 80: //P
			mem_array[0] = 0b01111111;
			mem_array[1] = 0b01001000;
			mem_array[2] = 0b01001000;
			mem_array[3] = 0b01001000;
			mem_array[4] = 0b00110000;
			return 0;

		case 81: //Q
			mem_array[0] = 0b00111110;
			mem_array[1] = 0b01000001;
			mem_array[2] = 0b01000101;
			mem_array[3] = 0b01000010;
			mem_array[4] = 0b00111101;
			return 0;

		case 82: //R
			mem_array[0] = 0b01111111;
			mem_array[1] = 0b01001000;
			mem_array[2] = 0b01001100;
			mem_array[3] = 0b01001010;
			mem_array[4] = 0b00110001;
			return 0;

		case 83: //S
			mem_array[0] = 0b00110001;
			mem_array[1] = 0b01001001;
			mem_array[2] = 0b01001001;
			mem_array[3] = 0b01001001;
			mem_array[4] = 0b01000110;
			return 0;

		case 84: //T
			mem_array[0] = 0b01000000;
			mem_array[1] = 0b01000000;
			mem_array[2] = 0b01111111;
			mem_array[3] = 0b01000000;
			mem_array[4] = 0b01000000;
			return 0;

		case 85: //U
			mem_array[0] = 0b01111110;
			mem_array[1] = 0b00000001;
			mem_array[2] = 0b00000001;
			mem_array[3] = 0b00000001;
			mem_array[4] = 0b01111110;
			return 0;

		case 86: //V
			mem_array[0] = 0b01111000;
			mem_array[1] = 0b00000110;
			mem_array[2] = 0b00000001;
			mem_array[3] = 0b00000110;
			mem_array[4] = 0b01111000;
			return 0;

		case 87: //W
			mem_array[0] = 0b01111110;
			mem_array[1] = 0b00000001;
			mem_array[2] = 0b00001110;
			mem_array[3] = 0b00000001;
			mem_array[4] = 0b01111110;
			return 0;

		case 88: //X
			mem_array[0] = 0b01100011;
			mem_array[1] = 0b00010100;
			mem_array[2] = 0b00001000;
			mem_array[3] = 0b00010100;
			mem_array[4] = 0b01100011;
			return 0;

		case 89: //Y
			mem_array[0] = 0b01110000;
			mem_array[1] = 0b00001000;
			mem_array[2] = 0b00000111;
			mem_array[3] = 0b00001000;
			mem_array[4] = 0b01110000;
			return 0;

		case 90: //Z
			mem_array[0] = 0b01000011;
			mem_array[1] = 0b01000101;
			mem_array[2] = 0b01001001;
			mem_array[3] = 0b01010001;
			mem_array[4] = 0b01100001;
			return 0;
			
		case 97: //a
			mem_array[0] = 0b00000010;
			mem_array[1] = 0b00010101;
			mem_array[2] = 0b00010101;
			mem_array[3] = 0b00010101;
			mem_array[4] = 0b00001111;
			return 0;
			
		case 98: //b
			mem_array[0] = 0b01111111;
			mem_array[1] = 0b00001001;
			mem_array[2] = 0b00010001;
			mem_array[3] = 0b00010001;
			mem_array[4] = 0b00001110;
			return 0;
			
		case 99: //c
			mem_array[0] = 0b00001110;
			mem_array[1] = 0b00010001;
			mem_array[2] = 0b00010001;
			mem_array[3] = 0b00010001;
			mem_array[4] = 0b00000010;
			return 0;

		case 100: //d
			mem_array[0] = 0b00001110;
			mem_array[1] = 0b00010001;
			mem_array[2] = 0b00010001;
			mem_array[3] = 0b00001001;
			mem_array[4] = 0b01111111;
			return 0;

		case 101: //e
			mem_array[0] = 0b00001110;
			mem_array[1] = 0b00010101;
			mem_array[2] = 0b00010101;
			mem_array[3] = 0b00010101;
			mem_array[4] = 0b00001100;
			return 0;

		case 102: //f
			mem_array[0] = 0b00001000;
			mem_array[1] = 0b00111111;
			mem_array[2] = 0b01001000;
			mem_array[3] = 0b01000000;
			mem_array[4] = 0b00100000;
			return 0;

		case 103: //g
			mem_array[0] = 0b00011000;
			mem_array[1] = 0b00100101;
			mem_array[2] = 0b00100101;
			mem_array[3] = 0b00100101;
			mem_array[4] = 0b00111110;
			return 0;

		case 104: //h
			mem_array[0] = 0b01111111;
			mem_array[1] = 0b00001000;
			mem_array[2] = 0b00010000;
			mem_array[3] = 0b00010000;
			mem_array[4] = 0b00001111;
			return 0;

		case 105: //i
			mem_array[0] = 0b00000000;
			mem_array[1] = 0b00010001;
			mem_array[2] = 0b01011111;
			mem_array[3] = 0b00000001;
			mem_array[4] = 0b00000000;
			return 0;

		case 106: //j
			mem_array[0] = 0b00000010;
			mem_array[1] = 0b00000001;
			mem_array[2] = 0b00010001;
			mem_array[3] = 0b01011110;
			mem_array[4] = 0b00000000;
			return 0;

		case 107: //k
			mem_array[0] = 0b00000000;
			mem_array[1] = 0b01111111;
			mem_array[2] = 0b00000100;
			mem_array[3] = 0b00001010;
			mem_array[4] = 0b00010001;
			return 0;

		case 108: //l
			mem_array[0] = 0b00000000;
			mem_array[1] = 0b01000001;
			mem_array[2] = 0b01111111;
			mem_array[3] = 0b00000001;
			mem_array[4] = 0b00000000;
			return 0;

		case 109: //m
			mem_array[0] = 0b00011111;
			mem_array[1] = 0b00010000;
			mem_array[2] = 0b00001100;
			mem_array[3] = 0b00010000;
			mem_array[4] = 0b00001111;
			return 0;

		case 110: //n
			mem_array[0] = 0b00011111;
			mem_array[1] = 0b00001000;
			mem_array[2] = 0b00010000;
			mem_array[3] = 0b00010000;
			mem_array[4] = 0b00001111;
			return 0;

		case 111: //o
			mem_array[0] = 0b00001110;
			mem_array[1] = 0b00010001;
			mem_array[2] = 0b00010001;
			mem_array[3] = 0b00010001;
			mem_array[4] = 0b00001110;
			return 0;

		case 112: //p
			mem_array[0] = 0b00011111;
			mem_array[1] = 0b00010100;
			mem_array[2] = 0b00010100;
			mem_array[3] = 0b00010100;
			mem_array[4] = 0b00001000;
			return 0;

		case 113: //q
			mem_array[0] = 0b00001000;
			mem_array[1] = 0b00010100;
			mem_array[2] = 0b00010100;
			mem_array[3] = 0b00001100;
			mem_array[4] = 0b00011111;
			return 0;

		case 114: //r
			mem_array[0] = 0b00011111;
			mem_array[1] = 0b00001000;
			mem_array[2] = 0b00010000;
			mem_array[3] = 0b00010000;
			mem_array[4] = 0b00001000;
			return 0;

		case 115: //s
			mem_array[0] = 0b00001001;
			mem_array[1] = 0b00010101;
			mem_array[2] = 0b00010101;
			mem_array[3] = 0b00010101;
			mem_array[4] = 0b00000010;
			return 0;

		case 116: //t
			mem_array[0] = 0b00010000;
			mem_array[1] = 0b01111110;
			mem_array[2] = 0b00010001;
			mem_array[3] = 0b00000001;
			mem_array[4] = 0b00000010;
			return 0;

		case 117: //u
			mem_array[0] = 0b00011110;
			mem_array[1] = 0b00000001;
			mem_array[2] = 0b00000001;
			mem_array[3] = 0b00000010;
			mem_array[4] = 0b00011111;
			return 0;

		case 118: //v
			mem_array[0] = 0b00011100;
			mem_array[1] = 0b00000010;
			mem_array[2] = 0b00000001;
			mem_array[3] = 0b00000010;
			mem_array[4] = 0b00011100;
			return 0;

		case 119: //w
			mem_array[0] = 0b00011110;
			mem_array[1] = 0b00000001;
			mem_array[2] = 0b00000110;
			mem_array[3] = 0b00000001;
			mem_array[4] = 0b00011110;
			return 0;

		case 120: //x
			mem_array[0] = 0b00010001;
			mem_array[1] = 0b00001010;
			mem_array[2] = 0b00000100;
			mem_array[3] = 0b00001010;
			mem_array[4] = 0b00010001;
			return 0;

		case 121: //y
			mem_array[0] = 0b00011000;
			mem_array[1] = 0b00000101;
			mem_array[2] = 0b00000101;
			mem_array[3] = 0b00000101;
			mem_array[4] = 0b00011110;
			return 0;

		case 122: //z
			mem_array[0] = 0b00010001;
			mem_array[1] = 0b00010011;
			mem_array[2] = 0b00010101;
			mem_array[3] = 0b00011001;
			mem_array[4] = 0b00010001;
			return 0;

		default: //ASCII character not supported.
			mem_array[0] = 0b00000000;
			mem_array[1] = 0b00000000;
			mem_array[2] = 0b00000000;
			mem_array[3] = 0b00000000;
			mem_array[4] = 0b00000000;
			return 1;
	}
}
