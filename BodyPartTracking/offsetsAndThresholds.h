class Thres :

getOffsets(self, node, offsetChosen) :
	int* U = NULL;
	int* V = NULL;
	switch (node){
	case 1:
		U = new int[2] {-17, 7}; 
		V = new int[2] {-13, 5}; 
		break;
	case 2:
		U = new int[2] {0, 17}; 
		V = new int[2] {-1, 12}; 
		break;
	case 3:
		U = new int[2] {28, 29}; 
		V = new int[2] {29, 9}; 
		break;
	case 4:
		U = new int[2] {4, 1}; 
		V = new int[2] {-10, -9}; 
		break;
	case 5:
		U = new int[2] {-7, -6}; 
		V = new int[2] {3, -4}; 
		break;
	case 6:
		U = new int[2] {6, -8}; 
		V = new int[2] {-7, 7}; 
		break;
	case 7:
		U = new int[2] {3, 0}; 
		V = new int[2] {-7, 3}; 
		break;
	case 8:
		U = new int[2] {-2, 9}; 
		V = new int[2] {4, 4}; 
		break;
	case 9:
		U = new int[2] {-5, 2}; 
		V = new int[2] {1, -5}; 
		break;
	case 10:
		U = new int[2] {-3, -5}; 
		V = new int[2] {-7, 10}; 
		break;
	case 11:
		U = new int[2] {-3, 9}; 
		V = new int[2] {9, 7}; 
		break;
	case 12:
		U = new int[2] {-4, 4}; 
		V = new int[2] {-4, -1}; 
		break;
	case 13:
		U = new int[2] {-5, -7}; 
		V = new int[2] {8, 5}; 
		break;
	case 14:
		U = new int[2] {8, 7}; 
		V = new int[2] {-8, -8}; 
		break;
	case 15:
		U = new int[2] {-8, 4}; 
		V = new int[2] {-10, 8}; 
		break;
	case 16:
		U = new int[2] {-7, -2}; 
		V = new int[2] {4, 1}; 
		break;
	case 17:
		U = new int[2] {2, 10}; 
		V = new int[2] {-1, 7}; 
		break;
	case 18:
		U = new int[2] {-8, -8}; 
		V = new int[2] {-8, -10}; 
		break;
	case 19:
		U = new int[2] {-4, 4}; 
		V = new int[2] {-1, 8}; 
		break;
	case 20:
		U = new int[2] {2, -8}; 
		V = new int[2] {-3, -10}; 
		break;
	case 21:
		U = new int[2] {-1, -9}; 
		V = new int[2] {8, 0}; 
		break;
	case 22:
		U = new int[2] {8, 9}; 
		V = new int[2] {-1, 7}; 
		break;
	case 23:
		U = new int[2] {5, 6}; 
		V = new int[2] {-1, -2}; 
		break;
	case 24:
		U = new int[2] {1, 5}; 
		V = new int[2] {9, 9}; 
		break;
	case 25:
		U = new int[2] {10, -3}; 
		V = new int[2] {-1, 2}; 
		break;
	case 26:
		U = new int[2] {7, -4}; 
		V = new int[2] {10, -6}; 
		break;
	case 27:
		U = new int[2] {1, -6}; 
		V = new int[2] {1, 0}; 
		break;
	case 28:
		U = new int[2] {-1, -8}; 
		V = new int[2] {10, -4}; 
		break;
	case 29:
		U = new int[2] {-10, -1}; 
		V = new int[2] {-8, 7}; 
		break;
	case 30:
		U = new int[2] {-2, -5}; 
		V = new int[2] {-4, 10}; 
		break;
	case 31:
		U = new int[2] {-10, 3}; 
		V = new int[2] {-3, 5}; 
		break;
	case 32:
		U = new int[2] {7, 4}; 
		V = new int[2] {10, -5}; 
		break;
	case 33:
		U = new int[2] {-8, 9}; 
		V = new int[2] {-9, 3}; 
		break;
	case 34:
		U = new int[2] {-9, -6}; 
		V = new int[2] {5, 7}; 
		break;
	case 35:
		U = new int[2] {0, 6}; 
		V = new int[2] {-2, 2}; 
		break;
	case 36:
		U = new int[2] {-2, -9}; 
		V = new int[2] {8, -3}; 
		break;
	case 37:
		U = new int[2] {-8, -8}; 
		V = new int[2] {3, -6}; 
		break;
	case 38:
		U = new int[2] {-8, 8}; 
		V = new int[2] {9, -3}; 
		break;
	case 39:
		U = new int[2] {2, 10}; 
		V = new int[2] {3, 3}; 
		break;
	case 40:
		U = new int[2] {6, -1}; 
		V = new int[2] {-9, 8}; 
		break;
	case 41:
		U = new int[2] {4, 1}; 
		V = new int[2] {4, 6}; 
		break;
	case 42:
		U = new int[2] {7, -6}; 
		V = new int[2] {10, 1}; 
		break;
	case 43:
		U = new int[2] {-3, 6}; 
		V = new int[2] {-5, -10}; 
		break;
	case 44:
		U = new int[2] {3, 5}; 
		V = new int[2] {1, -1}; 
		break;
	case 45:
		U = new int[2] {-1, 5}; 
		V = new int[2] {10, -2}; 
		break;
	case 46:
		U = new int[2] {-7, 2}; 
		V = new int[2] {-2, 3}; 
		break;
	case 47:
		U = new int[2] {-3, -9}; 
		V = new int[2] {-7, -4}; 
		break;
	case 48:
		U = new int[2] {-8, -7}; 
		V = new int[2] {-1, -7}; 
		break;
	case 49:
		U = new int[2] {-7, 5}; 
		V = new int[2] {-10, -7}; 
		break;
	case 50:
		U = new int[2] {10, -7}; 
		V = new int[2] {0, 3}; 
		break;
	case 51:
		U = new int[2] {-1, 7}; 
		V = new int[2] {8, 10}; 
		break;
	case 52:
		U = new int[2] {8, -6}; 
		V = new int[2] {-5, 3}; 
		break;
	case 53:
		U = new int[2] {-5, 4}; 
		V = new int[2] {5, 6}; 
		break;
	case 54:
		U = new int[2] {7, 4}; 
		V = new int[2] {-7, -9}; 
		break;
	case 55:
		U = new int[2] {-6, 1}; 
		V = new int[2] {6, 3}; 
		break;
	case 56:
		U = new int[2] {5, 2}; 
		V = new int[2] {-1, 2}; 
		break;
	case 57:
		U = new int[2] {9, 7}; 
		V = new int[2] {0, -7}; 
		break;
	case 58:
		U = new int[2] {7, 3}; 
		V = new int[2] {-1, -4}; 
		break;
	case 59:
		U = new int[2] {-9, -10}; 
		V = new int[2] {1, -9}; 
		break;
	case 60:
		U = new int[2] {-10, -5}; 
		V = new int[2] {-8, 5}; 
		break;
	case 61:
		U = new int[2] {8, -8}; 
		V = new int[2] {-9, 4}; 
		break;
	case 62:
		U = new int[2] {6, -7}; 
		V = new int[2] {3, 7}; 
		break;
	case 63:
		U = new int[2] {4, -1}; 
		V = new int[2] {-4, 3}; 
		break;
	case 64:
		U = new int[2] {7, -4}; 
		V = new int[2] {3, -9}; 
		break;
	case 65:
		U = new int[2] {9, 4}; 
		V = new int[2] {-3, 7}; 
		break;
	case 66:
		U = new int[2] {-2, 8}; 
		V = new int[2] {-9, -5}; 
		break;
	case 67:
		U = new int[2] {-5, 4}; 
		V = new int[2] {-4, -9}; 
		break;
	case 68:
		U = new int[2] {3, -6}; 
		V = new int[2] {-6, -1}; 
		break;
	case 69:
		U = new int[2] {-8, 5}; 
		V = new int[2] {6, -7}; 
		break;
	case 70:
		U = new int[2] {7, -9}; 
		V = new int[2] {6, -7}; 
		break;
	case 71:
		U = new int[2] {-1, -10}; 
		V = new int[2] {6, -3}; 
		break;
	case 72:
		U = new int[2] {-9, -7}; 
		V = new int[2] {-2, 3}; 
		break;
	case 73:
		U = new int[2] {4, 2}; 
		V = new int[2] {-3, -4}; 
		break;
	case 74:
		U = new int[2] {-7, 2}; 
		V = new int[2] {-2, -5}; 
		break;
	case 75:
		U = new int[2] {6, 3}; 
		V = new int[2] {3, 10}; 
		break;
	case 76:
		U = new int[2] {6, 9}; 
		V = new int[2] {-4, -4}; 
		break;
	case 77:
		U = new int[2] {-6, -5}; 
		V = new int[2] {10, -1}; 
		break;
	case 78:
		U = new int[2] {8, 6}; 
		V = new int[2] {-8, 2}; 
		break;
	case 79:
		U = new int[2] {-5, 8}; 
		V = new int[2] {-4, -1}; 
		break;
	case 80:
		U = new int[2] {-5, -3}; 
		V = new int[2] {-2, -5}; 
		break;
	case 81:
		U = new int[2] {2, -8}; 
		V = new int[2] {5, 1}; 
		break;
	case 82:
		U = new int[2] {-8, -6}; 
		V = new int[2] {0, -6}; 
		break;
	case 83:
		U = new int[2] {8, -6}; 
		V = new int[2] {6, 2}; 
		break;
	case 84:
		U = new int[2] {-5, -6}; 
		V = new int[2] {1, 6}; 
		break;
	case 85:
		U = new int[2] {-3, -4}; 
		V = new int[2] {1, -6}; 
		break;
	case 86:
		U = new int[2] {-5, 1}; 
		V = new int[2] {-10, -8}; 
		break;
	case 87:
		U = new int[2] {1, 1}; 
		V = new int[2] {10, -2}; 
		break;
	case 88:
		U = new int[2] {-3, -3}; 
		V = new int[2] {4, -5}; 
		break;
	case 89:
		U = new int[2] {-7, -4}; 
		V = new int[2] {-4, 10}; 
		break;
	case 90:
		U = new int[2] {-6, 9}; 
		V = new int[2] {5, -4}; 
		break;
	case 91:
		U = new int[2] {2, 7}; 
		V = new int[2] {-4, -1}; 
		break;
	case 92:
		U = new int[2] {-2, 5}; 
		V = new int[2] {8, 9}; 
		break;
	case 93:
		U = new int[2] {-7, -1}; 
		V = new int[2] {3, -6}; 
		break;
	case 94:
		U = new int[2] {5, 2}; 
		V = new int[2] {10, -6}; 
		break;
	case 95:
		U = new int[2] {-3, -10}; 
		V = new int[2] {-9, 4}; 
		break;
	case 96:
		U = new int[2] {9, 7}; 
		V = new int[2] {5, 7}; 
		break;
	case 97:
		U = new int[2] {-10, 10}; 
		V = new int[2] {-2, 2}; 
		break;
	case 98:
		U = new int[2] {-4, 0}; 
		V = new int[2] {0, 10}; 
		break;
	case 99:
		U = new int[2] {9, -6}; 
		V = new int[2] {-2, -10}; 
		break;
	case 100:
		U = new int[2] {6, 7}; 
		V = new int[2] {4, 0}; 
		break;
	case 101:
		U = new int[2] {-8, -4}; 
		V = new int[2] {-6, 10}; 
		break;
	case 102:
		U = new int[2] {-10, -8}; 
		V = new int[2] {7, 3}; 
		break;
	case 103:
		U = new int[2] {9, -9}; 
		V = new int[2] {-4, -9}; 
		break;
	case 104:
		U = new int[2] {1, 2}; 
		V = new int[2] {2, 7}; 
		break;
	case 105:
		U = new int[2] {-1, -7}; 
		V = new int[2] {-7, -10}; 
		break;
	case 106:
		U = new int[2] {-8, 5}; 
		V = new int[2] {5, -2}; 
		break;
	case 107:
		U = new int[2] {6, 0}; 
		V = new int[2] {-8, 6}; 
		break;
	case 108:
		U = new int[2] {-3, -7}; 
		V = new int[2] {-5, 9}; 
		break;
	case 109:
		U = new int[2] {4, 1}; 
		V = new int[2] {-9, 9}; 
		break;
	case 110:
		U = new int[2] {-4, -3}; 
		V = new int[2] {-8, -2}; 
		break;
	case 111:
		U = new int[2] {6, -1}; 
		V = new int[2] {-7, -8}; 
		break;
	case 112:
		U = new int[2] {4, 9}; 
		V = new int[2] {9, 8}; 
		break;
	case 113:
		U = new int[2] {4, -7}; 
		V = new int[2] {-3, -7}; 
		break;
	case 114:
		U = new int[2] {6, 6}; 
		V = new int[2] {-1, -7}; 
		break;
	case 115:
		U = new int[2] {-4, 5}; 
		V = new int[2] {2, 5}; 
		break;
	case 116:
		U = new int[2] {10, 8}; 
		V = new int[2] {9, 9}; 
		break;
	case 117:
		U = new int[2] {-4, 0}; 
		V = new int[2] {10, 3}; 
		break;
	case 118:
		U = new int[2] {4, 3}; 
		V = new int[2] {3, 2}; 
		break;
	case 119:
		U = new int[2] {-2, 3}; 
		V = new int[2] {-10, -5}; 
		break;
	case 120:
		U = new int[2] {-1, 2}; 
		V = new int[2] {-1, -10}; 
		break;
	case 121:
		U = new int[2] {9, -3}; 
		V = new int[2] {7, 1}; 
		break;
	case 122:
		U = new int[2] {2, -7}; 
		V = new int[2] {6, 8}; 
		break;
	case 123:
		U = new int[2] {-10, 6}; 
		V = new int[2] {1, -5}; 
		break;
	case 124:
		U = new int[2] {10, -5}; 
		V = new int[2] {6, 5}; 
		break;
	case 125:
		U = new int[2] {7, 6}; 
		V = new int[2] {4, -9}; 
		break;
	case 126:
		U = new int[2] {7, -2}; 
		V = new int[2] {3, 7}; 
		break;
	case 127:
		U = new int[2] {9, 5}; 
		V = new int[2] {-9, 0}; 
		break;
	case 128:
		U = new int[2] {6, -8}; 
		V = new int[2] {0, -1}; 
		break;
	case 129:
		U = new int[2] {1, 10}; 
		V = new int[2] {3, 7}; 
		break;
	case 130:
		U = new int[2] {-1, 5}; 
		V = new int[2] {-9, -9}; 
		break;
	case 131:
		U = new int[2] {-3, -10}; 
		V = new int[2] {-10, 0}; 
		break;
	case 132:
		U = new int[2] {7, 6}; 
		V = new int[2] {0, -5}; 
		break;
	case 133:
		U = new int[2] {-2, -9}; 
		V = new int[2] {-9, 6}; 
		break;
	case 134:
		U = new int[2] {-4, 4}; 
		V = new int[2] {0, -5}; 
		break;
	case 135:
		U = new int[2] {7, 10}; 
		V = new int[2] {-8, 4}; 
		break;
	case 136:
		U = new int[2] {-9, -6}; 
		V = new int[2] {2, -10}; 
		break;
	case 137:
		U = new int[2] {-3, -8}; 
		V = new int[2] {7, 5}; 
		break;
	case 138:
		U = new int[2] {10, 10}; 
		V = new int[2] {-10, 0}; 
		break;
	case 139:
		U = new int[2] {7, -5}; 
		V = new int[2] {4, 2}; 
		break;
	case 140:
		U = new int[2] {0, -6}; 
		V = new int[2] {7, 8}; 
		break;
	case 141:
		U = new int[2] {-8, -9}; 
		V = new int[2] {4, 7}; 
		break;
	case 142:
		U = new int[2] {9, -2}; 
		V = new int[2] {-10, -10}; 
		break;
	case 143:
		U = new int[2] {8, 8}; 
		V = new int[2] {5, -7}; 
		break;
	case 144:
		U = new int[2] {-8, 3}; 
		V = new int[2] {-1, 7}; 
		break;
	case 145:
		U = new int[2] {-5, -2}; 
		V = new int[2] {6, 0}; 
		break;
	case 146:
		U = new int[2] {-4, -1}; 
		V = new int[2] {8, 7}; 
		break;
	case 147:
		U = new int[2] {3, 5}; 
		V = new int[2] {-6, 6}; 
		break;
	case 148:
		U = new int[2] {9, 1}; 
		V = new int[2] {5, 6}; 
		break;
	case 149:
		U = new int[2] {0, 7}; 
		V = new int[2] {3, 6}; 
		break;
	case 150:
		U = new int[2] {-4, 2}; 
		V = new int[2] {9, 9}; 
		break;
	case 151:
		U = new int[2] {-10, -4}; 
		V = new int[2] {-4, 9}; 
		break;
	case 152:
		U = new int[2] {9, 8}; 
		V = new int[2] {6, -6}; 
		break;
	case 153:
		U = new int[2] {1, 9}; 
		V = new int[2] {0, 10}; 
		break;
	case 154:
		U = new int[2] {-1, -2}; 
		V = new int[2] {6, 6}; 
		break;
	case 155:
		U = new int[2] {-1, -5}; 
		V = new int[2] {7, 0}; 
		break;
	case 156:
		U = new int[2] {4, 8}; 
		V = new int[2] {-7, 0}; 
		break;
	case 157:
		U = new int[2] {-5, 4}; 
		V = new int[2] {7, 2}; 
		break;
	case 158:
		U = new int[2] {-5, -10}; 
		V = new int[2] {-7, 7}; 
		break;
	case 159:
		U = new int[2] {3, -8}; 
		V = new int[2] {10, -1}; 
		break;
	case 160:
		U = new int[2] {8, -2}; 
		V = new int[2] {-5, -7}; 
		break;
	case 161:
		U = new int[2] {8, 4}; 
		V = new int[2] {9, -4}; 
		break;
	case 162:
		U = new int[2] {10, 3}; 
		V = new int[2] {1, 7}; 
		break;
	case 163:
		U = new int[2] {6, 1}; 
		V = new int[2] {-7, -7}; 
		break;
	case 164:
		U = new int[2] {9, 1}; 
		V = new int[2] {-9, -3}; 
		break;
	case 165:
		U = new int[2] {2, 3}; 
		V = new int[2] {8, -8}; 
		break;
	case 166:
		U = new int[2] {-4, 7}; 
		V = new int[2] {-7, -4}; 
		break;
	case 167:
		U = new int[2] {8, -2}; 
		V = new int[2] {-10, -4}; 
		break;
	case 168:
		U = new int[2] {2, 3}; 
		V = new int[2] {9, -6}; 
		break;
	case 169:
		U = new int[2] {10, 5}; 
		V = new int[2] {2, 8}; 
		break;
	case 170:
		U = new int[2] {3, 5}; 
		V = new int[2] {-10, -1}; 
		break;
	case 171:
		U = new int[2] {10, 1}; 
		V = new int[2] {-2, -5}; 
		break;
	case 172:
		U = new int[2] {-5, -3}; 
		V = new int[2] {-5, 6}; 
		break;
	case 173:
		U = new int[2] {-6, 0}; 
		V = new int[2] {5, -8}; 
		break;
	case 174:
		U = new int[2] {-2, 3}; 
		V = new int[2] {-1, -3}; 
		break;
	case 175:
		U = new int[2] {1, -2}; 
		V = new int[2] {3, -7}; 
		break;
	case 176:
		U = new int[2] {1, 6}; 
		V = new int[2] {3, 6}; 
		break;
	case 177:
		U = new int[2] {-8, -7}; 
		V = new int[2] {-7, 3}; 
		break;
	case 178:
		U = new int[2] {-8, -3}; 
		V = new int[2] {-8, -7}; 
		break;
	case 179:
		U = new int[2] {-7, -9}; 
		V = new int[2] {-4, 2}; 
		break;
	case 180:
		U = new int[2] {2, 2}; 
		V = new int[2] {-6, 4}; 
		break;
	case 181:
		U = new int[2] {4, 2}; 
		V = new int[2] {10, 1}; 
		break;
	case 182:
		U = new int[2] {4, -2}; 
		V = new int[2] {-10, 8}; 
		break;
	case 183:
		U = new int[2] {-7, 9}; 
		V = new int[2] {-9, -3}; 
		break;
	case 184:
		U = new int[2] {-3, -2}; 
		V = new int[2] {5, -4}; 
		break;
	case 185:
		U = new int[2] {-5, 10}; 
		V = new int[2] {0, -7}; 
		break;
	case 186:
		U = new int[2] {4, -5}; 
		V = new int[2] {5, -1}; 
		break;
	case 187:
		U = new int[2] {-9, -2}; 
		V = new int[2] {8, -7}; 
		break;
	case 188:
		U = new int[2] {-2, 7}; 
		V = new int[2] {9, 9}; 
		break;
	case 189:
		U = new int[2] {-10, -8}; 
		V = new int[2] {-2, 4}; 
		break;
	case 190:
		U = new int[2] {-5, -8}; 
		V = new int[2] {0, -4}; 
		break;
	case 191:
		U = new int[2] {3, 9}; 
		V = new int[2] {-4, -6}; 
		break;
	case 192:
		U = new int[2] {-8, -7}; 
		V = new int[2] {-8, -8}; 
		break;
	case 193:
		U = new int[2] {9, 10}; 
		V = new int[2] {4, 9}; 
		break;
	case 194:
		U = new int[2] {-10, 8}; 
		V = new int[2] {-6, 6}; 
		break;
	case 195:
		U = new int[2] {-3, 9}; 
		V = new int[2] {-1, -4}; 
		break;
	case 196:
		U = new int[2] {-4, -3}; 
		V = new int[2] {-10, 1}; 
		break;
	case 197:
		U = new int[2] {-10, -10}; 
		V = new int[2] {-7, 0}; 
		break;
	case 198:
		U = new int[2] {-8, -6}; 
		V = new int[2] {-5, -4}; 
		break;
	case 199:
		U = new int[2] {-3, -7}; 
		V = new int[2] {-4, 7}; 
		break;
	case 200:
		U = new int[2] {-1, -3}; 
		V = new int[2] {9, 7}; 
		break;
	case 201:
		U = new int[2] {-4, -5}; 
		V = new int[2] {-4, -10}; 
		break;
	case 202:
		U = new int[2] {9, -3}; 
		V = new int[2] {-2, 1}; 
		break;
	case 203:
		U = new int[2] {0, -10}; 
		V = new int[2] {-8, 9}; 
		break;
	case 204:
		U = new int[2] {9, 5}; 
		V = new int[2] {5, -1}; 
		break;
	case 205:
		U = new int[2] {7, -8}; 
		V = new int[2] {6, -10}; 
		break;
	case 206:
		U = new int[2] {-1, 3}; 
		V = new int[2] {3, -4}; 
		break;
	case 207:
		U = new int[2] {-3, 5}; 
		V = new int[2] {3, 5}; 
		break;
	case 208:
		U = new int[2] {5, 8}; 
		V = new int[2] {3, 7}; 
		break;
	case 209:
		U = new int[2] {5, 2}; 
		V = new int[2] {-10, -1}; 
		break;
	case 210:
		U = new int[2] {6, 4}; 
		V = new int[2] {5, 2}; 
		break;
	case 211:
		U = new int[2] {1, 7}; 
		V = new int[2] {-4, 9}; 
		break;
	case 212:
		U = new int[2] {-5, 10}; 
		V = new int[2] {4, -9}; 
		break;
	case 213:
		U = new int[2] {-7, 7}; 
		V = new int[2] {2, -10}; 
		break;
	case 214:
		U = new int[2] {2, 7}; 
		V = new int[2] {10, 8}; 
		break;
	case 215:
		U = new int[2] {4, -5}; 
		V = new int[2] {-9, 1}; 
		break;
	case 216:
		U = new int[2] {10, -6}; 
		V = new int[2] {0, -10}; 
		break;
	case 217:
		U = new int[2] {-6, -1}; 
		V = new int[2] {10, 7}; 
		break;
	case 218:
		U = new int[2] {-7, 0}; 
		V = new int[2] {0, -5}; 
		break;
	case 219:
		U = new int[2] {7, 10}; 
		V = new int[2] {-10, 8}; 
		break;
	case 220:
		U = new int[2] {-1, 10}; 
		V = new int[2] {4, -8}; 
		break;
	case 221:
		U = new int[2] {6, -10}; 
		V = new int[2] {4, 0}; 
		break;
	case 222:
		U = new int[2] {4, 5}; 
		V = new int[2] {-7, -8}; 
		break;
	case 223:
		U = new int[2] {6, 1}; 
		V = new int[2] {3, 4}; 
		break;
	case 224:
		U = new int[2] {9, -5}; 
		V = new int[2] {-7, -10}; 
		break;
	case 225:
		U = new int[2] {-1, -6}; 
		V = new int[2] {8, 5}; 
		break;
	case 226:
		U = new int[2] {3, 0}; 
		V = new int[2] {-9, -7}; 
		break;
	case 227:
		U = new int[2] {0, 10}; 
		V = new int[2] {3, 10}; 
		break;
	case 228:
		U = new int[2] {0, -9}; 
		V = new int[2] {-5, -3}; 
		break;
	case 229:
		U = new int[2] {1, -9}; 
		V = new int[2] {-9, -3}; 
		break;
	case 230:
		U = new int[2] {10, 1}; 
		V = new int[2] {8, 1}; 
		break;
	case 231:
		U = new int[2] {1, -1}; 
		V = new int[2] {-4, 10}; 
		break;
	case 232:
		U = new int[2] {-8, -5}; 
		V = new int[2] {-8, 8}; 
		break;
	case 233:
		U = new int[2] {9, 4}; 
		V = new int[2] {-9, -6}; 
		break;
	case 234:
		U = new int[2] {-2, -7}; 
		V = new int[2] {7, 9}; 
		break;
	case 235:
		U = new int[2] {-4, -7}; 
		V = new int[2] {-10, 4}; 
		break;
	case 236:
		U = new int[2] {-4, -5}; 
		V = new int[2] {0, 9}; 
		break;
	case 237:
		U = new int[2] {4, 7}; 
		V = new int[2] {0, -3}; 
		break;
	case 238:
		U = new int[2] {5, 0}; 
		V = new int[2] {7, 7}; 
		break;
	case 239:
		U = new int[2] {-4, -6}; 
		V = new int[2] {-4, 7}; 
		break;
	case 240:
		U = new int[2] {4, -9}; 
		V = new int[2] {2, -10}; 
		break;
	case 241:
		U = new int[2] {7, 0}; 
		V = new int[2] {8, 6}; 
		break;
	case 242:
		U = new int[2] {9, 10}; 
		V = new int[2] {1, -9}; 
		break;
	case 243:
		U = new int[2] {-1, 6}; 
		V = new int[2] {0, -3}; 
		break;
	case 244:
		U = new int[2] {6, 8}; 
		V = new int[2] {-5, -3}; 
		break;
	case 245:
		U = new int[2] {1, -9}; 
		V = new int[2] {1, -9}; 
		break;
	case 246:
		U = new int[2] {-1, 7}; 
		V = new int[2] {-10, 0}; 
		break;
	case 247:
		U = new int[2] {-6, -1}; 
		V = new int[2] {4, 0}; 
		break;
	case 248:
		U = new int[2] {9, -10}; 
		V = new int[2] {-8, 4}; 
		break;
	case 249:
		U = new int[2] {-2, -4}; 
		V = new int[2] {7, 8}; 
		break;
	case 250:
		U = new int[2] {-8, 0}; 
		V = new int[2] {4, -5}; 
		break;
	case 251:
		U = new int[2] {-1, 5}; 
		V = new int[2] {10, 3}; 
		break;
	case 252:
		U = new int[2] {7, -8}; 
		V = new int[2] {-6, -7}; 
		break;
	case 253:
		U = new int[2] {5, -3}; 
		V = new int[2] {6, 6}; 
		break;
	case 254:
		U = new int[2] {-2, 9}; 
		V = new int[2] {7, -5}; 
		break;
	case 255:
		U = new int[2] {-3, 0}; 
		V = new int[2] {-1, 1}; 
		break;
	case 256:
		U = new int[2] {-8, 9}; 
		V = new int[2] {7, 3}; 
		break;
	case 257:
		U = new int[2] {-6, 2}; 
		V = new int[2] {-4, -4}; 
		break;
	case 258:
		U = new int[2] {2, -7}; 
		V = new int[2] {10, 2}; 
		break;
	case 259:
		U = new int[2] {-3, 5}; 
		V = new int[2] {-4, -9}; 
		break;
	case 260:
		U = new int[2] {-8, 1}; 
		V = new int[2] {6, -10}; 
		break;
	case 261:
		U = new int[2] {3, 6}; 
		V = new int[2] {-8, 0}; 
		break;
	case 262:
		U = new int[2] {-1, -7}; 
		V = new int[2] {7, -7}; 
		break;
	case 263:
		U = new int[2] {-7, 1}; 
		V = new int[2] {-3, -5}; 
		break;
	case 264:
		U = new int[2] {8, 0}; 
		V = new int[2] {7, -7}; 
		break;
	case 265:
		U = new int[2] {2, -10}; 
		V = new int[2] {-8, -10}; 
		break;
	case 266:
		U = new int[2] {3, 8}; 
		V = new int[2] {4, -4}; 
		break;
	case 267:
		U = new int[2] {-10, -10}; 
		V = new int[2] {-3, 0}; 
		break;
	case 268:
		U = new int[2] {-10, 4}; 
		V = new int[2] {10, 8}; 
		break;
	case 269:
		U = new int[2] {-9, 9}; 
		V = new int[2] {7, -4}; 
		break;
	case 270:
		U = new int[2] {6, -4}; 
		V = new int[2] {3, -3}; 
		break;
	case 271:
		U = new int[2] {-3, -1}; 
		V = new int[2] {-3, 1}; 
		break;
	case 272:
		U = new int[2] {-7, 9}; 
		V = new int[2] {8, 6}; 
		break;
	case 273:
		U = new int[2] {2, -10}; 
		V = new int[2] {-1, 10}; 
		break;
	case 274:
		U = new int[2] {3, 6}; 
		V = new int[2] {-5, 8}; 
		break;
	case 275:
		U = new int[2] {-2, 3}; 
		V = new int[2] {2, 2}; 
		break;
	case 276:
		U = new int[2] {4, 5}; 
		V = new int[2] {-9, 10}; 
		break;
	case 277:
		U = new int[2] {-2, -5}; 
		V = new int[2] {-9, 1}; 
		break;
	case 278:
		U = new int[2] {3, 1}; 
		V = new int[2] {-2, -9}; 
		break;
	case 279:
		U = new int[2] {-8, -5}; 
		V = new int[2] {6, -1}; 
		break;
	case 280:
		U = new int[2] {7, 8}; 
		V = new int[2] {3, -7}; 
		break;
	case 281:
		U = new int[2] {5, 4}; 
		V = new int[2] {7, -2}; 
		break;
	case 282:
		U = new int[2] {6, 8}; 
		V = new int[2] {0, -6}; 
		break;
	case 283:
		U = new int[2] {-8, -6}; 
		V = new int[2] {4, -1}; 
		break;
	case 284:
		U = new int[2] {-5, -6}; 
		V = new int[2] {-10, 7}; 
		break;
	case 285:
		U = new int[2] {4, 4}; 
		V = new int[2] {9, -9}; 
		break;
	case 286:
		U = new int[2] {10, 9}; 
		V = new int[2] {-2, 10}; 
		break;
	case 287:
		U = new int[2] {-10, -6}; 
		V = new int[2] {-7, 6}; 
		break;
	case 288:
		U = new int[2] {2, 3}; 
		V = new int[2] {2, -3}; 
		break;
	case 289:
		U = new int[2] {-3, -1}; 
		V = new int[2] {-2, -10}; 
		break;
	case 290:
		U = new int[2] {-2, 9}; 
		V = new int[2] {1, 9}; 
		break;
	case 291:
		U = new int[2] {6, -10}; 
		V = new int[2] {1, -5}; 
		break;
	case 292:
		U = new int[2] {9, 3}; 
		V = new int[2] {-2, 4}; 
		break;
	case 293:
		U = new int[2] {-2, 6}; 
		V = new int[2] {7, 5}; 
		break;
	case 294:
		U = new int[2] {6, -2}; 
		V = new int[2] {-9, 7}; 
		break;
	case 295:
		U = new int[2] {-10, -9}; 
		V = new int[2] {6, -7}; 
		break;
	case 296:
		U = new int[2] {2, 2}; 
		V = new int[2] {-6, 4}; 
		break;
	case 297:
		U = new int[2] {-8, -3}; 
		V = new int[2] {9, -5}; 
		break;
	case 298:
		U = new int[2] {7, 1}; 
		V = new int[2] {-2, -8}; 
		break;
	case 299:
		U = new int[2] {-2, 7}; 
		V = new int[2] {-8, -4}; 
		break;
	case 300:
		U = new int[2] {-5, -10}; 
		V = new int[2] {7, -8}; 
		break;
	case 301:
		U = new int[2] {-6, -10}; 
		V = new int[2] {-4, -4}; 
		break;
	case 302:
		U = new int[2] {5, 3}; 
		V = new int[2] {-5, -6}; 
		break;
	case 303:
		U = new int[2] {0, 6}; 
		V = new int[2] {0, -1}; 
		break;
	case 304:
		U = new int[2] {-7, 2}; 
		V = new int[2] {9, 1}; 
		break;
	case 305:
		U = new int[2] {7, -9}; 
		V = new int[2] {5, -10}; 
		break;
	case 306:
		U = new int[2] {1, -5}; 
		V = new int[2] {-2, 2}; 
		break;
	case 307:
		U = new int[2] {7, -5}; 
		V = new int[2] {-8, 2}; 
		break;
	case 308:
		U = new int[2] {-6, 0}; 
		V = new int[2] {-1, -5}; 
		break;
	case 309:
		U = new int[2] {0, -3}; 
		V = new int[2] {10, 6}; 
		break;
	case 310:
		U = new int[2] {0, 2}; 
		V = new int[2] {-2, -2}; 
		break;
	case 311:
		U = new int[2] {3, -1}; 
		V = new int[2] {5, -7}; 
		break;
	case 312:
		U = new int[2] {7, 5}; 
		V = new int[2] {8, -2}; 
		break;
	case 313:
		U = new int[2] {-4, -2}; 
		V = new int[2] {9, 9}; 
		break;
	case 314:
		U = new int[2] {3, -2}; 
		V = new int[2] {3, -6}; 
		break;
	case 315:
		U = new int[2] {1, 6}; 
		V = new int[2] {8, 9}; 
		break;
	case 316:
		U = new int[2] {7, -9}; 
		V = new int[2] {-8, -3}; 
		break;
	case 317:
		U = new int[2] {-9, -3}; 
		V = new int[2] {2, 8}; 
		break;
	case 318:
		U = new int[2] {2, -5}; 
		V = new int[2] {6, 5}; 
		break;
	case 319:
		U = new int[2] {-9, -3}; 
		V = new int[2] {-2, -2}; 
		break;
	case 320:
		U = new int[2] {-7, 3}; 
		V = new int[2] {6, 1}; 
		break;
	case 321:
		U = new int[2] {-3, -2}; 
		V = new int[2] {-7, 6}; 
		break;
	case 322:
		U = new int[2] {-3, -1}; 
		V = new int[2] {-10, -1}; 
		break;
	case 323:
		U = new int[2] {-10, 2}; 
		V = new int[2] {-3, -6}; 
		break;
	case 324:
		U = new int[2] {9, -6}; 
		V = new int[2] {1, 0}; 
		break;
	case 325:
		U = new int[2] {-4, 9}; 
		V = new int[2] {-3, -5}; 
		break;
	case 326:
		U = new int[2] {-1, 4}; 
		V = new int[2] {1, -1}; 
		break;
	case 327:
		U = new int[2] {-6, 4}; 
		V = new int[2] {-5, 2}; 
		break;
	case 328:
		U = new int[2] {-6, -2}; 
		V = new int[2] {10, 3}; 
		break;
	case 329:
		U = new int[2] {8, 0}; 
		V = new int[2] {-3, -3}; 
		break;
	case 330:
		U = new int[2] {1, -1}; 
		V = new int[2] {7, 9}; 
		break;
	case 331:
		U = new int[2] {-4, -5}; 
		V = new int[2] {-9, 7}; 
		break;
	case 332:
		U = new int[2] {1, -10}; 
		V = new int[2] {8, -9}; 
		break;
	case 333:
		U = new int[2] {-2, -2}; 
		V = new int[2] {5, 1}; 
		break;
	case 334:
		U = new int[2] {-5, 3}; 
		V = new int[2] {-10, -4}; 
		break;
	case 335:
		U = new int[2] {9, -4}; 
		V = new int[2] {-4, 0}; 
		break;
	case 336:
		U = new int[2] {-10, 2}; 
		V = new int[2] {-8, 3}; 
		break;
	case 337:
		U = new int[2] {-3, -9}; 
		V = new int[2] {7, 2}; 
		break;
	case 338:
		U = new int[2] {7, 10}; 
		V = new int[2] {9, -10}; 
		break;
	case 339:
		U = new int[2] {-5, -8}; 
		V = new int[2] {-5, 5}; 
		break;
	case 340:
		U = new int[2] {-5, -4}; 
		V = new int[2] {8, 4}; 
		break;
	case 341:
		U = new int[2] {10, -4}; 
		V = new int[2] {0, -1}; 
		break;
	case 342:
		U = new int[2] {-1, 2}; 
		V = new int[2] {-7, -8}; 
		break;
	case 343:
		U = new int[2] {-2, 1}; 
		V = new int[2] {4, 8}; 
		break;
	case 344:
		U = new int[2] {9, -2}; 
		V = new int[2] {8, -5}; 
		break;
	case 345:
		U = new int[2] {-6, 10}; 
		V = new int[2] {1, 9}; 
		break;
	case 346:
		U = new int[2] {10, 4}; 
		V = new int[2] {-4, 0}; 
		break;
	case 347:
		U = new int[2] {4, -6}; 
		V = new int[2] {8, -1}; 
		break;
	case 348:
		U = new int[2] {-5, 1}; 
		V = new int[2] {8, 3}; 
		break;
	case 349:
		U = new int[2] {4, 1}; 
		V = new int[2] {9, 2}; 
		break;
	case 350:
		U = new int[2] {7, 1}; 
		V = new int[2] {9, -7}; 
		break;
	case 351:
		U = new int[2] {6, 0}; 
		V = new int[2] {2, -9}; 
		break;
	case 352:
		U = new int[2] {8, 6}; 
		V = new int[2] {0, 9}; 
		break;
	case 353:
		U = new int[2] {-3, -4}; 
		V = new int[2] {-5, -3}; 
		break;
	case 354:
		U = new int[2] {10, -7}; 
		V = new int[2] {3, -4}; 
		break;
	case 355:
		U = new int[2] {-6, 3}; 
		V = new int[2] {-3, 10}; 
		break;
	case 356:
		U = new int[2] {8, -8}; 
		V = new int[2] {-5, 4}; 
		break;
	case 357:
		U = new int[2] {-2, 2}; 
		V = new int[2] {-5, 8}; 
		break;
	case 358:
		U = new int[2] {-9, 4}; 
		V = new int[2] {7, -7}; 
		break;
	case 359:
		U = new int[2] {-5, 7}; 
		V = new int[2] {7, 8}; 
		break;
	case 360:
		U = new int[2] {-9, 6}; 
		V = new int[2] {-5, -5}; 
		break;
	case 361:
		U = new int[2] {7, 9}; 
		V = new int[2] {8, 0}; 
		break;
	case 362:
		U = new int[2] {10, -9}; 
		V = new int[2] {-5, -2}; 
		break;
	case 363:
		U = new int[2] {-2, -7}; 
		V = new int[2] {-9, 2}; 
		break;
	case 364:
		U = new int[2] {-9, 2}; 
		V = new int[2] {1, -10}; 
		break;
	case 365:
		U = new int[2] {5, 9}; 
		V = new int[2] {1, 8}; 
		break;
	case 366:
		U = new int[2] {7, 8}; 
		V = new int[2] {0, -7}; 
		break;
	case 367:
		U = new int[2] {-2, 8}; 
		V = new int[2] {-5, 6}; 
		break;
	case 368:
		U = new int[2] {2, -6}; 
		V = new int[2] {2, 0}; 
		break;
	case 369:
		U = new int[2] {8, -7}; 
		V = new int[2] {-5, 4}; 
		break;
	case 370:
		U = new int[2] {-9, -9}; 
		V = new int[2] {5, -8}; 
		break;
	case 371:
		U = new int[2] {-3, -6}; 
		V = new int[2] {-4, 8}; 
		break;
	case 372:
		U = new int[2] {-4, -8}; 
		V = new int[2] {7, 2}; 
		break;
	case 373:
		U = new int[2] {10, 3}; 
		V = new int[2] {4, 8}; 
		break;
	case 374:
		U = new int[2] {-2, -9}; 
		V = new int[2] {5, -2}; 
		break;
	case 375:
		U = new int[2] {6, 0}; 
		V = new int[2] {-8, 2}; 
		break;
	case 376:
		U = new int[2] {8, -1}; 
		V = new int[2] {-9, -4}; 
		break;
	case 377:
		U = new int[2] {-4, -3}; 
		V = new int[2] {0, 1}; 
		break;
	case 378:
		U = new int[2] {-5, -7}; 
		V = new int[2] {5, -1}; 
		break;
	case 379:
		U = new int[2] {-8, 3}; 
		V = new int[2] {3, -4}; 
		break;
	case 380:
		U = new int[2] {9, 0}; 
		V = new int[2] {7, -10}; 
		break;
	case 381:
		U = new int[2] {-3, -10}; 
		V = new int[2] {7, -8}; 
		break;
	case 382:
		U = new int[2] {-5, -1}; 
		V = new int[2] {-3, 8}; 
		break;
	case 383:
		U = new int[2] {-1, -10}; 
		V = new int[2] {-2, -9}; 
		break;
	case 384:
		U = new int[2] {-2, 0}; 
		V = new int[2] {1, -10}; 
		break;
	case 385:
		U = new int[2] {0, 1}; 
		V = new int[2] {-5, -4}; 
		break;
	case 386:
		U = new int[2] {6, -3}; 
		V = new int[2] {-2, -8}; 
		break;
	case 387:
		U = new int[2] {-7, -1}; 
		V = new int[2] {1, -1}; 
		break;
	case 388:
		U = new int[2] {6, -6}; 
		V = new int[2] {10, 7}; 
		break;
	case 389:
		U = new int[2] {-10, -10}; 
		V = new int[2] {2, -2}; 
		break;
	case 390:
		U = new int[2] {0, -9}; 
		V = new int[2] {0, -5}; 
		break;
	case 391:
		U = new int[2] {-6, -9}; 
		V = new int[2] {6, 9}; 
		break;
	case 392:
		U = new int[2] {3, 10}; 
		V = new int[2] {-2, 5}; 
		break;
	case 393:
		U = new int[2] {10, -4}; 
		V = new int[2] {5, 8}; 
		break;
	case 394:
		U = new int[2] {-4, -3}; 
		V = new int[2] {-6, 4}; 
		break;
	case 395:
		U = new int[2] {10, -6}; 
		V = new int[2] {-4, -1}; 
		break;
	case 396:
		U = new int[2] {7, 8}; 
		V = new int[2] {8, -7}; 
		break;
	case 397:
		U = new int[2] {4, -10}; 
		V = new int[2] {4, 3}; 
		break;
	case 398:
		U = new int[2] {10, -9}; 
		V = new int[2] {9, -9}; 
		break;
	case 399:
		U = new int[2] {5, 1}; 
		V = new int[2] {1, -5}; 
		break;
	case 400:
		U = new int[2] {7, 7}; 
		V = new int[2] {5, -7}; 
		break;
	case 401:
		U = new int[2] {2, -10}; 
		V = new int[2] {-7, -5}; 
		break;
	case 402:
		U = new int[2] {0, -8}; 
		V = new int[2] {6, 7}; 
		break;
	case 403:
		U = new int[2] {6, -9}; 
		V = new int[2] {-6, 6}; 
		break;
	case 404:
		U = new int[2] {-5, -4}; 
		V = new int[2] {-5, -9}; 
		break;
	case 405:
		U = new int[2] {-5, -2}; 
		V = new int[2] {1, -4}; 
		break;
	case 406:
		U = new int[2] {3, -6}; 
		V = new int[2] {10, 8}; 
		break;
	case 407:
		U = new int[2] {-10, 1}; 
		V = new int[2] {-7, 4}; 
		break;
	case 408:
		U = new int[2] {-3, -4}; 
		V = new int[2] {-5, 6}; 
		break;
	case 409:
		U = new int[2] {-9, -8}; 
		V = new int[2] {-4, 8}; 
		break;
	case 410:
		U = new int[2] {-7, -1}; 
		V = new int[2] {-7, 5}; 
		break;
	case 411:
		U = new int[2] {-7, -1}; 
		V = new int[2] {8, -2}; 
		break;
	case 412:
		U = new int[2] {6, 5}; 
		V = new int[2] {4, -6}; 
		break;
	case 413:
		U = new int[2] {8, -5}; 
		V = new int[2] {-2, 2}; 
		break;
	case 414:
		U = new int[2] {-9, -2}; 
		V = new int[2] {-2, -3}; 
		break;
	case 415:
		U = new int[2] {5, -9}; 
		V = new int[2] {-3, 4}; 
		break;
	case 416:
		U = new int[2] {6, -8}; 
		V = new int[2] {-10, -1}; 
		break;
	case 417:
		U = new int[2] {-7, -4}; 
		V = new int[2] {5, 3}; 
		break;
	case 418:
		U = new int[2] {-9, -9}; 
		V = new int[2] {6, -8}; 
		break;
	case 419:
		U = new int[2] {-5, 2}; 
		V = new int[2] {-5, 9}; 
		break;
	case 420:
		U = new int[2] {6, -3}; 
		V = new int[2] {-8, 1}; 
		break;
	case 421:
		U = new int[2] {-1, -1}; 
		V = new int[2] {9, 3}; 
		break;
	case 422:
		U = new int[2] {2, 8}; 
		V = new int[2] {0, 3}; 
		break;
	case 423:
		U = new int[2] {-10, 4}; 
		V = new int[2] {7, -6}; 
		break;
	case 424:
		U = new int[2] {-5, 7}; 
		V = new int[2] {9, -9}; 
		break;
	case 425:
		U = new int[2] {0, 8}; 
		V = new int[2] {-10, 1}; 
		break;
	case 426:
		U = new int[2] {-8, 3}; 
		V = new int[2] {-3, -9}; 
		break;
	case 427:
		U = new int[2] {-4, 3}; 
		V = new int[2] {-5, -6}; 
		break;
	case 428:
		U = new int[2] {-5, 6}; 
		V = new int[2] {5, -8}; 
		break;
	case 429:
		U = new int[2] {-3, 2}; 
		V = new int[2] {10, -1}; 
		break;
	case 430:
		U = new int[2] {9, -9}; 
		V = new int[2] {1, -6}; 
		break;
	case 431:
		U = new int[2] {-2, -7}; 
		V = new int[2] {3, 1}; 
		break;
	case 432:
		U = new int[2] {0, -7}; 
		V = new int[2] {-3, -1}; 
		break;
	case 433:
		U = new int[2] {-4, 9}; 
		V = new int[2] {-1, 1}; 
		break;
	case 434:
		U = new int[2] {2, -5}; 
		V = new int[2] {-10, 2}; 
		break;
	case 435:
		U = new int[2] {-1, -2}; 
		V = new int[2] {3, -10}; 
		break;
	case 436:
		U = new int[2] {-3, -6}; 
		V = new int[2] {3, -6}; 
		break;
	case 437:
		U = new int[2] {3, 8}; 
		V = new int[2] {5, -6}; 
		break;
	case 438:
		U = new int[2] {-4, 1}; 
		V = new int[2] {0, -3}; 
		break;
	case 439:
		U = new int[2] {-2, -7}; 
		V = new int[2] {7, -10}; 
		break;
	case 440:
		U = new int[2] {-2, -4}; 
		V = new int[2] {-8, 3}; 
		break;
	case 441:
		U = new int[2] {-6, 2}; 
		V = new int[2] {0, -6}; 
		break;
	case 442:
		U = new int[2] {-2, 4}; 
		V = new int[2] {1, 0}; 
		break;
	case 443:
		U = new int[2] {1, 1}; 
		V = new int[2] {-4, 6}; 
		break;
	case 444:
		U = new int[2] {4, -6}; 
		V = new int[2] {-6, 4}; 
		break;
	case 445:
		U = new int[2] {-4, 8}; 
		V = new int[2] {8, -2}; 
		break;
	case 446:
		U = new int[2] {-1, 4}; 
		V = new int[2] {2, -6}; 
		break;
	case 447:
		U = new int[2] {9, -10}; 
		V = new int[2] {-5, -4}; 
		break;
	case 448:
		U = new int[2] {-1, -1}; 
		V = new int[2] {-5, 10}; 
		break;
	case 449:
		U = new int[2] {-6, 1}; 
		V = new int[2] {5, -10}; 
		break;
	case 450:
		U = new int[2] {10, -3}; 
		V = new int[2] {6, 1}; 
		break;
	case 451:
		U = new int[2] {-9, 0}; 
		V = new int[2] {2, 7}; 
		break;
	case 452:
		U = new int[2] {-8, 6}; 
		V = new int[2] {4, -6}; 
		break;
	case 453:
		U = new int[2] {1, 8}; 
		V = new int[2] {6, -3}; 
		break;
	case 454:
		U = new int[2] {-6, -7}; 
		V = new int[2] {-10, 7}; 
		break;
	case 455:
		U = new int[2] {3, 8}; 
		V = new int[2] {-4, -5}; 
		break;
	case 456:
		U = new int[2] {-5, 0}; 
		V = new int[2] {-7, -9}; 
		break;
	case 457:
		U = new int[2] {7, -4}; 
		V = new int[2] {2, -9}; 
		break;
	case 458:
		U = new int[2] {10, 10}; 
		V = new int[2] {2, -9}; 
		break;
	case 459:
		U = new int[2] {-10, -8}; 
		V = new int[2] {5, 2}; 
		break;
	case 460:
		U = new int[2] {3, 7}; 
		V = new int[2] {-9, -9}; 
		break;
	case 461:
		U = new int[2] {-6, 6}; 
		V = new int[2] {-6, 5}; 
		break;
	case 462:
		U = new int[2] {10, 4}; 
		V = new int[2] {10, 1}; 
		break;
	case 463:
		U = new int[2] {2, -9}; 
		V = new int[2] {-7, -6}; 
		break;
	case 464:
		U = new int[2] {2, -6}; 
		V = new int[2] {-9, 4}; 
		break;
	case 465:
		U = new int[2] {-1, -7}; 
		V = new int[2] {0, 5}; 
		break;
	case 466:
		U = new int[2] {2, -1}; 
		V = new int[2] {8, -8}; 
		break;
	case 467:
		U = new int[2] {-9, -9}; 
		V = new int[2] {-10, 4}; 
		break;
	case 468:
		U = new int[2] {0, 2}; 
		V = new int[2] {7, -4}; 
		break;
	case 469:
		U = new int[2] {-5, -5}; 
		V = new int[2] {-5, -9}; 
		break;
	case 470:
		U = new int[2] {10, -4}; 
		V = new int[2] {1, -7}; 
		break;
	case 471:
		U = new int[2] {-7, -3}; 
		V = new int[2] {-3, -3}; 
		break;
	case 472:
		U = new int[2] {4, -5}; 
		V = new int[2] {7, 10}; 
		break;
	case 473:
		U = new int[2] {2, -3}; 
		V = new int[2] {-6, 8}; 
		break;
	case 474:
		U = new int[2] {2, 0}; 
		V = new int[2] {7, 6}; 
		break;
	case 475:
		U = new int[2] {-9, 1}; 
		V = new int[2] {0, 7}; 
		break;
	case 476:
		U = new int[2] {2, -8}; 
		V = new int[2] {-7, -2}; 
		break;
	case 477:
		U = new int[2] {-6, 7}; 
		V = new int[2] {5, -6}; 
		break;
	case 478:
		U = new int[2] {10, -4}; 
		V = new int[2] {-5, 4}; 
		break;
	case 479:
		U = new int[2] {9, -2}; 
		V = new int[2] {5, 1}; 
		break;
	case 480:
		U = new int[2] {-9, -3}; 
		V = new int[2] {5, -4}; 
		break;
	case 481:
		U = new int[2] {-7, 3}; 
		V = new int[2] {8, 7}; 
		break;
	case 482:
		U = new int[2] {-10, 8}; 
		V = new int[2] {3, -4}; 
		break;
	case 483:
		U = new int[2] {10, 7}; 
		V = new int[2] {1, 4}; 
		break;
	case 484:
		U = new int[2] {9, -10}; 
		V = new int[2] {10, -3}; 
		break;
	case 485:
		U = new int[2] {-7, 9}; 
		V = new int[2] {-4, 7}; 
		break;
	case 486:
		U = new int[2] {-3, -6}; 
		V = new int[2] {-10, 0}; 
		break;
	case 487:
		U = new int[2] {3, -1}; 
		V = new int[2] {1, 5}; 
		break;
	case 488:
		U = new int[2] {0, 8}; 
		V = new int[2] {3, -3}; 
		break;
	case 489:
		U = new int[2] {6, -1}; 
		V = new int[2] {-4, 8}; 
		break;
	case 490:
		U = new int[2] {-9, 7}; 
		V = new int[2] {7, 10}; 
		break;
	case 491:
		U = new int[2] {-8, 0}; 
		V = new int[2] {-3, 1}; 
		break;
	case 492:
		U = new int[2] {-10, -7}; 
		V = new int[2] {-3, 4}; 
		break;
	case 493:
		U = new int[2] {6, 3}; 
		V = new int[2] {-6, 4}; 
		break;
	case 494:
		U = new int[2] {-6, -10}; 
		V = new int[2] {-1, 8}; 
		break;
	case 495:
		U = new int[2] {-5, 5}; 
		V = new int[2] {5, 5}; 
		break;
	case 496:
		U = new int[2] {0, -4}; 
		V = new int[2] {-7, 9}; 
		break;
	case 497:
		U = new int[2] {0, -4}; 
		V = new int[2] {10, 9}; 
		break;
	case 498:
		U = new int[2] {4, -9}; 
		V = new int[2] {-1, 10}; 
		break;
	case 499:
		U = new int[2] {-1, 6}; 
		V = new int[2] {3, 10}; 
		break;
	case 500:
		U = new int[2] {-7, -2}; 
		V = new int[2] {6, 9}; 
		break;
	case 501:
		U = new int[2] {8, 8}; 
		V = new int[2] {-6, -10}; 
		break;
	case 502:
		U = new int[2] {-6, 0}; 
		V = new int[2] {-2, 8}; 
		break;
	case 503:
		U = new int[2] {-9, -5}; 
		V = new int[2] {-8, -4}; 
		break;
	case 504:
		U = new int[2] {-3, 2}; 
		V = new int[2] {4, 0}; 
		break;
	case 505:
		U = new int[2] {-4, 10}; 
		V = new int[2] {-2, -7}; 
		break;
	case 506:
		U = new int[2] {5, 1}; 
		V = new int[2] {-6, 2}; 
		break;
	case 507:
		U = new int[2] {-1, -3}; 
		V = new int[2] {1, -2}; 
		break;
	case 508:
		U = new int[2] {-5, 9}; 
		V = new int[2] {9, -6}; 
		break;
	case 509:
		U = new int[2] {-10, -9}; 
		V = new int[2] {0, -2}; 
		break;
	case 510:
		U = new int[2] {7, -2}; 
		V = new int[2] {1, 3}; 
		break;
	case 511:
		U = new int[2] {6, 3}; 
		V = new int[2] {7, -9}; 
		break;
	case 512:
		U = new int[2] {-4, -4}; 
		V = new int[2] {8, 2}; 
		break;
	case 513:
		U = new int[2] {-2, -9}; 
		V = new int[2] {-6, 8}; 
		break;
	case 514:
		U = new int[2] {0, -4}; 
		V = new int[2] {10, -4}; 
		break;
	case 515:
		U = new int[2] {-6, -7}; 
		V = new int[2] {10, 9}; 
		break;
	case 516:
		U = new int[2] {2, 7}; 
		V = new int[2] {2, 2}; 
		break;
	case 517:
		U = new int[2] {3, -9}; 
		V = new int[2] {3, -1}; 
		break;
	case 518:
		U = new int[2] {5, 7}; 
		V = new int[2] {7, 6}; 
		break;
	case 519:
		U = new int[2] {-9, -9}; 
		V = new int[2] {-1, -9}; 
		break;
	case 520:
		U = new int[2] {0, -8}; 
		V = new int[2] {4, -8}; 
		break;
	case 521:
		U = new int[2] {1, -4}; 
		V = new int[2] {10, -7}; 
		break;
	case 522:
		U = new int[2] {1, -10}; 
		V = new int[2] {2, 4}; 
		break;
	case 523:
		U = new int[2] {-6, 7}; 
		V = new int[2] {6, -8}; 
		break;
	case 524:
		U = new int[2] {1, -10}; 
		V = new int[2] {-10, 3}; 
		break;
	case 525:
		U = new int[2] {-1, -2}; 
		V = new int[2] {8, -8}; 
		break;
	case 526:
		U = new int[2] {9, 1}; 
		V = new int[2] {2, 8}; 
		break;
	case 527:
		U = new int[2] {6, -10}; 
		V = new int[2] {5, 4}; 
		break;
	case 528:
		U = new int[2] {10, -6}; 
		V = new int[2] {-5, 2}; 
		break;
	case 529:
		U = new int[2] {-5, -5}; 
		V = new int[2] {-5, 10}; 
		break;
	case 530:
		U = new int[2] {7, -1}; 
		V = new int[2] {8, 2}; 
		break;
	case 531:
		U = new int[2] {-9, 4}; 
		V = new int[2] {-2, 3}; 
		break;
	case 532:
		U = new int[2] {3, -10}; 
		V = new int[2] {-10, -3}; 
		break;
	case 533:
		U = new int[2] {-10, -4}; 
		V = new int[2] {4, 1}; 
		break;
	case 534:
		U = new int[2] {-7, 3}; 
		V = new int[2] {2, -4}; 
		break;
	case 535:
		U = new int[2] {-3, -10}; 
		V = new int[2] {8, 0}; 
		break;
	case 536:
		U = new int[2] {-2, 3}; 
		V = new int[2] {-5, 4}; 
		break;
	case 537:
		U = new int[2] {-6, -7}; 
		V = new int[2] {-8, -2}; 
		break;
	case 538:
		U = new int[2] {-7, 7}; 
		V = new int[2] {4, -8}; 
		break;
	case 539:
		U = new int[2] {-10, -3}; 
		V = new int[2] {-2, -5}; 
		break;
	case 540:
		U = new int[2] {3, -1}; 
		V = new int[2] {3, -1}; 
		break;
	case 541:
		U = new int[2] {6, 1}; 
		V = new int[2] {-5, 5}; 
		break;
	case 542:
		U = new int[2] {2, 2}; 
		V = new int[2] {-8, -9}; 
		break;
	case 543:
		U = new int[2] {6, 6}; 
		V = new int[2] {-6, -7}; 
		break;
	case 544:
		U = new int[2] {5, 1}; 
		V = new int[2] {-7, 7}; 
		break;
	case 545:
		U = new int[2] {4, 7}; 
		V = new int[2] {5, -3}; 
		break;
	case 546:
		U = new int[2] {9, -9}; 
		V = new int[2] {3, -2}; 
		break;
	case 547:
		U = new int[2] {-10, 8}; 
		V = new int[2] {-10, 7}; 
		break;
	case 548:
		U = new int[2] {-8, -8}; 
		V = new int[2] {10, 4}; 
		break;
	case 549:
		U = new int[2] {-6, -9}; 
		V = new int[2] {4, -2}; 
		break;
	case 550:
		U = new int[2] {-3, 10}; 
		V = new int[2] {3, 9}; 
		break;
	case 551:
		U = new int[2] {7, 10}; 
		V = new int[2] {-6, -2}; 
		break;
	case 552:
		U = new int[2] {0, -1}; 
		V = new int[2] {-1, 10}; 
		break;
	case 553:
		U = new int[2] {-8, 0}; 
		V = new int[2] {7, -8}; 
		break;
	case 554:
		U = new int[2] {-1, -2}; 
		V = new int[2] {-4, -3}; 
		break;
	case 555:
		U = new int[2] {2, 2}; 
		V = new int[2] {-10, -5}; 
		break;
	case 556:
		U = new int[2] {-5, -4}; 
		V = new int[2] {8, 0}; 
		break;
	case 557:
		U = new int[2] {-3, -8}; 
		V = new int[2] {-10, -1}; 
		break;
	case 558:
		U = new int[2] {10, -1}; 
		V = new int[2] {-5, 4}; 
		break;
	case 559:
		U = new int[2] {-3, 3}; 
		V = new int[2] {8, -10}; 
		break;
	case 560:
		U = new int[2] {10, 7}; 
		V = new int[2] {-7, 0}; 
		break;
	case 561:
		U = new int[2] {-7, -9}; 
		V = new int[2] {8, 10}; 
		break;
	case 562:
		U = new int[2] {7, -4}; 
		V = new int[2] {8, 9}; 
		break;
	case 563:
		U = new int[2] {-9, 0}; 
		V = new int[2] {0, 9}; 
		break;
	case 564:
		U = new int[2] {-2, 6}; 
		V = new int[2] {0, 4}; 
		break;
	case 565:
		U = new int[2] {-1, 7}; 
		V = new int[2] {4, -8}; 
		break;
	case 566:
		U = new int[2] {0, 9}; 
		V = new int[2] {6, -1}; 
		break;
	case 567:
		U = new int[2] {3, -10}; 
		V = new int[2] {8, -4}; 
		break;
	case 568:
		U = new int[2] {7, 7}; 
		V = new int[2] {-6, 8}; 
		break;
	case 569:
		U = new int[2] {-2, -8}; 
		V = new int[2] {1, -5}; 
		break;
	case 570:
		U = new int[2] {9, 0}; 
		V = new int[2] {-8, 10}; 
		break;
	case 571:
		U = new int[2] {10, 4}; 
		V = new int[2] {-2, 3}; 
		break;
	case 572:
		U = new int[2] {2, -10}; 
		V = new int[2] {4, 8}; 
		break;
	case 573:
		U = new int[2] {-1, -6}; 
		V = new int[2] {3, -8}; 
		break;
	case 574:
		U = new int[2] {7, 9}; 
		V = new int[2] {-5, -1}; 
		break;
	case 575:
		U = new int[2] {7, -10}; 
		V = new int[2] {6, 8}; 
		break;
	case 576:
		U = new int[2] {0, -4}; 
		V = new int[2] {1, -2}; 
		break;
	case 577:
		U = new int[2] {-5, 8}; 
		V = new int[2] {-8, -10}; 
		break;
	case 578:
		U = new int[2] {7, 7}; 
		V = new int[2] {-5, -6}; 
		break;
	case 579:
		U = new int[2] {-7, 6}; 
		V = new int[2] {3, -4}; 
		break;
	case 580:
		U = new int[2] {-5, -8}; 
		V = new int[2] {9, 6}; 
		break;
	case 581:
		U = new int[2] {2, -7}; 
		V = new int[2] {2, 8}; 
		break;
	case 582:
		U = new int[2] {-10, 10}; 
		V = new int[2] {3, 1}; 
		break;
	case 583:
		U = new int[2] {3, -1}; 
		V = new int[2] {5, -6}; 
		break;
	case 584:
		U = new int[2] {-9, -3}; 
		V = new int[2] {-5, -8}; 
		break;
	case 585:
		U = new int[2] {-9, -5}; 
		V = new int[2] {10, 6}; 
		break;
	case 586:
		U = new int[2] {1, 8}; 
		V = new int[2] {-3, 3}; 
		break;
	case 587:
		U = new int[2] {9, -6}; 
		V = new int[2] {0, 9}; 
		break;
	case 588:
		U = new int[2] {-1, -2}; 
		V = new int[2] {-6, 1}; 
		break;
	case 589:
		U = new int[2] {10, 8}; 
		V = new int[2] {7, 9}; 
		break;
	case 590:
		U = new int[2] {-5, 7}; 
		V = new int[2] {-1, 3}; 
		break;
	case 591:
		U = new int[2] {5, -4}; 
		V = new int[2] {5, -1}; 
		break;
	case 592:
		U = new int[2] {10, -9}; 
		V = new int[2] {-5, 2}; 
		break;
	case 593:
		U = new int[2] {-2, -5}; 
		V = new int[2] {4, 6}; 
		break;
	case 594:
		U = new int[2] {-4, -3}; 
		V = new int[2] {-6, -4}; 
		break;
	case 595:
		U = new int[2] {0, -9}; 
		V = new int[2] {-6, -6}; 
		break;
	case 596:
		U = new int[2] {5, 8}; 
		V = new int[2] {-1, -10}; 
		break;
	case 597:
		U = new int[2] {10, -8}; 
		V = new int[2] {-5, 10}; 
		break;
	case 598:
		U = new int[2] {10, 0}; 
		V = new int[2] {7, -8}; 
		break;
	case 599:
		U = new int[2] {1, 6}; 
		V = new int[2] {-8, 10}; 
		break;
	case 600:
		U = new int[2] {6, -3}; 
		V = new int[2] {10, -7}; 
		break;
	case 601:
		U = new int[2] {10, 6}; 
		V = new int[2] {-6, -8}; 
		break;
	case 602:
		U = new int[2] {0, -7}; 
		V = new int[2] {-8, -10}; 
		break;
	case 603:
		U = new int[2] {-10, 5}; 
		V = new int[2] {-5, 9}; 
		break;
	case 604:
		U = new int[2] {-9, -9}; 
		V = new int[2] {7, 8}; 
		break;
	case 605:
		U = new int[2] {3, -10}; 
		V = new int[2] {5, 4}; 
		break;
	case 606:
		U = new int[2] {-3, -9}; 
		V = new int[2] {-8, 3}; 
		break;
	case 607:
		U = new int[2] {2, -3}; 
		V = new int[2] {5, -1}; 
		break;
	case 608:
		U = new int[2] {7, 4}; 
		V = new int[2] {8, 6}; 
		break;
	case 609:
		U = new int[2] {8, 6}; 
		V = new int[2] {-4, -2}; 
		break;
	case 610:
		U = new int[2] {-8, -5}; 
		V = new int[2] {-8, 2}; 
		break;
	case 611:
		U = new int[2] {7, 9}; 
		V = new int[2] {-6, 6}; 
		break;
	case 612:
		U = new int[2] {-10, -4}; 
		V = new int[2] {0, 0}; 
		break;
	case 613:
		U = new int[2] {-10, 2}; 
		V = new int[2] {8, 9}; 
		break;
	case 614:
		U = new int[2] {5, 1}; 
		V = new int[2] {1, 0}; 
		break;
	case 615:
		U = new int[2] {4, -9}; 
		V = new int[2] {-3, -10}; 
		break;
	case 616:
		U = new int[2] {-4, -1}; 
		V = new int[2] {3, 6}; 
		break;
	case 617:
		U = new int[2] {6, -5}; 
		V = new int[2] {-5, -3}; 
		break;
	case 618:
		U = new int[2] {-10, -5}; 
		V = new int[2] {6, -1}; 
		break;
	case 619:
		U = new int[2] {-1, -7}; 
		V = new int[2] {-9, -1}; 
		break;
	case 620:
		U = new int[2] {1, 10}; 
		V = new int[2] {2, -1}; 
		break;
	case 621:
		U = new int[2] {-2, 0}; 
		V = new int[2] {-8, 3}; 
		break;
	case 622:
		U = new int[2] {-4, -2}; 
		V = new int[2] {-10, 9}; 
		break;
	case 623:
		U = new int[2] {5, 8}; 
		V = new int[2] {-2, -4}; 
		break;
	case 624:
		U = new int[2] {-4, 4}; 
		V = new int[2] {4, -4}; 
		break;
	case 625:
		U = new int[2] {-9, -8}; 
		V = new int[2] {1, 8}; 
		break;
	case 626:
		U = new int[2] {5, 9}; 
		V = new int[2] {2, 1}; 
		break;
	case 627:
		U = new int[2] {-10, -8}; 
		V = new int[2] {-8, 4}; 
		break;
	case 628:
		U = new int[2] {-8, -3}; 
		V = new int[2] {2, 4}; 
		break;
	case 629:
		U = new int[2] {-3, 4}; 
		V = new int[2] {3, -1}; 
		break;
	case 630:
		U = new int[2] {1, 10}; 
		V = new int[2] {-3, -4}; 
		break;
	case 631:
		U = new int[2] {-1, -5}; 
		V = new int[2] {5, 8}; 
		break;
	case 632:
		U = new int[2] {-5, -7}; 
		V = new int[2] {10, 3}; 
		break;
	case 633:
		U = new int[2] {6, -8}; 
		V = new int[2] {-5, 5}; 
		break;
	case 634:
		U = new int[2] {6, 7}; 
		V = new int[2] {8, 0}; 
		break;
	case 635:
		U = new int[2] {-8, 3}; 
		V = new int[2] {-4, 5}; 
		break;
	case 636:
		U = new int[2] {6, -1}; 
		V = new int[2] {-6, 7}; 
		break;
	case 637:
		U = new int[2] {-4, -7}; 
		V = new int[2] {-1, -6}; 
		break;
	case 638:
		U = new int[2] {-8, -9}; 
		V = new int[2] {-2, 3}; 
		break;
	case 639:
		U = new int[2] {-3, 4}; 
		V = new int[2] {1, 9}; 
		break;
	case 640:
		U = new int[2] {3, -4}; 
		V = new int[2] {-6, -3}; 
		break;
	case 641:
		U = new int[2] {9, 1}; 
		V = new int[2] {0, -10}; 
		break;
	case 642:
		U = new int[2] {4, -2}; 
		V = new int[2] {5, 7}; 
		break;
	case 643:
		U = new int[2] {-2, 0}; 
		V = new int[2] {10, 9}; 
		break;
	case 644:
		U = new int[2] {6, 9}; 
		V = new int[2] {-8, -10}; 
		break;
	case 645:
		U = new int[2] {7, 10}; 
		V = new int[2] {4, -8}; 
		break;
	case 646:
		U = new int[2] {-6, 5}; 
		V = new int[2] {1, -9}; 
		break;
	case 647:
		U = new int[2] {4, 3}; 
		V = new int[2] {6, 9}; 
		break;
	case 648:
		U = new int[2] {-4, 8}; 
		V = new int[2] {-4, 9}; 
		break;
	case 649:
		U = new int[2] {-6, -3}; 
		V = new int[2] {9, -10}; 
		break;
	case 650:
		U = new int[2] {-6, -5}; 
		V = new int[2] {8, 9}; 
		break;
	case 651:
		U = new int[2] {-7, 0}; 
		V = new int[2] {1, 1}; 
		break;
	case 652:
		U = new int[2] {9, 1}; 
		V = new int[2] {4, 6}; 
		break;
	case 653:
		U = new int[2] {8, -8}; 
		V = new int[2] {-9, -9}; 
		break;
	case 654:
		U = new int[2] {3, 0}; 
		V = new int[2] {10, 5}; 
		break;
	case 655:
		U = new int[2] {-8, -1}; 
		V = new int[2] {7, 7}; 
		break;
	case 656:
		U = new int[2] {5, -5}; 
		V = new int[2] {7, -9}; 
		break;
	case 657:
		U = new int[2] {3, -4}; 
		V = new int[2] {-4, -8}; 
		break;
	case 658:
		U = new int[2] {-3, -2}; 
		V = new int[2] {-7, -6}; 
		break;
	case 659:
		U = new int[2] {-7, -7}; 
		V = new int[2] {-5, 7}; 
		break;
	case 660:
		U = new int[2] {7, 1}; 
		V = new int[2] {-5, -7}; 
		break;
	case 661:
		U = new int[2] {5, 8}; 
		V = new int[2] {-5, -6}; 
		break;
	case 662:
		U = new int[2] {-10, 5}; 
		V = new int[2] {3, -1}; 
		break;
	case 663:
		U = new int[2] {8, -1}; 
		V = new int[2] {-6, -10}; 
		break;
	case 664:
		U = new int[2] {3, -9}; 
		V = new int[2] {3, 3}; 
		break;
	case 665:
		U = new int[2] {9, -1}; 
		V = new int[2] {2, -10}; 
		break;
	case 666:
		U = new int[2] {-5, 3}; 
		V = new int[2] {-8, 3}; 
		break;
	case 667:
		U = new int[2] {-6, 1}; 
		V = new int[2] {0, -9}; 
		break;
	case 668:
		U = new int[2] {7, -2}; 
		V = new int[2] {6, 7}; 
		break;
	case 669:
		U = new int[2] {8, -3}; 
		V = new int[2] {1, 2}; 
		break;
	case 670:
		U = new int[2] {9, 10}; 
		V = new int[2] {-5, 4}; 
		break;
	case 671:
		U = new int[2] {6, -10}; 
		V = new int[2] {-10, 2}; 
		break;
	case 672:
		U = new int[2] {5, -5}; 
		V = new int[2] {-10, -8}; 
		break;
	case 673:
		U = new int[2] {-4, -2}; 
		V = new int[2] {5, -4}; 
		break;
	case 674:
		U = new int[2] {4, 9}; 
		V = new int[2] {6, -1}; 
		break;
	case 675:
		U = new int[2] {-9, 8}; 
		V = new int[2] {-9, 8}; 
		break;
	case 676:
		U = new int[2] {-4, 7}; 
		V = new int[2] {7, 10}; 
		break;
	case 677:
		U = new int[2] {-6, -4}; 
		V = new int[2] {1, 8}; 
		break;
	case 678:
		U = new int[2] {-9, 2}; 
		V = new int[2] {8, 6}; 
		break;
	case 679:
		U = new int[2] {1, -1}; 
		V = new int[2] {10, 7}; 
		break;
	case 680:
		U = new int[2] {10, 6}; 
		V = new int[2] {-10, -2}; 
		break;
	case 681:
		U = new int[2] {2, 2}; 
		V = new int[2] {-9, -6}; 
		break;
	case 682:
		U = new int[2] {1, -9}; 
		V = new int[2] {6, -3}; 
		break;
	case 683:
		U = new int[2] {4, -9}; 
		V = new int[2] {-7, -8}; 
		break;
	case 684:
		U = new int[2] {10, 8}; 
		V = new int[2] {10, -7}; 
		break;
	case 685:
		U = new int[2] {-8, -10}; 
		V = new int[2] {8, -10}; 
		break;
	case 686:
		U = new int[2] {1, 7}; 
		V = new int[2] {6, -3}; 
		break;
	case 687:
		U = new int[2] {-9, -8}; 
		V = new int[2] {5, -3}; 
		break;
	case 688:
		U = new int[2] {-5, -4}; 
		V = new int[2] {0, -4}; 
		break;
	case 689:
		U = new int[2] {-7, -8}; 
		V = new int[2] {5, 1}; 
		break;
	case 690:
		U = new int[2] {5, 5}; 
		V = new int[2] {-10, -6}; 
		break;
	case 691:
		U = new int[2] {10, -7}; 
		V = new int[2] {-9, -6}; 
		break;
	case 692:
		U = new int[2] {-3, -6}; 
		V = new int[2] {-4, -8}; 
		break;
	case 693:
		U = new int[2] {3, 3}; 
		V = new int[2] {-3, -6}; 
		break;
	case 694:
		U = new int[2] {4, -7}; 
		V = new int[2] {7, 9}; 
		break;
	case 695:
		U = new int[2] {7, 4}; 
		V = new int[2] {-3, 3}; 
		break;
	case 696:
		U = new int[2] {-3, 0}; 
		V = new int[2] {-2, -5}; 
		break;
	case 697:
		U = new int[2] {0, 10}; 
		V = new int[2] {10, -1}; 
		break;
	case 698:
		U = new int[2] {1, 7}; 
		V = new int[2] {3, -10}; 
		break;
	case 699:
		U = new int[2] {-5, 7}; 
		V = new int[2] {1, 1}; 
		break;
	case 700:
		U = new int[2] {9, 5}; 
		V = new int[2] {-1, 2}; 
		break;
	case 701:
		U = new int[2] {-2, -7}; 
		V = new int[2] {8, 2}; 
		break;
	case 702:
		U = new int[2] {5, -2}; 
		V = new int[2] {-2, -4}; 
		break;
	case 703:
		U = new int[2] {-7, 8}; 
		V = new int[2] {-1, -8}; 
		break;
	case 704:
		U = new int[2] {6, -7}; 
		V = new int[2] {-10, -6}; 
		break;
	case 705:
		U = new int[2] {6, 10}; 
		V = new int[2] {-10, -2}; 
		break;
	case 706:
		U = new int[2] {-10, -5}; 
		V = new int[2] {5, -4}; 
		break;
	case 707:
		U = new int[2] {-6, -5}; 
		V = new int[2] {4, -1}; 
		break;
	case 708:
		U = new int[2] {10, -8}; 
		V = new int[2] {6, -8}; 
		break;
	case 709:
		U = new int[2] {-3, -1}; 
		V = new int[2] {2, -2}; 
		break;
	case 710:
		U = new int[2] {9, -2}; 
		V = new int[2] {0, 1}; 
		break;
	case 711:
		U = new int[2] {9, 5}; 
		V = new int[2] {-5, -1}; 
		break;
	case 712:
		U = new int[2] {1, -9}; 
		V = new int[2] {0, -2}; 
		break;
	case 713:
		U = new int[2] {-5, 7}; 
		V = new int[2] {1, 0}; 
		break;
	case 714:
		U = new int[2] {2, 1}; 
		V = new int[2] {-7, -10}; 
		break;
	case 715:
		U = new int[2] {4, 1}; 
		V = new int[2] {-3, 0}; 
		break;
	case 716:
		U = new int[2] {5, 0}; 
		V = new int[2] {-7, -10}; 
		break;
	case 717:
		U = new int[2] {-5, 8}; 
		V = new int[2] {10, -9}; 
		break;
	case 718:
		U = new int[2] {-8, -8}; 
		V = new int[2] {-1, -4}; 
		break;
	case 719:
		U = new int[2] {10, -3}; 
		V = new int[2] {-9, 2}; 
		break;
	case 720:
		U = new int[2] {-5, 5}; 
		V = new int[2] {-4, 5}; 
		break;
	case 721:
		U = new int[2] {-6, 4}; 
		V = new int[2] {5, 6}; 
		break;
	case 722:
		U = new int[2] {4, -1}; 
		V = new int[2] {2, 8}; 
		break;
	case 723:
		U = new int[2] {-3, 5}; 
		V = new int[2] {7, 7}; 
		break;
	case 724:
		U = new int[2] {10, 4}; 
		V = new int[2] {7, -3}; 
		break;
	case 725:
		U = new int[2] {-9, 0}; 
		V = new int[2] {5, -9}; 
		break;
	case 726:
		U = new int[2] {-9, -5}; 
		V = new int[2] {10, 1}; 
		break;
	case 727:
		U = new int[2] {9, -3}; 
		V = new int[2] {6, 5}; 
		break;
	case 728:
		U = new int[2] {4, -7}; 
		V = new int[2] {4, -6}; 
		break;
	case 729:
		U = new int[2] {5, 3}; 
		V = new int[2] {-3, -7}; 
		break;
	case 730:
		U = new int[2] {8, -1}; 
		V = new int[2] {-1, -5}; 
		break;
	case 731:
		U = new int[2] {2, -10}; 
		V = new int[2] {-7, -6}; 
		break;
	case 732:
		U = new int[2] {-9, -10}; 
		V = new int[2] {2, -6}; 
		break;
	case 733:
		U = new int[2] {-9, -7}; 
		V = new int[2] {-4, 10}; 
		break;
	case 734:
		U = new int[2] {-3, -8}; 
		V = new int[2] {2, -3}; 
		break;
	case 735:
		U = new int[2] {-2, 4}; 
		V = new int[2] {-8, -8}; 
		break;
	case 736:
		U = new int[2] {7, -8}; 
		V = new int[2] {9, 10}; 
		break;
	case 737:
		U = new int[2] {-8, 7}; 
		V = new int[2] {-2, 7}; 
		break;
	case 738:
		U = new int[2] {10, 3}; 
		V = new int[2] {10, 6}; 
		break;
	case 739:
		U = new int[2] {-1, 9}; 
		V = new int[2] {-4, -4}; 
		break;
	case 740:
		U = new int[2] {6, 6}; 
		V = new int[2] {5, 10}; 
		break;
	case 741:
		U = new int[2] {-4, -10}; 
		V = new int[2] {5, 0}; 
		break;
	case 742:
		U = new int[2] {8, 2}; 
		V = new int[2] {10, -5}; 
		break;
	case 743:
		U = new int[2] {6, 1}; 
		V = new int[2] {4, -4}; 
		break;
	case 744:
		U = new int[2] {2, -6}; 
		V = new int[2] {-5, -4}; 
		break;
	case 745:
		U = new int[2] {-6, 5}; 
		V = new int[2] {-6, 9}; 
		break;
	case 746:
		U = new int[2] {-4, 2}; 
		V = new int[2] {9, -9}; 
		break;
	case 747:
		U = new int[2] {-9, -7}; 
		V = new int[2] {-3, -3}; 
		break;
	case 748:
		U = new int[2] {-5, -10}; 
		V = new int[2] {10, 6}; 
		break;
	case 749:
		U = new int[2] {-1, 1}; 
		V = new int[2] {-5, -5}; 
		break;
	case 750:
		U = new int[2] {-10, 9}; 
		V = new int[2] {2, 8}; 
		break;
	case 751:
		U = new int[2] {-2, 7}; 
		V = new int[2] {1, 0}; 
		break;
	case 752:
		U = new int[2] {0, 4}; 
		V = new int[2] {-7, -10}; 
		break;
	case 753:
		U = new int[2] {-6, -9}; 
		V = new int[2] {-1, 1}; 
		break;
	case 754:
		U = new int[2] {-7, -3}; 
		V = new int[2] {7, -5}; 
		break;
	case 755:
		U = new int[2] {10, -6}; 
		V = new int[2] {-1, 4}; 
		break;
	case 756:
		U = new int[2] {-7, 10}; 
		V = new int[2] {6, 1}; 
		break;
	case 757:
		U = new int[2] {10, 0}; 
		V = new int[2] {3, -5}; 
		break;
	case 758:
		U = new int[2] {4, -10}; 
		V = new int[2] {9, -5}; 
		break;
	case 759:
		U = new int[2] {1, -3}; 
		V = new int[2] {-8, 4}; 
		break;
	case 760:
		U = new int[2] {4, 0}; 
		V = new int[2] {1, 10}; 
		break;
	case 761:
		U = new int[2] {10, 6}; 
		V = new int[2] {6, -5}; 
		break;
	case 762:
		U = new int[2] {-3, 8}; 
		V = new int[2] {-2, 6}; 
		break;
	case 763:
		U = new int[2] {6, -8}; 
		V = new int[2] {9, 10}; 
		break;
	case 764:
		U = new int[2] {2, -1}; 
		V = new int[2] {-6, -2}; 
		break;
	case 765:
		U = new int[2] {4, 4}; 
		V = new int[2] {4, -10}; 
		break;
	case 766:
		U = new int[2] {5, -8}; 
		V = new int[2] {8, -6}; 
		break;
	case 767:
		U = new int[2] {1, 0}; 
		V = new int[2] {7, 2}; 
		break;
	case 768:
		U = new int[2] {9, 4}; 
		V = new int[2] {1, 9}; 
		break;
	case 769:
		U = new int[2] {-1, -4}; 
		V = new int[2] {4, 5}; 
		break;
	case 770:
		U = new int[2] {-4, -6}; 
		V = new int[2] {-3, 10}; 
		break;
	case 771:
		U = new int[2] {-2, 7}; 
		V = new int[2] {1, 10}; 
		break;
	case 772:
		U = new int[2] {-8, 9}; 
		V = new int[2] {-9, -2}; 
		break;
	case 773:
		U = new int[2] {1, -2}; 
		V = new int[2] {5, 9}; 
		break;
	case 774:
		U = new int[2] {1, 7}; 
		V = new int[2] {-5, -6}; 
		break;
	case 775:
		U = new int[2] {-9, 4}; 
		V = new int[2] {9, -5}; 
		break;
	case 776:
		U = new int[2] {-6, 7}; 
		V = new int[2] {-5, -7}; 
		break;
	case 777:
		U = new int[2] {-10, -7}; 
		V = new int[2] {1, 4}; 
		break;
	case 778:
		U = new int[2] {-8, 4}; 
		V = new int[2] {10, 6}; 
		break;
	case 779:
		U = new int[2] {0, 2}; 
		V = new int[2] {2, -10}; 
		break;
	case 780:
		U = new int[2] {-6, -3}; 
		V = new int[2] {-6, -8}; 
		break;
	case 781:
		U = new int[2] {-1, -9}; 
		V = new int[2] {9, 7}; 
		break;
	case 782:
		U = new int[2] {5, -8}; 
		V = new int[2] {4, -10}; 
		break;
	case 783:
		U = new int[2] {4, -7}; 
		V = new int[2] {1, 3}; 
		break;
	case 784:
		U = new int[2] {1, 4}; 
		V = new int[2] {-1, 10}; 
		break;
	case 785:
		U = new int[2] {3, 1}; 
		V = new int[2] {-2, 4}; 
		break;
	case 786:
		U = new int[2] {-2, -3}; 
		V = new int[2] {-9, -9}; 
		break;
	case 787:
		U = new int[2] {0, -8}; 
		V = new int[2] {5, -2}; 
		break;
	case 788:
		U = new int[2] {7, 6}; 
		V = new int[2] {-1, -7}; 
		break;
	case 789:
		U = new int[2] {5, -7}; 
		V = new int[2] {-8, 8}; 
		break;
	case 790:
		U = new int[2] {-8, -6}; 
		V = new int[2] {-4, -5}; 
		break;
	case 791:
		U = new int[2] {-7, 4}; 
		V = new int[2] {0, -8}; 
		break;
	case 792:
		U = new int[2] {0, 9}; 
		V = new int[2] {6, 8}; 
		break;
	case 793:
		U = new int[2] {-1, 10}; 
		V = new int[2] {7, 3}; 
		break;
	case 794:
		U = new int[2] {-10, 0}; 
		V = new int[2] {-9, 10}; 
		break;
	case 795:
		U = new int[2] {6, -10}; 
		V = new int[2] {9, 8}; 
		break;
	case 796:
		U = new int[2] {-3, 8}; 
		V = new int[2] {-6, -5}; 
		break;
	case 797:
		U = new int[2] {4, -4}; 
		V = new int[2] {-7, -9}; 
		break;
	case 798:
		U = new int[2] {-9, -1}; 
		V = new int[2] {-7, 10}; 
		break;
	case 799:
		U = new int[2] {0, -8}; 
		V = new int[2] {-1, 2}; 
		break;
	case 800:
		U = new int[2] {0, 7}; 
		V = new int[2] {-3, 4}; 
		break;
	case 801:
		U = new int[2] {-5, -10}; 
		V = new int[2] {-6, 9}; 
		break;
	case 802:
		U = new int[2] {-4, 10}; 
		V = new int[2] {-8, 1}; 
		break;
	case 803:
		U = new int[2] {4, 2}; 
		V = new int[2] {-2, 8}; 
		break;
	case 804:
		U = new int[2] {-3, 6}; 
		V = new int[2] {2, 9}; 
		break;
	case 805:
		U = new int[2] {9, -9}; 
		V = new int[2] {-8, 2}; 
		break;
	case 806:
		U = new int[2] {-7, 6}; 
		V = new int[2] {1, 1}; 
		break;
	case 807:
		U = new int[2] {5, 2}; 
		V = new int[2] {3, -9}; 
		break;
	case 808:
		U = new int[2] {-8, -2}; 
		V = new int[2] {-10, -3}; 
		break;
	case 809:
		U = new int[2] {4, -7}; 
		V = new int[2] {-10, 10}; 
		break;
	case 810:
		U = new int[2] {-3, 6}; 
		V = new int[2] {-6, 5}; 
		break;
	case 811:
		U = new int[2] {-6, 4}; 
		V = new int[2] {-4, 7}; 
		break;
	case 812:
		U = new int[2] {5, 0}; 
		V = new int[2] {-4, 7}; 
		break;
	case 813:
		U = new int[2] {5, 9}; 
		V = new int[2] {6, 8}; 
		break;
	case 814:
		U = new int[2] {1, 3}; 
		V = new int[2] {5, -7}; 
		break;
	case 815:
		U = new int[2] {6, 4}; 
		V = new int[2] {-4, 0}; 
		break;
	case 816:
		U = new int[2] {3, -4}; 
		V = new int[2] {2, 3}; 
		break;
	case 817:
		U = new int[2] {1, 4}; 
		V = new int[2] {5, -10}; 
		break;
	case 818:
		U = new int[2] {0, 3}; 
		V = new int[2] {-1, 0}; 
		break;
	case 819:
		U = new int[2] {7, 6}; 
		V = new int[2] {10, 9}; 
		break;
	case 820:
		U = new int[2] {6, 0}; 
		V = new int[2] {-2, 1}; 
		break;
	case 821:
		U = new int[2] {-8, 7}; 
		V = new int[2] {-7, -1}; 
		break;
	case 822:
		U = new int[2] {9, 6}; 
		V = new int[2] {-2, 0}; 
		break;
	case 823:
		U = new int[2] {1, 8}; 
		V = new int[2] {-7, -10}; 
		break;
	case 824:
		U = new int[2] {-8, -7}; 
		V = new int[2] {-9, -10}; 
		break;
	case 825:
		U = new int[2] {-5, -7}; 
		V = new int[2] {-5, -2}; 
		break;
	case 826:
		U = new int[2] {2, -4}; 
		V = new int[2] {6, 3}; 
		break;
	case 827:
		U = new int[2] {4, 5}; 
		V = new int[2] {-8, -7}; 
		break;
	case 828:
		U = new int[2] {-4, 6}; 
		V = new int[2] {2, 1}; 
		break;
	case 829:
		U = new int[2] {-5, -2}; 
		V = new int[2] {-5, 6}; 
		break;
	case 830:
		U = new int[2] {-6, -7}; 
		V = new int[2] {10, 8}; 
		break;
	case 831:
		U = new int[2] {1, 4}; 
		V = new int[2] {-2, -10}; 
		break;
	case 832:
		U = new int[2] {-6, 2}; 
		V = new int[2] {-4, 3}; 
		break;
	case 833:
		U = new int[2] {-9, 7}; 
		V = new int[2] {-10, -7}; 
		break;
	case 834:
		U = new int[2] {8, 2}; 
		V = new int[2] {8, 3}; 
		break;
	case 835:
		U = new int[2] {-5, -7}; 
		V = new int[2] {8, -4}; 
		break;
	case 836:
		U = new int[2] {-5, -6}; 
		V = new int[2] {10, 4}; 
		break;
	case 837:
		U = new int[2] {-7, -2}; 
		V = new int[2] {6, -5}; 
		break;
	case 838:
		U = new int[2] {7, 0}; 
		V = new int[2] {-7, 1}; 
		break;
	case 839:
		U = new int[2] {-1, 4}; 
		V = new int[2] {-7, 2}; 
		break;
	case 840:
		U = new int[2] {-3, 7}; 
		V = new int[2] {-5, 4}; 
		break;
	case 841:
		U = new int[2] {6, 2}; 
		V = new int[2] {-5, -6}; 
		break;
	case 842:
		U = new int[2] {7, -6}; 
		V = new int[2] {4, 0}; 
		break;
	case 843:
		U = new int[2] {10, -8}; 
		V = new int[2] {-5, 10}; 
		break;
	case 844:
		U = new int[2] {0, -8}; 
		V = new int[2] {4, 9}; 
		break;
	case 845:
		U = new int[2] {6, 1}; 
		V = new int[2] {3, 8}; 
		break;
	case 846:
		U = new int[2] {1, -1}; 
		V = new int[2] {-4, -5}; 
		break;
	case 847:
		U = new int[2] {3, -8}; 
		V = new int[2] {-6, -5}; 
		break;
	case 848:
		U = new int[2] {5, -4}; 
		V = new int[2] {-6, 5}; 
		break;
	case 849:
		U = new int[2] {0, 6}; 
		V = new int[2] {10, -2}; 
		break;
	case 850:
		U = new int[2] {-1, -3}; 
		V = new int[2] {-4, -8}; 
		break;
	case 851:
		U = new int[2] {-4, -9}; 
		V = new int[2] {8, -3}; 
		break;
	case 852:
		U = new int[2] {7, -9}; 
		V = new int[2] {0, -2}; 
		break;
	case 853:
		U = new int[2] {-10, -1}; 
		V = new int[2] {-1, -1}; 
		break;
	case 854:
		U = new int[2] {8, 0}; 
		V = new int[2] {-3, 7}; 
		break;
	case 855:
		U = new int[2] {-4, 9}; 
		V = new int[2] {-8, -10}; 
		break;
	case 856:
		U = new int[2] {1, 3}; 
		V = new int[2] {2, -8}; 
		break;
	case 857:
		U = new int[2] {0, -4}; 
		V = new int[2] {-3, -9}; 
		break;
	case 858:
		U = new int[2] {-8, -3}; 
		V = new int[2] {0, -2}; 
		break;
	case 859:
		U = new int[2] {4, -2}; 
		V = new int[2] {7, -6}; 
		break;
	case 860:
		U = new int[2] {-6, 5}; 
		V = new int[2] {5, -5}; 
		break;
	case 861:
		U = new int[2] {-1, -9}; 
		V = new int[2] {-1, -7}; 
		break;
	case 862:
		U = new int[2] {-2, -7}; 
		V = new int[2] {3, 9}; 
		break;
	case 863:
		U = new int[2] {4, 2}; 
		V = new int[2] {5, -7}; 
		break;
	case 864:
		U = new int[2] {5, 10}; 
		V = new int[2] {-5, 3}; 
		break;
	case 865:
		U = new int[2] {8, 5}; 
		V = new int[2] {-3, 5}; 
		break;
	case 866:
		U = new int[2] {6, 5}; 
		V = new int[2] {8, 9}; 
		break;
	case 867:
		U = new int[2] {0, 7}; 
		V = new int[2] {9, -7}; 
		break;
	case 868:
		U = new int[2] {-6, 4}; 
		V = new int[2] {-2, 9}; 
		break;
	case 869:
		U = new int[2] {-8, 3}; 
		V = new int[2] {0, -8}; 
		break;
	case 870:
		U = new int[2] {1, -9}; 
		V = new int[2] {4, -8}; 
		break;
	case 871:
		U = new int[2] {0, 6}; 
		V = new int[2] {-6, 10}; 
		break;
	case 872:
		U = new int[2] {3, 8}; 
		V = new int[2] {-8, -7}; 
		break;
	case 873:
		U = new int[2] {4, -1}; 
		V = new int[2] {-3, -6}; 
		break;
	case 874:
		U = new int[2] {-8, -10}; 
		V = new int[2] {-7, -5}; 
		break;
	case 875:
		U = new int[2] {-5, 0}; 
		V = new int[2] {-1, 9}; 
		break;
	case 876:
		U = new int[2] {-7, 5}; 
		V = new int[2] {-2, 2}; 
		break;
	case 877:
		U = new int[2] {-9, -1}; 
		V = new int[2] {-9, 3}; 
		break;
	case 878:
		U = new int[2] {6, 4}; 
		V = new int[2] {-3, 2}; 
		break;
	case 879:
		U = new int[2] {3, -9}; 
		V = new int[2] {2, -4}; 
		break;
	case 880:
		U = new int[2] {-6, -10}; 
		V = new int[2] {10, 4}; 
		break;
	case 881:
		U = new int[2] {9, -8}; 
		V = new int[2] {3, 1}; 
		break;
	case 882:
		U = new int[2] {-9, -9}; 
		V = new int[2] {1, -8}; 
		break;
	case 883:
		U = new int[2] {0, -1}; 
		V = new int[2] {-3, -5}; 
		break;
	case 884:
		U = new int[2] {0, -5}; 
		V = new int[2] {-6, -6}; 
		break;
	case 885:
		U = new int[2] {-1, 2}; 
		V = new int[2] {2, -3}; 
		break;
	case 886:
		U = new int[2] {-10, 5}; 
		V = new int[2] {-6, 7}; 
		break;
	case 887:
		U = new int[2] {-4, 5}; 
		V = new int[2] {-8, 5}; 
		break;
	case 888:
		U = new int[2] {9, 6}; 
		V = new int[2] {-2, 8}; 
		break;
	case 889:
		U = new int[2] {3, 9}; 
		V = new int[2] {8, 5}; 
		break;
	case 890:
		U = new int[2] {-4, -5}; 
		V = new int[2] {4, 0}; 
		break;
	case 891:
		U = new int[2] {5, -7}; 
		V = new int[2] {6, -10}; 
		break;
	case 892:
		U = new int[2] {3, 9}; 
		V = new int[2] {-7, 6}; 
		break;
	case 893:
		U = new int[2] {-9, -4}; 
		V = new int[2] {2, 5}; 
		break;
	case 894:
		U = new int[2] {-8, 3}; 
		V = new int[2] {4, 2}; 
		break;
	case 895:
		U = new int[2] {1, -3}; 
		V = new int[2] {2, 6}; 
		break;
	case 896:
		U = new int[2] {-5, 4}; 
		V = new int[2] {8, 4}; 
		break;
	case 897:
		U = new int[2] {2, 4}; 
		V = new int[2] {-5, -10}; 
		break;
	case 898:
		U = new int[2] {-9, 7}; 
		V = new int[2] {5, 0}; 
		break;
	case 899:
		U = new int[2] {3, 6}; 
		V = new int[2] {-9, 8}; 
		break;
	case 900:
		U = new int[2] {7, 7}; 
		V = new int[2] {9, 6}; 
		break;
	case 901:
		U = new int[2] {8, 3}; 
		V = new int[2] {-2, 10}; 
		break;
	case 902:
		U = new int[2] {-8, -9}; 
		V = new int[2] {9, 6}; 
		break;
	case 903:
		U = new int[2] {-6, -4}; 
		V = new int[2] {5, 3}; 
		break;
	case 904:
		U = new int[2] {4, -1}; 
		V = new int[2] {1, -6}; 
		break;
	case 905:
		U = new int[2] {10, -3}; 
		V = new int[2] {6, 1}; 
		break;
	case 906:
		U = new int[2] {-2, 4}; 
		V = new int[2] {9, 9}; 
		break;
	case 907:
		U = new int[2] {0, 5}; 
		V = new int[2] {0, 2}; 
		break;
	case 908:
		U = new int[2] {-7, -8}; 
		V = new int[2] {-5, 5}; 
		break;
	case 909:
		U = new int[2] {4, 9}; 
		V = new int[2] {0, -3}; 
		break;
	case 910:
		U = new int[2] {3, -4}; 
		V = new int[2] {-9, -4}; 
		break;
	case 911:
		U = new int[2] {2, 8}; 
		V = new int[2] {6, -6}; 
		break;
	case 912:
		U = new int[2] {-1, 7}; 
		V = new int[2] {-8, 1}; 
		break;
	case 913:
		U = new int[2] {-4, 2}; 
		V = new int[2] {8, 4}; 
		break;
	case 914:
		U = new int[2] {9, 9}; 
		V = new int[2] {-8, 7}; 
		break;
	case 915:
		U = new int[2] {5, 9}; 
		V = new int[2] {7, 3}; 
		break;
	case 916:
		U = new int[2] {3, -2}; 
		V = new int[2] {-8, 4}; 
		break;
	case 917:
		U = new int[2] {9, -7}; 
		V = new int[2] {-2, -10}; 
		break;
	case 918:
		U = new int[2] {0, -3}; 
		V = new int[2] {-1, -8}; 
		break;
	case 919:
		U = new int[2] {-4, 3}; 
		V = new int[2] {-2, 9}; 
		break;
	case 920:
		U = new int[2] {8, 4}; 
		V = new int[2] {9, 6}; 
		break;
	case 921:
		U = new int[2] {1, -9}; 
		V = new int[2] {-2, -4}; 
		break;
	case 922:
		U = new int[2] {6, 6}; 
		V = new int[2] {10, 6}; 
		break;
	case 923:
		U = new int[2] {1, 6}; 
		V = new int[2] {9, -6}; 
		break;
	case 924:
		U = new int[2] {7, 1}; 
		V = new int[2] {7, 2}; 
		break;
	case 925:
		U = new int[2] {4, 7}; 
		V = new int[2] {1, 3}; 
		break;
	case 926:
		U = new int[2] {4, -1}; 
		V = new int[2] {-1, -8}; 
		break;
	case 927:
		U = new int[2] {-8, -3}; 
		V = new int[2] {1, -8}; 
		break;
	case 928:
		U = new int[2] {4, -3}; 
		V = new int[2] {-2, -7}; 
		break;
	case 929:
		U = new int[2] {9, -5}; 
		V = new int[2] {-9, 7}; 
		break;
	case 930:
		U = new int[2] {0, 1}; 
		V = new int[2] {4, -3}; 
		break;
	case 931:
		U = new int[2] {9, -2}; 
		V = new int[2] {-2, -8}; 
		break;
	case 932:
		U = new int[2] {-5, 5}; 
		V = new int[2] {2, -10}; 
		break;
	case 933:
		U = new int[2] {9, 6}; 
		V = new int[2] {6, 3}; 
		break;
	case 934:
		U = new int[2] {-7, 2}; 
		V = new int[2] {10, 7}; 
		break;
	case 935:
		U = new int[2] {-7, 4}; 
		V = new int[2] {-10, 8}; 
		break;
	case 936:
		U = new int[2] {7, 6}; 
		V = new int[2] {7, -6}; 
		break;
	case 937:
		U = new int[2] {3, -7}; 
		V = new int[2] {6, -5}; 
		break;
	case 938:
		U = new int[2] {-6, -2}; 
		V = new int[2] {2, 6}; 
		break;
	case 939:
		U = new int[2] {2, -1}; 
		V = new int[2] {-1, -4}; 
		break;
	case 940:
		U = new int[2] {0, 1}; 
		V = new int[2] {-3, -7}; 
		break;
	case 941:
		U = new int[2] {1, -5}; 
		V = new int[2] {-8, -6}; 
		break;
	case 942:
		U = new int[2] {-2, -2}; 
		V = new int[2] {-1, -8}; 
		break;
	case 943:
		U = new int[2] {-5, -5}; 
		V = new int[2] {0, -9}; 
		break;
	case 944:
		U = new int[2] {-6, -10}; 
		V = new int[2] {-1, 5}; 
		break;
	case 945:
		U = new int[2] {4, 0}; 
		V = new int[2] {6, 4}; 
		break;
	case 946:
		U = new int[2] {-6, 8}; 
		V = new int[2] {-6, 4}; 
		break;
	case 947:
		U = new int[2] {4, 10}; 
		V = new int[2] {2, -8}; 
		break;
	case 948:
		U = new int[2] {-7, -5}; 
		V = new int[2] {-1, 0}; 
		break;
	case 949:
		U = new int[2] {10, -6}; 
		V = new int[2] {-3, -7}; 
		break;
	case 950:
		U = new int[2] {0, -5}; 
		V = new int[2] {-9, 0}; 
		break;
	case 951:
		U = new int[2] {1, 0}; 
		V = new int[2] {10, -1}; 
		break;
	case 952:
		U = new int[2] {-7, -10}; 
		V = new int[2] {2, -7}; 
		break;
	case 953:
		U = new int[2] {9, -10}; 
		V = new int[2] {-3, 0}; 
		break;
	case 954:
		U = new int[2] {-7, -4}; 
		V = new int[2] {9, 0}; 
		break;
	case 955:
		U = new int[2] {9, 3}; 
		V = new int[2] {-4, 6}; 
		break;
	case 956:
		U = new int[2] {-8, -1}; 
		V = new int[2] {3, -10}; 
		break;
	case 957:
		U = new int[2] {10, -1}; 
		V = new int[2] {-1, 6}; 
		break;
	case 958:
		U = new int[2] {1, 5}; 
		V = new int[2] {-9, 0}; 
		break;
	case 959:
		U = new int[2] {4, 5}; 
		V = new int[2] {-1, 2}; 
		break;
	case 960:
		U = new int[2] {-8, -1}; 
		V = new int[2] {6, 7}; 
		break;
	case 961:
		U = new int[2] {6, 7}; 
		V = new int[2] {-6, 5}; 
		break;
	case 962:
		U = new int[2] {10, 1}; 
		V = new int[2] {-3, -8}; 
		break;
	case 963:
		U = new int[2] {5, -5}; 
		V = new int[2] {-9, -2}; 
		break;
	case 964:
		U = new int[2] {0, 3}; 
		V = new int[2] {-7, 3}; 
		break;
	case 965:
		U = new int[2] {-4, 4}; 
		V = new int[2] {-2, 1}; 
		break;
	case 966:
		U = new int[2] {-7, -4}; 
		V = new int[2] {-10, -7}; 
		break;
	case 967:
		U = new int[2] {-4, -2}; 
		V = new int[2] {0, 10}; 
		break;
	case 968:
		U = new int[2] {1, -3}; 
		V = new int[2] {1, 2}; 
		break;
	case 969:
		U = new int[2] {3, 9}; 
		V = new int[2] {7, 9}; 
		break;
	case 970:
		U = new int[2] {7, -5}; 
		V = new int[2] {7, -3}; 
		break;
	case 971:
		U = new int[2] {-1, -4}; 
		V = new int[2] {9, -2}; 
		break;
	case 972:
		U = new int[2] {-3, 1}; 
		V = new int[2] {3, -4}; 
		break;
	case 973:
		U = new int[2] {-5, 4}; 
		V = new int[2] {-1, -5}; 
		break;
	case 974:
		U = new int[2] {10, 9}; 
		V = new int[2] {5, -1}; 
		break;
	case 975:
		U = new int[2] {7, -1}; 
		V = new int[2] {-9, -1}; 
		break;
	case 976:
		U = new int[2] {-8, -8}; 
		V = new int[2] {-3, -3}; 
		break;
	case 977:
		U = new int[2] {3, 0}; 
		V = new int[2] {-3, -5}; 
		break;
	case 978:
		U = new int[2] {1, -9}; 
		V = new int[2] {6, -2}; 
		break;
	case 979:
		U = new int[2] {-5, -1}; 
		V = new int[2] {-3, -9}; 
		break;
	case 980:
		U = new int[2] {-4, -2}; 
		V = new int[2] {-4, -1}; 
		break;
	case 981:
		U = new int[2] {10, -5}; 
		V = new int[2] {-9, -9}; 
		break;
	case 982:
		U = new int[2] {-6, 3}; 
		V = new int[2] {9, 9}; 
		break;
	case 983:
		U = new int[2] {-4, -10}; 
		V = new int[2] {10, -10}; 
		break;
	case 984:
		U = new int[2] {-6, -3}; 
		V = new int[2] {-1, -8}; 
		break;
	case 985:
		U = new int[2] {-5, 10}; 
		V = new int[2] {9, 2}; 
		break;
	case 986:
		U = new int[2] {-7, -1}; 
		V = new int[2] {-5, 2}; 
		break;
	case 987:
		U = new int[2] {-3, -5}; 
		V = new int[2] {2, -3}; 
		break;
	case 988:
		U = new int[2] {0, 0}; 
		V = new int[2] {10, -7}; 
		break;
	case 989:
		U = new int[2] {5, 0}; 
		V = new int[2] {6, -7}; 
		break;
	case 990:
		U = new int[2] {3, 0}; 
		V = new int[2] {-5, -6}; 
		break;
	case 991:
		U = new int[2] {-7, 9}; 
		V = new int[2] {5, -3}; 
		break;
	case 992:
		U = new int[2] {2, -6}; 
		V = new int[2] {-8, -10}; 
		break;
	case 993:
		U = new int[2] {1, 8}; 
		V = new int[2] {0, -8}; 
		break;
	case 994:
		U = new int[2] {-2, 8}; 
		V = new int[2] {-6, 9}; 
		break;
	case 995:
		U = new int[2] {3, 3}; 
		V = new int[2] {-2, 6}; 
		break;
	case 996:
		U = new int[2] {-4, 6}; 
		V = new int[2] {-7, 7}; 
		break;
	case 997:
		U = new int[2] {10, 2}; 
		V = new int[2] {6, -5}; 
		break;
	case 998:
		U = new int[2] {-3, -5}; 
		V = new int[2] {-5, -5}; 
		break;
	case 999:
		U = new int[2] {-4, -8}; 
		V = new int[2] {7, 3}; 
		break;
	case 1000:
		U = new int[2] {6, -10}; 
		V = new int[2] {2, 5}; 
		break;
	case 1001:
		U = new int[2] {2, 8}; 
		V = new int[2] {-2, 10}; 
		break;
	case 1002:
		U = new int[2] {6, -4}; 
		V = new int[2] {6, 9}; 
		break;
	case 1003:
		U = new int[2] {-1, -7}; 
		V = new int[2] {5, 7}; 
		break;
	case 1004:
		U = new int[2] {-5, -5}; 
		V = new int[2] {-3, 2}; 
		break;
	case 1005:
		U = new int[2] {5, 8}; 
		V = new int[2] {-9, 5}; 
		break;
	case 1006:
		U = new int[2] {7, 2}; 
		V = new int[2] {6, -5}; 
		break;
	case 1007:
		U = new int[2] {4, -7}; 
		V = new int[2] {-1, 4}; 
		break;
	case 1008:
		U = new int[2] {-5, -5}; 
		V = new int[2] {-3, -4}; 
		break;
	case 1009:
		U = new int[2] {-6, 8}; 
		V = new int[2] {4, -5}; 
		break;
	case 1010:
		U = new int[2] {-10, 4}; 
		V = new int[2] {-2, 6}; 
		break;
	case 1011:
		U = new int[2] {-8, -9}; 
		V = new int[2] {-2, -9}; 
		break;
	case 1012:
		U = new int[2] {2, 3}; 
		V = new int[2] {-10, 10}; 
		break;
	case 1013:
		U = new int[2] {-8, 3}; 
		V = new int[2] {0, -1}; 
		break;
	case 1014:
		U = new int[2] {1, 3}; 
		V = new int[2] {-9, -3}; 
		break;
	case 1015:
		U = new int[2] {7, 5}; 
		V = new int[2] {-5, 10}; 
		break;
	case 1016:
		U = new int[2] {-4, -5}; 
		V = new int[2] {9, 5}; 
		break;
	case 1017:
		U = new int[2] {-2, -5}; 
		V = new int[2] {3, 1}; 
		break;
	case 1018:
		U = new int[2] {7, 10}; 
		V = new int[2] {6, 9}; 
		break;
	case 1019:
		U = new int[2] {-10, -2}; 
		V = new int[2] {-1, -4}; 
		break;
	case 1020:
		U = new int[2] {9, -8}; 
		V = new int[2] {7, 0}; 
		break;
	case 1021:
		U = new int[2] {1, -4}; 
		V = new int[2] {6, -9}; 
		break;
	case 1022:
		U = new int[2] {-7, 6}; 
		V = new int[2] {-7, -8}; 
		break;
	case 1023:
		U = new int[2] {-6, -3}; 
		V = new int[2] {4, 7}; 
		break;
	case 1024:
		U = new int[2] {-7, 0}; 
		V = new int[2] {-6, 3}; 
		break;
	case 1025:
		U = new int[2] {10, -10}; 
		V = new int[2] {-7, 0}; 
		break;
	case 1026:
		U = new int[2] {-4, 2}; 
		V = new int[2] {-10, 4}; 
		break;
	case 1027:
		U = new int[2] {3, 5}; 
		V = new int[2] {-3, -4}; 
		break;
	case 1028:
		U = new int[2] {-4, -5}; 
		V = new int[2] {2, 7}; 
		break;
	case 1029:
		U = new int[2] {-3, 5}; 
		V = new int[2] {-1, 2}; 
		break;
	case 1030:
		U = new int[2] {10, 0}; 
		V = new int[2] {-10, -8}; 
		break;
	case 1031:
		U = new int[2] {0, -2}; 
		V = new int[2] {-3, -7}; 
		break;
	case 1032:
		U = new int[2] {3, 4}; 
		V = new int[2] {1, -9}; 
		break;
	case 1033:
		U = new int[2] {-1, 9}; 
		V = new int[2] {5, -6}; 
		break;
	case 1034:
		U = new int[2] {-5, 7}; 
		V = new int[2] {5, 3}; 
		break;
	case 1035:
		U = new int[2] {-6, 4}; 
		V = new int[2] {-3, 9}; 
		break;
	case 1036:
		U = new int[2] {-10, -6}; 
		V = new int[2] {1, 9}; 
		break;
	case 1037:
		U = new int[2] {-9, -9}; 
		V = new int[2] {-10, 5}; 
		break;
	case 1038:
		U = new int[2] {-5, -8}; 
		V = new int[2] {-6, -9}; 
		break;
	case 1039:
		U = new int[2] {6, 0}; 
		V = new int[2] {10, 0}; 
		break;
	case 1040:
		U = new int[2] {-3, -10}; 
		V = new int[2] {-1, 1}; 
		break;
	case 1041:
		U = new int[2] {3, 6}; 
		V = new int[2] {-4, 0}; 
		break;
	case 1042:
		U = new int[2] {3, 8}; 
		V = new int[2] {-3, -2}; 
		break;
	case 1043:
		U = new int[2] {-7, 10}; 
		V = new int[2] {-7, 7}; 
		break;
	case 1044:
		U = new int[2] {8, -7}; 
		V = new int[2] {5, -10}; 
		break;
	case 1045:
		U = new int[2] {6, 9}; 
		V = new int[2] {-2, -7}; 
		break;
	case 1046:
		U = new int[2] {6, -5}; 
		V = new int[2] {3, 2}; 
		break;
	case 1047:
		U = new int[2] {8, -10}; 
		V = new int[2] {-6, 3}; 
		break;
	case 1048:
		U = new int[2] {8, 1}; 
		V = new int[2] {7, -3}; 
		break;
	case 1049:
		U = new int[2] {-1, 7}; 
		V = new int[2] {-10, -10}; 
		break;
	case 1050:
		U = new int[2] {-5, 8}; 
		V = new int[2] {5, 4}; 
		break;
	case 1051:
		U = new int[2] {-5, 7}; 
		V = new int[2] {-6, 8}; 
		break;
	case 1052:
		U = new int[2] {-10, -2}; 
		V = new int[2] {5, 10}; 
		break;
	case 1053:
		U = new int[2] {-2, -9}; 
		V = new int[2] {9, -5}; 
		break;
	case 1054:
		U = new int[2] {4, -5}; 
		V = new int[2] {-1, 2}; 
		break;
	case 1055:
		U = new int[2] {0, -1}; 
		V = new int[2] {2, 3}; 
		break;
	case 1056:
		U = new int[2] {3, 6}; 
		V = new int[2] {1, 9}; 
		break;
	case 1057:
		U = new int[2] {-4, 10}; 
		V = new int[2] {3, 6}; 
		break;
	case 1058:
		U = new int[2] {-6, -3}; 
		V = new int[2] {8, 3}; 
		break;
	case 1059:
		U = new int[2] {4, 9}; 
		V = new int[2] {-9, 0}; 
		break;
	case 1060:
		U = new int[2] {3, -4}; 
		V = new int[2] {0, 6}; 
		break;
	case 1061:
		U = new int[2] {-7, -9}; 
		V = new int[2] {-7, 2}; 
		break;
	case 1062:
		U = new int[2] {0, -4}; 
		V = new int[2] {8, 10}; 
		break;
	case 1063:
		U = new int[2] {-9, -9}; 
		V = new int[2] {-2, 8}; 
		break;
	case 1064:
		U = new int[2] {7, 0}; 
		V = new int[2] {-9, 2}; 
		break;
	case 1065:
		U = new int[2] {-6, 4}; 
		V = new int[2] {-4, 8}; 
		break;
	case 1066:
		U = new int[2] {7, 4}; 
		V = new int[2] {10, -7}; 
		break;
	case 1067:
		U = new int[2] {10, 5}; 
		V = new int[2] {2, 10}; 
		break;
	case 1068:
		U = new int[2] {-10, 3}; 
		V = new int[2] {-5, 8}; 
		break;
	case 1069:
		U = new int[2] {-8, 9}; 
		V = new int[2] {8, -8}; 
		break;
	case 1070:
		U = new int[2] {5, -6}; 
		V = new int[2] {3, -7}; 
		break;
	case 1071:
		U = new int[2] {5, 9}; 
		V = new int[2] {5, -1}; 
		break;
	case 1072:
		U = new int[2] {0, 1}; 
		V = new int[2] {-1, -3}; 
		break;
	case 1073:
		U = new int[2] {-5, -5}; 
		V = new int[2] {-3, -6}; 
		break;
	case 1074:
		U = new int[2] {7, 2}; 
		V = new int[2] {2, -6}; 
		break;
	case 1075:
		U = new int[2] {-1, 0}; 
		V = new int[2] {9, 4}; 
		break;
	case 1076:
		U = new int[2] {-1, 9}; 
		V = new int[2] {-7, -1}; 
		break;
	case 1077:
		U = new int[2] {0, -9}; 
		V = new int[2] {-9, -9}; 
		break;
	case 1078:
		U = new int[2] {4, -8}; 
		V = new int[2] {1, -5}; 
		break;
	case 1079:
		U = new int[2] {-9, 3}; 
		V = new int[2] {-6, -5}; 
		break;
	case 1080:
		U = new int[2] {9, -2}; 
		V = new int[2] {-6, -9}; 
		break;
	case 1081:
		U = new int[2] {8, -5}; 
		V = new int[2] {7, 5}; 
		break;
	case 1082:
		U = new int[2] {-8, 7}; 
		V = new int[2] {-8, -5}; 
		break;
	case 1083:
		U = new int[2] {-10, 9}; 
		V = new int[2] {2, -8}; 
		break;
	case 1084:
		U = new int[2] {10, -10}; 
		V = new int[2] {-9, 5}; 
		break;
	case 1085:
		U = new int[2] {8, 5}; 
		V = new int[2] {5, 0}; 
		break;
	case 1086:
		U = new int[2] {-2, 2}; 
		V = new int[2] {-10, -8}; 
		break;
	case 1087:
		U = new int[2] {9, 5}; 
		V = new int[2] {-5, 7}; 
		break;
	case 1088:
		U = new int[2] {1, -4}; 
		V = new int[2] {-9, 3}; 
		break;
	case 1089:
		U = new int[2] {-4, 9}; 
		V = new int[2] {0, 3}; 
		break;
	case 1090:
		U = new int[2] {-2, 7}; 
		V = new int[2] {6, -2}; 
		break;
	case 1091:
		U = new int[2] {6, 6}; 
		V = new int[2] {-10, 6}; 
		break;
	case 1092:
		U = new int[2] {4, -7}; 
		V = new int[2] {-9, 7}; 
		break;
	case 1093:
		U = new int[2] {-5, 10}; 
		V = new int[2] {-6, -7}; 
		break;
	case 1094:
		U = new int[2] {1, 5}; 
		V = new int[2] {-9, -3}; 
		break;
	case 1095:
		U = new int[2] {5, -2}; 
		V = new int[2] {9, 4}; 
		break;
	case 1096:
		U = new int[2] {-10, 10}; 
		V = new int[2] {-3, -8}; 
		break;
	case 1097:
		U = new int[2] {-1, 7}; 
		V = new int[2] {-6, 4}; 
		break;
	case 1098:
		U = new int[2] {4, 4}; 
		V = new int[2] {-10, -10}; 
		break;
	case 1099:
		U = new int[2] {6, 5}; 
		V = new int[2] {-9, 4}; 
		break;
	case 1100:
		U = new int[2] {-4, -1}; 
		V = new int[2] {9, -9}; 
		break;
	case 1101:
		U = new int[2] {2, 10}; 
		V = new int[2] {7, 4}; 
		break;
	case 1102:
		U = new int[2] {1, 7}; 
		V = new int[2] {-4, 7}; 
		break;
	case 1103:
		U = new int[2] {-8, 8}; 
		V = new int[2] {4, 1}; 
		break;
	case 1104:
		U = new int[2] {4, 5}; 
		V = new int[2] {-3, -1}; 
		break;
	case 1105:
		U = new int[2] {-5, 2}; 
		V = new int[2] {10, 5}; 
		break;
	case 1106:
		U = new int[2] {9, 2}; 
		V = new int[2] {-5, -3}; 
		break;
	case 1107:
		U = new int[2] {-5, 8}; 
		V = new int[2] {2, -5}; 
		break;
	case 1108:
		U = new int[2] {-2, -4}; 
		V = new int[2] {6, 2}; 
		break;
	case 1109:
		U = new int[2] {-2, 10}; 
		V = new int[2] {-8, -5}; 
		break;
	case 1110:
		U = new int[2] {2, -3}; 
		V = new int[2] {6, 1}; 
		break;
	case 1111:
		U = new int[2] {8, 5}; 
		V = new int[2] {8, -6}; 
		break;
	case 1112:
		U = new int[2] {2, -2}; 
		V = new int[2] {0, 10}; 
		break;
	case 1113:
		U = new int[2] {6, 0}; 
		V = new int[2] {-2, 2}; 
		break;
	case 1114:
		U = new int[2] {-8, 7}; 
		V = new int[2] {6, 4}; 
		break;
	case 1115:
		U = new int[2] {3, 2}; 
		V = new int[2] {1, -4}; 
		break;
	case 1116:
		U = new int[2] {9, -6}; 
		V = new int[2] {-6, -7}; 
		break;
	case 1117:
		U = new int[2] {-10, 3}; 
		V = new int[2] {-3, 4}; 
		break;
	case 1118:
		U = new int[2] {8, -6}; 
		V = new int[2] {6, 9}; 
		break;
	case 1119:
		U = new int[2] {6, -6}; 
		V = new int[2] {1, 9}; 
		break;
	case 1120:
		U = new int[2] {4, 9}; 
		V = new int[2] {-5, 8}; 
		break;
	case 1121:
		U = new int[2] {5, 8}; 
		V = new int[2] {1, 10}; 
		break;
	case 1122:
		U = new int[2] {-10, -9}; 
		V = new int[2] {-10, 7}; 
		break;
	case 1123:
		U = new int[2] {1, 10}; 
		V = new int[2] {-3, -1}; 
		break;
	case 1124:
		U = new int[2] {-10, -4}; 
		V = new int[2] {-3, 2}; 
		break;
	case 1125:
		U = new int[2] {5, 9}; 
		V = new int[2] {-3, 7}; 
		break;
	case 1126:
		U = new int[2] {10, -6}; 
		V = new int[2] {6, -7}; 
		break;
	case 1127:
		U = new int[2] {6, 3}; 
		V = new int[2] {-10, 4}; 
		break;
	case 1128:
		U = new int[2] {4, -3}; 
		V = new int[2] {-4, 3}; 
		break;
	case 1129:
		U = new int[2] {1, 2}; 
		V = new int[2] {-9, 0}; 
		break;
	case 1130:
		U = new int[2] {-2, -4}; 
		V = new int[2] {1, -8}; 
		break;
	case 1131:
		U = new int[2] {9, 6}; 
		V = new int[2] {7, -2}; 
		break;
	case 1132:
		U = new int[2] {1, -10}; 
		V = new int[2] {-3, 4}; 
		break;
	case 1133:
		U = new int[2] {-3, 0}; 
		V = new int[2] {4, 8}; 
		break;
	case 1134:
		U = new int[2] {-7, 4}; 
		V = new int[2] {7, 8}; 
		break;
	case 1135:
		U = new int[2] {3, -1}; 
		V = new int[2] {7, 5}; 
		break;
	case 1136:
		U = new int[2] {9, 0}; 
		V = new int[2] {4, -5}; 
		break;
	case 1137:
		U = new int[2] {-1, -4}; 
		V = new int[2] {-9, -4}; 
		break;
	case 1138:
		U = new int[2] {6, 7}; 
		V = new int[2] {4, 1}; 
		break;
	case 1139:
		U = new int[2] {0, 7}; 
		V = new int[2] {-3, -7}; 
		break;
	case 1140:
		U = new int[2] {-2, 3}; 
		V = new int[2] {4, -7}; 
		break;
	case 1141:
		U = new int[2] {-5, -4}; 
		V = new int[2] {-3, -5}; 
		break;
	case 1142:
		U = new int[2] {-4, 1}; 
		V = new int[2] {-6, -1}; 
		break;
	case 1143:
		U = new int[2] {-1, -1}; 
		V = new int[2] {2, 0}; 
		break;
	case 1144:
		U = new int[2] {0, 5}; 
		V = new int[2] {-8, 6}; 
		break;
	case 1145:
		U = new int[2] {3, 0}; 
		V = new int[2] {-10, -4}; 
		break;
	case 1146:
		U = new int[2] {-5, -10}; 
		V = new int[2] {4, 5}; 
		break;
	case 1147:
		U = new int[2] {-4, 7}; 
		V = new int[2] {-2, -8}; 
		break;
	case 1148:
		U = new int[2] {7, -6}; 
		V = new int[2] {4, -5}; 
		break;
	case 1149:
		U = new int[2] {3, -3}; 
		V = new int[2] {-5, 10}; 
		break;
	case 1150:
		U = new int[2] {9, -3}; 
		V = new int[2] {4, -5}; 
		break;
	case 1151:
		U = new int[2] {-8, -2}; 
		V = new int[2] {-5, -3}; 
		break;
	case 1152:
		U = new int[2] {0, -1}; 
		V = new int[2] {1, 6}; 
		break;
	case 1153:
		U = new int[2] {5, 4}; 
		V = new int[2] {10, 9}; 
		break;
	case 1154:
		U = new int[2] {10, -8}; 
		V = new int[2] {-8, 7}; 
		break;
	case 1155:
		U = new int[2] {-6, -4}; 
		V = new int[2] {3, 6}; 
		break;
	case 1156:
		U = new int[2] {8, 2}; 
		V = new int[2] {6, 7}; 
		break;
	case 1157:
		U = new int[2] {-1, -4}; 
		V = new int[2] {-8, 10}; 
		break;
	case 1158:
		U = new int[2] {3, -9}; 
		V = new int[2] {-8, -4}; 
		break;
	case 1159:
		U = new int[2] {-8, -1}; 
		V = new int[2] {2, 6}; 
		break;
	case 1160:
		U = new int[2] {-7, 0}; 
		V = new int[2] {-5, -4}; 
		break;
	case 1161:
		U = new int[2] {4, -6}; 
		V = new int[2] {-3, -8}; 
		break;
	case 1162:
		U = new int[2] {-7, 2}; 
		V = new int[2] {-1, 10}; 
		break;
	case 1163:
		U = new int[2] {-4, 4}; 
		V = new int[2] {-8, -4}; 
		break;
	case 1164:
		U = new int[2] {-7, -10}; 
		V = new int[2] {3, -2}; 
		break;
	case 1165:
		U = new int[2] {1, 1}; 
		V = new int[2] {-5, -5}; 
		break;
	case 1166:
		U = new int[2] {-5, 8}; 
		V = new int[2] {-9, 8}; 
		break;
	case 1167:
		U = new int[2] {-5, -8}; 
		V = new int[2] {-7, -8}; 
		break;
	case 1168:
		U = new int[2] {-3, -6}; 
		V = new int[2] {7, 2}; 
		break;
	case 1169:
		U = new int[2] {3, -1}; 
		V = new int[2] {6, -8}; 
		break;
	case 1170:
		U = new int[2] {0, -1}; 
		V = new int[2] {-6, -6}; 
		break;
	case 1171:
		U = new int[2] {7, 0}; 
		V = new int[2] {-8, 6}; 
		break;
	case 1172:
		U = new int[2] {9, 4}; 
		V = new int[2] {-6, 3}; 
		break;
	case 1173:
		U = new int[2] {8, -3}; 
		V = new int[2] {-10, 6}; 
		break;
	case 1174:
		U = new int[2] {10, 7}; 
		V = new int[2] {8, -2}; 
		break;
	case 1175:
		U = new int[2] {3, 6}; 
		V = new int[2] {-3, -3}; 
		break;
	case 1176:
		U = new int[2] {-10, -6}; 
		V = new int[2] {-8, 2}; 
		break;
	case 1177:
		U = new int[2] {9, 7}; 
		V = new int[2] {-10, 6}; 
		break;
	case 1178:
		U = new int[2] {6, -10}; 
		V = new int[2] {-2, 0}; 
		break;
	case 1179:
		U = new int[2] {5, -7}; 
		V = new int[2] {8, -7}; 
		break;
	case 1180:
		U = new int[2] {-7, -1}; 
		V = new int[2] {7, 0}; 
		break;
	case 1181:
		U = new int[2] {9, -1}; 
		V = new int[2] {-9, -8}; 
		break;
	case 1182:
		U = new int[2] {0, -7}; 
		V = new int[2] {8, -3}; 
		break;
	case 1183:
		U = new int[2] {7, -9}; 
		V = new int[2] {-4, -3}; 
		break;
	case 1184:
		U = new int[2] {-5, -1}; 
		V = new int[2] {-2, 2}; 
		break;
	case 1185:
		U = new int[2] {-1, -3}; 
		V = new int[2] {3, -10}; 
		break;
	case 1186:
		U = new int[2] {-7, 3}; 
		V = new int[2] {-3, 4}; 
		break;
	case 1187:
		U = new int[2] {6, 1}; 
		V = new int[2] {-10, -1}; 
		break;
	case 1188:
		U = new int[2] {-6, 8}; 
		V = new int[2] {-2, 4}; 
		break;
	case 1189:
		U = new int[2] {-8, -3}; 
		V = new int[2] {3, -7}; 
		break;
	case 1190:
		U = new int[2] {6, -5}; 
		V = new int[2] {0, -9}; 
		break;
	case 1191:
		U = new int[2] {7, -10}; 
		V = new int[2] {-9, 4}; 
		break;
	case 1192:
		U = new int[2] {-2, 8}; 
		V = new int[2] {-3, 0}; 
		break;
	case 1193:
		U = new int[2] {3, 4}; 
		V = new int[2] {-7, -3}; 
		break;
	case 1194:
		U = new int[2] {-7, 8}; 
		V = new int[2] {8, -5}; 
		break;
	case 1195:
		U = new int[2] {1, 1}; 
		V = new int[2] {5, 0}; 
		break;
	case 1196:
		U = new int[2] {1, -6}; 
		V = new int[2] {0, 8}; 
		break;
	case 1197:
		U = new int[2] {1, -6}; 
		V = new int[2] {-9, 8}; 
		break;
	case 1198:
		U = new int[2] {1, -3}; 
		V = new int[2] {3, 6}; 
		break;
	case 1199:
		U = new int[2] {1, 2}; 
		V = new int[2] {4, -5}; 
		break;
	case 1200:
		U = new int[2] {10, 2}; 
		V = new int[2] {2, 5}; 
		break;
	case 1201:
		U = new int[2] {9, 9}; 
		V = new int[2] {3, -5}; 
		break;
	case 1202:
		U = new int[2] {-9, 3}; 
		V = new int[2] {8, -4}; 
		break;
	case 1203:
		U = new int[2] {1, 2}; 
		V = new int[2] {-6, 4}; 
		break;
	case 1204:
		U = new int[2] {-5, -2}; 
		V = new int[2] {7, -4}; 
		break;
	case 1205:
		U = new int[2] {-2, 4}; 
		V = new int[2] {-7, -1}; 
		break;
	case 1206:
		U = new int[2] {3, 7}; 
		V = new int[2] {-7, 5}; 
		break;
	case 1207:
		U = new int[2] {0, 2}; 
		V = new int[2] {6, -7}; 
		break;
	case 1208:
		U = new int[2] {-4, -2}; 
		V = new int[2] {-4, 5}; 
		break;
	case 1209:
		U = new int[2] {5, 7}; 
		V = new int[2] {-7, -8}; 
		break;
	case 1210:
		U = new int[2] {-7, 0}; 
		V = new int[2] {8, -6}; 
		break;
	case 1211:
		U = new int[2] {-5, 10}; 
		V = new int[2] {9, 7}; 
		break;
	case 1212:
		U = new int[2] {-5, 8}; 
		V = new int[2] {6, 10}; 
		break;
	case 1213:
		U = new int[2] {4, 3}; 
		V = new int[2] {0, -10}; 
		break;
	case 1214:
		U = new int[2] {6, 3}; 
		V = new int[2] {-1, -1}; 
		break;
	case 1215:
		U = new int[2] {-6, 3}; 
		V = new int[2] {5, 4}; 
		break;
	case 1216:
		U = new int[2] {6, -8}; 
		V = new int[2] {-7, 7}; 
		break;
	case 1217:
		U = new int[2] {3, -1}; 
		V = new int[2] {2, -4}; 
		break;
	case 1218:
		U = new int[2] {-8, 4}; 
		V = new int[2] {10, 0}; 
		break;
	case 1219:
		U = new int[2] {-6, 0}; 
		V = new int[2] {5, 0}; 
		break;
	case 1220:
		U = new int[2] {-2, -2}; 
		V = new int[2] {-10, 6}; 
		break;
	case 1221:
		U = new int[2] {2, 9}; 
		V = new int[2] {7, -6}; 
		break;
	case 1222:
		U = new int[2] {2, 8}; 
		V = new int[2] {8, 2}; 
		break;
	case 1223:
		U = new int[2] {-8, 6}; 
		V = new int[2] {5, -4}; 
		break;
	case 1224:
		U = new int[2] {3, -2}; 
		V = new int[2] {-4, -6}; 
		break;
	case 1225:
		U = new int[2] {-6, -5}; 
		V = new int[2] {-8, -2}; 
		break;
	case 1226:
		U = new int[2] {-3, 0}; 
		V = new int[2] {-5, -8}; 
		break;
	case 1227:
		U = new int[2] {3, -2}; 
		V = new int[2] {9, 8}; 
		break;
	case 1228:
		U = new int[2] {4, 0}; 
		V = new int[2] {3, -4}; 
		break;
	case 1229:
		U = new int[2] {8, -4}; 
		V = new int[2] {4, 5}; 
		break;
	case 1230:
		U = new int[2] {-9, -1}; 
		V = new int[2] {6, -8}; 
		break;
	case 1231:
		U = new int[2] {8, -8}; 
		V = new int[2] {-8, -8}; 
		break;
	case 1232:
		U = new int[2] {5, 3}; 
		V = new int[2] {-6, -7}; 
		break;
	case 1233:
		U = new int[2] {5, 4}; 
		V = new int[2] {6, 7}; 
		break;
	case 1234:
		U = new int[2] {4, 9}; 
		V = new int[2] {-7, 6}; 
		break;
	case 1235:
		U = new int[2] {-4, 2}; 
		V = new int[2] {-4, 10}; 
		break;
	case 1236:
		U = new int[2] {0, -7}; 
		V = new int[2] {-10, -3}; 
		break;
	case 1237:
		U = new int[2] {-6, -5}; 
		V = new int[2] {-2, -3}; 
		break;
	case 1238:
		U = new int[2] {-9, 9}; 
		V = new int[2] {0, -10}; 
		break;
	case 1239:
		U = new int[2] {0, 10}; 
		V = new int[2] {-5, 9}; 
		break;
	case 1240:
		U = new int[2] {10, 0}; 
		V = new int[2] {-8, -4}; 
		break;
	case 1241:
		U = new int[2] {9, -1}; 
		V = new int[2] {10, 7}; 
		break;
	case 1242:
		U = new int[2] {-4, 7}; 
		V = new int[2] {-3, 8}; 
		break;
	case 1243:
		U = new int[2] {-9, -10}; 
		V = new int[2] {-5, -3}; 
		break;
	case 1244:
		U = new int[2] {-1, -4}; 
		V = new int[2] {9, -10}; 
		break;
	case 1245:
		U = new int[2] {-6, 5}; 
		V = new int[2] {-1, -1}; 
		break;
	case 1246:
		U = new int[2] {-3, -1}; 
		V = new int[2] {1, 6}; 
		break;
	case 1247:
		U = new int[2] {9, 1}; 
		V = new int[2] {-6, -5}; 
		break;
	case 1248:
		U = new int[2] {5, -4}; 
		V = new int[2] {-4, 7}; 
		break;
	case 1249:
		U = new int[2] {-1, 4}; 
		V = new int[2] {-7, -3}; 
		break;
	case 1250:
		U = new int[2] {-2, 9}; 
		V = new int[2] {-6, 3}; 
		break;
	case 1251:
		U = new int[2] {0, -6}; 
		V = new int[2] {-2, 7}; 
		break;
	case 1252:
		U = new int[2] {7, 3}; 
		V = new int[2] {3, 9}; 
		break;
	case 1253:
		U = new int[2] {9, -2}; 
		V = new int[2] {-1, 1}; 
		break;
	case 1254:
		U = new int[2] {-9, 2}; 
		V = new int[2] {2, -7}; 
		break;
	case 1255:
		U = new int[2] {9, -7}; 
		V = new int[2] {-4, 5}; 
		break;
	case 1256:
		U = new int[2] {-10, 2}; 
		V = new int[2] {3, -5}; 
		break;
	case 1257:
		U = new int[2] {1, 2}; 
		V = new int[2] {-4, -9}; 
		break;
	case 1258:
		U = new int[2] {9, -7}; 
		V = new int[2] {5, -1}; 
		break;
	case 1259:
		U = new int[2] {10, -8}; 
		V = new int[2] {5, 1}; 
		break;
	case 1260:
		U = new int[2] {-2, -2}; 
		V = new int[2] {8, -3}; 
		break;
	case 1261:
		U = new int[2] {3, -4}; 
		V = new int[2] {1, 6}; 
		break;
	case 1262:
		U = new int[2] {2, -10}; 
		V = new int[2] {0, -7}; 
		break;
	case 1263:
		U = new int[2] {-1, -10}; 
		V = new int[2] {-2, 6}; 
		break;
	case 1264:
		U = new int[2] {8, 4}; 
		V = new int[2] {-3, 1}; 
		break;
	case 1265:
		U = new int[2] {-5, -5}; 
		V = new int[2] {5, -9}; 
		break;
	case 1266:
		U = new int[2] {1, -5}; 
		V = new int[2] {-1, -1}; 
		break;
	case 1267:
		U = new int[2] {-9, -3}; 
		V = new int[2] {7, 7}; 
		break;
	case 1268:
		U = new int[2] {-4, -4}; 
		V = new int[2] {5, -1}; 
		break;
	case 1269:
		U = new int[2] {2, 2}; 
		V = new int[2] {-7, 10}; 
		break;
	case 1270:
		U = new int[2] {7, -8}; 
		V = new int[2] {-3, -1}; 
		break;
	case 1271:
		U = new int[2] {6, -2}; 
		V = new int[2] {-7, 8}; 
		break;
	case 1272:
		U = new int[2] {7, 9}; 
		V = new int[2] {-6, 6}; 
		break;
	case 1273:
		U = new int[2] {2, 8}; 
		V = new int[2] {-3, -9}; 
		break;
	case 1274:
		U = new int[2] {4, -2}; 
		V = new int[2] {-1, 9}; 
		break;
	case 1275:
		U = new int[2] {8, 7}; 
		V = new int[2] {-6, -8}; 
		break;
	case 1276:
		U = new int[2] {2, 10}; 
		V = new int[2] {-10, 5}; 
		break;
	case 1277:
		U = new int[2] {7, 0}; 
		V = new int[2] {-1, -7}; 
		break;
	case 1278:
		U = new int[2] {-2, -10}; 
		V = new int[2] {-8, 2}; 
		break;
	case 1279:
		U = new int[2] {-5, 2}; 
		V = new int[2] {5, -3}; 
		break;
	case 1280:
		U = new int[2] {6, -5}; 
		V = new int[2] {8, 5}; 
		break;
	case 1281:
		U = new int[2] {5, 9}; 
		V = new int[2] {6, 9}; 
		break;
	case 1282:
		U = new int[2] {6, -2}; 
		V = new int[2] {4, -3}; 
		break;
	case 1283:
		U = new int[2] {-6, 8}; 
		V = new int[2] {0, 5}; 
		break;
	case 1284:
		U = new int[2] {8, 0}; 
		V = new int[2] {6, 0}; 
		break;
	case 1285:
		U = new int[2] {4, -2}; 
		V = new int[2] {-2, 10}; 
		break;
	case 1286:
		U = new int[2] {1, -1}; 
		V = new int[2] {7, -4}; 
		break;
	case 1287:
		U = new int[2] {9, 2}; 
		V = new int[2] {-8, 0}; 
		break;
	case 1288:
		U = new int[2] {-7, 2}; 
		V = new int[2] {9, -10}; 
		break;
	case 1289:
		U = new int[2] {-1, 1}; 
		V = new int[2] {2, 6}; 
		break;
	case 1290:
		U = new int[2] {4, 1}; 
		V = new int[2] {2, 9}; 
		break;
	case 1291:
		U = new int[2] {4, 5}; 
		V = new int[2] {-7, -2}; 
		break;
	case 1292:
		U = new int[2] {2, 6}; 
		V = new int[2] {-5, -9}; 
		break;
	case 1293:
		U = new int[2] {4, 8}; 
		V = new int[2] {-1, -5}; 
		break;
	case 1294:
		U = new int[2] {-10, 8}; 
		V = new int[2] {-5, -8}; 
		break;
	case 1295:
		U = new int[2] {-10, -10}; 
		V = new int[2] {8, -1}; 
		break;
	case 1296:
		U = new int[2] {-3, 0}; 
		V = new int[2] {-5, 4}; 
		break;
	case 1297:
		U = new int[2] {-4, 4}; 
		V = new int[2] {2, 7}; 
		break;
	case 1298:
		U = new int[2] {-6, 2}; 
		V = new int[2] {-6, 8}; 
		break;
	case 1299:
		U = new int[2] {-2, 8}; 
		V = new int[2] {4, -10}; 
		break;
	case 1300:
		U = new int[2] {6, 10}; 
		V = new int[2] {-5, 4}; 
		break;
	case 1301:
		U = new int[2] {1, -8}; 
		V = new int[2] {4, 7}; 
		break;
	case 1302:
		U = new int[2] {0, -8}; 
		V = new int[2] {-8, -5}; 
		break;
	case 1303:
		U = new int[2] {-6, -5}; 
		V = new int[2] {-8, -2}; 
		break;
	case 1304:
		U = new int[2] {-7, -10}; 
		V = new int[2] {6, -8}; 
		break;
	case 1305:
		U = new int[2] {-6, -1}; 
		V = new int[2] {4, 2}; 
		break;
	case 1306:
		U = new int[2] {-4, 2}; 
		V = new int[2] {10, 5}; 
		break;
	case 1307:
		U = new int[2] {3, 6}; 
		V = new int[2] {-8, 5}; 
		break;
	case 1308:
		U = new int[2] {3, 4}; 
		V = new int[2] {-6, 7}; 
		break;
	case 1309:
		U = new int[2] {2, -2}; 
		V = new int[2] {-6, -9}; 
		break;
	case 1310:
		U = new int[2] {-8, -5}; 
		V = new int[2] {-9, -3}; 
		break;
	case 1311:
		U = new int[2] {0, 1}; 
		V = new int[2] {10, -10}; 
		break;
	case 1312:
		U = new int[2] {-2, -9}; 
		V = new int[2] {-3, 1}; 
		break;
	case 1313:
		U = new int[2] {-5, 6}; 
		V = new int[2] {3, 1}; 
		break;
	case 1314:
		U = new int[2] {-4, -7}; 
		V = new int[2] {-10, -2}; 
		break;
	case 1315:
		U = new int[2] {-8, 1}; 
		V = new int[2] {2, -10}; 
		break;
	case 1316:
		U = new int[2] {9, -8}; 
		V = new int[2] {7, 8}; 
		break;
	case 1317:
		U = new int[2] {-4, 6}; 
		V = new int[2] {8, -9}; 
		break;
	case 1318:
		U = new int[2] {-2, -8}; 
		V = new int[2] {-7, 4}; 
		break;
	case 1319:
		U = new int[2] {-2, 3}; 
		V = new int[2] {-8, 3}; 
		break;
	case 1320:
		U = new int[2] {3, 3}; 
		V = new int[2] {-1, 9}; 
		break;
	case 1321:
		U = new int[2] {-4, -7}; 
		V = new int[2] {7, -8}; 
		break;
	case 1322:
		U = new int[2] {2, -8}; 
		V = new int[2] {5, -4}; 
		break;
	case 1323:
		U = new int[2] {-6, 0}; 
		V = new int[2] {8, 6}; 
		break;
	case 1324:
		U = new int[2] {-9, -7}; 
		V = new int[2] {2, -5}; 
		break;
	case 1325:
		U = new int[2] {-8, -4}; 
		V = new int[2] {5, 2}; 
		break;
	case 1326:
		U = new int[2] {-5, 0}; 
		V = new int[2] {-9, 1}; 
		break;
	case 1327:
		U = new int[2] {-2, 5}; 
		V = new int[2] {3, 8}; 
		break;
	case 1328:
		U = new int[2] {-7, -3}; 
		V = new int[2] {0, -5}; 
		break;
	case 1329:
		U = new int[2] {10, 8}; 
		V = new int[2] {-3, 7}; 
		break;
	case 1330:
		U = new int[2] {1, 6}; 
		V = new int[2] {7, -2}; 
		break;
	case 1331:
		U = new int[2] {3, -4}; 
		V = new int[2] {1, -7}; 
		break;
	case 1332:
		U = new int[2] {2, -3}; 
		V = new int[2] {-7, -7}; 
		break;
	case 1333:
		U = new int[2] {3, 5}; 
		V = new int[2] {-2, -10}; 
		break;
	case 1334:
		U = new int[2] {-6, -4}; 
		V = new int[2] {9, -10}; 
		break;
	case 1335:
		U = new int[2] {-2, -9}; 
		V = new int[2] {5, 0}; 
		break;
	case 1336:
		U = new int[2] {-10, 10}; 
		V = new int[2] {8, 6}; 
		break;
	case 1337:
		U = new int[2] {8, -8}; 
		V = new int[2] {-4, -4}; 
		break;
	case 1338:
		U = new int[2] {3, 3}; 
		V = new int[2] {3, 5}; 
		break;
	case 1339:
		U = new int[2] {-4, -10}; 
		V = new int[2] {-4, -6}; 
		break;
	case 1340:
		U = new int[2] {2, -10}; 
		V = new int[2] {0, -2}; 
		break;
	case 1341:
		U = new int[2] {-4, -1}; 
		V = new int[2] {5, -4}; 
		break;
	case 1342:
		U = new int[2] {-9, 10}; 
		V = new int[2] {4, 7}; 
		break;
	case 1343:
		U = new int[2] {-4, 6}; 
		V = new int[2] {10, 8}; 
		break;
	case 1344:
		U = new int[2] {8, 10}; 
		V = new int[2] {-1, -10}; 
		break;
	case 1345:
		U = new int[2] {6, 0}; 
		V = new int[2] {-6, -3}; 
		break;
	case 1346:
		U = new int[2] {0, 0}; 
		V = new int[2] {-9, 7}; 
		break;
	case 1347:
		U = new int[2] {4, -10}; 
		V = new int[2] {-1, 7}; 
		break;
	case 1348:
		U = new int[2] {5, -2}; 
		V = new int[2] {-6, 2}; 
		break;
	case 1349:
		U = new int[2] {8, 1}; 
		V = new int[2] {-4, -5}; 
		break;
	case 1350:
		U = new int[2] {0, 3}; 
		V = new int[2] {9, -1}; 
		break;
	case 1351:
		U = new int[2] {-9, -6}; 
		V = new int[2] {10, -6}; 
		break;
	case 1352:
		U = new int[2] {-7, 2}; 
		V = new int[2] {-7, 10}; 
		break;
	case 1353:
		U = new int[2] {4, 9}; 
		V = new int[2] {8, 0}; 
		break;
	case 1354:
		U = new int[2] {-7, -9}; 
		V = new int[2] {7, -5}; 
		break;
	case 1355:
		U = new int[2] {-1, -3}; 
		V = new int[2] {8, -10}; 
		break;
	case 1356:
		U = new int[2] {-6, -9}; 
		V = new int[2] {-4, 9}; 
		break;
	case 1357:
		U = new int[2] {-10, -8}; 
		V = new int[2] {4, -3}; 
		break;
	case 1358:
		U = new int[2] {6, 2}; 
		V = new int[2] {5, -10}; 
		break;
	case 1359:
		U = new int[2] {5, 0}; 
		V = new int[2] {-5, 3}; 
		break;
	case 1360:
		U = new int[2] {-1, -2}; 
		V = new int[2] {-4, 4}; 
		break;
	case 1361:
		U = new int[2] {4, -3}; 
		V = new int[2] {5, 1}; 
		break;
	case 1362:
		U = new int[2] {6, -2}; 
		V = new int[2] {-10, 7}; 
		break;
	case 1363:
		U = new int[2] {-9, 5}; 
		V = new int[2] {7, 8}; 
		break;
	case 1364:
		U = new int[2] {-6, 3}; 
		V = new int[2] {9, 7}; 
		break;
	case 1365:
		U = new int[2] {8, -10}; 
		V = new int[2] {9, -10}; 
		break;
	case 1366:
		U = new int[2] {3, 4}; 
		V = new int[2] {-1, -3}; 
		break;
	case 1367:
		U = new int[2] {5, 7}; 
		V = new int[2] {-7, -2}; 
		break;
	case 1368:
		U = new int[2] {-7, -1}; 
		V = new int[2] {9, 0}; 
		break;
	case 1369:
		U = new int[2] {-1, -1}; 
		V = new int[2] {8, -4}; 
		break;
	case 1370:
		U = new int[2] {9, -9}; 
		V = new int[2] {-10, 9}; 
		break;
	case 1371:
		U = new int[2] {-1, 9}; 
		V = new int[2] {-8, -7}; 
		break;
	case 1372:
		U = new int[2] {1, 6}; 
		V = new int[2] {-10, -6}; 
		break;
	case 1373:
		U = new int[2] {-2, -6}; 
		V = new int[2] {-8, 3}; 
		break;
	case 1374:
		U = new int[2] {-1, -2}; 
		V = new int[2] {8, 5}; 
		break;
	case 1375:
		U = new int[2] {2, -6}; 
		V = new int[2] {3, -4}; 
		break;
	case 1376:
		U = new int[2] {3, -6}; 
		V = new int[2] {-5, 8}; 
		break;
	case 1377:
		U = new int[2] {-9, -2}; 
		V = new int[2] {4, 1}; 
		break;
	case 1378:
		U = new int[2] {5, 7}; 
		V = new int[2] {7, 5}; 
		break;
	case 1379:
		U = new int[2] {9, -3}; 
		V = new int[2] {-4, -6}; 
		break;
	case 1380:
		U = new int[2] {-4, 7}; 
		V = new int[2] {-3, 0}; 
		break;
	case 1381:
		U = new int[2] {-5, 4}; 
		V = new int[2] {8, -3}; 
		break;
	case 1382:
		U = new int[2] {9, 4}; 
		V = new int[2] {4, 0}; 
		break;
	case 1383:
		U = new int[2] {-8, 1}; 
		V = new int[2] {-8, -8}; 
		break;
	case 1384:
		U = new int[2] {-6, 9}; 
		V = new int[2] {-6, 2}; 
		break;
	case 1385:
		U = new int[2] {3, -5}; 
		V = new int[2] {-1, 5}; 
		break;
	case 1386:
		U = new int[2] {9, 0}; 
		V = new int[2] {-10, 5}; 
		break;
	case 1387:
		U = new int[2] {-5, 6}; 
		V = new int[2] {-7, -9}; 
		break;
	case 1388:
		U = new int[2] {-9, 3}; 
		V = new int[2] {-9, 0}; 
		break;
	case 1389:
		U = new int[2] {-4, -3}; 
		V = new int[2] {3, -3}; 
		break;
	case 1390:
		U = new int[2] {3, -8}; 
		V = new int[2] {-3, -1}; 
		break;
	case 1391:
		U = new int[2] {7, -2}; 
		V = new int[2] {-1, -9}; 
		break;
	case 1392:
		U = new int[2] {7, 6}; 
		V = new int[2] {2, -2}; 
		break;
	case 1393:
		U = new int[2] {-10, 9}; 
		V = new int[2] {-5, 1}; 
		break;
	case 1394:
		U = new int[2] {6, -6}; 
		V = new int[2] {4, -8}; 
		break;
	case 1395:
		U = new int[2] {5, 3}; 
		V = new int[2] {-1, -7}; 
		break;
	case 1396:
		U = new int[2] {1, -10}; 
		V = new int[2] {-10, 1}; 
		break;
	case 1397:
		U = new int[2] {6, 9}; 
		V = new int[2] {9, -9}; 
		break;
	case 1398:
		U = new int[2] {9, -5}; 
		V = new int[2] {7, -9}; 
		break;
	case 1399:
		U = new int[2] {7, -9}; 
		V = new int[2] {-5, 8}; 
		break;
	case 1400:
		U = new int[2] {10, 1}; 
		V = new int[2] {-3, 10}; 
		break;
	case 1401:
		U = new int[2] {-10, 6}; 
		V = new int[2] {10, -8}; 
		break;
	case 1402:
		U = new int[2] {-9, -8}; 
		V = new int[2] {10, 0}; 
		break;
	case 1403:
		U = new int[2] {-7, -10}; 
		V = new int[2] {-5, 10}; 
		break;
	case 1404:
		U = new int[2] {2, 2}; 
		V = new int[2] {1, -5}; 
		break;
	case 1405:
		U = new int[2] {-9, -10}; 
		V = new int[2] {8, 10}; 
		break;
	case 1406:
		U = new int[2] {-6, 4}; 
		V = new int[2] {1, 5}; 
		break;
	case 1407:
		U = new int[2] {3, 7}; 
		V = new int[2] {6, -6}; 
		break;
	case 1408:
		U = new int[2] {-8, 8}; 
		V = new int[2] {-6, 7}; 
		break;
	case 1409:
		U = new int[2] {-3, -9}; 
		V = new int[2] {9, -8}; 
		break;
	case 1410:
		U = new int[2] {-1, 7}; 
		V = new int[2] {6, 0}; 
		break;
	case 1411:
		U = new int[2] {7, -9}; 
		V = new int[2] {9, -6}; 
		break;
	case 1412:
		U = new int[2] {3, -5}; 
		V = new int[2] {-4, -8}; 
		break;
	case 1413:
		U = new int[2] {1, -4}; 
		V = new int[2] {-8, 0}; 
		break;
	case 1414:
		U = new int[2] {4, 4}; 
		V = new int[2] {-5, -8}; 
		break;
	case 1415:
		U = new int[2] {0, 4}; 
		V = new int[2] {7, 4}; 
		break;
	case 1416:
		U = new int[2] {4, -4}; 
		V = new int[2] {-4, 1}; 
		break;
	case 1417:
		U = new int[2] {10, 3}; 
		V = new int[2] {1, -10}; 
		break;
	case 1418:
		U = new int[2] {-7, -9}; 
		V = new int[2] {10, -7}; 
		break;
	case 1419:
		U = new int[2] {-7, 3}; 
		V = new int[2] {-8, -5}; 
		break;
	case 1420:
		U = new int[2] {-4, 1}; 
		V = new int[2] {-8, -2}; 
		break;
	case 1421:
		U = new int[2] {10, 8}; 
		V = new int[2] {-3, -9}; 
		break;
	case 1422:
		U = new int[2] {-7, 7}; 
		V = new int[2] {-8, 5}; 
		break;
	case 1423:
		U = new int[2] {-9, 9}; 
		V = new int[2] {1, 8}; 
		break;
	case 1424:
		U = new int[2] {-9, 7}; 
		V = new int[2] {5, 7}; 
		break;
	case 1425:
		U = new int[2] {3, -3}; 
		V = new int[2] {7, -4}; 
		break;
	case 1426:
		U = new int[2] {5, -7}; 
		V = new int[2] {-2, -1}; 
		break;
	case 1427:
		U = new int[2] {6, -8}; 
		V = new int[2] {0, 10}; 
		break;
	case 1428:
		U = new int[2] {-1, 4}; 
		V = new int[2] {6, 10}; 
		break;
	case 1429:
		U = new int[2] {8, -10}; 
		V = new int[2] {-2, -5}; 
		break;
	case 1430:
		U = new int[2] {-5, 6}; 
		V = new int[2] {-1, -8}; 
		break;
	case 1431:
		U = new int[2] {1, 1}; 
		V = new int[2] {6, 6}; 
		break;
	case 1432:
		U = new int[2] {-1, 4}; 
		V = new int[2] {-6, 4}; 
		break;
	case 1433:
		U = new int[2] {4, -4}; 
		V = new int[2] {-8, -1}; 
		break;
	case 1434:
		U = new int[2] {1, -6}; 
		V = new int[2] {-8, -9}; 
		break;
	case 1435:
		U = new int[2] {-5, 4}; 
		V = new int[2] {4, 8}; 
		break;
	case 1436:
		U = new int[2] {-9, -7}; 
		V = new int[2] {-2, -4}; 
		break;
	case 1437:
		U = new int[2] {-3, -1}; 
		V = new int[2] {-8, 4}; 
		break;
	case 1438:
		U = new int[2] {-7, -1}; 
		V = new int[2] {-10, 4}; 
		break;
	case 1439:
		U = new int[2] {0, 6}; 
		V = new int[2] {-5, -5}; 
		break;
	case 1440:
		U = new int[2] {-6, 2}; 
		V = new int[2] {-2, -2}; 
		break;
	case 1441:
		U = new int[2] {6, 7}; 
		V = new int[2] {5, 5}; 
		break;
	case 1442:
		U = new int[2] {-10, 1}; 
		V = new int[2] {-4, 2}; 
		break;
	case 1443:
		U = new int[2] {10, 2}; 
		V = new int[2] {8, 5}; 
		break;
	case 1444:
		U = new int[2] {8, -4}; 
		V = new int[2] {8, 2}; 
		break;
	case 1445:
		U = new int[2] {7, -7}; 
		V = new int[2] {-7, -6}; 
		break;
	case 1446:
		U = new int[2] {10, 1}; 
		V = new int[2] {-3, 7}; 
		break;
	case 1447:
		U = new int[2] {8, -1}; 
		V = new int[2] {-1, -6}; 
		break;
	case 1448:
		U = new int[2] {-1, -8}; 
		V = new int[2] {10, 8}; 
		break;
	case 1449:
		U = new int[2] {-5, -9}; 
		V = new int[2] {-5, 6}; 
		break;
	case 1450:
		U = new int[2] {-9, -6}; 
		V = new int[2] {1, 0}; 
		break;
	case 1451:
		U = new int[2] {3, 2}; 
		V = new int[2] {-3, -5}; 
		break;
	case 1452:
		U = new int[2] {10, -7}; 
		V = new int[2] {-2, 9}; 
		break;
	case 1453:
		U = new int[2] {1, -3}; 
		V = new int[2] {6, -6}; 
		break;
	case 1454:
		U = new int[2] {-2, 4}; 
		V = new int[2] {8, -2}; 
		break;
	case 1455:
		U = new int[2] {-10, 0}; 
		V = new int[2] {9, -5}; 
		break;
	case 1456:
		U = new int[2] {1, 9}; 
		V = new int[2] {-7, 9}; 
		break;
	case 1457:
		U = new int[2] {6, -4}; 
		V = new int[2] {-6, 1}; 
		break;
	case 1458:
		U = new int[2] {2, -10}; 
		V = new int[2] {-8, 6}; 
		break;
	case 1459:
		U = new int[2] {3, 9}; 
		V = new int[2] {-5, -10}; 
		break;
	case 1460:
		U = new int[2] {7, -7}; 
		V = new int[2] {4, 1}; 
		break;
	case 1461:
		U = new int[2] {-7, 2}; 
		V = new int[2] {-1, 5}; 
		break;
	case 1462:
		U = new int[2] {-6, -6}; 
		V = new int[2] {6, -9}; 
		break;
	case 1463:
		U = new int[2] {-5, 10}; 
		V = new int[2] {5, 8}; 
		break;
	case 1464:
		U = new int[2] {-3, 4}; 
		V = new int[2] {-4, 2}; 
		break;
	case 1465:
		U = new int[2] {4, 5}; 
		V = new int[2] {7, 10}; 
		break;
	case 1466:
		U = new int[2] {3, -3}; 
		V = new int[2] {-9, 0}; 
		break;
	case 1467:
		U = new int[2] {7, -9}; 
		V = new int[2] {5, -4}; 
		break;
	case 1468:
		U = new int[2] {-3, -1}; 
		V = new int[2] {0, -9}; 
		break;
	case 1469:
		U = new int[2] {7, -1}; 
		V = new int[2] {-1, 4}; 
		break;
	case 1470:
		U = new int[2] {8, -8}; 
		V = new int[2] {-9, -6}; 
		break;
	case 1471:
		U = new int[2] {-1, -5}; 
		V = new int[2] {8, -8}; 
		break;
	case 1472:
		U = new int[2] {-8, 7}; 
		V = new int[2] {1, -6}; 
		break;
	case 1473:
		U = new int[2] {-3, -4}; 
		V = new int[2] {9, -7}; 
		break;
	case 1474:
		U = new int[2] {5, -5}; 
		V = new int[2] {8, 9}; 
		break;
	case 1475:
		U = new int[2] {-8, -3}; 
		V = new int[2] {9, -1}; 
		break;
	case 1476:
		U = new int[2] {-10, -9}; 
		V = new int[2] {-8, -7}; 
		break;
	case 1477:
		U = new int[2] {10, 8}; 
		V = new int[2] {9, 3}; 
		break;
	case 1478:
		U = new int[2] {-10, -8}; 
		V = new int[2] {-7, 8}; 
		break;
	case 1479:
		U = new int[2] {9, -10}; 
		V = new int[2] {-4, -2}; 
		break;
	case 1480:
		U = new int[2] {-1, 8}; 
		V = new int[2] {-7, 10}; 
		break;
	case 1481:
		U = new int[2] {-8, -7}; 
		V = new int[2] {-9, -6}; 
		break;
	case 1482:
		U = new int[2] {-1, 3}; 
		V = new int[2] {6, -5}; 
		break;
	case 1483:
		U = new int[2] {-3, 8}; 
		V = new int[2] {9, -10}; 
		break;
	case 1484:
		U = new int[2] {7, 6}; 
		V = new int[2] {-10, 3}; 
		break;
	case 1485:
		U = new int[2] {-8, -10}; 
		V = new int[2] {2, -10}; 
		break;
	case 1486:
		U = new int[2] {-1, 6}; 
		V = new int[2] {3, -7}; 
		break;
	case 1487:
		U = new int[2] {-10, 10}; 
		V = new int[2] {-6, -4}; 
		break;
	case 1488:
		U = new int[2] {2, 10}; 
		V = new int[2] {-5, 0}; 
		break;
	case 1489:
		U = new int[2] {0, -1}; 
		V = new int[2] {9, 8}; 
		break;
	case 1490:
		U = new int[2] {-7, 5}; 
		V = new int[2] {3, 9}; 
		break;
	case 1491:
		U = new int[2] {-6, -7}; 
		V = new int[2] {-2, -5}; 
		break;
	case 1492:
		U = new int[2] {1, -10}; 
		V = new int[2] {-6, -4}; 
		break;
	case 1493:
		U = new int[2] {2, 4}; 
		V = new int[2] {9, 10}; 
		break;
	case 1494:
		U = new int[2] {-4, -4}; 
		V = new int[2] {-5, -8}; 
		break;
	case 1495:
		U = new int[2] {10, -6}; 
		V = new int[2] {-8, -2}; 
		break;
	case 1496:
		U = new int[2] {4, 0}; 
		V = new int[2] {-4, -7}; 
		break;
	case 1497:
		U = new int[2] {-3, -6}; 
		V = new int[2] {8, 3}; 
		break;
	case 1498:
		U = new int[2] {-1, 1}; 
		V = new int[2] {-10, -10}; 
		break;
	case 1499:
		U = new int[2] {-1, -4}; 
		V = new int[2] {-8, 6}; 
		break;
	case 1500:
		U = new int[2] {6, 3}; 
		V = new int[2] {-6, -10}; 
		break;
	case 1501:
		U = new int[2] {0, 10}; 
		V = new int[2] {10, 5}; 
		break;
	case 1502:
		U = new int[2] {2, 10}; 
		V = new int[2] {6, -7}; 
		break;
	case 1503:
		U = new int[2] {-10, 1}; 
		V = new int[2] {9, 6}; 
		break;
	case 1504:
		U = new int[2] {0, 7}; 
		V = new int[2] {-8, 3}; 
		break;
	case 1505:
		U = new int[2] {2, 10}; 
		V = new int[2] {-1, 7}; 
		break;
	case 1506:
		U = new int[2] {0, -2}; 
		V = new int[2] {0, 6}; 
		break;
	case 1507:
		U = new int[2] {-8, -2}; 
		V = new int[2] {4, -2}; 
		break;
	case 1508:
		U = new int[2] {-1, -2}; 
		V = new int[2] {6, 3}; 
		break;
	case 1509:
		U = new int[2] {-9, -4}; 
		V = new int[2] {-7, 2}; 
		break;
	case 1510:
		U = new int[2] {-4, 2}; 
		V = new int[2] {3, 8}; 
		break;
	case 1511:
		U = new int[2] {10, -4}; 
		V = new int[2] {5, 1}; 
		break;
	case 1512:
		U = new int[2] {-2, -6}; 
		V = new int[2] {-2, 3}; 
		break;
	case 1513:
		U = new int[2] {-8, -7}; 
		V = new int[2] {-6, 0}; 
		break;
	case 1514:
		U = new int[2] {-5, 9}; 
		V = new int[2] {-1, -8}; 
		break;
	case 1515:
		U = new int[2] {2, 6}; 
		V = new int[2] {-1, -5}; 
		break;
	case 1516:
		U = new int[2] {-4, 0}; 
		V = new int[2] {6, 7}; 
		break;
	case 1517:
		U = new int[2] {1, 1}; 
		V = new int[2] {-3, 4}; 
		break;
	case 1518:
		U = new int[2] {10, -1}; 
		V = new int[2] {-5, -9}; 
		break;
	case 1519:
		U = new int[2] {-2, 4}; 
		V = new int[2] {-2, -3}; 
		break;
	case 1520:
		U = new int[2] {4, -5}; 
		V = new int[2] {-7, 10}; 
		break;
	case 1521:
		U = new int[2] {10, -4}; 
		V = new int[2] {-8, -2}; 
		break;
	case 1522:
		U = new int[2] {-1, -9}; 
		V = new int[2] {-9, 1}; 
		break;
	case 1523:
		U = new int[2] {-7, 4}; 
		V = new int[2] {10, 4}; 
		break;
	case 1524:
		U = new int[2] {8, -2}; 
		V = new int[2] {4, 5}; 
		break;
	case 1525:
		U = new int[2] {-7, -1}; 
		V = new int[2] {4, 7}; 
		break;
	case 1526:
		U = new int[2] {7, -9}; 
		V = new int[2] {-5, -5}; 
		break;
	case 1527:
		U = new int[2] {2, -3}; 
		V = new int[2] {2, 5}; 
		break;
	case 1528:
		U = new int[2] {-6, 9}; 
		V = new int[2] {6, -8}; 
		break;
	case 1529:
		U = new int[2] {1, 6}; 
		V = new int[2] {-6, 5}; 
		break;
	case 1530:
		U = new int[2] {10, 1}; 
		V = new int[2] {-4, 8}; 
		break;
	case 1531:
		U = new int[2] {-9, -2}; 
		V = new int[2] {-7, -3}; 
		break;
	case 1532:
		U = new int[2] {7, 9}; 
		V = new int[2] {-7, -8}; 
		break;
	case 1533:
		U = new int[2] {9, 2}; 
		V = new int[2] {2, -4}; 
		break;
	case 1534:
		U = new int[2] {6, -1}; 
		V = new int[2] {-4, -2}; 
		break;
	case 1535:
		U = new int[2] {3, -6}; 
		V = new int[2] {4, 9}; 
		break;
	case 1536:
		U = new int[2] {-10, 3}; 
		V = new int[2] {-7, -7}; 
		break;
	case 1537:
		U = new int[2] {-10, 2}; 
		V = new int[2] {-3, -4}; 
		break;
	case 1538:
		U = new int[2] {7, -10}; 
		V = new int[2] {-2, 3}; 
		break;
	case 1539:
		U = new int[2] {-6, -5}; 
		V = new int[2] {1, -8}; 
		break;
	case 1540:
		U = new int[2] {-7, 9}; 
		V = new int[2] {3, 6}; 
		break;
	case 1541:
		U = new int[2] {10, -9}; 
		V = new int[2] {-2, 8}; 
		break;
	case 1542:
		U = new int[2] {-9, -1}; 
		V = new int[2] {-3, -4}; 
		break;
	case 1543:
		U = new int[2] {7, -4}; 
		V = new int[2] {7, 10}; 
		break;
	case 1544:
		U = new int[2] {6, 2}; 
		V = new int[2] {-2, 0}; 
		break;
	case 1545:
		U = new int[2] {-10, -8}; 
		V = new int[2] {-7, 4}; 
		break;
	case 1546:
		U = new int[2] {4, -7}; 
		V = new int[2] {-6, 2}; 
		break;
	case 1547:
		U = new int[2] {-10, 1}; 
		V = new int[2] {10, 1}; 
		break;
	case 1548:
		U = new int[2] {-4, 10}; 
		V = new int[2] {-8, 9}; 
		break;
	case 1549:
		U = new int[2] {9, 7}; 
		V = new int[2] {3, -5}; 
		break;
	case 1550:
		U = new int[2] {-9, -10}; 
		V = new int[2] {-3, -9}; 
		break;
	case 1551:
		U = new int[2] {-3, -8}; 
		V = new int[2] {7, 2}; 
		break;
	case 1552:
		U = new int[2] {-7, -7}; 
		V = new int[2] {-5, -10}; 
		break;
	case 1553:
		U = new int[2] {-10, -6}; 
		V = new int[2] {-9, -6}; 
		break;
	case 1554:
		U = new int[2] {-7, -3}; 
		V = new int[2] {-7, -6}; 
		break;
	case 1555:
		U = new int[2] {6, -6}; 
		V = new int[2] {-5, 9}; 
		break;
	case 1556:
		U = new int[2] {9, 0}; 
		V = new int[2] {-5, 6}; 
		break;
	case 1557:
		U = new int[2] {-10, 2}; 
		V = new int[2] {6, 6}; 
		break;
	case 1558:
		U = new int[2] {9, 0}; 
		V = new int[2] {7, -4}; 
		break;
	case 1559:
		U = new int[2] {5, -7}; 
		V = new int[2] {6, -8}; 
		break;
	case 1560:
		U = new int[2] {-3, 6}; 
		V = new int[2] {-10, 1}; 
		break;
	case 1561:
		U = new int[2] {5, 5}; 
		V = new int[2] {-5, -3}; 
		break;
	case 1562:
		U = new int[2] {-1, 3}; 
		V = new int[2] {0, -5}; 
		break;
	case 1563:
		U = new int[2] {3, -5}; 
		V = new int[2] {7, -10}; 
		break;
	case 1564:
		U = new int[2] {7, -7}; 
		V = new int[2] {-5, -6}; 
		break;
	case 1565:
		U = new int[2] {9, 3}; 
		V = new int[2] {-9, -4}; 
		break;
	case 1566:
		U = new int[2] {4, 7}; 
		V = new int[2] {-4, -4}; 
		break;
	case 1567:
		U = new int[2] {-7, 3}; 
		V = new int[2] {2, -1}; 
		break;
	case 1568:
		U = new int[2] {-8, -3}; 
		V = new int[2] {-7, 1}; 
		break;
	case 1569:
		U = new int[2] {3, 10}; 
		V = new int[2] {8, 2}; 
		break;
	case 1570:
		U = new int[2] {-5, -2}; 
		V = new int[2] {-1, 0}; 
		break;
	case 1571:
		U = new int[2] {1, 5}; 
		V = new int[2] {-1, -9}; 
		break;
	case 1572:
		U = new int[2] {-4, -8}; 
		V = new int[2] {7, 2}; 
		break;
	case 1573:
		U = new int[2] {10, 1}; 
		V = new int[2] {-7, 4}; 
		break;
	case 1574:
		U = new int[2] {1, 2}; 
		V = new int[2] {-5, 7}; 
		break;
	case 1575:
		U = new int[2] {-6, -4}; 
		V = new int[2] {5, 2}; 
		break;
	case 1576:
		U = new int[2] {1, 8}; 
		V = new int[2] {9, 5}; 
		break;
	case 1577:
		U = new int[2] {-10, -8}; 
		V = new int[2] {-10, -3}; 
		break;
	case 1578:
		U = new int[2] {-4, -10}; 
		V = new int[2] {-3, 2}; 
		break;
	case 1579:
		U = new int[2] {0, -6}; 
		V = new int[2] {0, 2}; 
		break;
	case 1580:
		U = new int[2] {-5, 2}; 
		V = new int[2] {-9, 10}; 
		break;
	case 1581:
		U = new int[2] {5, 6}; 
		V = new int[2] {8, -4}; 
		break;
	case 1582:
		U = new int[2] {-2, -6}; 
		V = new int[2] {1, 7}; 
		break;
	case 1583:
		U = new int[2] {3, 5}; 
		V = new int[2] {-6, -8}; 
		break;
	case 1584:
		U = new int[2] {-10, 3}; 
		V = new int[2] {10, 5}; 
		break;
	case 1585:
		U = new int[2] {-3, 4}; 
		V = new int[2] {-7, -7}; 
		break;
	case 1586:
		U = new int[2] {9, 10}; 
		V = new int[2] {3, 5}; 
		break;
	case 1587:
		U = new int[2] {10, 0}; 
		V = new int[2] {-4, -3}; 
		break;
	case 1588:
		U = new int[2] {10, 7}; 
		V = new int[2] {3, 9}; 
		break;
	case 1589:
		U = new int[2] {-1, -4}; 
		V = new int[2] {2, 9}; 
		break;
	case 1590:
		U = new int[2] {-7, 10}; 
		V = new int[2] {7, 8}; 
		break;
	case 1591:
		U = new int[2] {-2, -2}; 
		V = new int[2] {-1, -4}; 
		break;
	case 1592:
		U = new int[2] {-10, -10}; 
		V = new int[2] {7, 6}; 
		break;
	case 1593:
		U = new int[2] {-10, 3}; 
		V = new int[2] {7, -2}; 
		break;
	case 1594:
		U = new int[2] {10, -6}; 
		V = new int[2] {-1, -7}; 
		break;
	case 1595:
		U = new int[2] {8, 8}; 
		V = new int[2] {-6, -2}; 
		break;
	case 1596:
		U = new int[2] {1, -6}; 
		V = new int[2] {8, -5}; 
		break;
	case 1597:
		U = new int[2] {-7, 4}; 
		V = new int[2] {-5, 0}; 
		break;
	case 1598:
		U = new int[2] {-5, 0}; 
		V = new int[2] {-4, 10}; 
		break;
	case 1599:
		U = new int[2] {2, 2}; 
		V = new int[2] {8, -10}; 
		break;
	case 1600:
		U = new int[2] {-6, 3}; 
		V = new int[2] {7, -2}; 
		break;
	case 1601:
		U = new int[2] {-3, 7}; 
		V = new int[2] {7, -3}; 
		break;
	case 1602:
		U = new int[2] {4, 10}; 
		V = new int[2] {-9, -6}; 
		break;
	case 1603:
		U = new int[2] {1, -8}; 
		V = new int[2] {-8, -2}; 
		break;
	case 1604:
		U = new int[2] {8, -1}; 
		V = new int[2] {-10, 2}; 
		break;
	case 1605:
		U = new int[2] {-2, 7}; 
		V = new int[2] {10, -1}; 
		break;
	case 1606:
		U = new int[2] {2, -6}; 
		V = new int[2] {2, 10}; 
		break;
	case 1607:
		U = new int[2] {6, -8}; 
		V = new int[2] {-10, 8}; 
		break;
	case 1608:
		U = new int[2] {-10, 10}; 
		V = new int[2] {4, 10}; 
		break;
	case 1609:
		U = new int[2] {0, 10}; 
		V = new int[2] {6, -4}; 
		break;
	case 1610:
		U = new int[2] {9, 2}; 
		V = new int[2] {-10, -10}; 
		break;
	case 1611:
		U = new int[2] {6, -5}; 
		V = new int[2] {4, -4}; 
		break;
	case 1612:
		U = new int[2] {9, 3}; 
		V = new int[2] {-9, 5}; 
		break;
	case 1613:
		U = new int[2] {-8, -9}; 
		V = new int[2] {-5, 3}; 
		break;
	case 1614:
		U = new int[2] {5, -8}; 
		V = new int[2] {4, -8}; 
		break;
	case 1615:
		U = new int[2] {-1, 3}; 
		V = new int[2] {8, -5}; 
		break;
	case 1616:
		U = new int[2] {-10, 7}; 
		V = new int[2] {-9, -7}; 
		break;
	case 1617:
		U = new int[2] {7, -7}; 
		V = new int[2] {9, -1}; 
		break;
	case 1618:
		U = new int[2] {-4, 8}; 
		V = new int[2] {3, -9}; 
		break;
	case 1619:
		U = new int[2] {-2, 3}; 
		V = new int[2] {6, -7}; 
		break;
	case 1620:
		U = new int[2] {8, -3}; 
		V = new int[2] {1, 8}; 
		break;
	case 1621:
		U = new int[2] {4, 8}; 
		V = new int[2] {6, -7}; 
		break;
	case 1622:
		U = new int[2] {-8, 7}; 
		V = new int[2] {-5, -7}; 
		break;
	case 1623:
		U = new int[2] {-6, -6}; 
		V = new int[2] {-6, 1}; 
		break;
	case 1624:
		U = new int[2] {-10, 7}; 
		V = new int[2] {-5, -4}; 
		break;
	case 1625:
		U = new int[2] {-5, -1}; 
		V = new int[2] {7, -6}; 
		break;
	case 1626:
		U = new int[2] {-6, 3}; 
		V = new int[2] {-7, -10}; 
		break;
	case 1627:
		U = new int[2] {10, 6}; 
		V = new int[2] {-5, 0}; 
		break;
	case 1628:
		U = new int[2] {1, 8}; 
		V = new int[2] {-2, 6}; 
		break;
	case 1629:
		U = new int[2] {2, 4}; 
		V = new int[2] {-2, 3}; 
		break;
	case 1630:
		U = new int[2] {9, -6}; 
		V = new int[2] {2, 3}; 
		break;
	case 1631:
		U = new int[2] {-4, -6}; 
		V = new int[2] {10, -10}; 
		break;
	case 1632:
		U = new int[2] {2, -8}; 
		V = new int[2] {8, 8}; 
		break;
	case 1633:
		U = new int[2] {3, 6}; 
		V = new int[2] {-2, 10}; 
		break;
	case 1634:
		U = new int[2] {-10, -10}; 
		V = new int[2] {3, 4}; 
		break;
	case 1635:
		U = new int[2] {-3, -3}; 
		V = new int[2] {9, 1}; 
		break;
	case 1636:
		U = new int[2] {-5, -7}; 
		V = new int[2] {-10, -10}; 
		break;
	case 1637:
		U = new int[2] {4, 4}; 
		V = new int[2] {10, 10}; 
		break;
	case 1638:
		U = new int[2] {-1, -6}; 
		V = new int[2] {1, 3}; 
		break;
	case 1639:
		U = new int[2] {-1, 9}; 
		V = new int[2] {-6, 10}; 
		break;
	case 1640:
		U = new int[2] {-1, 3}; 
		V = new int[2] {-6, -10}; 
		break;
	case 1641:
		U = new int[2] {-10, 6}; 
		V = new int[2] {1, 10}; 
		break;
	case 1642:
		U = new int[2] {0, 7}; 
		V = new int[2] {-5, -2}; 
		break;
	case 1643:
		U = new int[2] {-8, -8}; 
		V = new int[2] {1, -2}; 
		break;
	case 1644:
		U = new int[2] {5, 3}; 
		V = new int[2] {9, 3}; 
		break;
	case 1645:
		U = new int[2] {7, 9}; 
		V = new int[2] {-4, 5}; 
		break;
	case 1646:
		U = new int[2] {-3, 9}; 
		V = new int[2] {6, 3}; 
		break;
	case 1647:
		U = new int[2] {-7, -7}; 
		V = new int[2] {-7, -5}; 
		break;
	case 1648:
		U = new int[2] {1, 4}; 
		V = new int[2] {-4, -8}; 
		break;
	case 1649:
		U = new int[2] {8, 6}; 
		V = new int[2] {-6, 1}; 
		break;
	case 1650:
		U = new int[2] {0, -6}; 
		V = new int[2] {8, -7}; 
		break;
	case 1651:
		U = new int[2] {6, 0}; 
		V = new int[2] {-10, -1}; 
		break;
	case 1652:
		U = new int[2] {1, -1}; 
		V = new int[2] {-6, -3}; 
		break;
	case 1653:
		U = new int[2] {-9, 10}; 
		V = new int[2] {10, 2}; 
		break;
	case 1654:
		U = new int[2] {9, -1}; 
		V = new int[2] {10, -3}; 
		break;
	case 1655:
		U = new int[2] {-2, -3}; 
		V = new int[2] {-9, -1}; 
		break;
	case 1656:
		U = new int[2] {-3, 3}; 
		V = new int[2] {0, 7}; 
		break;
	case 1657:
		U = new int[2] {-7, 5}; 
		V = new int[2] {-2, 4}; 
		break;
	case 1658:
		U = new int[2] {-5, -4}; 
		V = new int[2] {-1, 2}; 
		break;
	case 1659:
		U = new int[2] {-5, -3}; 
		V = new int[2] {9, -4}; 
		break;
	case 1660:
		U = new int[2] {4, 5}; 
		V = new int[2] {10, 6}; 
		break;
	case 1661:
		U = new int[2] {-5, -6}; 
		V = new int[2] {2, 3}; 
		break;
	case 1662:
		U = new int[2] {-10, 2}; 
		V = new int[2] {-8, -4}; 
		break;
	case 1663:
		U = new int[2] {7, 3}; 
		V = new int[2] {1, -9}; 
		break;
	case 1664:
		U = new int[2] {-4, 3}; 
		V = new int[2] {0, 4}; 
		break;
	case 1665:
		U = new int[2] {-5, 4}; 
		V = new int[2] {6, 3}; 
		break;
	case 1666:
		U = new int[2] {-10, 10}; 
		V = new int[2] {7, 7}; 
		break;
	case 1667:
		U = new int[2] {6, -9}; 
		V = new int[2] {5, 1}; 
		break;
	case 1668:
		U = new int[2] {-1, -8}; 
		V = new int[2] {8, -10}; 
		break;
	case 1669:
		U = new int[2] {1, -3}; 
		V = new int[2] {4, 7}; 
		break;
	case 1670:
		U = new int[2] {-3, 3}; 
		V = new int[2] {7, 5}; 
		break;
	case 1671:
		U = new int[2] {9, -2}; 
		V = new int[2] {-10, -3}; 
		break;
	case 1672:
		U = new int[2] {10, -7}; 
		V = new int[2] {-1, -5}; 
		break;
	case 1673:
		U = new int[2] {-6, 10}; 
		V = new int[2] {-10, 9}; 
		break;
	case 1674:
		U = new int[2] {-6, -9}; 
		V = new int[2] {10, -10}; 
		break;
	case 1675:
		U = new int[2] {-7, 8}; 
		V = new int[2] {-8, 2}; 
		break;
	case 1676:
		U = new int[2] {-6, -3}; 
		V = new int[2] {-3, 5}; 
		break;
	case 1677:
		U = new int[2] {-10, -10}; 
		V = new int[2] {2, 4}; 
		break;
	case 1678:
		U = new int[2] {6, 0}; 
		V = new int[2] {4, -6}; 
		break;
	case 1679:
		U = new int[2] {10, -4}; 
		V = new int[2] {-10, -9}; 
		break;
	case 1680:
		U = new int[2] {10, 2}; 
		V = new int[2] {-1, -5}; 
		break;
	case 1681:
		U = new int[2] {4, 7}; 
		V = new int[2] {-5, 1}; 
		break;
	case 1682:
		U = new int[2] {4, 1}; 
		V = new int[2] {-7, 7}; 
		break;
	case 1683:
		U = new int[2] {-4, -7}; 
		V = new int[2] {-4, 1}; 
		break;
	case 1684:
		U = new int[2] {7, -9}; 
		V = new int[2] {2, -2}; 
		break;
	case 1685:
		U = new int[2] {-6, 8}; 
		V = new int[2] {2, 4}; 
		break;
	case 1686:
		U = new int[2] {8, 2}; 
		V = new int[2] {-5, -7}; 
		break;
	case 1687:
		U = new int[2] {-3, 2}; 
		V = new int[2] {-10, 6}; 
		break;
	case 1688:
		U = new int[2] {6, -2}; 
		V = new int[2] {-6, -9}; 
		break;
	case 1689:
		U = new int[2] {2, 7}; 
		V = new int[2] {-9, -4}; 
		break;
	case 1690:
		U = new int[2] {-2, 0}; 
		V = new int[2] {-2, 9}; 
		break;
	case 1691:
		U = new int[2] {-1, 5}; 
		V = new int[2] {-4, -9}; 
		break;
	case 1692:
		U = new int[2] {-4, -3}; 
		V = new int[2] {-4, -5}; 
		break;
	case 1693:
		U = new int[2] {-6, 10}; 
		V = new int[2] {5, 3}; 
		break;
	case 1694:
		U = new int[2] {10, 4}; 
		V = new int[2] {-10, 7}; 
		break;
	case 1695:
		U = new int[2] {7, -4}; 
		V = new int[2] {0, -6}; 
		break;
	case 1696:
		U = new int[2] {-7, 4}; 
		V = new int[2] {-2, 10}; 
		break;
	case 1697:
		U = new int[2] {2, -7}; 
		V = new int[2] {-2, -8}; 
		break;
	case 1698:
		U = new int[2] {5, 0}; 
		V = new int[2] {-5, 0}; 
		break;
	case 1699:
		U = new int[2] {2, -6}; 
		V = new int[2] {4, 1}; 
		break;
	case 1700:
		U = new int[2] {2, 1}; 
		V = new int[2] {-2, 5}; 
		break;
	case 1701:
		U = new int[2] {7, -9}; 
		V = new int[2] {-5, -1}; 
		break;
	case 1702:
		U = new int[2] {-2, 1}; 
		V = new int[2] {-5, 6}; 
		break;
	case 1703:
		U = new int[2] {-2, -2}; 
		V = new int[2] {6, -7}; 
		break;
	case 1704:
		U = new int[2] {-6, -10}; 
		V = new int[2] {-4, -8}; 
		break;
	case 1705:
		U = new int[2] {-2, -10}; 
		V = new int[2] {2, -6}; 
		break;
	case 1706:
		U = new int[2] {-5, -8}; 
		V = new int[2] {4, -2}; 
		break;
	case 1707:
		U = new int[2] {7, 10}; 
		V = new int[2] {3, 4}; 
		break;
	case 1708:
		U = new int[2] {9, -9}; 
		V = new int[2] {-9, 4}; 
		break;
	case 1709:
		U = new int[2] {-7, -6}; 
		V = new int[2] {6, 5}; 
		break;
	case 1710:
		U = new int[2] {8, 6}; 
		V = new int[2] {3, -10}; 
		break;
	case 1711:
		U = new int[2] {3, 3}; 
		V = new int[2] {1, 6}; 
		break;
	case 1712:
		U = new int[2] {-5, -1}; 
		V = new int[2] {9, 4}; 
		break;
	case 1713:
		U = new int[2] {4, -3}; 
		V = new int[2] {-7, -4}; 
		break;
	case 1714:
		U = new int[2] {0, 3}; 
		V = new int[2] {-1, -10}; 
		break;
	case 1715:
		U = new int[2] {-4, -10}; 
		V = new int[2] {-9, 4}; 
		break;
	case 1716:
		U = new int[2] {-10, -3}; 
		V = new int[2] {6, -6}; 
		break;
	case 1717:
		U = new int[2] {-10, 6}; 
		V = new int[2] {0, -4}; 
		break;
	case 1718:
		U = new int[2] {0, -8}; 
		V = new int[2] {-10, -2}; 
		break;
	case 1719:
		U = new int[2] {4, 4}; 
		V = new int[2] {7, 6}; 
		break;
	case 1720:
		U = new int[2] {-4, -4}; 
		V = new int[2] {7, 5}; 
		break;
	case 1721:
		U = new int[2] {-10, -4}; 
		V = new int[2] {3, 2}; 
		break;
	case 1722:
		U = new int[2] {0, 2}; 
		V = new int[2] {7, -10}; 
		break;
	case 1723:
		U = new int[2] {-3, -9}; 
		V = new int[2] {5, 1}; 
		break;
	case 1724:
		U = new int[2] {-2, -6}; 
		V = new int[2] {1, -9}; 
		break;
	case 1725:
		U = new int[2] {6, -6}; 
		V = new int[2] {9, -10}; 
		break;
	case 1726:
		U = new int[2] {-8, -7}; 
		V = new int[2] {-2, -9}; 
		break;
	case 1727:
		U = new int[2] {2, 8}; 
		V = new int[2] {3, 2}; 
		break;
	case 1728:
		U = new int[2] {-1, 0}; 
		V = new int[2] {9, 10}; 
		break;
	case 1729:
		U = new int[2] {1, 1}; 
		V = new int[2] {8, 9}; 
		break;
	case 1730:
		U = new int[2] {9, 3}; 
		V = new int[2] {-7, -4}; 
		break;
	case 1731:
		U = new int[2] {-10, -9}; 
		V = new int[2] {5, 10}; 
		break;
	case 1732:
		U = new int[2] {4, 1}; 
		V = new int[2] {3, 6}; 
		break;
	case 1733:
		U = new int[2] {3, 7}; 
		V = new int[2] {-6, -6}; 
		break;
	case 1734:
		U = new int[2] {2, 2}; 
		V = new int[2] {6, -9}; 
		break;
	case 1735:
		U = new int[2] {-6, 10}; 
		V = new int[2] {7, -6}; 
		break;
	case 1736:
		U = new int[2] {-3, -1}; 
		V = new int[2] {5, 2}; 
		break;
	case 1737:
		U = new int[2] {-6, 9}; 
		V = new int[2] {-4, -2}; 
		break;
	case 1738:
		U = new int[2] {-6, 8}; 
		V = new int[2] {4, 7}; 
		break;
	case 1739:
		U = new int[2] {6, -5}; 
		V = new int[2] {9, -7}; 
		break;
	case 1740:
		U = new int[2] {-8, 4}; 
		V = new int[2] {1, -4}; 
		break;
	case 1741:
		U = new int[2] {-3, -7}; 
		V = new int[2] {7, 9}; 
		break;
	case 1742:
		U = new int[2] {1, 0}; 
		V = new int[2] {3, 5}; 
		break;
	case 1743:
		U = new int[2] {-3, -10}; 
		V = new int[2] {-4, -3}; 
		break;
	case 1744:
		U = new int[2] {-5, 9}; 
		V = new int[2] {5, -9}; 
		break;
	case 1745:
		U = new int[2] {10, 8}; 
		V = new int[2] {-1, 3}; 
		break;
	case 1746:
		U = new int[2] {-2, 7}; 
		V = new int[2] {4, -4}; 
		break;
	case 1747:
		U = new int[2] {4, -7}; 
		V = new int[2] {2, -5}; 
		break;
	case 1748:
		U = new int[2] {7, 8}; 
		V = new int[2] {3, -9}; 
		break;
	case 1749:
		U = new int[2] {-5, -10}; 
		V = new int[2] {8, 1}; 
		break;
	case 1750:
		U = new int[2] {10, 1}; 
		V = new int[2] {-7, -4}; 
		break;
	case 1751:
		U = new int[2] {4, 5}; 
		V = new int[2] {5, -1}; 
		break;
	case 1752:
		U = new int[2] {4, 6}; 
		V = new int[2] {6, -4}; 
		break;
	case 1753:
		U = new int[2] {-7, -8}; 
		V = new int[2] {-4, 3}; 
		break;
	case 1754:
		U = new int[2] {-2, 10}; 
		V = new int[2] {10, -8}; 
		break;
	case 1755:
		U = new int[2] {4, -3}; 
		V = new int[2] {-7, 10}; 
		break;
	case 1756:
		U = new int[2] {-9, -7}; 
		V = new int[2] {4, -7}; 
		break;
	case 1757:
		U = new int[2] {3, -2}; 
		V = new int[2] {-10, -1}; 
		break;
	case 1758:
		U = new int[2] {-5, -9}; 
		V = new int[2] {3, 3}; 
		break;
	case 1759:
		U = new int[2] {-2, 9}; 
		V = new int[2] {7, -10}; 
		break;
	case 1760:
		U = new int[2] {-5, 9}; 
		V = new int[2] {9, -6}; 
		break;
	case 1761:
		U = new int[2] {-6, -2}; 
		V = new int[2] {-5, 2}; 
		break;
	case 1762:
		U = new int[2] {0, 4}; 
		V = new int[2] {-7, 0}; 
		break;
	case 1763:
		U = new int[2] {4, 7}; 
		V = new int[2] {-5, 0}; 
		break;
	case 1764:
		U = new int[2] {5, 5}; 
		V = new int[2] {10, 9}; 
		break;
	case 1765:
		U = new int[2] {-1, 8}; 
		V = new int[2] {-9, 6}; 
		break;
	case 1766:
		U = new int[2] {5, -6}; 
		V = new int[2] {5, 0}; 
		break;
	case 1767:
		U = new int[2] {-10, 9}; 
		V = new int[2] {-1, 6}; 
		break;
	case 1768:
		U = new int[2] {0, 9}; 
		V = new int[2] {-5, 0}; 
		break;
	case 1769:
		U = new int[2] {2, 4}; 
		V = new int[2] {-2, 9}; 
		break;
	case 1770:
		U = new int[2] {-6, 7}; 
		V = new int[2] {-5, 7}; 
		break;
	case 1771:
		U = new int[2] {3, -2}; 
		V = new int[2] {7, 1}; 
		break;
	case 1772:
		U = new int[2] {-4, 2}; 
		V = new int[2] {7, 2}; 
		break;
	case 1773:
		U = new int[2] {-9, 1}; 
		V = new int[2] {9, 7}; 
		break;
	case 1774:
		U = new int[2] {-10, 2}; 
		V = new int[2] {1, 8}; 
		break;
	case 1775:
		U = new int[2] {0, 9}; 
		V = new int[2] {-2, 5}; 
		break;
	case 1776:
		U = new int[2] {-4, -10}; 
		V = new int[2] {6, 2}; 
		break;
	case 1777:
		U = new int[2] {-3, -4}; 
		V = new int[2] {-5, -2}; 
		break;
	case 1778:
		U = new int[2] {3, 8}; 
		V = new int[2] {6, 8}; 
		break;
	case 1779:
		U = new int[2] {8, -1}; 
		V = new int[2] {2, 8}; 
		break;
	case 1780:
		U = new int[2] {-4, -6}; 
		V = new int[2] {0, -9}; 
		break;
	case 1781:
		U = new int[2] {-9, -7}; 
		V = new int[2] {-6, 4}; 
		break;
	case 1782:
		U = new int[2] {-5, -1}; 
		V = new int[2] {-4, -1}; 
		break;
	case 1783:
		U = new int[2] {10, 2}; 
		V = new int[2] {5, 6}; 
		break;
	case 1784:
		U = new int[2] {9, 6}; 
		V = new int[2] {8, -8}; 
		break;
	case 1785:
		U = new int[2] {-5, 7}; 
		V = new int[2] {-5, 10}; 
		break;
	case 1786:
		U = new int[2] {-8, -10}; 
		V = new int[2] {7, 4}; 
		break;
	case 1787:
		U = new int[2] {-7, 0}; 
		V = new int[2] {9, 5}; 
		break;
	case 1788:
		U = new int[2] {-2, -10}; 
		V = new int[2] {8, -2}; 
		break;
	case 1789:
		U = new int[2] {7, -4}; 
		V = new int[2] {-5, 9}; 
		break;
	case 1790:
		U = new int[2] {2, -2}; 
		V = new int[2] {-6, -2}; 
		break;
	case 1791:
		U = new int[2] {-4, 7}; 
		V = new int[2] {8, -8}; 
		break;
	case 1792:
		U = new int[2] {3, -1}; 
		V = new int[2] {-1, -2}; 
		break;
	case 1793:
		U = new int[2] {5, 5}; 
		V = new int[2] {0, 1}; 
		break;
	case 1794:
		U = new int[2] {5, -9}; 
		V = new int[2] {-8, 10}; 
		break;
	case 1795:
		U = new int[2] {2, 8}; 
		V = new int[2] {8, -10}; 
		break;
	case 1796:
		U = new int[2] {8, -6}; 
		V = new int[2] {1, -4}; 
		break;
	case 1797:
		U = new int[2] {5, -1}; 
		V = new int[2] {10, 9}; 
		break;
	case 1798:
		U = new int[2] {7, -3}; 
		V = new int[2] {-4, 2}; 
		break;
	case 1799:
		U = new int[2] {5, -9}; 
		V = new int[2] {-1, 6}; 
		break;
	case 1800:
		U = new int[2] {-8, -3}; 
		V = new int[2] {-6, -1}; 
		break;
	case 1801:
		U = new int[2] {1, -7}; 
		V = new int[2] {10, 10}; 
		break;
	case 1802:
		U = new int[2] {-4, 9}; 
		V = new int[2] {9, 4}; 
		break;
	case 1803:
		U = new int[2] {-10, 3}; 
		V = new int[2] {-7, -4}; 
		break;
	case 1804:
		U = new int[2] {6, -1}; 
		V = new int[2] {5, 5}; 
		break;
	case 1805:
		U = new int[2] {6, -8}; 
		V = new int[2] {0, 8}; 
		break;
	case 1806:
		U = new int[2] {7, 9}; 
		V = new int[2] {10, 10}; 
		break;
	case 1807:
		U = new int[2] {-5, -2}; 
		V = new int[2] {7, -5}; 
		break;
	case 1808:
		U = new int[2] {6, 4}; 
		V = new int[2] {4, 9}; 
		break;
	case 1809:
		U = new int[2] {-10, 4}; 
		V = new int[2] {0, 4}; 
		break;
	case 1810:
		U = new int[2] {6, -3}; 
		V = new int[2] {4, -4}; 
		break;
	case 1811:
		U = new int[2] {-10, 2}; 
		V = new int[2] {10, 0}; 
		break;
	case 1812:
		U = new int[2] {9, -2}; 
		V = new int[2] {0, -4}; 
		break;
	case 1813:
		U = new int[2] {2, 0}; 
		V = new int[2] {4, 4}; 
		break;
	case 1814:
		U = new int[2] {5, 10}; 
		V = new int[2] {-9, -9}; 
		break;
	case 1815:
		U = new int[2] {-7, -3}; 
		V = new int[2] {10, -2}; 
		break;
	case 1816:
		U = new int[2] {-2, 0}; 
		V = new int[2] {6, -5}; 
		break;
	case 1817:
		U = new int[2] {-10, -7}; 
		V = new int[2] {-5, -4}; 
		break;
	case 1818:
		U = new int[2] {-3, -3}; 
		V = new int[2] {-6, 5}; 
		break;
	case 1819:
		U = new int[2] {2, 8}; 
		V = new int[2] {-8, -8}; 
		break;
	case 1820:
		U = new int[2] {-3, 5}; 
		V = new int[2] {-5, 5}; 
		break;
	case 1821:
		U = new int[2] {4, 0}; 
		V = new int[2] {6, 2}; 
		break;
	case 1822:
		U = new int[2] {-9, -4}; 
		V = new int[2] {0, 2}; 
		break;
	case 1823:
		U = new int[2] {7, 5}; 
		V = new int[2] {-10, 0}; 
		break;
	case 1824:
		U = new int[2] {-5, -4}; 
		V = new int[2] {10, -4}; 
		break;
	case 1825:
		U = new int[2] {-5, -2}; 
		V = new int[2] {-10, 10}; 
		break;
	case 1826:
		U = new int[2] {-2, -1}; 
		V = new int[2] {3, -5}; 
		break;
	case 1827:
		U = new int[2] {9, 6}; 
		V = new int[2] {2, 2}; 
		break;
	case 1828:
		U = new int[2] {5, 2}; 
		V = new int[2] {0, 1}; 
		break;
	case 1829:
		U = new int[2] {2, 1}; 
		V = new int[2] {-9, -9}; 
		break;
	case 1830:
		U = new int[2] {2, 5}; 
		V = new int[2] {4, -5}; 
		break;
	case 1831:
		U = new int[2] {-9, -1}; 
		V = new int[2] {5, -4}; 
		break;
	case 1832:
		U = new int[2] {-8, 8}; 
		V = new int[2] {-8, -10}; 
		break;
	case 1833:
		U = new int[2] {3, -10}; 
		V = new int[2] {8, 10}; 
		break;
	case 1834:
		U = new int[2] {8, 0}; 
		V = new int[2] {10, 1}; 
		break;
	case 1835:
		U = new int[2] {9, -5}; 
		V = new int[2] {-7, 2}; 
		break;
	case 1836:
		U = new int[2] {2, 10}; 
		V = new int[2] {-4, -2}; 
		break;
	case 1837:
		U = new int[2] {-10, 4}; 
		V = new int[2] {-8, -4}; 
		break;
	case 1838:
		U = new int[2] {7, 4}; 
		V = new int[2] {1, 5}; 
		break;
	case 1839:
		U = new int[2] {10, 9}; 
		V = new int[2] {-6, -5}; 
		break;
	case 1840:
		U = new int[2] {4, -1}; 
		V = new int[2] {3, 6}; 
		break;
	case 1841:
		U = new int[2] {-2, 9}; 
		V = new int[2] {-4, 10}; 
		break;
	case 1842:
		U = new int[2] {3, -2}; 
		V = new int[2] {1, 8}; 
		break;
	case 1843:
		U = new int[2] {1, -8}; 
		V = new int[2] {-7, 7}; 
		break;
	case 1844:
		U = new int[2] {-6, -2}; 
		V = new int[2] {10, 0}; 
		break;
	case 1845:
		U = new int[2] {10, 4}; 
		V = new int[2] {1, -7}; 
		break;
	case 1846:
		U = new int[2] {7, -8}; 
		V = new int[2] {-3, -3}; 
		break;
	case 1847:
		U = new int[2] {-5, -2}; 
		V = new int[2] {9, 3}; 
		break;
	case 1848:
		U = new int[2] {9, 5}; 
		V = new int[2] {-4, -1}; 
		break;
	case 1849:
		U = new int[2] {9, 9}; 
		V = new int[2] {-6, -4}; 
		break;
	case 1850:
		U = new int[2] {6, -8}; 
		V = new int[2] {7, -1}; 
		break;
	case 1851:
		U = new int[2] {4, -5}; 
		V = new int[2] {-4, 6}; 
		break;
	case 1852:
		U = new int[2] {-10, -8}; 
		V = new int[2] {-6, 3}; 
		break;
	case 1853:
		U = new int[2] {-5, 1}; 
		V = new int[2] {5, 5}; 
		break;
	case 1854:
		U = new int[2] {0, 3}; 
		V = new int[2] {1, -6}; 
		break;
	case 1855:
		U = new int[2] {3, -2}; 
		V = new int[2] {4, 7}; 
		break;
	case 1856:
		U = new int[2] {1, -3}; 
		V = new int[2] {7, 1}; 
		break;
	case 1857:
		U = new int[2] {-7, -2}; 
		V = new int[2] {-10, -5}; 
		break;
	case 1858:
		U = new int[2] {6, 8}; 
		V = new int[2] {10, 3}; 
		break;
	case 1859:
		U = new int[2] {7, 7}; 
		V = new int[2] {5, 8}; 
		break;
	case 1860:
		U = new int[2] {-9, 5}; 
		V = new int[2] {0, 7}; 
		break;
	case 1861:
		U = new int[2] {7, -7}; 
		V = new int[2] {-5, 6}; 
		break;
	case 1862:
		U = new int[2] {3, -9}; 
		V = new int[2] {2, 6}; 
		break;
	case 1863:
		U = new int[2] {2, 0}; 
		V = new int[2] {-10, 8}; 
		break;
	case 1864:
		U = new int[2] {10, -2}; 
		V = new int[2] {-4, -1}; 
		break;
	case 1865:
		U = new int[2] {-5, 0}; 
		V = new int[2] {-3, 0}; 
		break;
	case 1866:
		U = new int[2] {-5, 10}; 
		V = new int[2] {4, -9}; 
		break;
	case 1867:
		U = new int[2] {3, 0}; 
		V = new int[2] {8, 8}; 
		break;
	case 1868:
		U = new int[2] {6, -6}; 
		V = new int[2] {10, -5}; 
		break;
	case 1869:
		U = new int[2] {-7, 5}; 
		V = new int[2] {1, 7}; 
		break;
	case 1870:
		U = new int[2] {-4, 10}; 
		V = new int[2] {-8, 2}; 
		break;
	case 1871:
		U = new int[2] {-3, 2}; 
		V = new int[2] {1, -3}; 
		break;
	case 1872:
		U = new int[2] {6, -1}; 
		V = new int[2] {3, -6}; 
		break;
	case 1873:
		U = new int[2] {10, 2}; 
		V = new int[2] {7, 0}; 
		break;
	case 1874:
		U = new int[2] {-6, 10}; 
		V = new int[2] {-1, 1}; 
		break;
	case 1875:
		U = new int[2] {-3, -3}; 
		V = new int[2] {7, 7}; 
		break;
	case 1876:
		U = new int[2] {6, 5}; 
		V = new int[2] {-2, -3}; 
		break;
	case 1877:
		U = new int[2] {2, 3}; 
		V = new int[2] {-1, 2}; 
		break;
	case 1878:
		U = new int[2] {-4, -8}; 
		V = new int[2] {-4, 3}; 
		break;
	case 1879:
		U = new int[2] {0, 8}; 
		V = new int[2] {-3, 7}; 
		break;
	case 1880:
		U = new int[2] {6, -9}; 
		V = new int[2] {8, 6}; 
		break;
	case 1881:
		U = new int[2] {-1, 7}; 
		V = new int[2] {3, 10}; 
		break;
	case 1882:
		U = new int[2] {8, 9}; 
		V = new int[2] {8, -1}; 
		break;
	case 1883:
		U = new int[2] {-2, 6}; 
		V = new int[2] {-6, 3}; 
		break;
	case 1884:
		U = new int[2] {-8, -2}; 
		V = new int[2] {5, -6}; 
		break;
	case 1885:
		U = new int[2] {-6, 6}; 
		V = new int[2] {-6, 5}; 
		break;
	case 1886:
		U = new int[2] {7, 2}; 
		V = new int[2] {3, 5}; 
		break;
	case 1887:
		U = new int[2] {-10, 2}; 
		V = new int[2] {1, 6}; 
		break;
	case 1888:
		U = new int[2] {1, -2}; 
		V = new int[2] {8, 3}; 
		break;
	case 1889:
		U = new int[2] {-4, -4}; 
		V = new int[2] {5, 4}; 
		break;
	case 1890:
		U = new int[2] {-2, -10}; 
		V = new int[2] {5, 2}; 
		break;
	case 1891:
		U = new int[2] {-7, -6}; 
		V = new int[2] {-2, 6}; 
		break;
	case 1892:
		U = new int[2] {-5, 5}; 
		V = new int[2] {-3, 6}; 
		break;
	case 1893:
		U = new int[2] {3, 6}; 
		V = new int[2] {-9, -8}; 
		break;
	case 1894:
		U = new int[2] {-6, 3}; 
		V = new int[2] {-6, 4}; 
		break;
	case 1895:
		U = new int[2] {-5, 6}; 
		V = new int[2] {-5, 2}; 
		break;
	case 1896:
		U = new int[2] {-2, -2}; 
		V = new int[2] {9, 9}; 
		break;
	case 1897:
		U = new int[2] {2, -5}; 
		V = new int[2] {8, 2}; 
		break;
	case 1898:
		U = new int[2] {-5, 4}; 
		V = new int[2] {10, 6}; 
		break;
	case 1899:
		U = new int[2] {-1, -2}; 
		V = new int[2] {-4, 5}; 
		break;
	case 1900:
		U = new int[2] {-8, -7}; 
		V = new int[2] {-7, -8}; 
		break;
	case 1901:
		U = new int[2] {-3, -4}; 
		V = new int[2] {5, 4}; 
		break;
	case 1902:
		U = new int[2] {-2, 0}; 
		V = new int[2] {-5, -8}; 
		break;
	case 1903:
		U = new int[2] {10, 0}; 
		V = new int[2] {1, 8}; 
		break;
	case 1904:
		U = new int[2] {-1, -3}; 
		V = new int[2] {7, -2}; 
		break;
	case 1905:
		U = new int[2] {6, 2}; 
		V = new int[2] {2, 10}; 
		break;
	case 1906:
		U = new int[2] {2, -1}; 
		V = new int[2] {-7, -3}; 
		break;
	case 1907:
		U = new int[2] {-3, 6}; 
		V = new int[2] {-5, 0}; 
		break;
	case 1908:
		U = new int[2] {6, 2}; 
		V = new int[2] {-5, 1}; 
		break;
	case 1909:
		U = new int[2] {-10, -4}; 
		V = new int[2] {6, -9}; 
		break;
	case 1910:
		U = new int[2] {-3, 0}; 
		V = new int[2] {10, 5}; 
		break;
	case 1911:
		U = new int[2] {-5, 9}; 
		V = new int[2] {-10, -4}; 
		break;
	case 1912:
		U = new int[2] {3, 4}; 
		V = new int[2] {1, 10}; 
		break;
	case 1913:
		U = new int[2] {-9, -1}; 
		V = new int[2] {-4, 7}; 
		break;
	case 1914:
		U = new int[2] {9, -1}; 
		V = new int[2] {2, -7}; 
		break;
	case 1915:
		U = new int[2] {4, -6}; 
		V = new int[2] {-7, -9}; 
		break;
	case 1916:
		U = new int[2] {-3, -2}; 
		V = new int[2] {-3, -1}; 
		break;
	case 1917:
		U = new int[2] {8, 6}; 
		V = new int[2] {-6, 5}; 
		break;
	case 1918:
		U = new int[2] {8, 4}; 
		V = new int[2] {9, -10}; 
		break;
	case 1919:
		U = new int[2] {-10, 0}; 
		V = new int[2] {-8, 3}; 
		break;
	case 1920:
		U = new int[2] {1, -2}; 
		V = new int[2] {-2, 9}; 
		break;
	case 1921:
		U = new int[2] {2, -9}; 
		V = new int[2] {-6, -2}; 
		break;
	case 1922:
		U = new int[2] {1, 9}; 
		V = new int[2] {-7, -8}; 
		break;
	case 1923:
		U = new int[2] {-7, 4}; 
		V = new int[2] {-6, -3}; 
		break;
	case 1924:
		U = new int[2] {4, -6}; 
		V = new int[2] {-8, 1}; 
		break;
	case 1925:
		U = new int[2] {-9, -2}; 
		V = new int[2] {8, -5}; 
		break;
	case 1926:
		U = new int[2] {-7, -5}; 
		V = new int[2] {5, -6}; 
		break;
	case 1927:
		U = new int[2] {-3, 2}; 
		V = new int[2] {-7, -3}; 
		break;
	case 1928:
		U = new int[2] {5, -8}; 
		V = new int[2] {4, -1}; 
		break;
	case 1929:
		U = new int[2] {-10, 6}; 
		V = new int[2] {1, 7}; 
		break;
	case 1930:
		U = new int[2] {-9, 10}; 
		V = new int[2] {-3, 2}; 
		break;
	case 1931:
		U = new int[2] {3, -1}; 
		V = new int[2] {-9, -8}; 
		break;
	case 1932:
		U = new int[2] {3, 0}; 
		V = new int[2] {-3, -2}; 
		break;
	case 1933:
		U = new int[2] {4, 8}; 
		V = new int[2] {-8, 9}; 
		break;
	case 1934:
		U = new int[2] {3, 2}; 
		V = new int[2] {-4, 2}; 
		break;
	case 1935:
		U = new int[2] {-1, 0}; 
		V = new int[2] {1, -7}; 
		break;
	case 1936:
		U = new int[2] {3, -7}; 
		V = new int[2] {10, 3}; 
		break;
	case 1937:
		U = new int[2] {-2, -3}; 
		V = new int[2] {-8, -5}; 
		break;
	case 1938:
		U = new int[2] {-10, -7}; 
		V = new int[2] {-2, -10}; 
		break;
	case 1939:
		U = new int[2] {10, -5}; 
		V = new int[2] {8, 7}; 
		break;
	case 1940:
		U = new int[2] {-1, -8}; 
		V = new int[2] {8, 3}; 
		break;
	case 1941:
		U = new int[2] {-5, -5}; 
		V = new int[2] {8, -8}; 
		break;
	case 1942:
		U = new int[2] {8, -1}; 
		V = new int[2] {2, 2}; 
		break;
	case 1943:
		U = new int[2] {6, 1}; 
		V = new int[2] {6, -4}; 
		break;
	case 1944:
		U = new int[2] {-10, -10}; 
		V = new int[2] {5, -8}; 
		break;
	case 1945:
		U = new int[2] {-5, 5}; 
		V = new int[2] {-7, -2}; 
		break;
	case 1946:
		U = new int[2] {-10, -9}; 
		V = new int[2] {10, -3}; 
		break;
	case 1947:
		U = new int[2] {0, -4}; 
		V = new int[2] {0, -9}; 
		break;
	case 1948:
		U = new int[2] {-8, -4}; 
		V = new int[2] {6, 5}; 
		break;
	case 1949:
		U = new int[2] {8, -8}; 
		V = new int[2] {-6, 3}; 
		break;
	case 1950:
		U = new int[2] {2, -8}; 
		V = new int[2] {5, -9}; 
		break;
	case 1951:
		U = new int[2] {-7, 6}; 
		V = new int[2] {2, -2}; 
		break;
	case 1952:
		U = new int[2] {-8, -7}; 
		V = new int[2] {-10, 1}; 
		break;
	case 1953:
		U = new int[2] {-5, 4}; 
		V = new int[2] {-10, -1}; 
		break;
	case 1954:
		U = new int[2] {2, -5}; 
		V = new int[2] {8, -1}; 
		break;
	case 1955:
		U = new int[2] {2, -9}; 
		V = new int[2] {6, -5}; 
		break;
	case 1956:
		U = new int[2] {-3, 3}; 
		V = new int[2] {2, 0}; 
		break;
	case 1957:
		U = new int[2] {10, 10}; 
		V = new int[2] {10, -2}; 
		break;
	case 1958:
		U = new int[2] {-3, 7}; 
		V = new int[2] {8, 2}; 
		break;
	case 1959:
		U = new int[2] {9, 6}; 
		V = new int[2] {-9, -5}; 
		break;
	case 1960:
		U = new int[2] {4, -2}; 
		V = new int[2] {5, -1}; 
		break;
	case 1961:
		U = new int[2] {0, 8}; 
		V = new int[2] {10, -10}; 
		break;
	case 1962:
		U = new int[2] {3, 1}; 
		V = new int[2] {8, -1}; 
		break;
	case 1963:
		U = new int[2] {-1, -9}; 
		V = new int[2] {-4, 5}; 
		break;
	case 1964:
		U = new int[2] {3, -3}; 
		V = new int[2] {8, -2}; 
		break;
	case 1965:
		U = new int[2] {-2, 0}; 
		V = new int[2] {0, -8}; 
		break;
	case 1966:
		U = new int[2] {4, 3}; 
		V = new int[2] {7, 1}; 
		break;
	case 1967:
		U = new int[2] {5, -4}; 
		V = new int[2] {8, -7}; 
		break;
	case 1968:
		U = new int[2] {-6, -6}; 
		V = new int[2] {0, -10}; 
		break;
	case 1969:
		U = new int[2] {-5, -2}; 
		V = new int[2] {1, -7}; 
		break;
	case 1970:
		U = new int[2] {-9, -5}; 
		V = new int[2] {-3, -8}; 
		break;
	case 1971:
		U = new int[2] {5, -7}; 
		V = new int[2] {10, -1}; 
		break;
	case 1972:
		U = new int[2] {4, 3}; 
		V = new int[2] {5, -4}; 
		break;
	case 1973:
		U = new int[2] {-6, -1}; 
		V = new int[2] {10, -6}; 
		break;
	case 1974:
		U = new int[2] {-7, 0}; 
		V = new int[2] {-2, -1}; 
		break;
	case 1975:
		U = new int[2] {-4, 3}; 
		V = new int[2] {-10, 2}; 
		break;
	case 1976:
		U = new int[2] {-7, 6}; 
		V = new int[2] {-5, 1}; 
		break;
	case 1977:
		U = new int[2] {-8, 3}; 
		V = new int[2] {3, 6}; 
		break;
	case 1978:
		U = new int[2] {6, -7}; 
		V = new int[2] {0, -1}; 
		break;
	case 1979:
		U = new int[2] {-7, 7}; 
		V = new int[2] {1, 3}; 
		break;
	case 1980:
		U = new int[2] {5, 4}; 
		V = new int[2] {6, -6}; 
		break;
	case 1981:
		U = new int[2] {1, 0}; 
		V = new int[2] {10, -6}; 
		break;
	case 1982:
		U = new int[2] {6, 6}; 
		V = new int[2] {2, 5}; 
		break;
	case 1983:
		U = new int[2] {-8, -5}; 
		V = new int[2] {7, 4}; 
		break;
	case 1984:
		U = new int[2] {6, -7}; 
		V = new int[2] {9, 0}; 
		break;
	case 1985:
		U = new int[2] {2, -10}; 
		V = new int[2] {-3, -3}; 
		break;
	case 1986:
		U = new int[2] {2, -9}; 
		V = new int[2] {-8, 5}; 
		break;
	case 1987:
		U = new int[2] {-5, -2}; 
		V = new int[2] {0, -2}; 
		break;
	case 1988:
		U = new int[2] {-10, -5}; 
		V = new int[2] {-1, -10}; 
		break;
	case 1989:
		U = new int[2] {7, -8}; 
		V = new int[2] {0, -3}; 
		break;
	case 1990:
		U = new int[2] {6, 6}; 
		V = new int[2] {7, -1}; 
		break;
	case 1991:
		U = new int[2] {1, 6}; 
		V = new int[2] {-5, -1}; 
		break;
	case 1992:
		U = new int[2] {-4, 6}; 
		V = new int[2] {-2, -4}; 
		break;
	case 1993:
		U = new int[2] {-5, 3}; 
		V = new int[2] {-5, 2}; 
		break;
	case 1994:
		U = new int[2] {-7, -9}; 
		V = new int[2] {4, -7}; 
		break;
	case 1995:
		U = new int[2] {3, -3}; 
		V = new int[2] {8, 0}; 
		break;
	case 1996:
		U = new int[2] {1, 8}; 
		V = new int[2] {7, -4}; 
		break;
	case 1997:
		U = new int[2] {7, -1}; 
		V = new int[2] {7, 4}; 
		break;
	case 1998:
		U = new int[2] {-5, 2}; 
		V = new int[2] {-9, -4}; 
		break;
	case 1999:
		U = new int[2] {7, 3}; 
		V = new int[2] {8, -6}; 
		break;
	case 2000:
		U = new int[2] {-8, -5}; 
		V = new int[2] {-2, 2}; 
		break;
	case 2001:
		U = new int[2] {-1, -5}; 
		V = new int[2] {-3, 9}; 
		break;
	case 2002:
		U = new int[2] {-4, 9}; 
		V = new int[2] {-6, -1}; 
		break;
	case 2003:
		U = new int[2] {4, -6}; 
		V = new int[2] {8, 9}; 
		break;
	case 2004:
		U = new int[2] {9, -7}; 
		V = new int[2] {9, -5}; 
		break;
	case 2005:
		U = new int[2] {-10, -7}; 
		V = new int[2] {-4, -1}; 
		break;
	case 2006:
		U = new int[2] {-3, -5}; 
		V = new int[2] {4, 0}; 
		break;
	case 2007:
		U = new int[2] {10, 2}; 
		V = new int[2] {0, -2}; 
		break;
	case 2008:
		U = new int[2] {-6, -10}; 
		V = new int[2] {-7, 5}; 
		break;
	case 2009:
		U = new int[2] {-8, -3}; 
		V = new int[2] {1, 0}; 
		break;
	case 2010:
		U = new int[2] {7, -8}; 
		V = new int[2] {0, -9}; 
		break;
	case 2011:
		U = new int[2] {3, -4}; 
		V = new int[2] {-10, -10}; 
		break;
	case 2012:
		U = new int[2] {-4, -2}; 
		V = new int[2] {0, -6}; 
		break;
	case 2013:
		U = new int[2] {-7, -8}; 
		V = new int[2] {-10, -6}; 
		break;
	case 2014:
		U = new int[2] {-2, 4}; 
		V = new int[2] {7, 8}; 
		break;
	case 2015:
		U = new int[2] {-7, 4}; 
		V = new int[2] {3, 9}; 
		break;
	case 2016:
		U = new int[2] {-3, -10}; 
		V = new int[2] {-3, -7}; 
		break;
	case 2017:
		U = new int[2] {5, 4}; 
		V = new int[2] {-10, 3}; 
		break;
	case 2018:
		U = new int[2] {-9, -2}; 
		V = new int[2] {5, 3}; 
		break;
	case 2019:
		U = new int[2] {-4, 0}; 
		V = new int[2] {4, -1}; 
		break;
	case 2020:
		U = new int[2] {-1, 1}; 
		V = new int[2] {7, 0}; 
		break;
	case 2021:
		U = new int[2] {-3, -1}; 
		V = new int[2] {2, 1}; 
		break;
	case 2022:
		U = new int[2] {-7, -7}; 
		V = new int[2] {-6, 9}; 
		break;
	case 2023:
		U = new int[2] {-7, 3}; 
		V = new int[2] {-7, 6}; 
		break;
	case 2024:
		U = new int[2] {4, 6}; 
		V = new int[2] {-6, -1}; 
		break;
	case 2025:
		U = new int[2] {3, -9}; 
		V = new int[2] {8, 5}; 
		break;
	case 2026:
		U = new int[2] {7, 3}; 
		V = new int[2] {-1, -4}; 
		break;
	case 2027:
		U = new int[2] {7, 5}; 
		V = new int[2] {2, 0}; 
		break;
	case 2028:
		U = new int[2] {-8, 10}; 
		V = new int[2] {3, -8}; 
		break;
	case 2029:
		U = new int[2] {-6, -5}; 
		V = new int[2] {-7, -6}; 
		break;
	case 2030:
		U = new int[2] {-2, 1}; 
		V = new int[2] {-5, 4}; 
		break;
	case 2031:
		U = new int[2] {4, -3}; 
		V = new int[2] {8, 3}; 
		break;
	case 2032:
		U = new int[2] {-8, 2}; 
		V = new int[2] {-6, 6}; 
		break;
	case 2033:
		U = new int[2] {7, 10}; 
		V = new int[2] {-7, 8}; 
		break;
	case 2034:
		U = new int[2] {1, -5}; 
		V = new int[2] {-9, 10}; 
		break;
	case 2035:
		U = new int[2] {-3, -5}; 
		V = new int[2] {8, 5}; 
		break;
	case 2036:
		U = new int[2] {10, -10}; 
		V = new int[2] {6, -6}; 
		break;
	case 2037:
		U = new int[2] {-9, 4}; 
		V = new int[2] {9, -1}; 
		break;
	case 2038:
		U = new int[2] {-10, 5}; 
		V = new int[2] {10, -3}; 
		break;
	case 2039:
		U = new int[2] {-5, 0}; 
		V = new int[2] {-1, 5}; 
		break;
	case 2040:
		U = new int[2] {-7, 9}; 
		V = new int[2] {0, -2}; 
		break;
	case 2041:
		U = new int[2] {-2, 2}; 
		V = new int[2] {-2, -10}; 
		break;
	case 2042:
		U = new int[2] {-5, -6}; 
		V = new int[2] {1, -1}; 
		break;
	case 2043:
		U = new int[2] {0, 5}; 
		V = new int[2] {-5, 2}; 
		break;
	case 2044:
		U = new int[2] {9, 9}; 
		V = new int[2] {9, 7}; 
		break;
	case 2045:
		U = new int[2] {1, 9}; 
		V = new int[2] {7, 1}; 
		break;
	case 2046:
		U = new int[2] {-5, -3}; 
		V = new int[2] {10, 0}; 
		break;
	case 2047:
		U = new int[2] {10, -6}; 
		V = new int[2] {-4, 3}; 
		break;
	case 2048:
		U = new int[2] {8, -6}; 
		V = new int[2] {-3, 3}; 
		break;
	case 2049:
		U = new int[2] {4, -10}; 
		V = new int[2] {8, -1}; 
		break;
	case 2050:
		U = new int[2] {6, 1}; 
		V = new int[2] {-8, -5}; 
		break;
	case 2051:
		U = new int[2] {9, -7}; 
		V = new int[2] {-8, 7}; 
		break;
	case 2052:
		U = new int[2] {-5, 6}; 
		V = new int[2] {0, -1}; 
		break;
	case 2053:
		U = new int[2] {-2, 7}; 
		V = new int[2] {6, -8}; 
		break;
	case 2054:
		U = new int[2] {5, -5}; 
		V = new int[2] {-6, -4}; 
		break;
	case 2055:
		U = new int[2] {-8, -4}; 
		V = new int[2] {-1, -2}; 
		break;
	case 2056:
		U = new int[2] {1, 1}; 
		V = new int[2] {-8, 8}; 
		break;
	case 2057:
		U = new int[2] {-10, -7}; 
		V = new int[2] {7, 8}; 
		break;
	case 2058:
		U = new int[2] {-6, -6}; 
		V = new int[2] {-10, -7}; 
		break;
	case 2059:
		U = new int[2] {1, -9}; 
		V = new int[2] {-4, 4}; 
		break;
	case 2060:
		U = new int[2] {-2, 0}; 
		V = new int[2] {-8, -5}; 
		break;
	case 2061:
		U = new int[2] {4, 2}; 
		V = new int[2] {-9, 6}; 
		break;
	case 2062:
		U = new int[2] {-6, -6}; 
		V = new int[2] {-10, 8}; 
		break;
	case 2063:
		U = new int[2] {-4, 8}; 
		V = new int[2] {-6, 6}; 
		break;
	case 2064:
		U = new int[2] {2, -3}; 
		V = new int[2] {-4, -10}; 
		break;
	case 2065:
		U = new int[2] {-9, 7}; 
		V = new int[2] {-9, -5}; 
		break;
	case 2066:
		U = new int[2] {6, 10}; 
		V = new int[2] {-4, 3}; 
		break;
	case 2067:
		U = new int[2] {7, 6}; 
		V = new int[2] {6, -1}; 
		break;
	case 2068:
		U = new int[2] {5, 10}; 
		V = new int[2] {-6, -5}; 
		break;
	case 2069:
		U = new int[2] {1, -4}; 
		V = new int[2] {-9, 9}; 
		break;
	case 2070:
		U = new int[2] {-3, -4}; 
		V = new int[2] {1, 7}; 
		break;
	case 2071:
		U = new int[2] {-6, 7}; 
		V = new int[2] {8, 2}; 
		break;
	case 2072:
		U = new int[2] {6, -1}; 
		V = new int[2] {-1, -5}; 
		break;
	case 2073:
		U = new int[2] {5, 9}; 
		V = new int[2] {-8, 0}; 
		break;
	case 2074:
		U = new int[2] {5, 7}; 
		V = new int[2] {-6, -1}; 
		break;
	case 2075:
		U = new int[2] {7, 3}; 
		V = new int[2] {-7, 10}; 
		break;
	case 2076:
		U = new int[2] {-6, -1}; 
		V = new int[2] {-6, -7}; 
		break;
	case 2077:
		U = new int[2] {-5, -5}; 
		V = new int[2] {3, -3}; 
		break;
	case 2078:
		U = new int[2] {9, -10}; 
		V = new int[2] {-3, -1}; 
		break;
	case 2079:
		U = new int[2] {-1, 2}; 
		V = new int[2] {5, 8}; 
		break;
	case 2080:
		U = new int[2] {-10, 2}; 
		V = new int[2] {6, -9}; 
		break;
	case 2081:
		U = new int[2] {-3, 2}; 
		V = new int[2] {5, 2}; 
		break;
	case 2082:
		U = new int[2] {-2, 9}; 
		V = new int[2] {5, -3}; 
		break;
	case 2083:
		U = new int[2] {-8, -9}; 
		V = new int[2] {3, -9}; 
		break;
	case 2084:
		U = new int[2] {7, 5}; 
		V = new int[2] {-6, -8}; 
		break;
	case 2085:
		U = new int[2] {-9, -10}; 
		V = new int[2] {2, 10}; 
		break;
	case 2086:
		U = new int[2] {7, 1}; 
		V = new int[2] {-7, 0}; 
		break;
	case 2087:
		U = new int[2] {-4, 4}; 
		V = new int[2] {4, -2}; 
		break;
	case 2088:
		U = new int[2] {7, -4}; 
		V = new int[2] {-2, 6}; 
		break;
	case 2089:
		U = new int[2] {-6, 6}; 
		V = new int[2] {-1, 2}; 
		break;
	case 2090:
		U = new int[2] {0, 0}; 
		V = new int[2] {-9, 3}; 
		break;
	case 2091:
		U = new int[2] {7, 3}; 
		V = new int[2] {7, 3}; 
		break;
	case 2092:
		U = new int[2] {4, 5}; 
		V = new int[2] {-4, -7}; 
		break;
	case 2093:
		U = new int[2] {-5, 4}; 
		V = new int[2] {4, 0}; 
		break;
	case 2094:
		U = new int[2] {10, 1}; 
		V = new int[2] {2, 1}; 
		break;
	case 2095:
		U = new int[2] {0, -4}; 
		V = new int[2] {-6, 8}; 
		break;
	case 2096:
		U = new int[2] {1, -9}; 
		V = new int[2] {-8, -10}; 
		break;
	case 2097:
		U = new int[2] {0, -3}; 
		V = new int[2] {-6, 8}; 
		break;
	case 2098:
		U = new int[2] {5, 6}; 
		V = new int[2] {-10, -5}; 
		break;
	case 2099:
		U = new int[2] {-4, 6}; 
		V = new int[2] {-8, -9}; 
		break;
	case 2100:
		U = new int[2] {4, -3}; 
		V = new int[2] {-7, -8}; 
		break;
	case 2101:
		U = new int[2] {-6, 10}; 
		V = new int[2] {9, -2}; 
		break;
	case 2102:
		U = new int[2] {8, 4}; 
		V = new int[2] {3, -5}; 
		break;
	case 2103:
		U = new int[2] {4, 4}; 
		V = new int[2] {1, 2}; 
		break;
	case 2104:
		U = new int[2] {-9, -10}; 
		V = new int[2] {4, -2}; 
		break;
	case 2105:
		U = new int[2] {3, -5}; 
		V = new int[2] {-1, -2}; 
		break;
	case 2106:
		U = new int[2] {10, 5}; 
		V = new int[2] {0, 4}; 
		break;
	case 2107:
		U = new int[2] {-1, 6}; 
		V = new int[2] {-7, -7}; 
		break;
	case 2108:
		U = new int[2] {0, 1}; 
		V = new int[2] {-8, 1}; 
		break;
	case 2109:
		U = new int[2] {5, -4}; 
		V = new int[2] {-4, -10}; 
		break;
	case 2110:
		U = new int[2] {2, 5}; 
		V = new int[2] {-8, -5}; 
		break;
	case 2111:
		U = new int[2] {3, 2}; 
		V = new int[2] {-8, -5}; 
		break;
	case 2112:
		U = new int[2] {8, -2}; 
		V = new int[2] {-6, -9}; 
		break;
	case 2113:
		U = new int[2] {-1, -2}; 
		V = new int[2] {7, -1}; 
		break;
	case 2114:
		U = new int[2] {-9, -6}; 
		V = new int[2] {-5, -10}; 
		break;
	case 2115:
		U = new int[2] {-8, 6}; 
		V = new int[2] {3, -6}; 
		break;
	case 2116:
		U = new int[2] {-4, 9}; 
		V = new int[2] {-10, 4}; 
		break;
	case 2117:
		U = new int[2] {7, -8}; 
		V = new int[2] {1, -5}; 
		break;
	case 2118:
		U = new int[2] {9, 2}; 
		V = new int[2] {3, -2}; 
		break;
	case 2119:
		U = new int[2] {6, -2}; 
		V = new int[2] {10, 4}; 
		break;
	case 2120:
		U = new int[2] {-10, 9}; 
		V = new int[2] {3, -2}; 
		break;
	case 2121:
		U = new int[2] {2, 10}; 
		V = new int[2] {2, 4}; 
		break;
	case 2122:
		U = new int[2] {8, 1}; 
		V = new int[2] {5, 3}; 
		break;
	case 2123:
		U = new int[2] {1, -1}; 
		V = new int[2] {-10, -1}; 
		break;
	case 2124:
		U = new int[2] {6, 4}; 
		V = new int[2] {3, -8}; 
		break;
	case 2125:
		U = new int[2] {7, -6}; 
		V = new int[2] {2, 2}; 
		break;
	case 2126:
		U = new int[2] {-7, -5}; 
		V = new int[2] {2, 2}; 
		break;
	case 2127:
		U = new int[2] {6, 0}; 
		V = new int[2] {3, 3}; 
		break;
	case 2128:
		U = new int[2] {5, -4}; 
		V = new int[2] {-10, 7}; 
		break;
	case 2129:
		U = new int[2] {6, 2}; 
		V = new int[2] {0, 2}; 
		break;
	case 2130:
		U = new int[2] {-2, -4}; 
		V = new int[2] {-3, -2}; 
		break;
	case 2131:
		U = new int[2] {-8, 6}; 
		V = new int[2] {-4, 2}; 
		break;
	case 2132:
		U = new int[2] {-8, -7}; 
		V = new int[2] {-8, 8}; 
		break;
	case 2133:
		U = new int[2] {7, -5}; 
		V = new int[2] {10, 10}; 
		break;
	case 2134:
		U = new int[2] {0, -5}; 
		V = new int[2] {8, 7}; 
		break;
	case 2135:
		U = new int[2] {-9, 7}; 
		V = new int[2] {4, -8}; 
		break;
	case 2136:
		U = new int[2] {-1, -6}; 
		V = new int[2] {-10, 1}; 
		break;
	case 2137:
		U = new int[2] {7, -5}; 
		V = new int[2] {10, -5}; 
		break;
	case 2138:
		U = new int[2] {10, 1}; 
		V = new int[2] {8, -3}; 
		break;
	case 2139:
		U = new int[2] {-9, 9}; 
		V = new int[2] {-4, -7}; 
		break;
	case 2140:
		U = new int[2] {-10, -2}; 
		V = new int[2] {3, -1}; 
		break;
	case 2141:
		U = new int[2] {3, 7}; 
		V = new int[2] {10, -6}; 
		break;
	case 2142:
		U = new int[2] {-5, -7}; 
		V = new int[2] {9, -7}; 
		break;
	case 2143:
		U = new int[2] {-1, -3}; 
		V = new int[2] {9, -6}; 
		break;
	case 2144:
		U = new int[2] {-8, 5}; 
		V = new int[2] {-8, 6}; 
		break;
	case 2145:
		U = new int[2] {-5, -4}; 
		V = new int[2] {2, 4}; 
		break;
	case 2146:
		U = new int[2] {4, -1}; 
		V = new int[2] {2, 1}; 
		break;
	case 2147:
		U = new int[2] {9, -4}; 
		V = new int[2] {7, 1}; 
		break;
	case 2148:
		U = new int[2] {-4, -6}; 
		V = new int[2] {5, -7}; 
		break;
	case 2149:
		U = new int[2] {0, 0}; 
		V = new int[2] {-2, -2}; 
		break;
	case 2150:
		U = new int[2] {8, -8}; 
		V = new int[2] {7, 9}; 
		break;
	case 2151:
		U = new int[2] {-8, 5}; 
		V = new int[2] {3, 10}; 
		break;
	case 2152:
		U = new int[2] {7, -5}; 
		V = new int[2] {5, -4}; 
		break;
	case 2153:
		U = new int[2] {-8, -6}; 
		V = new int[2] {8, 2}; 
		break;
	case 2154:
		U = new int[2] {-4, -10}; 
		V = new int[2] {4, -4}; 
		break;
	case 2155:
		U = new int[2] {-1, -10}; 
		V = new int[2] {-9, 3}; 
		break;
	case 2156:
		U = new int[2] {-4, -10}; 
		V = new int[2] {1, -4}; 
		break;
	case 2157:
		U = new int[2] {0, -2}; 
		V = new int[2] {7, 0}; 
		break;
	case 2158:
		U = new int[2] {-9, 7}; 
		V = new int[2] {8, -7}; 
		break;
	case 2159:
		U = new int[2] {10, -2}; 
		V = new int[2] {-3, -10}; 
		break;
	case 2160:
		U = new int[2] {-8, 7}; 
		V = new int[2] {-7, 0}; 
		break;
	case 2161:
		U = new int[2] {-2, -1}; 
		V = new int[2] {4, 0}; 
		break;
	case 2162:
		U = new int[2] {10, 3}; 
		V = new int[2] {-10, 6}; 
		break;
	case 2163:
		U = new int[2] {1, 0}; 
		V = new int[2] {-10, 3}; 
		break;
	case 2164:
		U = new int[2] {8, -8}; 
		V = new int[2] {-7, -6}; 
		break;
	case 2165:
		U = new int[2] {4, -9}; 
		V = new int[2] {-10, 0}; 
		break;
	case 2166:
		U = new int[2] {0, 3}; 
		V = new int[2] {8, -8}; 
		break;
	case 2167:
		U = new int[2] {-3, -2}; 
		V = new int[2] {-9, -2}; 
		break;
	case 2168:
		U = new int[2] {-6, 2}; 
		V = new int[2] {0, -2}; 
		break;
	case 2169:
		U = new int[2] {-7, -6}; 
		V = new int[2] {-8, -7}; 
		break;
	case 2170:
		U = new int[2] {10, 3}; 
		V = new int[2] {-4, -9}; 
		break;
	case 2171:
		U = new int[2] {-10, 7}; 
		V = new int[2] {-7, 10}; 
		break;
	case 2172:
		U = new int[2] {-3, 8}; 
		V = new int[2] {4, 3}; 
		break;
	case 2173:
		U = new int[2] {-4, 1}; 
		V = new int[2] {5, 8}; 
		break;
	case 2174:
		U = new int[2] {3, 5}; 
		V = new int[2] {-9, -7}; 
		break;
	case 2175:
		U = new int[2] {-7, 4}; 
		V = new int[2] {10, 8}; 
		break;
	case 2176:
		U = new int[2] {-7, -6}; 
		V = new int[2] {4, 1}; 
		break;
	case 2177:
		U = new int[2] {-2, 9}; 
		V = new int[2] {-6, -9}; 
		break;
	case 2178:
		U = new int[2] {-7, -4}; 
		V = new int[2] {-5, -1}; 
		break;
	case 2179:
		U = new int[2] {1, -6}; 
		V = new int[2] {1, 5}; 
		break;
	case 2180:
		U = new int[2] {-6, -6}; 
		V = new int[2] {-2, -4}; 
		break;
	case 2181:
		U = new int[2] {0, -7}; 
		V = new int[2] {4, -6}; 
		break;
	case 2182:
		U = new int[2] {1, -7}; 
		V = new int[2] {-9, 2}; 
		break;
	case 2183:
		U = new int[2] {-5, 0}; 
		V = new int[2] {2, 1}; 
		break;
	case 2184:
		U = new int[2] {7, -6}; 
		V = new int[2] {3, -8}; 
		break;
	case 2185:
		U = new int[2] {6, 9}; 
		V = new int[2] {-2, -8}; 
		break;
	case 2186:
		U = new int[2] {10, -10}; 
		V = new int[2] {-6, -4}; 
		break;
	case 2187:
		U = new int[2] {-7, -3}; 
		V = new int[2] {-1, -4}; 
		break;
	case 2188:
		U = new int[2] {-1, -5}; 
		V = new int[2] {0, -2}; 
		break;
	case 2189:
		U = new int[2] {-3, 1}; 
		V = new int[2] {-3, -2}; 
		break;
	case 2190:
		U = new int[2] {-7, -9}; 
		V = new int[2] {-1, 10}; 
		break;
	case 2191:
		U = new int[2] {-10, -5}; 
		V = new int[2] {0, 5}; 
		break;
	case 2192:
		U = new int[2] {-7, 10}; 
		V = new int[2] {-4, 7}; 
		break;
	case 2193:
		U = new int[2] {6, 0}; 
		V = new int[2] {4, -9}; 
		break;
	case 2194:
		U = new int[2] {3, 6}; 
		V = new int[2] {7, -9}; 
		break;
	case 2195:
		U = new int[2] {8, 6}; 
		V = new int[2] {9, 6}; 
		break;
	case 2196:
		U = new int[2] {8, 3}; 
		V = new int[2] {-10, -4}; 
		break;
	case 2197:
		U = new int[2] {-2, -1}; 
		V = new int[2] {-4, 7}; 
		break;
	case 2198:
		U = new int[2] {4, -6}; 
		V = new int[2] {1, 5}; 
		break;
	case 2199:
		U = new int[2] {-10, -7}; 
		V = new int[2] {-4, 7}; 
		break;
	case 2200:
		U = new int[2] {-7, 10}; 
		V = new int[2] {1, -1}; 
		break;
	case 2201:
		U = new int[2] {5, 4}; 
		V = new int[2] {-1, 3}; 
		break;
	case 2202:
		U = new int[2] {-9, -10}; 
		V = new int[2] {5, 3}; 
		break;
	case 2203:
		U = new int[2] {8, 3}; 
		V = new int[2] {-1, 8}; 
		break;
	case 2204:
		U = new int[2] {-5, -1}; 
		V = new int[2] {8, 5}; 
		break;
	case 2205:
		U = new int[2] {-2, 2}; 
		V = new int[2] {7, 4}; 
		break;
	case 2206:
		U = new int[2] {5, -8}; 
		V = new int[2] {4, -8}; 
		break;
	case 2207:
		U = new int[2] {-1, 3}; 
		V = new int[2] {9, -4}; 
		break;
	case 2208:
		U = new int[2] {-9, -4}; 
		V = new int[2] {-5, 8}; 
		break;
	case 2209:
		U = new int[2] {6, 2}; 
		V = new int[2] {8, -10}; 
		break;
	case 2210:
		U = new int[2] {-10, -2}; 
		V = new int[2] {8, 10}; 
		break;
	case 2211:
		U = new int[2] {1, -7}; 
		V = new int[2] {6, -1}; 
		break;
	case 2212:
		U = new int[2] {-7, -10}; 
		V = new int[2] {-1, 0}; 
		break;
	case 2213:
		U = new int[2] {-2, 2}; 
		V = new int[2] {-4, 8}; 
		break;
	case 2214:
		U = new int[2] {9, 6}; 
		V = new int[2] {9, -4}; 
		break;
	case 2215:
		U = new int[2] {1, -5}; 
		V = new int[2] {3, 4}; 
		break;
	case 2216:
		U = new int[2] {-5, 1}; 
		V = new int[2] {8, -5}; 
		break;
	case 2217:
		U = new int[2] {-7, -6}; 
		V = new int[2] {3, 7}; 
		break;
	case 2218:
		U = new int[2] {-10, -8}; 
		V = new int[2] {7, 1}; 
		break;
	case 2219:
		U = new int[2] {2, -8}; 
		V = new int[2] {10, -2}; 
		break;
	case 2220:
		U = new int[2] {-8, -7}; 
		V = new int[2] {-1, 7}; 
		break;
	case 2221:
		U = new int[2] {-5, 9}; 
		V = new int[2] {9, 5}; 
		break;
	case 2222:
		U = new int[2] {5, 7}; 
		V = new int[2] {-7, -9}; 
		break;
	case 2223:
		U = new int[2] {-10, 6}; 
		V = new int[2] {3, -3}; 
		break;
	case 2224:
		U = new int[2] {10, 5}; 
		V = new int[2] {8, 1}; 
		break;
	case 2225:
		U = new int[2] {0, -10}; 
		V = new int[2] {-10, -7}; 
		break;
	case 2226:
		U = new int[2] {10, -9}; 
		V = new int[2] {-3, -3}; 
		break;
	case 2227:
		U = new int[2] {6, 5}; 
		V = new int[2] {10, 0}; 
		break;
	case 2228:
		U = new int[2] {2, 1}; 
		V = new int[2] {-6, 7}; 
		break;
	case 2229:
		U = new int[2] {1, 9}; 
		V = new int[2] {-5, -9}; 
		break;
	case 2230:
		U = new int[2] {-5, -3}; 
		V = new int[2] {-10, 0}; 
		break;
	case 2231:
		U = new int[2] {-6, 8}; 
		V = new int[2] {-2, -10}; 
		break;
	case 2232:
		U = new int[2] {-4, -7}; 
		V = new int[2] {2, -10}; 
		break;
	case 2233:
		U = new int[2] {-10, 3}; 
		V = new int[2] {5, 6}; 
		break;
	case 2234:
		U = new int[2] {9, -1}; 
		V = new int[2] {-8, -1}; 
		break;
	case 2235:
		U = new int[2] {-6, -8}; 
		V = new int[2] {8, -7}; 
		break;
	case 2236:
		U = new int[2] {4, 4}; 
		V = new int[2] {-3, 0}; 
		break;
	case 2237:
		U = new int[2] {5, 6}; 
		V = new int[2] {0, -10}; 
		break;
	case 2238:
		U = new int[2] {-3, 9}; 
		V = new int[2] {0, -8}; 
		break;
	case 2239:
		U = new int[2] {2, 3}; 
		V = new int[2] {4, 0}; 
		break;
	case 2240:
		U = new int[2] {-8, -5}; 
		V = new int[2] {9, -10}; 
		break;
	case 2241:
		U = new int[2] {-8, 8}; 
		V = new int[2] {-2, 5}; 
		break;
	case 2242:
		U = new int[2] {6, -5}; 
		V = new int[2] {-9, -8}; 
		break;
	case 2243:
		U = new int[2] {9, 10}; 
		V = new int[2] {-7, -3}; 
		break;
	case 2244:
		U = new int[2] {6, 8}; 
		V = new int[2] {4, 0}; 
		break;
	case 2245:
		U = new int[2] {1, 6}; 
		V = new int[2] {-10, -6}; 
		break;
	case 2246:
		U = new int[2] {-8, 3}; 
		V = new int[2] {-6, -3}; 
		break;
	case 2247:
		U = new int[2] {-5, -4}; 
		V = new int[2] {-9, 7}; 
		break;
	case 2248:
		U = new int[2] {-2, 1}; 
		V = new int[2] {6, 0}; 
		break;
	case 2249:
		U = new int[2] {-5, 8}; 
		V = new int[2] {7, 6}; 
		break;
	case 2250:
		U = new int[2] {5, -2}; 
		V = new int[2] {-1, -7}; 
		break;
	case 2251:
		U = new int[2] {-10, -2}; 
		V = new int[2] {-5, 8}; 
		break;
	case 2252:
		U = new int[2] {-8, -10}; 
		V = new int[2] {8, -10}; 
		break;
	case 2253:
		U = new int[2] {4, -1}; 
		V = new int[2] {0, -9}; 
		break;
	case 2254:
		U = new int[2] {-4, -1}; 
		V = new int[2] {3, 6}; 
		break;
	case 2255:
		U = new int[2] {6, -1}; 
		V = new int[2] {-8, 2}; 
		break;
	case 2256:
		U = new int[2] {6, -7}; 
		V = new int[2] {0, 9}; 
		break;
	case 2257:
		U = new int[2] {2, -4}; 
		V = new int[2] {-1, -5}; 
		break;
	case 2258:
		U = new int[2] {-6, -5}; 
		V = new int[2] {-4, -2}; 
		break;
	case 2259:
		U = new int[2] {1, -3}; 
		V = new int[2] {-6, -3}; 
		break;
	case 2260:
		U = new int[2] {-4, -7}; 
		V = new int[2] {4, 0}; 
		break;
	case 2261:
		U = new int[2] {0, 7}; 
		V = new int[2] {0, 5}; 
		break;
	case 2262:
		U = new int[2] {-8, -2}; 
		V = new int[2] {-3, -2}; 
		break;
	case 2263:
		U = new int[2] {-7, 4}; 
		V = new int[2] {-3, 10}; 
		break;
	case 2264:
		U = new int[2] {-10, -8}; 
		V = new int[2] {-9, 7}; 
		break;
	case 2265:
		U = new int[2] {0, 3}; 
		V = new int[2] {8, 8}; 
		break;
	case 2266:
		U = new int[2] {-10, 2}; 
		V = new int[2] {-4, 9}; 
		break;
	case 2267:
		U = new int[2] {0, -10}; 
		V = new int[2] {-2, 0}; 
		break;
	case 2268:
		U = new int[2] {0, 6}; 
		V = new int[2] {-5, -2}; 
		break;
	case 2269:
		U = new int[2] {0, -1}; 
		V = new int[2] {-8, -10}; 
		break;
	case 2270:
		U = new int[2] {4, 9}; 
		V = new int[2] {3, 9}; 
		break;
	case 2271:
		U = new int[2] {8, -1}; 
		V = new int[2] {4, 7}; 
		break;
	case 2272:
		U = new int[2] {-8, 0}; 
		V = new int[2] {6, 0}; 
		break;
	case 2273:
		U = new int[2] {4, 6}; 
		V = new int[2] {-2, 2}; 
		break;
	case 2274:
		U = new int[2] {5, 0}; 
		V = new int[2] {-9, -3}; 
		break;
	case 2275:
		U = new int[2] {3, -2}; 
		V = new int[2] {-1, -3}; 
		break;
	case 2276:
		U = new int[2] {7, 3}; 
		V = new int[2] {5, 4}; 
		break;
	case 2277:
		U = new int[2] {6, -3}; 
		V = new int[2] {6, -2}; 
		break;
	case 2278:
		U = new int[2] {5, 6}; 
		V = new int[2] {-2, -5}; 
		break;
	case 2279:
		U = new int[2] {5, 7}; 
		V = new int[2] {-6, 0}; 
		break;
	case 2280:
		U = new int[2] {10, -4}; 
		V = new int[2] {0, 8}; 
		break;
	case 2281:
		U = new int[2] {3, -10}; 
		V = new int[2] {-1, 1}; 
		break;
	case 2282:
		U = new int[2] {-10, 9}; 
		V = new int[2] {5, 7}; 
		break;
	case 2283:
		U = new int[2] {-8, -10}; 
		V = new int[2] {-3, -1}; 
		break;
	case 2284:
		U = new int[2] {-9, -4}; 
		V = new int[2] {2, 2}; 
		break;
	case 2285:
		U = new int[2] {-2, 6}; 
		V = new int[2] {-8, 0}; 
		break;
	case 2286:
		U = new int[2] {-2, 8}; 
		V = new int[2] {0, -10}; 
		break;
	case 2287:
		U = new int[2] {-9, -3}; 
		V = new int[2] {-10, -2}; 
		break;
	case 2288:
		U = new int[2] {5, -10}; 
		V = new int[2] {-1, 1}; 
		break;
	case 2289:
		U = new int[2] {1, 3}; 
		V = new int[2] {0, -1}; 
		break;
	case 2290:
		U = new int[2] {7, 9}; 
		V = new int[2] {-1, -4}; 
		break;
	case 2291:
		U = new int[2] {-1, 0}; 
		V = new int[2] {4, -3}; 
		break;
	case 2292:
		U = new int[2] {0, 8}; 
		V = new int[2] {-4, -2}; 
		break;
	case 2293:
		U = new int[2] {6, -8}; 
		V = new int[2] {4, 9}; 
		break;
	case 2294:
		U = new int[2] {-7, -8}; 
		V = new int[2] {6, 8}; 
		break;
	case 2295:
		U = new int[2] {6, -4}; 
		V = new int[2] {9, -4}; 
		break;
	case 2296:
		U = new int[2] {4, -10}; 
		V = new int[2] {-2, -3}; 
		break;
	case 2297:
		U = new int[2] {3, -2}; 
		V = new int[2] {-2, -5}; 
		break;
	case 2298:
		U = new int[2] {-5, -9}; 
		V = new int[2] {1, -9}; 
		break;
	case 2299:
		U = new int[2] {-7, 0}; 
		V = new int[2] {-3, -5}; 
		break;
	case 2300:
		U = new int[2] {-10, 9}; 
		V = new int[2] {1, 6}; 
		break;
	case 2301:
		U = new int[2] {-8, 1}; 
		V = new int[2] {10, -6}; 
		break;
	case 2302:
		U = new int[2] {-9, 0}; 
		V = new int[2] {-1, -2}; 
		break;
	case 2303:
		U = new int[2] {9, 2}; 
		V = new int[2] {1, -6}; 
		break;
	case 2304:
		U = new int[2] {-8, 10}; 
		V = new int[2] {3, 3}; 
		break;
	case 2305:
		U = new int[2] {-8, 6}; 
		V = new int[2] {-7, -5}; 
		break;
	case 2306:
		U = new int[2] {-10, 6}; 
		V = new int[2] {0, 2}; 
		break;
	case 2307:
		U = new int[2] {-4, 3}; 
		V = new int[2] {-6, -8}; 
		break;
	case 2308:
		U = new int[2] {-4, -7}; 
		V = new int[2] {-8, 7}; 
		break;
	case 2309:
		U = new int[2] {2, 9}; 
		V = new int[2] {3, 0}; 
		break;
	case 2310:
		U = new int[2] {3, 0}; 
		V = new int[2] {9, -4}; 
		break;
	case 2311:
		U = new int[2] {1, 3}; 
		V = new int[2] {-2, 6}; 
		break;
	case 2312:
		U = new int[2] {-9, -1}; 
		V = new int[2] {-8, 6}; 
		break;
	case 2313:
		U = new int[2] {-8, -9}; 
		V = new int[2] {10, 1}; 
		break;
	case 2314:
		U = new int[2] {4, -2}; 
		V = new int[2] {-6, -9}; 
		break;
	case 2315:
		U = new int[2] {-8, -1}; 
		V = new int[2] {0, -10}; 
		break;
	case 2316:
		U = new int[2] {6, -4}; 
		V = new int[2] {3, -8}; 
		break;
	case 2317:
		U = new int[2] {-7, 6}; 
		V = new int[2] {10, 0}; 
		break;
	case 2318:
		U = new int[2] {9, -6}; 
		V = new int[2] {2, 4}; 
		break;
	case 2319:
		U = new int[2] {-1, 2}; 
		V = new int[2] {-4, 6}; 
		break;
	case 2320:
		U = new int[2] {-6, -6}; 
		V = new int[2] {5, -9}; 
		break;
	case 2321:
		U = new int[2] {6, 9}; 
		V = new int[2] {4, -4}; 
		break;
	case 2322:
		U = new int[2] {-9, -6}; 
		V = new int[2] {0, 5}; 
		break;
	case 2323:
		U = new int[2] {6, -10}; 
		V = new int[2] {4, 0}; 
		break;
	case 2324:
		U = new int[2] {-1, -10}; 
		V = new int[2] {6, -5}; 
		break;
	case 2325:
		U = new int[2] {1, 10}; 
		V = new int[2] {-6, -8}; 
		break;
	case 2326:
		U = new int[2] {-4, 0}; 
		V = new int[2] {-7, 4}; 
		break;
	case 2327:
		U = new int[2] {-9, -6}; 
		V = new int[2] {10, -2}; 
		break;
	case 2328:
		U = new int[2] {-9, 9}; 
		V = new int[2] {-10, 9}; 
		break;
	case 2329:
		U = new int[2] {1, 5}; 
		V = new int[2] {-8, 7}; 
		break;
	case 2330:
		U = new int[2] {0, 3}; 
		V = new int[2] {7, 5}; 
		break;
	case 2331:
		U = new int[2] {-4, 9}; 
		V = new int[2] {-9, 4}; 
		break;
	case 2332:
		U = new int[2] {3, 10}; 
		V = new int[2] {-8, 5}; 
		break;
	case 2333:
		U = new int[2] {3, 3}; 
		V = new int[2] {-2, -8}; 
		break;
	case 2334:
		U = new int[2] {9, -4}; 
		V = new int[2] {-1, 3}; 
		break;
	case 2335:
		U = new int[2] {5, -1}; 
		V = new int[2] {4, -4}; 
		break;
	case 2336:
		U = new int[2] {6, 8}; 
		V = new int[2] {-6, 2}; 
		break;
	case 2337:
		U = new int[2] {9, 3}; 
		V = new int[2] {-10, -8}; 
		break;
	case 2338:
		U = new int[2] {1, -7}; 
		V = new int[2] {-6, -8}; 
		break;
	case 2339:
		U = new int[2] {9, 10}; 
		V = new int[2] {2, -9}; 
		break;
	case 2340:
		U = new int[2] {10, -4}; 
		V = new int[2] {2, 9}; 
		break;
	case 2341:
		U = new int[2] {-9, 5}; 
		V = new int[2] {6, -9}; 
		break;
	case 2342:
		U = new int[2] {-4, 2}; 
		V = new int[2] {-3, -10}; 
		break;
	case 2343:
		U = new int[2] {3, -2}; 
		V = new int[2] {10, -6}; 
		break;
	case 2344:
		U = new int[2] {3, -1}; 
		V = new int[2] {-2, 3}; 
		break;
	case 2345:
		U = new int[2] {-3, 0}; 
		V = new int[2] {3, 3}; 
		break;
	case 2346:
		U = new int[2] {-4, -2}; 
		V = new int[2] {-7, 6}; 
		break;
	case 2347:
		U = new int[2] {6, -3}; 
		V = new int[2] {0, -4}; 
		break;
	case 2348:
		U = new int[2] {9, -10}; 
		V = new int[2] {-1, 8}; 
		break;
	case 2349:
		U = new int[2] {0, 0}; 
		V = new int[2] {3, 9}; 
		break;
	case 2350:
		U = new int[2] {-3, -7}; 
		V = new int[2] {1, 4}; 
		break;
	case 2351:
		U = new int[2] {1, -5}; 
		V = new int[2] {-4, -4}; 
		break;
	case 2352:
		U = new int[2] {-6, 9}; 
		V = new int[2] {-2, 7}; 
		break;
	case 2353:
		U = new int[2] {8, -6}; 
		V = new int[2] {0, -4}; 
		break;
	case 2354:
		U = new int[2] {0, -1}; 
		V = new int[2] {10, -2}; 
		break;
	case 2355:
		U = new int[2] {-6, 8}; 
		V = new int[2] {0, -2}; 
		break;
	case 2356:
		U = new int[2] {-10, 10}; 
		V = new int[2] {-6, -7}; 
		break;
	case 2357:
		U = new int[2] {-7, 4}; 
		V = new int[2] {5, 9}; 
		break;
	case 2358:
		U = new int[2] {10, 6}; 
		V = new int[2] {1, 0}; 
		break;
	case 2359:
		U = new int[2] {-10, 8}; 
		V = new int[2] {-4, 0}; 
		break;
	case 2360:
		U = new int[2] {6, 1}; 
		V = new int[2] {10, -10}; 
		break;
	case 2361:
		U = new int[2] {4, -3}; 
		V = new int[2] {7, 4}; 
		break;
	case 2362:
		U = new int[2] {2, 4}; 
		V = new int[2] {-3, 6}; 
		break;
	case 2363:
		U = new int[2] {8, 7}; 
		V = new int[2] {-5, 6}; 
		break;
	case 2364:
		U = new int[2] {-4, 6}; 
		V = new int[2] {10, 10}; 
		break;
	case 2365:
		U = new int[2] {-10, -9}; 
		V = new int[2] {6, 5}; 
		break;
	case 2366:
		U = new int[2] {-6, -10}; 
		V = new int[2] {9, -2}; 
		break;
	case 2367:
		U = new int[2] {9, -7}; 
		V = new int[2] {-10, -2}; 
		break;
	case 2368:
		U = new int[2] {-7, -9}; 
		V = new int[2] {7, 10}; 
		break;
	case 2369:
		U = new int[2] {2, -7}; 
		V = new int[2] {-7, 10}; 
		break;
	case 2370:
		U = new int[2] {7, -4}; 
		V = new int[2] {-6, -10}; 
		break;
	case 2371:
		U = new int[2] {5, 10}; 
		V = new int[2] {-1, 5}; 
		break;
	case 2372:
		U = new int[2] {-6, 9}; 
		V = new int[2] {2, -8}; 
		break;
	case 2373:
		U = new int[2] {4, 6}; 
		V = new int[2] {-8, 8}; 
		break;
	case 2374:
		U = new int[2] {5, -3}; 
		V = new int[2] {-2, 9}; 
		break;
	case 2375:
		U = new int[2] {-9, -3}; 
		V = new int[2] {-5, 8}; 
		break;
	case 2376:
		U = new int[2] {-7, 2}; 
		V = new int[2] {-9, 7}; 
		break;
	case 2377:
		U = new int[2] {9, -4}; 
		V = new int[2] {1, 9}; 
		break;
	case 2378:
		U = new int[2] {-1, -10}; 
		V = new int[2] {8, 0}; 
		break;
	case 2379:
		U = new int[2] {10, 10}; 
		V = new int[2] {2, -6}; 
		break;
	case 2380:
		U = new int[2] {1, 0}; 
		V = new int[2] {-1, -4}; 
		break;
	case 2381:
		U = new int[2] {-8, -2}; 
		V = new int[2] {9, -6}; 
		break;
	case 2382:
		U = new int[2] {-3, -4}; 
		V = new int[2] {2, 2}; 
		break;
	case 2383:
		U = new int[2] {-4, -6}; 
		V = new int[2] {5, -9}; 
		break;
	case 2384:
		U = new int[2] {-9, 9}; 
		V = new int[2] {-6, 3}; 
		break;
	case 2385:
		U = new int[2] {8, 3}; 
		V = new int[2] {1, -7}; 
		break;
	case 2386:
		U = new int[2] {-4, 3}; 
		V = new int[2] {-6, 0}; 
		break;
	case 2387:
		U = new int[2] {-10, 10}; 
		V = new int[2] {1, 3}; 
		break;
	case 2388:
		U = new int[2] {-8, 4}; 
		V = new int[2] {-4, -6}; 
		break;
	case 2389:
		U = new int[2] {-6, -4}; 
		V = new int[2] {8, 4}; 
		break;
	case 2390:
		U = new int[2] {8, 0}; 
		V = new int[2] {-9, -2}; 
		break;
	case 2391:
		U = new int[2] {8, -9}; 
		V = new int[2] {-7, 10}; 
		break;
	case 2392:
		U = new int[2] {10, 4}; 
		V = new int[2] {4, 2}; 
		break;
	case 2393:
		U = new int[2] {1, -1}; 
		V = new int[2] {5, -3}; 
		break;
	case 2394:
		U = new int[2] {1, 8}; 
		V = new int[2] {-9, -6}; 
		break;
	case 2395:
		U = new int[2] {-9, 2}; 
		V = new int[2] {-5, 9}; 
		break;
	case 2396:
		U = new int[2] {0, -7}; 
		V = new int[2] {8, 2}; 
		break;
	case 2397:
		U = new int[2] {-5, -2}; 
		V = new int[2] {7, 5}; 
		break;
	case 2398:
		U = new int[2] {-8, 4}; 
		V = new int[2] {1, -7}; 
		break;
	case 2399:
		U = new int[2] {6, 1}; 
		V = new int[2] {2, 8}; 
		break;
	case 2400:
		U = new int[2] {-9, -10}; 
		V = new int[2] {5, -4}; 
		break;
	case 2401:
		U = new int[2] {3, -9}; 
		V = new int[2] {-10, 10}; 
		break;
	case 2402:
		U = new int[2] {-7, -5}; 
		V = new int[2] {-3, -9}; 
		break;
	case 2403:
		U = new int[2] {-8, -10}; 
		V = new int[2] {1, -7}; 
		break;
	case 2404:
		U = new int[2] {-10, 8}; 
		V = new int[2] {-7, 6}; 
		break;
	case 2405:
		U = new int[2] {9, -4}; 
		V = new int[2] {-2, -1}; 
		break;
	case 2406:
		U = new int[2] {5, 8}; 
		V = new int[2] {8, 3}; 
		break;
	case 2407:
		U = new int[2] {-3, 6}; 
		V = new int[2] {9, -9}; 
		break;
	case 2408:
		U = new int[2] {9, 8}; 
		V = new int[2] {-5, -7}; 
		break;
	case 2409:
		U = new int[2] {2, -8}; 
		V = new int[2] {1, 3}; 
		break;
	case 2410:
		U = new int[2] {-4, -4}; 
		V = new int[2] {8, 8}; 
		break;
	case 2411:
		U = new int[2] {10, -3}; 
		V = new int[2] {7, -6}; 
		break;
	case 2412:
		U = new int[2] {-10, 8}; 
		V = new int[2] {4, 7}; 
		break;
	case 2413:
		U = new int[2] {-5, -4}; 
		V = new int[2] {-5, 1}; 
		break;
	case 2414:
		U = new int[2] {-10, -8}; 
		V = new int[2] {-4, -6}; 
		break;
	case 2415:
		U = new int[2] {-8, -8}; 
		V = new int[2] {1, -10}; 
		break;
	case 2416:
		U = new int[2] {3, 0}; 
		V = new int[2] {4, 1}; 
		break;
	case 2417:
		U = new int[2] {3, 8}; 
		V = new int[2] {1, -8}; 
		break;
	case 2418:
		U = new int[2] {-9, -8}; 
		V = new int[2] {-10, 2}; 
		break;
	case 2419:
		U = new int[2] {0, 3}; 
		V = new int[2] {0, -9}; 
		break;
	case 2420:
		U = new int[2] {7, 4}; 
		V = new int[2] {9, -4}; 
		break;
	case 2421:
		U = new int[2] {-9, 5}; 
		V = new int[2] {5, -4}; 
		break;
	case 2422:
		U = new int[2] {-10, 2}; 
		V = new int[2] {3, 2}; 
		break;
	case 2423:
		U = new int[2] {3, 1}; 
		V = new int[2] {9, -1}; 
		break;
	case 2424:
		U = new int[2] {4, 6}; 
		V = new int[2] {10, 0}; 
		break;
	case 2425:
		U = new int[2] {2, 5}; 
		V = new int[2] {-3, -4}; 
		break;
	case 2426:
		U = new int[2] {-1, 7}; 
		V = new int[2] {9, 7}; 
		break;
	case 2427:
		U = new int[2] {10, -3}; 
		V = new int[2] {-2, -3}; 
		break;
	case 2428:
		U = new int[2] {-4, -9}; 
		V = new int[2] {2, -3}; 
		break;
	case 2429:
		U = new int[2] {1, 2}; 
		V = new int[2] {-1, 0}; 
		break;
	case 2430:
		U = new int[2] {7, -3}; 
		V = new int[2] {-1, -2}; 
		break;
	case 2431:
		U = new int[2] {10, -5}; 
		V = new int[2] {-9, -3}; 
		break;
	case 2432:
		U = new int[2] {-2, 10}; 
		V = new int[2] {2, 1}; 
		break;
	case 2433:
		U = new int[2] {-1, 10}; 
		V = new int[2] {7, -10}; 
		break;
	case 2434:
		U = new int[2] {-4, -9}; 
		V = new int[2] {-5, 5}; 
		break;
	case 2435:
		U = new int[2] {-5, -4}; 
		V = new int[2] {7, -10}; 
		break;
	case 2436:
		U = new int[2] {-7, -2}; 
		V = new int[2] {5, -4}; 
		break;
	case 2437:
		U = new int[2] {8, 1}; 
		V = new int[2] {-7, -4}; 
		break;
	case 2438:
		U = new int[2] {1, 5}; 
		V = new int[2] {5, 6}; 
		break;
	case 2439:
		U = new int[2] {2, -5}; 
		V = new int[2] {-2, -8}; 
		break;
	case 2440:
		U = new int[2] {-2, -3}; 
		V = new int[2] {-4, 8}; 
		break;
	case 2441:
		U = new int[2] {-7, 1}; 
		V = new int[2] {8, 7}; 
		break;
	case 2442:
		U = new int[2] {-9, 10}; 
		V = new int[2] {-1, -9}; 
		break;
	case 2443:
		U = new int[2] {7, 2}; 
		V = new int[2] {7, 0}; 
		break;
	case 2444:
		U = new int[2] {5, -4}; 
		V = new int[2] {-10, -9}; 
		break;
	case 2445:
		U = new int[2] {3, 10}; 
		V = new int[2] {9, 5}; 
		break;
	case 2446:
		U = new int[2] {-10, -4}; 
		V = new int[2] {-10, 8}; 
		break;
	case 2447:
		U = new int[2] {6, -6}; 
		V = new int[2] {-9, -8}; 
		break;
	case 2448:
		U = new int[2] {8, 1}; 
		V = new int[2] {7, 10}; 
		break;
	case 2449:
		U = new int[2] {8, 2}; 
		V = new int[2] {-10, -10}; 
		break;
	case 2450:
		U = new int[2] {-10, 3}; 
		V = new int[2] {5, -5}; 
		break;
	case 2451:
		U = new int[2] {10, 5}; 
		V = new int[2] {4, 0}; 
		break;
	case 2452:
		U = new int[2] {-6, 6}; 
		V = new int[2] {-2, -2}; 
		break;
	case 2453:
		U = new int[2] {8, 1}; 
		V = new int[2] {-7, 8}; 
		break;
	case 2454:
		U = new int[2] {7, -1}; 
		V = new int[2] {-5, 8}; 
		break;
	case 2455:
		U = new int[2] {9, -9}; 
		V = new int[2] {10, 9}; 
		break;
	case 2456:
		U = new int[2] {-6, 6}; 
		V = new int[2] {8, -9}; 
		break;
	case 2457:
		U = new int[2] {1, -2}; 
		V = new int[2] {7, -9}; 
		break;
	case 2458:
		U = new int[2] {2, 4}; 
		V = new int[2] {-7, -5}; 
		break;
	case 2459:
		U = new int[2] {1, 0}; 
		V = new int[2] {3, -9}; 
		break;
	case 2460:
		U = new int[2] {9, 4}; 
		V = new int[2] {-5, 8}; 
		break;
	case 2461:
		U = new int[2] {4, -6}; 
		V = new int[2] {-3, 6}; 
		break;
	case 2462:
		U = new int[2] {9, 3}; 
		V = new int[2] {10, 8}; 
		break;
	case 2463:
		U = new int[2] {-2, 0}; 
		V = new int[2] {-9, 8}; 
		break;
	case 2464:
		U = new int[2] {3, 6}; 
		V = new int[2] {8, -6}; 
		break;
	case 2465:
		U = new int[2] {6, -3}; 
		V = new int[2] {3, 0}; 
		break;
	case 2466:
		U = new int[2] {9, -2}; 
		V = new int[2] {-7, 9}; 
		break;
	case 2467:
		U = new int[2] {1, 0}; 
		V = new int[2] {-10, -6}; 
		break;
	case 2468:
		U = new int[2] {-10, 2}; 
		V = new int[2] {5, -8}; 
		break;
	case 2469:
		U = new int[2] {-3, 8}; 
		V = new int[2] {-4, 0}; 
		break;
	case 2470:
		U = new int[2] {-10, -10}; 
		V = new int[2] {9, -6}; 
		break;
	case 2471:
		U = new int[2] {2, -6}; 
		V = new int[2] {2, 9}; 
		break;
	case 2472:
		U = new int[2] {-4, -8}; 
		V = new int[2] {5, 1}; 
		break;
	case 2473:
		U = new int[2] {-2, 8}; 
		V = new int[2] {-10, 4}; 
		break;
	case 2474:
		U = new int[2] {4, 2}; 
		V = new int[2] {8, -3}; 
		break;
	case 2475:
		U = new int[2] {-1, 0}; 
		V = new int[2] {10, -10}; 
		break;
	case 2476:
		U = new int[2] {5, -4}; 
		V = new int[2] {6, 2}; 
		break;
	case 2477:
		U = new int[2] {-8, -9}; 
		V = new int[2] {-8, 3}; 
		break;
	case 2478:
		U = new int[2] {-1, -1}; 
		V = new int[2] {9, 0}; 
		break;
	case 2479:
		U = new int[2] {-1, 7}; 
		V = new int[2] {-9, -9}; 
		break;
	case 2480:
		U = new int[2] {1, -1}; 
		V = new int[2] {-9, 3}; 
		break;
	case 2481:
		U = new int[2] {-2, -4}; 
		V = new int[2] {0, 2}; 
		break;
	case 2482:
		U = new int[2] {3, 1}; 
		V = new int[2] {9, -1}; 
		break;
	case 2483:
		U = new int[2] {-10, -3}; 
		V = new int[2] {-2, -4}; 
		break;
	case 2484:
		U = new int[2] {-3, 8}; 
		V = new int[2] {8, 6}; 
		break;
	case 2485:
		U = new int[2] {-7, -4}; 
		V = new int[2] {-10, 8}; 
		break;
	case 2486:
		U = new int[2] {-9, -9}; 
		V = new int[2] {-7, 3}; 
		break;
	case 2487:
		U = new int[2] {-3, 6}; 
		V = new int[2] {9, -10}; 
		break;
	case 2488:
		U = new int[2] {10, 8}; 
		V = new int[2] {7, -2}; 
		break;
	case 2489:
		U = new int[2] {3, -2}; 
		V = new int[2] {4, -2}; 
		break;
	case 2490:
		U = new int[2] {-1, -1}; 
		V = new int[2] {3, 4}; 
		break;
	case 2491:
		U = new int[2] {2, 9}; 
		V = new int[2] {-9, -1}; 
		break;
	case 2492:
		U = new int[2] {10, 0}; 
		V = new int[2] {8, 4}; 
		break;
	case 2493:
		U = new int[2] {-8, 2}; 
		V = new int[2] {1, -5}; 
		break;
	case 2494:
		U = new int[2] {10, -4}; 
		V = new int[2] {-5, 4}; 
		break;
	case 2495:
		U = new int[2] {5, -10}; 
		V = new int[2] {-2, 10}; 
		break;
	case 2496:
		U = new int[2] {-1, 9}; 
		V = new int[2] {9, -4}; 
		break;
	case 2497:
		U = new int[2] {9, 2}; 
		V = new int[2] {-2, 10}; 
		break;
	case 2498:
		U = new int[2] {1, -4}; 
		V = new int[2] {4, -7}; 
		break;
	case 2499:
		U = new int[2] {10, 6}; 
		V = new int[2] {-8, 6}; 
		break;
	case 2500:
		U = new int[2] {2, 4}; 
		V = new int[2] {-6, 2}; 
		break;
	case 2501:
		U = new int[2] {-7, 6}; 
		V = new int[2] {2, 2}; 
		break;
	case 2502:
		U = new int[2] {-2, 6}; 
		V = new int[2] {-10, -1}; 
		break;
	case 2503:
		U = new int[2] {-1, 4}; 
		V = new int[2] {7, 2}; 
		break;
	case 2504:
		U = new int[2] {-6, -10}; 
		V = new int[2] {8, -7}; 
		break;
	case 2505:
		U = new int[2] {8, 10}; 
		V = new int[2] {-9, -2}; 
		break;
	case 2506:
		U = new int[2] {10, 3}; 
		V = new int[2] {-4, -4}; 
		break;
	case 2507:
		U = new int[2] {-1, -7}; 
		V = new int[2] {3, 8}; 
		break;
	case 2508:
		U = new int[2] {-9, -7}; 
		V = new int[2] {-9, -9}; 
		break;
	case 2509:
		U = new int[2] {7, -5}; 
		V = new int[2] {0, -3}; 
		break;
	case 2510:
		U = new int[2] {10, 4}; 
		V = new int[2] {-10, -6}; 
		break;
	case 2511:
		U = new int[2] {9, -1}; 
		V = new int[2] {6, -1}; 
		break;
	case 2512:
		U = new int[2] {3, 9}; 
		V = new int[2] {6, -6}; 
		break;
	case 2513:
		U = new int[2] {-2, -4}; 
		V = new int[2] {0, 4}; 
		break;
	case 2514:
		U = new int[2] {6, 7}; 
		V = new int[2] {-8, 2}; 
		break;
	case 2515:
		U = new int[2] {2, -5}; 
		V = new int[2] {4, 0}; 
		break;
	case 2516:
		U = new int[2] {1, -7}; 
		V = new int[2] {4, -7}; 
		break;
	case 2517:
		U = new int[2] {4, 5}; 
		V = new int[2] {-8, 9}; 
		break;
	case 2518:
		U = new int[2] {-4, -1}; 
		V = new int[2] {3, -4}; 
		break;
	case 2519:
		U = new int[2] {1, -9}; 
		V = new int[2] {-2, -8}; 
		break;
	case 2520:
		U = new int[2] {5, 0}; 
		V = new int[2] {-5, -6}; 
		break;
	case 2521:
		U = new int[2] {2, -9}; 
		V = new int[2] {-1, -9}; 
		break;
	case 2522:
		U = new int[2] {-4, 5}; 
		V = new int[2] {-4, 5}; 
		break;
	case 2523:
		U = new int[2] {2, -5}; 
		V = new int[2] {3, 5}; 
		break;
	case 2524:
		U = new int[2] {-10, 10}; 
		V = new int[2] {2, -8}; 
		break;
	case 2525:
		U = new int[2] {3, 4}; 
		V = new int[2] {-8, 9}; 
		break;
	case 2526:
		U = new int[2] {6, 5}; 
		V = new int[2] {-2, -9}; 
		break;
	case 2527:
		U = new int[2] {8, 2}; 
		V = new int[2] {10, -9}; 
		break;
	case 2528:
		U = new int[2] {8, -10}; 
		V = new int[2] {-6, 7}; 
		break;
	case 2529:
		U = new int[2] {0, 3}; 
		V = new int[2] {9, 8}; 
		break;
	case 2530:
		U = new int[2] {9, -9}; 
		V = new int[2] {4, 4}; 
		break;
	case 2531:
		U = new int[2] {3, 1}; 
		V = new int[2] {-8, 6}; 
		break;
	case 2532:
		U = new int[2] {-5, 9}; 
		V = new int[2] {-4, -8}; 
		break;
	case 2533:
		U = new int[2] {-8, 3}; 
		V = new int[2] {1, -10}; 
		break;
	case 2534:
		U = new int[2] {9, 4}; 
		V = new int[2] {3, 6}; 
		break;
	case 2535:
		U = new int[2] {4, 1}; 
		V = new int[2] {-6, 3}; 
		break;
	case 2536:
		U = new int[2] {-3, -4}; 
		V = new int[2] {-5, 6}; 
		break;
	case 2537:
		U = new int[2] {-6, 8}; 
		V = new int[2] {3, -2}; 
		break;
	case 2538:
		U = new int[2] {0, 6}; 
		V = new int[2] {6, -8}; 
		break;
	case 2539:
		U = new int[2] {7, 3}; 
		V = new int[2] {-9, 2}; 
		break;
	case 2540:
		U = new int[2] {6, 3}; 
		V = new int[2] {-4, 6}; 
		break;
	case 2541:
		U = new int[2] {-7, -10}; 
		V = new int[2] {-2, -3}; 
		break;
	case 2542:
		U = new int[2] {5, 10}; 
		V = new int[2] {6, 5}; 
		break;
	case 2543:
		U = new int[2] {9, -7}; 
		V = new int[2] {2, 3}; 
		break;
	case 2544:
		U = new int[2] {1, 10}; 
		V = new int[2] {0, 0}; 
		break;
	case 2545:
		U = new int[2] {-4, -5}; 
		V = new int[2] {1, -8}; 
		break;
	case 2546:
		U = new int[2] {6, -6}; 
		V = new int[2] {-2, -10}; 
		break;
	case 2547:
		U = new int[2] {5, -7}; 
		V = new int[2] {-6, 4}; 
		break;
	case 2548:
		U = new int[2] {-5, 7}; 
		V = new int[2] {-4, -10}; 
		break;
	case 2549:
		U = new int[2] {8, 10}; 
		V = new int[2] {4, 10}; 
		break;
	case 2550:
		U = new int[2] {-8, -3}; 
		V = new int[2] {7, 8}; 
		break;
	case 2551:
		U = new int[2] {8, -1}; 
		V = new int[2] {1, -1}; 
		break;
	case 2552:
		U = new int[2] {-8, 10}; 
		V = new int[2] {-6, 2}; 
		break;
	case 2553:
		U = new int[2] {-5, 2}; 
		V = new int[2] {9, 5}; 
		break;
	case 2554:
		U = new int[2] {3, -4}; 
		V = new int[2] {-8, 2}; 
		break;
	case 2555:
		U = new int[2] {-8, -1}; 
		V = new int[2] {4, -3}; 
		break;
	case 2556:
		U = new int[2] {-1, -9}; 
		V = new int[2] {-8, -5}; 
		break;
	case 2557:
		U = new int[2] {-9, 4}; 
		V = new int[2] {2, -4}; 
		break;
	case 2558:
		U = new int[2] {-4, -6}; 
		V = new int[2] {-7, -10}; 
		break;
	case 2559:
		U = new int[2] {-5, -3}; 
		V = new int[2] {-9, -2}; 
		break;
	case 2560:
		U = new int[2] {5, -7}; 
		V = new int[2] {-7, 3}; 
		break;
	case 2561:
		U = new int[2] {-2, 4}; 
		V = new int[2] {-10, -3}; 
		break;
	case 2562:
		U = new int[2] {-8, 0}; 
		V = new int[2] {-7, 8}; 
		break;
	case 2563:
		U = new int[2] {-1, 10}; 
		V = new int[2] {-10, -3}; 
		break;
	case 2564:
		U = new int[2] {6, 6}; 
		V = new int[2] {6, 7}; 
		break;
	case 2565:
		U = new int[2] {4, 4}; 
		V = new int[2] {-9, 10}; 
		break;
	case 2566:
		U = new int[2] {4, -2}; 
		V = new int[2] {2, -8}; 
		break;
	case 2567:
		U = new int[2] {-3, -1}; 
		V = new int[2] {-4, 1}; 
		break;
	case 2568:
		U = new int[2] {-5, 0}; 
		V = new int[2] {7, 6}; 
		break;
	case 2569:
		U = new int[2] {5, -1}; 
		V = new int[2] {7, 8}; 
		break;
	case 2570:
		U = new int[2] {-1, 4}; 
		V = new int[2] {-7, 5}; 
		break;
	case 2571:
		U = new int[2] {-6, -7}; 
		V = new int[2] {-9, 3}; 
		break;
	case 2572:
		U = new int[2] {-5, 3}; 
		V = new int[2] {9, -4}; 
		break;
	case 2573:
		U = new int[2] {-5, 6}; 
		V = new int[2] {3, -1}; 
		break;
	case 2574:
		U = new int[2] {8, 3}; 
		V = new int[2] {-6, 0}; 
		break;
	case 2575:
		U = new int[2] {6, 7}; 
		V = new int[2] {7, -6}; 
		break;
	case 2576:
		U = new int[2] {-10, 9}; 
		V = new int[2] {2, 9}; 
		break;
	case 2577:
		U = new int[2] {2, -9}; 
		V = new int[2] {-2, -8}; 
		break;
	case 2578:
		U = new int[2] {-9, -9}; 
		V = new int[2] {-7, 4}; 
		break;
	case 2579:
		U = new int[2] {10, -4}; 
		V = new int[2] {4, 8}; 
		break;
	case 2580:
		U = new int[2] {-2, 4}; 
		V = new int[2] {2, -9}; 
		break;
	case 2581:
		U = new int[2] {8, -1}; 
		V = new int[2] {6, 4}; 
		break;
	case 2582:
		U = new int[2] {3, 6}; 
		V = new int[2] {6, -7}; 
		break;
	case 2583:
		U = new int[2] {2, -5}; 
		V = new int[2] {2, 6}; 
		break;
	case 2584:
		U = new int[2] {-5, -8}; 
		V = new int[2] {0, 8}; 
		break;
	case 2585:
		U = new int[2] {-8, -4}; 
		V = new int[2] {-4, -3}; 
		break;
	case 2586:
		U = new int[2] {4, -7}; 
		V = new int[2] {-10, -5}; 
		break;
	case 2587:
		U = new int[2] {-8, 6}; 
		V = new int[2] {1, 7}; 
		break;
	case 2588:
		U = new int[2] {10, 2}; 
		V = new int[2] {2, 7}; 
		break;
	case 2589:
		U = new int[2] {7, 10}; 
		V = new int[2] {5, 9}; 
		break;
	case 2590:
		U = new int[2] {5, -7}; 
		V = new int[2] {8, -10}; 
		break;
	case 2591:
		U = new int[2] {-10, 4}; 
		V = new int[2] {0, -2}; 
		break;
	case 2592:
		U = new int[2] {1, 2}; 
		V = new int[2] {-5, -8}; 
		break;
	case 2593:
		U = new int[2] {-3, -8}; 
		V = new int[2] {-4, 9}; 
		break;
	case 2594:
		U = new int[2] {-5, 0}; 
		V = new int[2] {-2, -1}; 
		break;
	case 2595:
		U = new int[2] {-1, -8}; 
		V = new int[2] {6, 9}; 
		break;
	case 2596:
		U = new int[2] {1, 0}; 
		V = new int[2] {-10, -3}; 
		break;
	case 2597:
		U = new int[2] {10, 1}; 
		V = new int[2] {1, -5}; 
		break;
	case 2598:
		U = new int[2] {4, -3}; 
		V = new int[2] {2, 10}; 
		break;
	case 2599:
		U = new int[2] {-2, 2}; 
		V = new int[2] {-7, 7}; 
		break;
	case 2600:
		U = new int[2] {-7, 5}; 
		V = new int[2] {0, -3}; 
		break;
	case 2601:
		U = new int[2] {-9, 5}; 
		V = new int[2] {-8, 3}; 
		break;
	case 2602:
		U = new int[2] {6, -1}; 
		V = new int[2] {-8, 4}; 
		break;
	case 2603:
		U = new int[2] {8, -2}; 
		V = new int[2] {0, 2}; 
		break;
	case 2604:
		U = new int[2] {9, 3}; 
		V = new int[2] {-3, 4}; 
		break;
	case 2605:
		U = new int[2] {10, -10}; 
		V = new int[2] {3, -6}; 
		break;
	case 2606:
		U = new int[2] {-1, -7}; 
		V = new int[2] {1, -1}; 
		break;
	case 2607:
		U = new int[2] {4, -2}; 
		V = new int[2] {7, -5}; 
		break;
	case 2608:
		U = new int[2] {-9, 1}; 
		V = new int[2] {0, -6}; 
		break;
	case 2609:
		U = new int[2] {-4, -4}; 
		V = new int[2] {10, -2}; 
		break;
	case 2610:
		U = new int[2] {3, -3}; 
		V = new int[2] {-8, -2}; 
		break;
	case 2611:
		U = new int[2] {5, -2}; 
		V = new int[2] {3, -10}; 
		break;
	case 2612:
		U = new int[2] {-6, 4}; 
		V = new int[2] {-8, -10}; 
		break;
	case 2613:
		U = new int[2] {7, 4}; 
		V = new int[2] {-2, -2}; 
		break;
	case 2614:
		U = new int[2] {-7, 5}; 
		V = new int[2] {10, -8}; 
		break;
	case 2615:
		U = new int[2] {2, 5}; 
		V = new int[2] {1, 10}; 
		break;
	case 2616:
		U = new int[2] {6, -3}; 
		V = new int[2] {-7, 1}; 
		break;
	case 2617:
		U = new int[2] {8, -7}; 
		V = new int[2] {-10, -6}; 
		break;
	case 2618:
		U = new int[2] {-9, -3}; 
		V = new int[2] {0, 7}; 
		break;
	case 2619:
		U = new int[2] {-7, -9}; 
		V = new int[2] {1, 7}; 
		break;
	case 2620:
		U = new int[2] {4, -8}; 
		V = new int[2] {6, 1}; 
		break;
	case 2621:
		U = new int[2] {-8, -2}; 
		V = new int[2] {6, 1}; 
		break;
	case 2622:
		U = new int[2] {-5, 8}; 
		V = new int[2] {-1, -4}; 
		break;
	case 2623:
		U = new int[2] {2, -8}; 
		V = new int[2] {0, -6}; 
		break;
	case 2624:
		U = new int[2] {0, -7}; 
		V = new int[2] {7, -5}; 
		break;
	case 2625:
		U = new int[2] {3, -7}; 
		V = new int[2] {-1, 5}; 
		break;
	case 2626:
		U = new int[2] {0, 8}; 
		V = new int[2] {1, -9}; 
		break;
	case 2627:
		U = new int[2] {6, -2}; 
		V = new int[2] {0, -7}; 
		break;
	case 2628:
		U = new int[2] {1, -7}; 
		V = new int[2] {7, 7}; 
		break;
	case 2629:
		U = new int[2] {-9, -1}; 
		V = new int[2] {-5, 4}; 
		break;
	case 2630:
		U = new int[2] {-7, 7}; 
		V = new int[2] {-6, 3}; 
		break;
	case 2631:
		U = new int[2] {-2, -2}; 
		V = new int[2] {7, -7}; 
		break;
	case 2632:
		U = new int[2] {-10, 9}; 
		V = new int[2] {-6, 5}; 
		break;
	case 2633:
		U = new int[2] {6, -6}; 
		V = new int[2] {-8, 0}; 
		break;
	case 2634:
		U = new int[2] {-5, 3}; 
		V = new int[2] {6, 8}; 
		break;
	case 2635:
		U = new int[2] {0, -6}; 
		V = new int[2] {6, -10}; 
		break;
	case 2636:
		U = new int[2] {-9, -4}; 
		V = new int[2] {3, 7}; 
		break;
	case 2637:
		U = new int[2] {-2, 6}; 
		V = new int[2] {10, -9}; 
		break;
	case 2638:
		U = new int[2] {-7, -8}; 
		V = new int[2] {3, 0}; 
		break;
	case 2639:
		U = new int[2] {-10, 0}; 
		V = new int[2] {9, -3}; 
		break;
	case 2640:
		U = new int[2] {-10, 5}; 
		V = new int[2] {-6, 3}; 
		break;
	case 2641:
		U = new int[2] {-10, 3}; 
		V = new int[2] {-10, 7}; 
		break;
	case 2642:
		U = new int[2] {2, -6}; 
		V = new int[2] {6, 5}; 
		break;
	case 2643:
		U = new int[2] {-7, -6}; 
		V = new int[2] {-5, 7}; 
		break;
	case 2644:
		U = new int[2] {2, 2}; 
		V = new int[2] {5, 1}; 
		break;
	case 2645:
		U = new int[2] {-5, 3}; 
		V = new int[2] {-6, -3}; 
		break;
	case 2646:
		U = new int[2] {-6, 2}; 
		V = new int[2] {-2, 4}; 
		break;
	case 2647:
		U = new int[2] {-5, 2}; 
		V = new int[2] {6, -2}; 
		break;
	case 2648:
		U = new int[2] {7, -10}; 
		V = new int[2] {3, -4}; 
		break;
	case 2649:
		U = new int[2] {-10, 5}; 
		V = new int[2] {-3, -10}; 
		break;
	case 2650:
		U = new int[2] {8, 8}; 
		V = new int[2] {9, 9}; 
		break;
	case 2651:
		U = new int[2] {-3, -1}; 
		V = new int[2] {6, 5}; 
		break;
	case 2652:
		U = new int[2] {-4, -8}; 
		V = new int[2] {4, 8}; 
		break;
	case 2653:
		U = new int[2] {10, 10}; 
		V = new int[2] {2, -4}; 
		break;
	case 2654:
		U = new int[2] {-1, 6}; 
		V = new int[2] {6, 0}; 
		break;
	case 2655:
		U = new int[2] {0, -9}; 
		V = new int[2] {-8, 3}; 
		break;
	case 2656:
		U = new int[2] {-10, 4}; 
		V = new int[2] {10, 7}; 
		break;
	case 2657:
		U = new int[2] {8, 4}; 
		V = new int[2] {-10, -6}; 
		break;
	case 2658:
		U = new int[2] {-8, 9}; 
		V = new int[2] {8, 3}; 
		break;
	case 2659:
		U = new int[2] {3, 10}; 
		V = new int[2] {-7, -3}; 
		break;
	case 2660:
		U = new int[2] {-7, 6}; 
		V = new int[2] {-5, -10}; 
		break;
	case 2661:
		U = new int[2] {-6, 6}; 
		V = new int[2] {10, -9}; 
		break;
	case 2662:
		U = new int[2] {7, -5}; 
		V = new int[2] {-5, 3}; 
		break;
	case 2663:
		U = new int[2] {4, -4}; 
		V = new int[2] {2, 2}; 
		break;
	case 2664:
		U = new int[2] {-7, 9}; 
		V = new int[2] {0, -8}; 
		break;
	case 2665:
		U = new int[2] {3, 8}; 
		V = new int[2] {9, 3}; 
		break;
	case 2666:
		U = new int[2] {-7, 5}; 
		V = new int[2] {-1, -6}; 
		break;
	case 2667:
		U = new int[2] {10, 3}; 
		V = new int[2] {1, -2}; 
		break;
	case 2668:
		U = new int[2] {-8, 3}; 
		V = new int[2] {2, 4}; 
		break;
	case 2669:
		U = new int[2] {-10, 10}; 
		V = new int[2] {6, 7}; 
		break;
	case 2670:
		U = new int[2] {4, 2}; 
		V = new int[2] {8, 1}; 
		break;
	case 2671:
		U = new int[2] {-3, -1}; 
		V = new int[2] {-1, 7}; 
		break;
	case 2672:
		U = new int[2] {-3, -2}; 
		V = new int[2] {3, 6}; 
		break;
	case 2673:
		U = new int[2] {1, -3}; 
		V = new int[2] {7, 7}; 
		break;
	case 2674:
		U = new int[2] {1, -6}; 
		V = new int[2] {0, 2}; 
		break;
	case 2675:
		U = new int[2] {4, 7}; 
		V = new int[2] {-1, -5}; 
		break;
	case 2676:
		U = new int[2] {-10, 10}; 
		V = new int[2] {1, 7}; 
		break;
	case 2677:
		U = new int[2] {-7, -5}; 
		V = new int[2] {-6, -10}; 
		break;
	case 2678:
		U = new int[2] {10, 4}; 
		V = new int[2] {-3, 4}; 
		break;
	case 2679:
		U = new int[2] {-6, 10}; 
		V = new int[2] {-4, -9}; 
		break;
	case 2680:
		U = new int[2] {-10, 9}; 
		V = new int[2] {5, 8}; 
		break;
	case 2681:
		U = new int[2] {-2, 10}; 
		V = new int[2] {-9, 4}; 
		break;
	case 2682:
		U = new int[2] {-2, -8}; 
		V = new int[2] {-8, -7}; 
		break;
	case 2683:
		U = new int[2] {8, 4}; 
		V = new int[2] {7, -7}; 
		break;
	case 2684:
		U = new int[2] {-6, 6}; 
		V = new int[2] {7, -7}; 
		break;
	case 2685:
		U = new int[2] {2, -5}; 
		V = new int[2] {-10, -8}; 
		break;
	case 2686:
		U = new int[2] {0, 0}; 
		V = new int[2] {-7, 7}; 
		break;
	case 2687:
		U = new int[2] {6, -6}; 
		V = new int[2] {-10, 9}; 
		break;
	case 2688:
		U = new int[2] {3, -8}; 
		V = new int[2] {-8, 9}; 
		break;
	case 2689:
		U = new int[2] {10, -2}; 
		V = new int[2] {10, 8}; 
		break;
	case 2690:
		U = new int[2] {-2, 4}; 
		V = new int[2] {3, 3}; 
		break;
	case 2691:
		U = new int[2] {-2, 3}; 
		V = new int[2] {-2, 6}; 
		break;
	case 2692:
		U = new int[2] {-7, -1}; 
		V = new int[2] {5, 9}; 
		break;
	case 2693:
		U = new int[2] {5, 3}; 
		V = new int[2] {-6, -7}; 
		break;
	case 2694:
		U = new int[2] {-9, 9}; 
		V = new int[2] {7, 8}; 
		break;
	case 2695:
		U = new int[2] {9, -8}; 
		V = new int[2] {6, -2}; 
		break;
	case 2696:
		U = new int[2] {4, -6}; 
		V = new int[2] {4, 0}; 
		break;
	case 2697:
		U = new int[2] {-1, -8}; 
		V = new int[2] {-10, 0}; 
		break;
	case 2698:
		U = new int[2] {6, -10}; 
		V = new int[2] {6, 2}; 
		break;
	case 2699:
		U = new int[2] {9, -7}; 
		V = new int[2] {-6, 8}; 
		break;
	case 2700:
		U = new int[2] {-1, -4}; 
		V = new int[2] {4, -8}; 
		break;
	case 2701:
		U = new int[2] {9, 0}; 
		V = new int[2] {3, -3}; 
		break;
	case 2702:
		U = new int[2] {0, 9}; 
		V = new int[2] {5, -8}; 
		break;
	case 2703:
		U = new int[2] {-9, -3}; 
		V = new int[2] {-8, -10}; 
		break;
	case 2704:
		U = new int[2] {6, -4}; 
		V = new int[2] {6, -4}; 
		break;
	case 2705:
		U = new int[2] {2, -3}; 
		V = new int[2] {5, -10}; 
		break;
	case 2706:
		U = new int[2] {4, 0}; 
		V = new int[2] {7, -4}; 
		break;
	case 2707:
		U = new int[2] {-6, 5}; 
		V = new int[2] {8, 9}; 
		break;
	case 2708:
		U = new int[2] {6, -3}; 
		V = new int[2] {-5, 1}; 
		break;
	case 2709:
		U = new int[2] {-1, -9}; 
		V = new int[2] {-1, 8}; 
		break;
	case 2710:
		U = new int[2] {-2, -7}; 
		V = new int[2] {10, -8}; 
		break;
	case 2711:
		U = new int[2] {4, -5}; 
		V = new int[2] {-8, 1}; 
		break;
	case 2712:
		U = new int[2] {1, 0}; 
		V = new int[2] {-8, -3}; 
		break;
	case 2713:
		U = new int[2] {0, 6}; 
		V = new int[2] {-9, 4}; 
		break;
	case 2714:
		U = new int[2] {0, -9}; 
		V = new int[2] {-2, -3}; 
		break;
	case 2715:
		U = new int[2] {-9, 9}; 
		V = new int[2] {-10, -8}; 
		break;
	case 2716:
		U = new int[2] {10, 4}; 
		V = new int[2] {-6, 9}; 
		break;
	case 2717:
		U = new int[2] {6, -6}; 
		V = new int[2] {7, -3}; 
		break;
	case 2718:
		U = new int[2] {10, 6}; 
		V = new int[2] {0, 6}; 
		break;
	case 2719:
		U = new int[2] {-3, -8}; 
		V = new int[2] {8, -9}; 
		break;
	case 2720:
		U = new int[2] {1, -5}; 
		V = new int[2] {-8, -5}; 
		break;
	case 2721:
		U = new int[2] {3, 8}; 
		V = new int[2] {10, 3}; 
		break;
	case 2722:
		U = new int[2] {-2, 7}; 
		V = new int[2] {7, -1}; 
		break;
	case 2723:
		U = new int[2] {-4, -1}; 
		V = new int[2] {-6, 8}; 
		break;
	case 2724:
		U = new int[2] {1, -10}; 
		V = new int[2] {-4, -3}; 
		break;
	case 2725:
		U = new int[2] {8, 6}; 
		V = new int[2] {8, -5}; 
		break;
	case 2726:
		U = new int[2] {4, -4}; 
		V = new int[2] {5, 3}; 
		break;
	case 2727:
		U = new int[2] {-10, -5}; 
		V = new int[2] {-8, 1}; 
		break;
	case 2728:
		U = new int[2] {4, -2}; 
		V = new int[2] {-4, -4}; 
		break;
	case 2729:
		U = new int[2] {2, -10}; 
		V = new int[2] {-10, 8}; 
		break;
	case 2730:
		U = new int[2] {1, 2}; 
		V = new int[2] {-4, -4}; 
		break;
	case 2731:
		U = new int[2] {5, 7}; 
		V = new int[2] {-10, 9}; 
		break;
	case 2732:
		U = new int[2] {0, -1}; 
		V = new int[2] {8, 4}; 
		break;
	case 2733:
		U = new int[2] {3, -10}; 
		V = new int[2] {2, 5}; 
		break;
	case 2734:
		U = new int[2] {8, 7}; 
		V = new int[2] {-6, 1}; 
		break;
	case 2735:
		U = new int[2] {10, -9}; 
		V = new int[2] {8, -5}; 
		break;
	case 2736:
		U = new int[2] {-4, -2}; 
		V = new int[2] {-9, 8}; 
		break;
	case 2737:
		U = new int[2] {10, 1}; 
		V = new int[2] {-8, 5}; 
		break;
	case 2738:
		U = new int[2] {-6, -5}; 
		V = new int[2] {2, -4}; 
		break;
	case 2739:
		U = new int[2] {-2, -2}; 
		V = new int[2] {2, -6}; 
		break;
	case 2740:
		U = new int[2] {10, -4}; 
		V = new int[2] {-10, -7}; 
		break;
	case 2741:
		U = new int[2] {8, 0}; 
		V = new int[2] {1, -1}; 
		break;
	case 2742:
		U = new int[2] {-5, 8}; 
		V = new int[2] {9, -2}; 
		break;
	case 2743:
		U = new int[2] {4, 2}; 
		V = new int[2] {-6, 9}; 
		break;
	case 2744:
		U = new int[2] {9, -1}; 
		V = new int[2] {10, -1}; 
		break;
	case 2745:
		U = new int[2] {-10, -6}; 
		V = new int[2] {-7, 6}; 
		break;
	case 2746:
		U = new int[2] {-1, 6}; 
		V = new int[2] {5, 8}; 
		break;
	case 2747:
		U = new int[2] {-5, 1}; 
		V = new int[2] {-1, -6}; 
		break;
	case 2748:
		U = new int[2] {7, -10}; 
		V = new int[2] {10, -10}; 
		break;
	case 2749:
		U = new int[2] {9, 6}; 
		V = new int[2] {1, 1}; 
		break;
	case 2750:
		U = new int[2] {-9, 3}; 
		V = new int[2] {5, -3}; 
		break;
	case 2751:
		U = new int[2] {8, -7}; 
		V = new int[2] {-3, -8}; 
		break;
	case 2752:
		U = new int[2] {6, 10}; 
		V = new int[2] {1, 2}; 
		break;
	case 2753:
		U = new int[2] {-7, -8}; 
		V = new int[2] {3, 8}; 
		break;
	case 2754:
		U = new int[2] {6, -2}; 
		V = new int[2] {-4, -7}; 
		break;
	case 2755:
		U = new int[2] {2, 7}; 
		V = new int[2] {-4, -7}; 
		break;
	case 2756:
		U = new int[2] {-9, 5}; 
		V = new int[2] {-7, 9}; 
		break;
	case 2757:
		U = new int[2] {4, 7}; 
		V = new int[2] {5, -8}; 
		break;
	case 2758:
		U = new int[2] {9, 2}; 
		V = new int[2] {-7, -1}; 
		break;
	case 2759:
		U = new int[2] {4, -7}; 
		V = new int[2] {9, -9}; 
		break;
	case 2760:
		U = new int[2] {-8, 3}; 
		V = new int[2] {4, 9}; 
		break;
	case 2761:
		U = new int[2] {-10, -10}; 
		V = new int[2] {-10, 10}; 
		break;
	case 2762:
		U = new int[2] {-2, -2}; 
		V = new int[2] {9, 0}; 
		break;
	case 2763:
		U = new int[2] {-10, 8}; 
		V = new int[2] {-10, -1}; 
		break;
	case 2764:
		U = new int[2] {1, 2}; 
		V = new int[2] {3, -1}; 
		break;
	case 2765:
		U = new int[2] {9, -2}; 
		V = new int[2] {2, -1}; 
		break;
	case 2766:
		U = new int[2] {9, 3}; 
		V = new int[2] {1, 3}; 
		break;
	case 2767:
		U = new int[2] {-6, 3}; 
		V = new int[2] {-1, -7}; 
		break;
	case 2768:
		U = new int[2] {-4, -1}; 
		V = new int[2] {8, 4}; 
		break;
	case 2769:
		U = new int[2] {8, 10}; 
		V = new int[2] {4, -6}; 
		break;
	case 2770:
		U = new int[2] {-9, -3}; 
		V = new int[2] {8, 1}; 
		break;
	case 2771:
		U = new int[2] {-7, -6}; 
		V = new int[2] {-5, -3}; 
		break;
	case 2772:
		U = new int[2] {3, -6}; 
		V = new int[2] {1, 3}; 
		break;
	case 2773:
		U = new int[2] {-6, -9}; 
		V = new int[2] {1, -9}; 
		break;
	case 2774:
		U = new int[2] {-6, 2}; 
		V = new int[2] {-9, 9}; 
		break;
	case 2775:
		U = new int[2] {-6, 5}; 
		V = new int[2] {2, 6}; 
		break;
	case 2776:
		U = new int[2] {-3, 7}; 
		V = new int[2] {10, 8}; 
		break;
	case 2777:
		U = new int[2] {7, 6}; 
		V = new int[2] {-7, 7}; 
		break;
	case 2778:
		U = new int[2] {10, -5}; 
		V = new int[2] {2, 6}; 
		break;
	case 2779:
		U = new int[2] {-10, -9}; 
		V = new int[2] {4, 7}; 
		break;
	case 2780:
		U = new int[2] {-8, 3}; 
		V = new int[2] {8, -3}; 
		break;
	case 2781:
		U = new int[2] {2, 1}; 
		V = new int[2] {3, -6}; 
		break;
	case 2782:
		U = new int[2] {-3, -8}; 
		V = new int[2] {6, -2}; 
		break;
	case 2783:
		U = new int[2] {-5, -8}; 
		V = new int[2] {-9, 10}; 
		break;
	case 2784:
		U = new int[2] {3, -8}; 
		V = new int[2] {3, -4}; 
		break;
	case 2785:
		U = new int[2] {-7, 10}; 
		V = new int[2] {-2, -2}; 
		break;
	case 2786:
		U = new int[2] {-9, -1}; 
		V = new int[2] {4, -1}; 
		break;
	case 2787:
		U = new int[2] {-2, -4}; 
		V = new int[2] {-9, 4}; 
		break;
	case 2788:
		U = new int[2] {5, -9}; 
		V = new int[2] {9, 6}; 
		break;
	case 2789:
		U = new int[2] {-3, -5}; 
		V = new int[2] {-4, -7}; 
		break;
	case 2790:
		U = new int[2] {-5, -5}; 
		V = new int[2] {-6, -6}; 
		break;
	case 2791:
		U = new int[2] {5, -4}; 
		V = new int[2] {-7, 9}; 
		break;
	case 2792:
		U = new int[2] {-1, -9}; 
		V = new int[2] {-3, -7}; 
		break;
	case 2793:
		U = new int[2] {5, 2}; 
		V = new int[2] {-8, 2}; 
		break;
	case 2794:
		U = new int[2] {-7, -7}; 
		V = new int[2] {9, -1}; 
		break;
	case 2795:
		U = new int[2] {4, 2}; 
		V = new int[2] {-6, 6}; 
		break;
	case 2796:
		U = new int[2] {-10, -5}; 
		V = new int[2] {6, -4}; 
		break;
	case 2797:
		U = new int[2] {1, -9}; 
		V = new int[2] {-1, -9}; 
		break;
	case 2798:
		U = new int[2] {-4, -9}; 
		V = new int[2] {2, -3}; 
		break;
	case 2799:
		U = new int[2] {10, 1}; 
		V = new int[2] {-6, 4}; 
		break;
	case 2800:
		U = new int[2] {-7, 5}; 
		V = new int[2] {5, -10}; 
		break;
	case 2801:
		U = new int[2] {5, -7}; 
		V = new int[2] {10, -4}; 
		break;
	case 2802:
		U = new int[2] {-8, -8}; 
		V = new int[2] {-1, 10}; 
		break;
	case 2803:
		U = new int[2] {-7, -5}; 
		V = new int[2] {-6, 4}; 
		break;
	case 2804:
		U = new int[2] {0, 6}; 
		V = new int[2] {1, -1}; 
		break;
	case 2805:
		U = new int[2] {-10, 5}; 
		V = new int[2] {4, 5}; 
		break;
	case 2806:
		U = new int[2] {-2, -9}; 
		V = new int[2] {-2, 0}; 
		break;
	case 2807:
		U = new int[2] {8, 7}; 
		V = new int[2] {-5, 0}; 
		break;
	case 2808:
		U = new int[2] {-1, -6}; 
		V = new int[2] {1, -8}; 
		break;
	case 2809:
		U = new int[2] {-10, 7}; 
		V = new int[2] {-5, -3}; 
		break;
	case 2810:
		U = new int[2] {-1, -5}; 
		V = new int[2] {10, -1}; 
		break;
	case 2811:
		U = new int[2] {-4, 0}; 
		V = new int[2] {7, -6}; 
		break;
	case 2812:
		U = new int[2] {7, -10}; 
		V = new int[2] {3, 8}; 
		break;
	case 2813:
		U = new int[2] {7, 7}; 
		V = new int[2] {5, -1}; 
		break;
	case 2814:
		U = new int[2] {-1, 0}; 
		V = new int[2] {-6, 7}; 
		break;
	case 2815:
		U = new int[2] {1, 0}; 
		V = new int[2] {7, -4}; 
		break;
	case 2816:
		U = new int[2] {9, 9}; 
		V = new int[2] {-9, -2}; 
		break;
	case 2817:
		U = new int[2] {-7, -1}; 
		V = new int[2] {-1, -2}; 
		break;
	case 2818:
		U = new int[2] {6, 3}; 
		V = new int[2] {2, 7}; 
		break;
	case 2819:
		U = new int[2] {-7, 9}; 
		V = new int[2] {-3, -8}; 
		break;
	case 2820:
		U = new int[2] {-4, -5}; 
		V = new int[2] {-8, -9}; 
		break;
	case 2821:
		U = new int[2] {-4, -1}; 
		V = new int[2] {5, 10}; 
		break;
	case 2822:
		U = new int[2] {-4, 10}; 
		V = new int[2] {-9, 7}; 
		break;
	case 2823:
		U = new int[2] {-5, -3}; 
		V = new int[2] {0, -10}; 
		break;
	case 2824:
		U = new int[2] {10, 2}; 
		V = new int[2] {-5, 3}; 
		break;
	case 2825:
		U = new int[2] {-4, 6}; 
		V = new int[2] {-4, 1}; 
		break;
	case 2826:
		U = new int[2] {6, 9}; 
		V = new int[2] {-6, -9}; 
		break;
	case 2827:
		U = new int[2] {-2, 2}; 
		V = new int[2] {3, -5}; 
		break;
	case 2828:
		U = new int[2] {9, -4}; 
		V = new int[2] {10, -6}; 
		break;
	case 2829:
		U = new int[2] {-3, 0}; 
		V = new int[2] {10, -10}; 
		break;
	case 2830:
		U = new int[2] {0, -1}; 
		V = new int[2] {-3, -6}; 
		break;
	case 2831:
		U = new int[2] {-5, -5}; 
		V = new int[2] {-10, 1}; 
		break;
	case 2832:
		U = new int[2] {3, 6}; 
		V = new int[2] {3, 5}; 
		break;
	case 2833:
		U = new int[2] {3, -2}; 
		V = new int[2] {0, -3}; 
		break;
	case 2834:
		U = new int[2] {-1, 0}; 
		V = new int[2] {-10, 6}; 
		break;
	case 2835:
		U = new int[2] {5, -10}; 
		V = new int[2] {5, -4}; 
		break;
	case 2836:
		U = new int[2] {2, 6}; 
		V = new int[2] {8, -4}; 
		break;
	case 2837:
		U = new int[2] {-4, -1}; 
		V = new int[2] {-7, 1}; 
		break;
	case 2838:
		U = new int[2] {-2, 8}; 
		V = new int[2] {-7, 4}; 
		break;
	case 2839:
		U = new int[2] {9, 3}; 
		V = new int[2] {10, 4}; 
		break;
	case 2840:
		U = new int[2] {-3, 6}; 
		V = new int[2] {0, 0}; 
		break;
	case 2841:
		U = new int[2] {-9, 1}; 
		V = new int[2] {2, 4}; 
		break;
	case 2842:
		U = new int[2] {-3, -2}; 
		V = new int[2] {-8, -4}; 
		break;
	case 2843:
		U = new int[2] {7, -3}; 
		V = new int[2] {7, -3}; 
		break;
	case 2844:
		U = new int[2] {-4, -3}; 
		V = new int[2] {-10, -9}; 
		break;
	case 2845:
		U = new int[2] {-1, -6}; 
		V = new int[2] {9, 6}; 
		break;
	case 2846:
		U = new int[2] {-9, 2}; 
		V = new int[2] {9, 0}; 
		break;
	case 2847:
		U = new int[2] {3, -4}; 
		V = new int[2] {1, 5}; 
		break;
	case 2848:
		U = new int[2] {-4, 8}; 
		V = new int[2] {4, -3}; 
		break;
	case 2849:
		U = new int[2] {3, 5}; 
		V = new int[2] {5, 3}; 
		break;
	case 2850:
		U = new int[2] {-1, -10}; 
		V = new int[2] {0, -6}; 
		break;
	case 2851:
		U = new int[2] {-10, 0}; 
		V = new int[2] {-4, -3}; 
		break;
	case 2852:
		U = new int[2] {-2, -6}; 
		V = new int[2] {0, -10}; 
		break;
	case 2853:
		U = new int[2] {-2, -10}; 
		V = new int[2] {9, 2}; 
		break;
	case 2854:
		U = new int[2] {-4, 6}; 
		V = new int[2] {1, -6}; 
		break;
	case 2855:
		U = new int[2] {-7, 8}; 
		V = new int[2] {-3, 7}; 
		break;
	case 2856:
		U = new int[2] {6, -1}; 
		V = new int[2] {9, -7}; 
		break;
	case 2857:
		U = new int[2] {5, 7}; 
		V = new int[2] {4, -10}; 
		break;
	case 2858:
		U = new int[2] {-1, 10}; 
		V = new int[2] {-9, -5}; 
		break;
	case 2859:
		U = new int[2] {-1, 6}; 
		V = new int[2] {1, -1}; 
		break;
	case 2860:
		U = new int[2] {-1, 3}; 
		V = new int[2] {-10, -1}; 
		break;
	case 2861:
		U = new int[2] {-1, -3}; 
		V = new int[2] {10, 5}; 
		break;
	case 2862:
		U = new int[2] {6, 0}; 
		V = new int[2] {4, -8}; 
		break;
	case 2863:
		U = new int[2] {-10, -8}; 
		V = new int[2] {-10, -9}; 
		break;
	case 2864:
		U = new int[2] {4, -3}; 
		V = new int[2] {6, 5}; 
		break;
	case 2865:
		U = new int[2] {-2, 5}; 
		V = new int[2] {-2, 10}; 
		break;
	case 2866:
		U = new int[2] {-1, -5}; 
		V = new int[2] {5, -7}; 
		break;
	case 2867:
		U = new int[2] {-9, 10}; 
		V = new int[2] {8, -2}; 
		break;
	case 2868:
		U = new int[2] {3, -2}; 
		V = new int[2] {8, 9}; 
		break;
	case 2869:
		U = new int[2] {2, -7}; 
		V = new int[2] {-1, -6}; 
		break;
	case 2870:
		U = new int[2] {-2, 6}; 
		V = new int[2] {3, -1}; 
		break;
	case 2871:
		U = new int[2] {5, 8}; 
		V = new int[2] {2, 10}; 
		break;
	case 2872:
		U = new int[2] {4, -8}; 
		V = new int[2] {-5, 5}; 
		break;
	case 2873:
		U = new int[2] {-1, 3}; 
		V = new int[2] {-9, 8}; 
		break;
	case 2874:
		U = new int[2] {1, 4}; 
		V = new int[2] {-6, -8}; 
		break;
	case 2875:
		U = new int[2] {-7, 6}; 
		V = new int[2] {-10, 3}; 
		break;
	case 2876:
		U = new int[2] {-2, 2}; 
		V = new int[2] {-7, 3}; 
		break;
	case 2877:
		U = new int[2] {3, 3}; 
		V = new int[2] {-3, -3}; 
		break;
	case 2878:
		U = new int[2] {7, -5}; 
		V = new int[2] {7, -2}; 
		break;
	case 2879:
		U = new int[2] {-6, -8}; 
		V = new int[2] {8, 3}; 
		break;
	case 2880:
		U = new int[2] {7, 7}; 
		V = new int[2] {-1, -4}; 
		break;
	case 2881:
		U = new int[2] {-8, 1}; 
		V = new int[2] {9, -2}; 
		break;
	case 2882:
		U = new int[2] {-3, 8}; 
		V = new int[2] {6, -1}; 
		break;
	case 2883:
		U = new int[2] {6, -9}; 
		V = new int[2] {0, -1}; 
		break;
	case 2884:
		U = new int[2] {1, 4}; 
		V = new int[2] {5, 6}; 
		break;
	case 2885:
		U = new int[2] {-3, 7}; 
		V = new int[2] {-10, 2}; 
		break;
	case 2886:
		U = new int[2] {5, 10}; 
		V = new int[2] {-3, 7}; 
		break;
	case 2887:
		U = new int[2] {-8, -4}; 
		V = new int[2] {-2, 8}; 
		break;
	case 2888:
		U = new int[2] {10, 5}; 
		V = new int[2] {-9, -8}; 
		break;
	case 2889:
		U = new int[2] {2, -10}; 
		V = new int[2] {-3, -1}; 
		break;
	case 2890:
		U = new int[2] {-3, -7}; 
		V = new int[2] {6, 1}; 
		break;
	case 2891:
		U = new int[2] {-9, 6}; 
		V = new int[2] {-3, -1}; 
		break;
	case 2892:
		U = new int[2] {-8, -10}; 
		V = new int[2] {10, -9}; 
		break;
	case 2893:
		U = new int[2] {-4, 1}; 
		V = new int[2] {-3, -7}; 
		break;
	case 2894:
		U = new int[2] {-4, -4}; 
		V = new int[2] {2, -2}; 
		break;
	case 2895:
		U = new int[2] {8, 10}; 
		V = new int[2] {-7, -1}; 
		break;
	case 2896:
		U = new int[2] {6, -2}; 
		V = new int[2] {-2, 2}; 
		break;
	case 2897:
		U = new int[2] {-6, -4}; 
		V = new int[2] {-6, 2}; 
		break;
	case 2898:
		U = new int[2] {1, -3}; 
		V = new int[2] {9, -1}; 
		break;
	case 2899:
		U = new int[2] {8, 8}; 
		V = new int[2] {4, -3}; 
		break;
	case 2900:
		U = new int[2] {-4, -7}; 
		V = new int[2] {3, -3}; 
		break;
	case 2901:
		U = new int[2] {-10, -2}; 
		V = new int[2] {-2, -2}; 
		break;
	case 2902:
		U = new int[2] {9, -7}; 
		V = new int[2] {10, 10}; 
		break;
	case 2903:
		U = new int[2] {1, -2}; 
		V = new int[2] {0, 5}; 
		break;
	case 2904:
		U = new int[2] {-6, -5}; 
		V = new int[2] {0, -4}; 
		break;
	case 2905:
		U = new int[2] {3, -4}; 
		V = new int[2] {-1, 0}; 
		break;
	case 2906:
		U = new int[2] {-4, -5}; 
		V = new int[2] {10, 10}; 
		break;
	case 2907:
		U = new int[2] {8, 6}; 
		V = new int[2] {-8, 5}; 
		break;
	case 2908:
		U = new int[2] {-9, -7}; 
		V = new int[2] {-1, 4}; 
		break;
	case 2909:
		U = new int[2] {7, -1}; 
		V = new int[2] {8, 9}; 
		break;
	case 2910:
		U = new int[2] {-4, -2}; 
		V = new int[2] {10, -2}; 
		break;
	case 2911:
		U = new int[2] {1, 2}; 
		V = new int[2] {8, -9}; 
		break;
	case 2912:
		U = new int[2] {2, -10}; 
		V = new int[2] {-6, 0}; 
		break;
	case 2913:
		U = new int[2] {10, -8}; 
		V = new int[2] {-10, -9}; 
		break;
	case 2914:
		U = new int[2] {-10, -10}; 
		V = new int[2] {-4, -7}; 
		break;
	case 2915:
		U = new int[2] {-6, -6}; 
		V = new int[2] {-10, -9}; 
		break;
	case 2916:
		U = new int[2] {10, 2}; 
		V = new int[2] {-10, 0}; 
		break;
	case 2917:
		U = new int[2] {-10, 8}; 
		V = new int[2] {-7, 6}; 
		break;
	case 2918:
		U = new int[2] {7, 10}; 
		V = new int[2] {-9, -1}; 
		break;
	case 2919:
		U = new int[2] {-1, -4}; 
		V = new int[2] {-6, 8}; 
		break;
	case 2920:
		U = new int[2] {-8, 4}; 
		V = new int[2] {7, 1}; 
		break;
	case 2921:
		U = new int[2] {-5, 2}; 
		V = new int[2] {9, -10}; 
		break;
	case 2922:
		U = new int[2] {-9, 4}; 
		V = new int[2] {0, -6}; 
		break;
	case 2923:
		U = new int[2] {-10, -5}; 
		V = new int[2] {4, -7}; 
		break;
	case 2924:
		U = new int[2] {5, 5}; 
		V = new int[2] {3, 8}; 
		break;
	case 2925:
		U = new int[2] {-10, -3}; 
		V = new int[2] {4, -10}; 
		break;
	case 2926:
		U = new int[2] {10, -9}; 
		V = new int[2] {9, 0}; 
		break;
	case 2927:
		U = new int[2] {6, 9}; 
		V = new int[2] {6, -7}; 
		break;
	case 2928:
		U = new int[2] {-5, -9}; 
		V = new int[2] {6, 2}; 
		break;
	case 2929:
		U = new int[2] {-8, -1}; 
		V = new int[2] {-1, -9}; 
		break;
	case 2930:
		U = new int[2] {4, 9}; 
		V = new int[2] {1, -1}; 
		break;
	case 2931:
		U = new int[2] {-1, 0}; 
		V = new int[2] {-1, 6}; 
		break;
	case 2932:
		U = new int[2] {-9, 3}; 
		V = new int[2] {-10, 6}; 
		break;
	case 2933:
		U = new int[2] {-3, -6}; 
		V = new int[2] {0, -1}; 
		break;
	case 2934:
		U = new int[2] {3, 3}; 
		V = new int[2] {7, 8}; 
		break;
	case 2935:
		U = new int[2] {3, 4}; 
		V = new int[2] {7, -6}; 
		break;
	case 2936:
		U = new int[2] {-4, 9}; 
		V = new int[2] {-10, 9}; 
		break;
	case 2937:
		U = new int[2] {-3, 8}; 
		V = new int[2] {4, 2}; 
		break;
	case 2938:
		U = new int[2] {-8, 5}; 
		V = new int[2] {2, 5}; 
		break;
	case 2939:
		U = new int[2] {-1, 8}; 
		V = new int[2] {-9, -7}; 
		break;
	case 2940:
		U = new int[2] {3, -4}; 
		V = new int[2] {3, 9}; 
		break;
	case 2941:
		U = new int[2] {-9, -1}; 
		V = new int[2] {5, 6}; 
		break;
	case 2942:
		U = new int[2] {4, 8}; 
		V = new int[2] {0, 10}; 
		break;
	case 2943:
		U = new int[2] {9, 1}; 
		V = new int[2] {1, -7}; 
		break;
	case 2944:
		U = new int[2] {8, 9}; 
		V = new int[2] {3, -9}; 
		break;
	case 2945:
		U = new int[2] {10, -9}; 
		V = new int[2] {4, -1}; 
		break;
	case 2946:
		U = new int[2] {2, 5}; 
		V = new int[2] {4, 10}; 
		break;
	case 2947:
		U = new int[2] {1, -6}; 
		V = new int[2] {8, 0}; 
		break;
	case 2948:
		U = new int[2] {7, -2}; 
		V = new int[2] {-2, 6}; 
		break;
	case 2949:
		U = new int[2] {0, 5}; 
		V = new int[2] {8, 2}; 
		break;
	case 2950:
		U = new int[2] {7, 7}; 
		V = new int[2] {-4, -7}; 
		break;
	case 2951:
		U = new int[2] {-3, -8}; 
		V = new int[2] {8, -8}; 
		break;
	case 2952:
		U = new int[2] {-1, 2}; 
		V = new int[2] {-7, -6}; 
		break;
	case 2953:
		U = new int[2] {-4, -7}; 
		V = new int[2] {8, -7}; 
		break;
	case 2954:
		U = new int[2] {6, -10}; 
		V = new int[2] {8, -7}; 
		break;
	case 2955:
		U = new int[2] {-7, -9}; 
		V = new int[2] {10, -4}; 
		break;
	case 2956:
		U = new int[2] {4, -4}; 
		V = new int[2] {-8, 0}; 
		break;
	case 2957:
		U = new int[2] {8, -1}; 
		V = new int[2] {3, -7}; 
		break;
	case 2958:
		U = new int[2] {-4, -4}; 
		V = new int[2] {-5, -3}; 
		break;
	case 2959:
		U = new int[2] {-9, -9}; 
		V = new int[2] {-6, 6}; 
		break;
	case 2960:
		U = new int[2] {0, -4}; 
		V = new int[2] {9, -6}; 
		break;
	case 2961:
		U = new int[2] {-3, 4}; 
		V = new int[2] {-5, 0}; 
		break;
	case 2962:
		U = new int[2] {-9, 1}; 
		V = new int[2] {-2, -8}; 
		break;
	case 2963:
		U = new int[2] {4, -7}; 
		V = new int[2] {7, -9}; 
		break;
	case 2964:
		U = new int[2] {7, 3}; 
		V = new int[2] {-3, 0}; 
		break;
	case 2965:
		U = new int[2] {-2, 8}; 
		V = new int[2] {2, -6}; 
		break;
	case 2966:
		U = new int[2] {-4, -3}; 
		V = new int[2] {7, 10}; 
		break;
	case 2967:
		U = new int[2] {-10, 5}; 
		V = new int[2] {-9, 6}; 
		break;
	case 2968:
		U = new int[2] {-3, 1}; 
		V = new int[2] {-5, 9}; 
		break;
	case 2969:
		U = new int[2] {7, 9}; 
		V = new int[2] {7, -8}; 
		break;
	case 2970:
		U = new int[2] {-5, 6}; 
		V = new int[2] {4, 6}; 
		break;
	case 2971:
		U = new int[2] {-4, -1}; 
		V = new int[2] {2, 10}; 
		break;
	case 2972:
		U = new int[2] {10, -5}; 
		V = new int[2] {-8, -8}; 
		break;
	case 2973:
		U = new int[2] {-4, 5}; 
		V = new int[2] {-2, 9}; 
		break;
	case 2974:
		U = new int[2] {1, 0}; 
		V = new int[2] {5, 0}; 
		break;
	case 2975:
		U = new int[2] {3, 5}; 
		V = new int[2] {1, -3}; 
		break;
	case 2976:
		U = new int[2] {0, 6}; 
		V = new int[2] {10, 5}; 
		break;
	case 2977:
		U = new int[2] {-2, 3}; 
		V = new int[2] {9, 4}; 
		break;
	case 2978:
		U = new int[2] {-3, 4}; 
		V = new int[2] {6, -10}; 
		break;
	case 2979:
		U = new int[2] {-10, -5}; 
		V = new int[2] {4, -10}; 
		break;
	case 2980:
		U = new int[2] {0, -3}; 
		V = new int[2] {9, 6}; 
		break;
	case 2981:
		U = new int[2] {-5, 6}; 
		V = new int[2] {-9, -6}; 
		break;
	case 2982:
		U = new int[2] {2, 7}; 
		V = new int[2] {0, -5}; 
		break;
	case 2983:
		U = new int[2] {1, 6}; 
		V = new int[2] {10, -4}; 
		break;
	case 2984:
		U = new int[2] {0, 7}; 
		V = new int[2] {-3, 1}; 
		break;
	case 2985:
		U = new int[2] {5, -8}; 
		V = new int[2] {4, -9}; 
		break;
	case 2986:
		U = new int[2] {-9, -9}; 
		V = new int[2] {7, 9}; 
		break;
	case 2987:
		U = new int[2] {1, 9}; 
		V = new int[2] {-9, 7}; 
		break;
	case 2988:
		U = new int[2] {10, 8}; 
		V = new int[2] {-8, 0}; 
		break;
	case 2989:
		U = new int[2] {-8, 4}; 
		V = new int[2] {6, -9}; 
		break;
	case 2990:
		U = new int[2] {1, 2}; 
		V = new int[2] {9, 8}; 
		break;
	case 2991:
		U = new int[2] {-9, 8}; 
		V = new int[2] {6, -4}; 
		break;
	case 2992:
		U = new int[2] {8, -8}; 
		V = new int[2] {8, 5}; 
		break;
	case 2993:
		U = new int[2] {-5, -1}; 
		V = new int[2] {-7, -3}; 
		break;
	case 2994:
		U = new int[2] {9, 10}; 
		V = new int[2] {7, -10}; 
		break;
	case 2995:
		U = new int[2] {-10, 8}; 
		V = new int[2] {8, -2}; 
		break;
	case 2996:
		U = new int[2] {7, -3}; 
		V = new int[2] {-2, 10}; 
		break;
	case 2997:
		U = new int[2] {-4, 2}; 
		V = new int[2] {0, 1}; 
		break;
	case 2998:
		U = new int[2] {8, 0}; 
		V = new int[2] {-1, -5}; 
		break;
	case 2999:
		U = new int[2] {-4, 4}; 
		V = new int[2] {10, -1}; 
		break;
	case 3000:
		U = new int[2] {6, 9}; 
		V = new int[2] {3, 6}; 
		break;
	case 3001:
		U = new int[2] {-7, 6}; 
		V = new int[2] {-1, 5}; 
		break;
	case 3002:
		U = new int[2] {7, 6}; 
		V = new int[2] {-8, 1}; 
		break;
	case 3003:
		U = new int[2] {-7, -10}; 
		V = new int[2] {-10, -7}; 
		break;
	case 3004:
		U = new int[2] {-10, -9}; 
		V = new int[2] {-10, 8}; 
		break;
	case 3005:
		U = new int[2] {2, -8}; 
		V = new int[2] {-10, -5}; 
		break;
	case 3006:
		U = new int[2] {-9, 1}; 
		V = new int[2] {7, 7}; 
		break;
	case 3007:
		U = new int[2] {9, -4}; 
		V = new int[2] {-7, 8}; 
		break;
	case 3008:
		U = new int[2] {-8, -9}; 
		V = new int[2] {-7, 3}; 
		break;
	case 3009:
		U = new int[2] {8, 6}; 
		V = new int[2] {-2, 4}; 
		break;
	case 3010:
		U = new int[2] {-6, -4}; 
		V = new int[2] {2, -6}; 
		break;
	case 3011:
		U = new int[2] {-10, 0}; 
		V = new int[2] {-1, -9}; 
		break;
	case 3012:
		U = new int[2] {2, 4}; 
		V = new int[2] {-2, 8}; 
		break;
	case 3013:
		U = new int[2] {6, 0}; 
		V = new int[2] {-8, 6}; 
		break;
	case 3014:
		U = new int[2] {10, -9}; 
		V = new int[2] {5, -5}; 
		break;
	case 3015:
		U = new int[2] {9, 5}; 
		V = new int[2] {9, 10}; 
		break;
	case 3016:
		U = new int[2] {-8, -4}; 
		V = new int[2] {2, 1}; 
		break;
	case 3017:
		U = new int[2] {-8, 1}; 
		V = new int[2] {-6, 9}; 
		break;
	case 3018:
		U = new int[2] {0, 4}; 
		V = new int[2] {3, -2}; 
		break;
	case 3019:
		U = new int[2] {4, 9}; 
		V = new int[2] {5, 4}; 
		break;
	case 3020:
		U = new int[2] {6, 10}; 
		V = new int[2] {-3, -7}; 
		break;
	case 3021:
		U = new int[2] {3, 5}; 
		V = new int[2] {-9, -7}; 
		break;
	case 3022:
		U = new int[2] {2, -10}; 
		V = new int[2] {-8, 10}; 
		break;
	case 3023:
		U = new int[2] {10, -1}; 
		V = new int[2] {-6, -4}; 
		break;
	case 3024:
		U = new int[2] {-7, 1}; 
		V = new int[2] {6, -3}; 
		break;
	case 3025:
		U = new int[2] {-10, -5}; 
		V = new int[2] {-4, -6}; 
		break;
	case 3026:
		U = new int[2] {5, -7}; 
		V = new int[2] {5, -3}; 
		break;
	case 3027:
		U = new int[2] {2, 2}; 
		V = new int[2] {9, 8}; 
		break;
	case 3028:
		U = new int[2] {2, 5}; 
		V = new int[2] {8, -7}; 
		break;
	case 3029:
		U = new int[2] {7, 4}; 
		V = new int[2] {-1, 9}; 
		break;
	case 3030:
		U = new int[2] {-7, 2}; 
		V = new int[2] {-8, 1}; 
		break;
	case 3031:
		U = new int[2] {0, 4}; 
		V = new int[2] {9, -1}; 
		break;
	case 3032:
		U = new int[2] {8, -2}; 
		V = new int[2] {2, -6}; 
		break;
	case 3033:
		U = new int[2] {-1, 3}; 
		V = new int[2] {4, -2}; 
		break;
	case 3034:
		U = new int[2] {-1, 0}; 
		V = new int[2] {-1, -2}; 
		break;
	case 3035:
		U = new int[2] {5, 2}; 
		V = new int[2] {-4, -3}; 
		break;
	case 3036:
		U = new int[2] {-7, -9}; 
		V = new int[2] {-8, 5}; 
		break;
	case 3037:
		U = new int[2] {10, -3}; 
		V = new int[2] {5, 1}; 
		break;
	case 3038:
		U = new int[2] {-1, 4}; 
		V = new int[2] {-8, -1}; 
		break;
	case 3039:
		U = new int[2] {9, -10}; 
		V = new int[2] {-1, 1}; 
		break;
	case 3040:
		U = new int[2] {-2, 2}; 
		V = new int[2] {4, 6}; 
		break;
	case 3041:
		U = new int[2] {-4, -1}; 
		V = new int[2] {-1, 7}; 
		break;
	case 3042:
		U = new int[2] {-4, -5}; 
		V = new int[2] {-3, 6}; 
		break;
	case 3043:
		U = new int[2] {-8, 10}; 
		V = new int[2] {8, -7}; 
		break;
	case 3044:
		U = new int[2] {-5, 0}; 
		V = new int[2] {-6, -9}; 
		break;
	case 3045:
		U = new int[2] {-8, 8}; 
		V = new int[2] {-4, -1}; 
		break;
	case 3046:
		U = new int[2] {1, 0}; 
		V = new int[2] {-6, -1}; 
		break;
	case 3047:
		U = new int[2] {-7, -7}; 
		V = new int[2] {-2, 1}; 
		break;
	case 3048:
		U = new int[2] {3, 8}; 
		V = new int[2] {1, -10}; 
		break;
	case 3049:
		U = new int[2] {7, 8}; 
		V = new int[2] {-5, -7}; 
		break;
	case 3050:
		U = new int[2] {7, -9}; 
		V = new int[2] {7, 8}; 
		break;
	case 3051:
		U = new int[2] {3, 9}; 
		V = new int[2] {-3, 2}; 
		break;
	case 3052:
		U = new int[2] {3, -1}; 
		V = new int[2] {-10, 1}; 
		break;
	case 3053:
		U = new int[2] {9, 7}; 
		V = new int[2] {-7, -10}; 
		break;
	case 3054:
		U = new int[2] {9, -4}; 
		V = new int[2] {7, 1}; 
		break;
	case 3055:
		U = new int[2] {-7, 0}; 
		V = new int[2] {7, -5}; 
		break;
	case 3056:
		U = new int[2] {10, 5}; 
		V = new int[2] {6, -8}; 
		break;
	case 3057:
		U = new int[2] {7, -2}; 
		V = new int[2] {-7, -7}; 
		break;
	case 3058:
		U = new int[2] {5, 3}; 
		V = new int[2] {-9, -9}; 
		break;
	case 3059:
		U = new int[2] {7, -1}; 
		V = new int[2] {-5, -1}; 
		break;
	case 3060:
		U = new int[2] {10, -7}; 
		V = new int[2] {3, 9}; 
		break;
	case 3061:
		U = new int[2] {8, 4}; 
		V = new int[2] {8, 0}; 
		break;
	case 3062:
		U = new int[2] {-9, -5}; 
		V = new int[2] {2, 6}; 
		break;
	case 3063:
		U = new int[2] {-1, 8}; 
		V = new int[2] {-7, -7}; 
		break;
	case 3064:
		U = new int[2] {-9, -2}; 
		V = new int[2] {-7, -4}; 
		break;
	case 3065:
		U = new int[2] {-7, 7}; 
		V = new int[2] {-9, 6}; 
		break;
	case 3066:
		U = new int[2] {5, 1}; 
		V = new int[2] {-10, 6}; 
		break;
	case 3067:
		U = new int[2] {7, -9}; 
		V = new int[2] {1, 9}; 
		break;
	case 3068:
		U = new int[2] {-8, -9}; 
		V = new int[2] {5, -10}; 
		break;
	case 3069:
		U = new int[2] {-2, 1}; 
		V = new int[2] {-2, 4}; 
		break;
	case 3070:
		U = new int[2] {3, 5}; 
		V = new int[2] {0, -3}; 
		break;
	case 3071:
		U = new int[2] {-8, 3}; 
		V = new int[2] {7, 0}; 
		break;
	case 3072:
		U = new int[2] {-7, 4}; 
		V = new int[2] {2, 1}; 
		break;
	case 3073:
		U = new int[2] {6, 3}; 
		V = new int[2] {8, 4}; 
		break;
	case 3074:
		U = new int[2] {1, -6}; 
		V = new int[2] {9, 5}; 
		break;
	case 3075:
		U = new int[2] {4, 0}; 
		V = new int[2] {-3, -3}; 
		break;
	case 3076:
		U = new int[2] {0, -10}; 
		V = new int[2] {0, 1}; 
		break;
	case 3077:
		U = new int[2] {7, 9}; 
		V = new int[2] {-2, 5}; 
		break;
	case 3078:
		U = new int[2] {1, -6}; 
		V = new int[2] {0, -3}; 
		break;
	case 3079:
		U = new int[2] {2, 5}; 
		V = new int[2] {-9, -4}; 
		break;
	case 3080:
		U = new int[2] {-10, 6}; 
		V = new int[2] {6, 2}; 
		break;
	case 3081:
		U = new int[2] {-1, 10}; 
		V = new int[2] {-1, 2}; 
		break;
	case 3082:
		U = new int[2] {5, -4}; 
		V = new int[2] {-9, 1}; 
		break;
	case 3083:
		U = new int[2] {3, 10}; 
		V = new int[2] {-7, -1}; 
		break;
	case 3084:
		U = new int[2] {-3, 2}; 
		V = new int[2] {6, -1}; 
		break;
	case 3085:
		U = new int[2] {-9, -10}; 
		V = new int[2] {3, -9}; 
		break;
	case 3086:
		U = new int[2] {7, -10}; 
		V = new int[2] {1, 1}; 
		break;
	case 3087:
		U = new int[2] {-6, 8}; 
		V = new int[2] {2, 5}; 
		break;
	case 3088:
		U = new int[2] {-2, -1}; 
		V = new int[2] {8, 5}; 
		break;
	case 3089:
		U = new int[2] {5, -7}; 
		V = new int[2] {-3, 4}; 
		break;
	case 3090:
		U = new int[2] {0, -6}; 
		V = new int[2] {10, 4}; 
		break;
	case 3091:
		U = new int[2] {-5, -7}; 
		V = new int[2] {9, -8}; 
		break;
	case 3092:
		U = new int[2] {-5, 2}; 
		V = new int[2] {-2, 10}; 
		break;
	case 3093:
		U = new int[2] {-9, 3}; 
		V = new int[2] {-10, -3}; 
		break;
	case 3094:
		U = new int[2] {0, -8}; 
		V = new int[2] {-7, 9}; 
		break;
	case 3095:
		U = new int[2] {1, -5}; 
		V = new int[2] {-1, -6}; 
		break;
	case 3096:
		U = new int[2] {-3, 5}; 
		V = new int[2] {6, -2}; 
		break;
	case 3097:
		U = new int[2] {6, 9}; 
		V = new int[2] {5, 2}; 
		break;
	case 3098:
		U = new int[2] {6, 10}; 
		V = new int[2] {6, 4}; 
		break;
	case 3099:
		U = new int[2] {-7, 7}; 
		V = new int[2] {-4, -8}; 
		break;
	case 3100:
		U = new int[2] {10, -4}; 
		V = new int[2] {-2, -6}; 
		break;
	case 3101:
		U = new int[2] {9, -9}; 
		V = new int[2] {-5, -9}; 
		break;
	case 3102:
		U = new int[2] {-1, 1}; 
		V = new int[2] {9, 6}; 
		break;
	case 3103:
		U = new int[2] {1, -4}; 
		V = new int[2] {6, -7}; 
		break;
	case 3104:
		U = new int[2] {-1, -7}; 
		V = new int[2] {5, -10}; 
		break;
	case 3105:
		U = new int[2] {7, -6}; 
		V = new int[2] {5, -9}; 
		break;
	case 3106:
		U = new int[2] {-6, 2}; 
		V = new int[2] {-3, 1}; 
		break;
	case 3107:
		U = new int[2] {10, -8}; 
		V = new int[2] {5, -4}; 
		break;
	case 3108:
		U = new int[2] {4, 0}; 
		V = new int[2] {-5, -4}; 
		break;
	case 3109:
		U = new int[2] {5, -8}; 
		V = new int[2] {9, -9}; 
		break;
	case 3110:
		U = new int[2] {7, 0}; 
		V = new int[2] {1, 8}; 
		break;
	case 3111:
		U = new int[2] {-2, -5}; 
		V = new int[2] {8, 1}; 
		break;
	case 3112:
		U = new int[2] {0, 8}; 
		V = new int[2] {7, -1}; 
		break;
	case 3113:
		U = new int[2] {10, 8}; 
		V = new int[2] {0, -2}; 
		break;
	case 3114:
		U = new int[2] {5, -1}; 
		V = new int[2] {0, 10}; 
		break;
	case 3115:
		U = new int[2] {-9, 1}; 
		V = new int[2] {2, 10}; 
		break;
	case 3116:
		U = new int[2] {-4, -7}; 
		V = new int[2] {-1, 8}; 
		break;
	case 3117:
		U = new int[2] {1, -1}; 
		V = new int[2] {-10, 1}; 
		break;
	case 3118:
		U = new int[2] {6, 3}; 
		V = new int[2] {3, 6}; 
		break;
	case 3119:
		U = new int[2] {0, 3}; 
		V = new int[2] {2, -4}; 
		break;
	case 3120:
		U = new int[2] {-7, -10}; 
		V = new int[2] {0, 8}; 
		break;
	case 3121:
		U = new int[2] {-6, -1}; 
		V = new int[2] {10, 3}; 
		break;
	case 3122:
		U = new int[2] {2, -2}; 
		V = new int[2] {1, -7}; 
		break;
	case 3123:
		U = new int[2] {9, 10}; 
		V = new int[2] {2, 0}; 
		break;
	case 3124:
		U = new int[2] {9, -7}; 
		V = new int[2] {0, 3}; 
		break;
	case 3125:
		U = new int[2] {5, -1}; 
		V = new int[2] {-4, -3}; 
		break;
	case 3126:
		U = new int[2] {-3, 4}; 
		V = new int[2] {-1, 6}; 
		break;
	case 3127:
		U = new int[2] {6, -4}; 
		V = new int[2] {6, 2}; 
		break;
	case 3128:
		U = new int[2] {0, 5}; 
		V = new int[2] {8, 2}; 
		break;
	case 3129:
		U = new int[2] {6, -5}; 
		V = new int[2] {3, -3}; 
		break;
	case 3130:
		U = new int[2] {8, -2}; 
		V = new int[2] {2, 9}; 
		break;
	case 3131:
		U = new int[2] {-9, -5}; 
		V = new int[2] {4, -4}; 
		break;
	case 3132:
		U = new int[2] {-9, 8}; 
		V = new int[2] {8, -5}; 
		break;
	case 3133:
		U = new int[2] {-3, 8}; 
		V = new int[2] {6, 2}; 
		break;
	case 3134:
		U = new int[2] {7, 3}; 
		V = new int[2] {9, -6}; 
		break;
	case 3135:
		U = new int[2] {-8, -1}; 
		V = new int[2] {0, 6}; 
		break;
	case 3136:
		U = new int[2] {-7, 8}; 
		V = new int[2] {-9, -3}; 
		break;
	case 3137:
		U = new int[2] {-1, 6}; 
		V = new int[2] {-2, -3}; 
		break;
	case 3138:
		U = new int[2] {4, 4}; 
		V = new int[2] {6, -8}; 
		break;
	case 3139:
		U = new int[2] {-6, -3}; 
		V = new int[2] {6, -4}; 
		break;
	case 3140:
		U = new int[2] {2, -10}; 
		V = new int[2] {4, -3}; 
		break;
	case 3141:
		U = new int[2] {-7, 7}; 
		V = new int[2] {-2, -10}; 
		break;
	case 3142:
		U = new int[2] {-5, 6}; 
		V = new int[2] {-4, -4}; 
		break;
	case 3143:
		U = new int[2] {-4, 9}; 
		V = new int[2] {9, -3}; 
		break;
	case 3144:
		U = new int[2] {2, -4}; 
		V = new int[2] {-10, 2}; 
		break;
	case 3145:
		U = new int[2] {10, 4}; 
		V = new int[2] {8, -2}; 
		break;
	case 3146:
		U = new int[2] {-10, -6}; 
		V = new int[2] {-7, 5}; 
		break;
	case 3147:
		U = new int[2] {-7, 4}; 
		V = new int[2] {8, 0}; 
		break;
	case 3148:
		U = new int[2] {9, -9}; 
		V = new int[2] {-9, 3}; 
		break;
	case 3149:
		U = new int[2] {7, -2}; 
		V = new int[2] {8, -7}; 
		break;
	case 3150:
		U = new int[2] {-9, 8}; 
		V = new int[2] {2, -6}; 
		break;
	case 3151:
		U = new int[2] {-6, 3}; 
		V = new int[2] {-1, -9}; 
		break;
	case 3152:
		U = new int[2] {-3, -6}; 
		V = new int[2] {-2, -3}; 
		break;
	case 3153:
		U = new int[2] {4, 1}; 
		V = new int[2] {-7, 0}; 
		break;
	case 3154:
		U = new int[2] {7, -7}; 
		V = new int[2] {2, -4}; 
		break;
	case 3155:
		U = new int[2] {5, 10}; 
		V = new int[2] {2, 2}; 
		break;
	case 3156:
		U = new int[2] {8, 7}; 
		V = new int[2] {6, 10}; 
		break;
	case 3157:
		U = new int[2] {0, -9}; 
		V = new int[2] {-3, -3}; 
		break;
	case 3158:
		U = new int[2] {-1, 1}; 
		V = new int[2] {-9, 10}; 
		break;
	case 3159:
		U = new int[2] {-9, 8}; 
		V = new int[2] {-2, -4}; 
		break;
	case 3160:
		U = new int[2] {8, 7}; 
		V = new int[2] {8, 10}; 
		break;
	case 3161:
		U = new int[2] {3, -10}; 
		V = new int[2] {-1, 2}; 
		break;
	case 3162:
		U = new int[2] {0, 10}; 
		V = new int[2] {4, 0}; 
		break;
	case 3163:
		U = new int[2] {5, -5}; 
		V = new int[2] {2, -8}; 
		break;
	case 3164:
		U = new int[2] {6, -3}; 
		V = new int[2] {6, -10}; 
		break;
	case 3165:
		U = new int[2] {-8, 1}; 
		V = new int[2] {-8, -10}; 
		break;
	case 3166:
		U = new int[2] {2, -5}; 
		V = new int[2] {6, 3}; 
		break;
	case 3167:
		U = new int[2] {0, 0}; 
		V = new int[2] {8, 5}; 
		break;
	case 3168:
		U = new int[2] {0, -4}; 
		V = new int[2] {-9, -7}; 
		break;
	case 3169:
		U = new int[2] {1, 4}; 
		V = new int[2] {-7, -1}; 
		break;
	case 3170:
		U = new int[2] {-10, 1}; 
		V = new int[2] {0, 5}; 
		break;
	case 3171:
		U = new int[2] {-7, 3}; 
		V = new int[2] {-6, 3}; 
		break;
	case 3172:
		U = new int[2] {-6, -6}; 
		V = new int[2] {7, 2}; 
		break;
	case 3173:
		U = new int[2] {5, 4}; 
		V = new int[2] {10, 3}; 
		break;
	case 3174:
		U = new int[2] {-9, 5}; 
		V = new int[2] {2, -7}; 
		break;
	case 3175:
		U = new int[2] {2, -2}; 
		V = new int[2] {6, 8}; 
		break;
	case 3176:
		U = new int[2] {-7, 10}; 
		V = new int[2] {8, 7}; 
		break;
	case 3177:
		U = new int[2] {8, 7}; 
		V = new int[2] {2, -2}; 
		break;
	case 3178:
		U = new int[2] {-7, 1}; 
		V = new int[2] {1, 5}; 
		break;
	case 3179:
		U = new int[2] {-6, -5}; 
		V = new int[2] {7, 2}; 
		break;
	case 3180:
		U = new int[2] {-8, 7}; 
		V = new int[2] {0, -2}; 
		break;
	case 3181:
		U = new int[2] {-1, 9}; 
		V = new int[2] {8, 6}; 
		break;
	case 3182:
		U = new int[2] {-7, -4}; 
		V = new int[2] {-10, -3}; 
		break;
	case 3183:
		U = new int[2] {5, 10}; 
		V = new int[2] {6, -3}; 
		break;
	case 3184:
		U = new int[2] {10, 9}; 
		V = new int[2] {-3, 2}; 
		break;
	case 3185:
		U = new int[2] {5, -8}; 
		V = new int[2] {7, -3}; 
		break;
	case 3186:
		U = new int[2] {-6, 8}; 
		V = new int[2] {4, -1}; 
		break;
	case 3187:
		U = new int[2] {10, -7}; 
		V = new int[2] {-6, -3}; 
		break;
	case 3188:
		U = new int[2] {9, -3}; 
		V = new int[2] {-3, -7}; 
		break;
	case 3189:
		U = new int[2] {8, -1}; 
		V = new int[2] {-6, -1}; 
		break;
	case 3190:
		U = new int[2] {5, -1}; 
		V = new int[2] {9, 4}; 
		break;
	case 3191:
		U = new int[2] {3, -4}; 
		V = new int[2] {-9, -3}; 
		break;
	case 3192:
		U = new int[2] {8, -6}; 
		V = new int[2] {2, 8}; 
		break;
	case 3193:
		U = new int[2] {-9, 9}; 
		V = new int[2] {5, -4}; 
		break;
	case 3194:
		U = new int[2] {8, 4}; 
		V = new int[2] {3, -5}; 
		break;
	case 3195:
		U = new int[2] {8, 7}; 
		V = new int[2] {7, 1}; 
		break;
	case 3196:
		U = new int[2] {-1, -4}; 
		V = new int[2] {-10, 7}; 
		break;
	case 3197:
		U = new int[2] {5, -10}; 
		V = new int[2] {6, 0}; 
		break;
	case 3198:
		U = new int[2] {-4, -6}; 
		V = new int[2] {-7, 9}; 
		break;
	case 3199:
		U = new int[2] {10, 8}; 
		V = new int[2] {2, -9}; 
		break;
	case 3200:
		U = new int[2] {0, -9}; 
		V = new int[2] {-7, -6}; 
		break;
	case 3201:
		U = new int[2] {-6, -8}; 
		V = new int[2] {10, 8}; 
		break;
	case 3202:
		U = new int[2] {-3, -6}; 
		V = new int[2] {5, 8}; 
		break;
	case 3203:
		U = new int[2] {-10, -2}; 
		V = new int[2] {10, 5}; 
		break;
	case 3204:
		U = new int[2] {9, 1}; 
		V = new int[2] {-8, -5}; 
		break;
	case 3205:
		U = new int[2] {6, 1}; 
		V = new int[2] {1, -8}; 
		break;
	case 3206:
		U = new int[2] {0, -10}; 
		V = new int[2] {5, -3}; 
		break;
	case 3207:
		U = new int[2] {-7, 1}; 
		V = new int[2] {1, 10}; 
		break;
	case 3208:
		U = new int[2] {1, 3}; 
		V = new int[2] {-3, -2}; 
		break;
	case 3209:
		U = new int[2] {5, 1}; 
		V = new int[2] {-3, -6}; 
		break;
	case 3210:
		U = new int[2] {-3, -7}; 
		V = new int[2] {-9, 0}; 
		break;
	case 3211:
		U = new int[2] {8, -4}; 
		V = new int[2] {4, -3}; 
		break;
	case 3212:
		U = new int[2] {4, 2}; 
		V = new int[2] {4, 2}; 
		break;
	case 3213:
		U = new int[2] {-2, 0}; 
		V = new int[2] {10, -6}; 
		break;
	case 3214:
		U = new int[2] {5, -10}; 
		V = new int[2] {9, -8}; 
		break;
	case 3215:
		U = new int[2] {3, 10}; 
		V = new int[2] {-3, -10}; 
		break;
	case 3216:
		U = new int[2] {-10, -9}; 
		V = new int[2] {0, -4}; 
		break;
	case 3217:
		U = new int[2] {-2, -9}; 
		V = new int[2] {0, 4}; 
		break;
	case 3218:
		U = new int[2] {-1, 8}; 
		V = new int[2] {-7, -7}; 
		break;
	case 3219:
		U = new int[2] {4, -10}; 
		V = new int[2] {-5, 0}; 
		break;
	case 3220:
		U = new int[2] {0, -4}; 
		V = new int[2] {9, 8}; 
		break;
	case 3221:
		U = new int[2] {-2, -7}; 
		V = new int[2] {-8, 1}; 
		break;
	case 3222:
		U = new int[2] {10, -10}; 
		V = new int[2] {9, 9}; 
		break;
	case 3223:
		U = new int[2] {-5, 0}; 
		V = new int[2] {-7, 10}; 
		break;
	case 3224:
		U = new int[2] {0, -1}; 
		V = new int[2] {-4, -7}; 
		break;
	case 3225:
		U = new int[2] {-4, -7}; 
		V = new int[2] {-2, -7}; 
		break;
	case 3226:
		U = new int[2] {-10, -7}; 
		V = new int[2] {6, -9}; 
		break;
	case 3227:
		U = new int[2] {-1, -8}; 
		V = new int[2] {-4, -6}; 
		break;
	case 3228:
		U = new int[2] {9, 1}; 
		V = new int[2] {10, -2}; 
		break;
	case 3229:
		U = new int[2] {3, 8}; 
		V = new int[2] {8, 9}; 
		break;
	case 3230:
		U = new int[2] {-7, 6}; 
		V = new int[2] {7, -4}; 
		break;
	case 3231:
		U = new int[2] {7, 5}; 
		V = new int[2] {-9, 9}; 
		break;
	case 3232:
		U = new int[2] {-9, -5}; 
		V = new int[2] {7, 2}; 
		break;
	case 3233:
		U = new int[2] {2, 7}; 
		V = new int[2] {-2, 4}; 
		break;
	case 3234:
		U = new int[2] {7, -3}; 
		V = new int[2] {-8, -7}; 
		break;
	case 3235:
		U = new int[2] {6, 4}; 
		V = new int[2] {-1, -8}; 
		break;
	case 3236:
		U = new int[2] {-8, 8}; 
		V = new int[2] {2, 0}; 
		break;
	case 3237:
		U = new int[2] {-7, -2}; 
		V = new int[2] {1, -5}; 
		break;
	case 3238:
		U = new int[2] {-10, 4}; 
		V = new int[2] {4, 6}; 
		break;
	case 3239:
		U = new int[2] {-8, -2}; 
		V = new int[2] {-8, -2}; 
		break;
	case 3240:
		U = new int[2] {-9, -4}; 
		V = new int[2] {5, -5}; 
		break;
	case 3241:
		U = new int[2] {0, 4}; 
		V = new int[2] {3, 3}; 
		break;
	case 3242:
		U = new int[2] {-7, -8}; 
		V = new int[2] {-8, 4}; 
		break;
	case 3243:
		U = new int[2] {-9, -4}; 
		V = new int[2] {-8, -4}; 
		break;
	case 3244:
		U = new int[2] {3, 8}; 
		V = new int[2] {-8, 3}; 
		break;
	case 3245:
		U = new int[2] {-6, -7}; 
		V = new int[2] {5, -5}; 
		break;
	case 3246:
		U = new int[2] {1, -8}; 
		V = new int[2] {6, 7}; 
		break;
	case 3247:
		U = new int[2] {-4, 8}; 
		V = new int[2] {5, 6}; 
		break;
	case 3248:
		U = new int[2] {3, -10}; 
		V = new int[2] {8, 6}; 
		break;
	case 3249:
		U = new int[2] {1, -3}; 
		V = new int[2] {1, -9}; 
		break;
	case 3250:
		U = new int[2] {1, 9}; 
		V = new int[2] {1, 8}; 
		break;
	case 3251:
		U = new int[2] {7, -2}; 
		V = new int[2] {3, 10}; 
		break;
	case 3252:
		U = new int[2] {0, 7}; 
		V = new int[2] {3, 7}; 
		break;
	case 3253:
		U = new int[2] {-1, -8}; 
		V = new int[2] {8, -3}; 
		break;
	case 3254:
		U = new int[2] {7, 3}; 
		V = new int[2] {2, -8}; 
		break;
	case 3255:
		U = new int[2] {-7, -1}; 
		V = new int[2] {1, 1}; 
		break;
	case 3256:
		U = new int[2] {8, 5}; 
		V = new int[2] {2, 6}; 
		break;
	case 3257:
		U = new int[2] {-9, -9}; 
		V = new int[2] {-6, 0}; 
		break;
	case 3258:
		U = new int[2] {3, 1}; 
		V = new int[2] {4, 1}; 
		break;
	case 3259:
		U = new int[2] {-2, -5}; 
		V = new int[2] {-3, -8}; 
		break;
	case 3260:
		U = new int[2] {-7, 9}; 
		V = new int[2] {-10, -5}; 
		break;
	case 3261:
		U = new int[2] {-10, 7}; 
		V = new int[2] {-10, 4}; 
		break;
	case 3262:
		U = new int[2] {-8, 3}; 
		V = new int[2] {8, -10}; 
		break;
	case 3263:
		U = new int[2] {5, 7}; 
		V = new int[2] {1, -3}; 
		break;
	case 3264:
		U = new int[2] {-1, 5}; 
		V = new int[2] {6, -9}; 
		break;
	case 3265:
		U = new int[2] {7, 9}; 
		V = new int[2] {-8, -2}; 
		break;
	case 3266:
		U = new int[2] {0, 3}; 
		V = new int[2] {-5, -6}; 
		break;
	case 3267:
		U = new int[2] {-2, -10}; 
		V = new int[2] {8, 7}; 
		break;
	case 3268:
		U = new int[2] {-7, -1}; 
		V = new int[2] {-9, -9}; 
		break;
	case 3269:
		U = new int[2] {-3, -5}; 
		V = new int[2] {1, -5}; 
		break;
	case 3270:
		U = new int[2] {-5, 6}; 
		V = new int[2] {3, 10}; 
		break;
	case 3271:
		U = new int[2] {3, 6}; 
		V = new int[2] {9, 3}; 
		break;
	case 3272:
		U = new int[2] {7, -9}; 
		V = new int[2] {2, -5}; 
		break;
	case 3273:
		U = new int[2] {6, -10}; 
		V = new int[2] {-1, 8}; 
		break;
	case 3274:
		U = new int[2] {6, -1}; 
		V = new int[2] {-3, -1}; 
		break;
	case 3275:
		U = new int[2] {6, -4}; 
		V = new int[2] {0, 1}; 
		break;
	case 3276:
		U = new int[2] {-7, -4}; 
		V = new int[2] {-6, -6}; 
		break;
	case 3277:
		U = new int[2] {10, -7}; 
		V = new int[2] {7, -8}; 
		break;
	case 3278:
		U = new int[2] {0, 6}; 
		V = new int[2] {-6, -4}; 
		break;
	case 3279:
		U = new int[2] {9, -2}; 
		V = new int[2] {-2, -3}; 
		break;
	case 3280:
		U = new int[2] {7, 0}; 
		V = new int[2] {0, 2}; 
		break;
	case 3281:
		U = new int[2] {-6, 8}; 
		V = new int[2] {3, -3}; 
		break;
	case 3282:
		U = new int[2] {4, 10}; 
		V = new int[2] {-7, -4}; 
		break;
	case 3283:
		U = new int[2] {2, -10}; 
		V = new int[2] {3, 6}; 
		break;
	case 3284:
		U = new int[2] {6, 8}; 
		V = new int[2] {-1, 0}; 
		break;
	case 3285:
		U = new int[2] {-6, 5}; 
		V = new int[2] {-8, -3}; 
		break;
	case 3286:
		U = new int[2] {7, -9}; 
		V = new int[2] {-4, -6}; 
		break;
	case 3287:
		U = new int[2] {2, -4}; 
		V = new int[2] {-2, 4}; 
		break;
	case 3288:
		U = new int[2] {4, 8}; 
		V = new int[2] {-8, 7}; 
		break;
	case 3289:
		U = new int[2] {7, -6}; 
		V = new int[2] {4, 2}; 
		break;
	case 3290:
		U = new int[2] {-2, -9}; 
		V = new int[2] {2, 8}; 
		break;
	case 3291:
		U = new int[2] {-4, -10}; 
		V = new int[2] {-9, 4}; 
		break;
	case 3292:
		U = new int[2] {1, 4}; 
		V = new int[2] {9, 3}; 
		break;
	case 3293:
		U = new int[2] {1, 4}; 
		V = new int[2] {4, -4}; 
		break;
	case 3294:
		U = new int[2] {10, -6}; 
		V = new int[2] {-9, -4}; 
		break;
	case 3295:
		U = new int[2] {2, 9}; 
		V = new int[2] {-9, 5}; 
		break;
	case 3296:
		U = new int[2] {1, -8}; 
		V = new int[2] {-3, 3}; 
		break;
	case 3297:
		U = new int[2] {-4, -2}; 
		V = new int[2] {-8, 1}; 
		break;
	case 3298:
		U = new int[2] {-8, 0}; 
		V = new int[2] {-10, 1}; 
		break;
	case 3299:
		U = new int[2] {-5, -6}; 
		V = new int[2] {-10, 1}; 
		break;
	case 3300:
		U = new int[2] {7, 5}; 
		V = new int[2] {2, 10}; 
		break;
	case 3301:
		U = new int[2] {7, -6}; 
		V = new int[2] {10, 9}; 
		break;
	case 3302:
		U = new int[2] {-9, -3}; 
		V = new int[2] {1, 2}; 
		break;
	case 3303:
		U = new int[2] {4, 0}; 
		V = new int[2] {3, 10}; 
		break;
	case 3304:
		U = new int[2] {1, -7}; 
		V = new int[2] {-1, 10}; 
		break;
	case 3305:
		U = new int[2] {1, -2}; 
		V = new int[2] {0, 5}; 
		break;
	case 3306:
		U = new int[2] {6, 0}; 
		V = new int[2] {7, -9}; 
		break;
	case 3307:
		U = new int[2] {-10, 1}; 
		V = new int[2] {0, 2}; 
		break;
	case 3308:
		U = new int[2] {6, -10}; 
		V = new int[2] {-10, 5}; 
		break;
	case 3309:
		U = new int[2] {9, 6}; 
		V = new int[2] {-6, -6}; 
		break;
	case 3310:
		U = new int[2] {0, 8}; 
		V = new int[2] {-6, -8}; 
		break;
	case 3311:
		U = new int[2] {7, -5}; 
		V = new int[2] {1, 4}; 
		break;
	case 3312:
		U = new int[2] {1, 0}; 
		V = new int[2] {-5, -2}; 
		break;
	case 3313:
		U = new int[2] {2, 9}; 
		V = new int[2] {-7, 0}; 
		break;
	case 3314:
		U = new int[2] {-9, -2}; 
		V = new int[2] {6, 3}; 
		break;
	case 3315:
		U = new int[2] {4, 3}; 
		V = new int[2] {-9, 9}; 
		break;
	case 3316:
		U = new int[2] {3, -5}; 
		V = new int[2] {-6, -6}; 
		break;
	case 3317:
		U = new int[2] {-1, -7}; 
		V = new int[2] {-8, -7}; 
		break;
	case 3318:
		U = new int[2] {-7, 8}; 
		V = new int[2] {9, -7}; 
		break;
	case 3319:
		U = new int[2] {9, 7}; 
		V = new int[2] {-6, -2}; 
		break;
	case 3320:
		U = new int[2] {-6, -1}; 
		V = new int[2] {-4, -2}; 
		break;
	case 3321:
		U = new int[2] {-9, 0}; 
		V = new int[2] {-3, 6}; 
		break;
	case 3322:
		U = new int[2] {-2, 1}; 
		V = new int[2] {5, -9}; 
		break;
	case 3323:
		U = new int[2] {-5, 6}; 
		V = new int[2] {-10, -9}; 
		break;
	case 3324:
		U = new int[2] {-2, -5}; 
		V = new int[2] {6, 4}; 
		break;
	case 3325:
		U = new int[2] {6, -7}; 
		V = new int[2] {-10, -4}; 
		break;
	case 3326:
		U = new int[2] {-4, -8}; 
		V = new int[2] {-8, -10}; 
		break;
	case 3327:
		U = new int[2] {-9, -7}; 
		V = new int[2] {3, 4}; 
		break;
	case 3328:
		U = new int[2] {-2, 8}; 
		V = new int[2] {-8, -9}; 
		break;
	case 3329:
		U = new int[2] {-5, 2}; 
		V = new int[2] {-1, -5}; 
		break;
	case 3330:
		U = new int[2] {-6, 2}; 
		V = new int[2] {-10, 4}; 
		break;
	case 3331:
		U = new int[2] {-6, 9}; 
		V = new int[2] {7, 1}; 
		break;
	case 3332:
		U = new int[2] {5, 10}; 
		V = new int[2] {1, 3}; 
		break;
	case 3333:
		U = new int[2] {-4, -10}; 
		V = new int[2] {-3, 3}; 
		break;
	case 3334:
		U = new int[2] {-4, 5}; 
		V = new int[2] {-3, 5}; 
		break;
	case 3335:
		U = new int[2] {9, -6}; 
		V = new int[2] {2, -3}; 
		break;
	case 3336:
		U = new int[2] {1, -8}; 
		V = new int[2] {-10, -10}; 
		break;
	case 3337:
		U = new int[2] {-7, -8}; 
		V = new int[2] {8, 3}; 
		break;
	case 3338:
		U = new int[2] {10, 2}; 
		V = new int[2] {9, -9}; 
		break;
	case 3339:
		U = new int[2] {-2, 4}; 
		V = new int[2] {5, 9}; 
		break;
	case 3340:
		U = new int[2] {9, 1}; 
		V = new int[2] {5, -10}; 
		break;
	case 3341:
		U = new int[2] {-2, -4}; 
		V = new int[2] {-10, 6}; 
		break;
	case 3342:
		U = new int[2] {-2, -3}; 
		V = new int[2] {-5, -7}; 
		break;
	case 3343:
		U = new int[2] {-3, -9}; 
		V = new int[2] {3, -3}; 
		break;
	case 3344:
		U = new int[2] {-10, -3}; 
		V = new int[2] {1, 9}; 
		break;
	case 3345:
		U = new int[2] {-8, -7}; 
		V = new int[2] {3, 0}; 
		break;
	case 3346:
		U = new int[2] {9, 1}; 
		V = new int[2] {8, -1}; 
		break;
	case 3347:
		U = new int[2] {-10, 5}; 
		V = new int[2] {-6, 3}; 
		break;
	case 3348:
		U = new int[2] {-7, 6}; 
		V = new int[2] {-2, 4}; 
		break;
	case 3349:
		U = new int[2] {9, -3}; 
		V = new int[2] {-5, -8}; 
		break;
	case 3350:
		U = new int[2] {-2, -6}; 
		V = new int[2] {5, -7}; 
		break;
	case 3351:
		U = new int[2] {6, -7}; 
		V = new int[2] {-8, 4}; 
		break;
	case 3352:
		U = new int[2] {3, 3}; 
		V = new int[2] {2, 2}; 
		break;
	case 3353:
		U = new int[2] {3, 10}; 
		V = new int[2] {-2, 5}; 
		break;
	case 3354:
		U = new int[2] {-4, 7}; 
		V = new int[2] {5, 9}; 
		break;
	case 3355:
		U = new int[2] {-1, -9}; 
		V = new int[2] {9, -4}; 
		break;
	case 3356:
		U = new int[2] {-6, 10}; 
		V = new int[2] {5, 0}; 
		break;
	case 3357:
		U = new int[2] {1, 7}; 
		V = new int[2] {0, -1}; 
		break;
	case 3358:
		U = new int[2] {4, -8}; 
		V = new int[2] {1, 6}; 
		break;
	case 3359:
		U = new int[2] {7, -3}; 
		V = new int[2] {9, -5}; 
		break;
	case 3360:
		U = new int[2] {-6, 8}; 
		V = new int[2] {-2, -9}; 
		break;
	case 3361:
		U = new int[2] {-1, -9}; 
		V = new int[2] {4, -3}; 
		break;
	case 3362:
		U = new int[2] {-9, 10}; 
		V = new int[2] {0, 8}; 
		break;
	case 3363:
		U = new int[2] {8, 10}; 
		V = new int[2] {-1, -8}; 
		break;
	case 3364:
		U = new int[2] {-10, -5}; 
		V = new int[2] {-1, 7}; 
		break;
	case 3365:
		U = new int[2] {2, -4}; 
		V = new int[2] {2, -9}; 
		break;
	case 3366:
		U = new int[2] {1, 8}; 
		V = new int[2] {-5, 6}; 
		break;
	case 3367:
		U = new int[2] {3, -7}; 
		V = new int[2] {5, -1}; 
		break;
	case 3368:
		U = new int[2] {-4, -9}; 
		V = new int[2] {-9, 2}; 
		break;
	case 3369:
		U = new int[2] {7, -2}; 
		V = new int[2] {10, -7}; 
		break;
	case 3370:
		U = new int[2] {4, -1}; 
		V = new int[2] {-4, 5}; 
		break;
	case 3371:
		U = new int[2] {7, 2}; 
		V = new int[2] {-10, 0}; 
		break;
	case 3372:
		U = new int[2] {-3, -10}; 
		V = new int[2] {3, 4}; 
		break;
	case 3373:
		U = new int[2] {-5, -5}; 
		V = new int[2] {7, 1}; 
		break;
	case 3374:
		U = new int[2] {-8, 1}; 
		V = new int[2] {5, -3}; 
		break;
	case 3375:
		U = new int[2] {-1, 6}; 
		V = new int[2] {8, -1}; 
		break;
	case 3376:
		U = new int[2] {7, -6}; 
		V = new int[2] {-2, -6}; 
		break;
	case 3377:
		U = new int[2] {3, -8}; 
		V = new int[2] {10, -1}; 
		break;
	case 3378:
		U = new int[2] {-8, 1}; 
		V = new int[2] {7, 9}; 
		break;
	case 3379:
		U = new int[2] {3, -2}; 
		V = new int[2] {-10, -5}; 
		break;
	case 3380:
		U = new int[2] {-10, -10}; 
		V = new int[2] {10, -3}; 
		break;
	case 3381:
		U = new int[2] {1, 3}; 
		V = new int[2] {3, 0}; 
		break;
	case 3382:
		U = new int[2] {4, -9}; 
		V = new int[2] {8, 7}; 
		break;
	case 3383:
		U = new int[2] {-2, -9}; 
		V = new int[2] {5, -7}; 
		break;
	case 3384:
		U = new int[2] {2, -5}; 
		V = new int[2] {6, 5}; 
		break;
	case 3385:
		U = new int[2] {-5, -7}; 
		V = new int[2] {3, -2}; 
		break;
	case 3386:
		U = new int[2] {-6, 7}; 
		V = new int[2] {6, 4}; 
		break;
	case 3387:
		U = new int[2] {-6, 3}; 
		V = new int[2] {-8, -2}; 
		break;
	case 3388:
		U = new int[2] {4, -5}; 
		V = new int[2] {-7, -2}; 
		break;
	case 3389:
		U = new int[2] {0, 3}; 
		V = new int[2] {5, 8}; 
		break;
	case 3390:
		U = new int[2] {-4, -6}; 
		V = new int[2] {-4, 7}; 
		break;
	case 3391:
		U = new int[2] {-2, -7}; 
		V = new int[2] {10, 2}; 
		break;
	case 3392:
		U = new int[2] {0, 10}; 
		V = new int[2] {-4, 6}; 
		break;
	case 3393:
		U = new int[2] {3, 7}; 
		V = new int[2] {-10, -5}; 
		break;
	case 3394:
		U = new int[2] {2, 9}; 
		V = new int[2] {-9, -8}; 
		break;
	case 3395:
		U = new int[2] {-10, 0}; 
		V = new int[2] {-3, 4}; 
		break;
	case 3396:
		U = new int[2] {4, 2}; 
		V = new int[2] {4, 1}; 
		break;
	case 3397:
		U = new int[2] {8, 9}; 
		V = new int[2] {-1, -6}; 
		break;
	case 3398:
		U = new int[2] {-10, 8}; 
		V = new int[2] {-6, 2}; 
		break;
	case 3399:
		U = new int[2] {1, -10}; 
		V = new int[2] {6, 2}; 
		break;
	case 3400:
		U = new int[2] {5, -4}; 
		V = new int[2] {4, 9}; 
		break;
	case 3401:
		U = new int[2] {9, -4}; 
		V = new int[2] {0, -3}; 
		break;
	case 3402:
		U = new int[2] {-3, 5}; 
		V = new int[2] {3, 2}; 
		break;
	case 3403:
		U = new int[2] {-3, 1}; 
		V = new int[2] {7, -8}; 
		break;
	case 3404:
		U = new int[2] {0, 5}; 
		V = new int[2] {-4, 1}; 
		break;
	case 3405:
		U = new int[2] {-2, 4}; 
		V = new int[2] {4, 5}; 
		break;
	case 3406:
		U = new int[2] {0, -7}; 
		V = new int[2] {5, 2}; 
		break;
	case 3407:
		U = new int[2] {5, 8}; 
		V = new int[2] {5, 1}; 
		break;
	case 3408:
		U = new int[2] {-8, -6}; 
		V = new int[2] {7, -9}; 
		break;
	case 3409:
		U = new int[2] {-5, 7}; 
		V = new int[2] {8, -1}; 
		break;
	case 3410:
		U = new int[2] {8, 2}; 
		V = new int[2] {5, -10}; 
		break;
	case 3411:
		U = new int[2] {-1, -8}; 
		V = new int[2] {1, 0}; 
		break;
	case 3412:
		U = new int[2] {4, 0}; 
		V = new int[2] {6, 3}; 
		break;
	case 3413:
		U = new int[2] {4, 2}; 
		V = new int[2] {5, 3}; 
		break;
	case 3414:
		U = new int[2] {-4, -9}; 
		V = new int[2] {-2, 10}; 
		break;
	case 3415:
		U = new int[2] {6, -5}; 
		V = new int[2] {-1, 7}; 
		break;
	case 3416:
		U = new int[2] {-1, -5}; 
		V = new int[2] {1, 1}; 
		break;
	case 3417:
		U = new int[2] {-2, -2}; 
		V = new int[2] {8, -1}; 
		break;
	case 3418:
		U = new int[2] {-8, 6}; 
		V = new int[2] {-6, 10}; 
		break;
	case 3419:
		U = new int[2] {7, 8}; 
		V = new int[2] {-4, 10}; 
		break;
	case 3420:
		U = new int[2] {-1, -3}; 
		V = new int[2] {-1, 0}; 
		break;
	case 3421:
		U = new int[2] {2, 1}; 
		V = new int[2] {-1, 0}; 
		break;
	case 3422:
		U = new int[2] {-3, -9}; 
		V = new int[2] {9, -10}; 
		break;
	case 3423:
		U = new int[2] {-6, 6}; 
		V = new int[2] {-9, 0}; 
		break;
	case 3424:
		U = new int[2] {-9, 10}; 
		V = new int[2] {9, -6}; 
		break;
	case 3425:
		U = new int[2] {10, 5}; 
		V = new int[2] {-5, 0}; 
		break;
	case 3426:
		U = new int[2] {1, 0}; 
		V = new int[2] {10, -5}; 
		break;
	case 3427:
		U = new int[2] {-9, 4}; 
		V = new int[2] {-4, 6}; 
		break;
	case 3428:
		U = new int[2] {-8, -9}; 
		V = new int[2] {4, 9}; 
		break;
	case 3429:
		U = new int[2] {10, 0}; 
		V = new int[2] {-1, 3}; 
		break;
	case 3430:
		U = new int[2] {-6, -2}; 
		V = new int[2] {-7, 4}; 
		break;
	case 3431:
		U = new int[2] {-1, 10}; 
		V = new int[2] {3, 4}; 
		break;
	case 3432:
		U = new int[2] {-4, 9}; 
		V = new int[2] {3, -6}; 
		break;
	case 3433:
		U = new int[2] {-10, 9}; 
		V = new int[2] {1, 6}; 
		break;
	case 3434:
		U = new int[2] {9, 9}; 
		V = new int[2] {-1, 1}; 
		break;
	case 3435:
		U = new int[2] {0, 1}; 
		V = new int[2] {-3, -10}; 
		break;
	case 3436:
		U = new int[2] {-5, 7}; 
		V = new int[2] {-9, 3}; 
		break;
	case 3437:
		U = new int[2] {-9, 7}; 
		V = new int[2] {6, -2}; 
		break;
	case 3438:
		U = new int[2] {-1, -4}; 
		V = new int[2] {3, -6}; 
		break;
	case 3439:
		U = new int[2] {6, 7}; 
		V = new int[2] {-7, -10}; 
		break;
	case 3440:
		U = new int[2] {0, -10}; 
		V = new int[2] {-8, -7}; 
		break;
	case 3441:
		U = new int[2] {-10, 7}; 
		V = new int[2] {10, 5}; 
		break;
	case 3442:
		U = new int[2] {-10, 7}; 
		V = new int[2] {-2, -4}; 
		break;
	case 3443:
		U = new int[2] {-8, -5}; 
		V = new int[2] {-1, 4}; 
		break;
	case 3444:
		U = new int[2] {-9, 6}; 
		V = new int[2] {9, 10}; 
		break;
	case 3445:
		U = new int[2] {-7, -8}; 
		V = new int[2] {-2, -7}; 
		break;
	case 3446:
		U = new int[2] {-7, -3}; 
		V = new int[2] {1, 2}; 
		break;
	case 3447:
		U = new int[2] {9, 2}; 
		V = new int[2] {0, 4}; 
		break;
	case 3448:
		U = new int[2] {-3, -1}; 
		V = new int[2] {4, 8}; 
		break;
	case 3449:
		U = new int[2] {1, 3}; 
		V = new int[2] {3, -6}; 
		break;
	case 3450:
		U = new int[2] {0, -3}; 
		V = new int[2] {10, 3}; 
		break;
	case 3451:
		U = new int[2] {3, -4}; 
		V = new int[2] {-1, -2}; 
		break;
	case 3452:
		U = new int[2] {2, 4}; 
		V = new int[2] {5, 8}; 
		break;
	case 3453:
		U = new int[2] {8, 5}; 
		V = new int[2] {9, 3}; 
		break;
	case 3454:
		U = new int[2] {-1, 5}; 
		V = new int[2] {-9, 10}; 
		break;
	case 3455:
		U = new int[2] {6, 2}; 
		V = new int[2] {-5, -6}; 
		break;
	case 3456:
		U = new int[2] {5, 7}; 
		V = new int[2] {4, 5}; 
		break;
	case 3457:
		U = new int[2] {10, -2}; 
		V = new int[2] {8, 2}; 
		break;
	case 3458:
		U = new int[2] {2, -8}; 
		V = new int[2] {-1, -1}; 
		break;
	case 3459:
		U = new int[2] {1, -1}; 
		V = new int[2] {3, -1}; 
		break;
	case 3460:
		U = new int[2] {3, 9}; 
		V = new int[2] {0, 10}; 
		break;
	case 3461:
		U = new int[2] {10, -2}; 
		V = new int[2] {-8, 6}; 
		break;
	case 3462:
		U = new int[2] {-3, 8}; 
		V = new int[2] {10, -3}; 
		break;
	case 3463:
		U = new int[2] {-1, -1}; 
		V = new int[2] {0, -7}; 
		break;
	case 3464:
		U = new int[2] {-8, -7}; 
		V = new int[2] {3, -1}; 
		break;
	case 3465:
		U = new int[2] {-8, -1}; 
		V = new int[2] {0, -5}; 
		break;
	case 3466:
		U = new int[2] {1, -6}; 
		V = new int[2] {3, 8}; 
		break;
	case 3467:
		U = new int[2] {3, 0}; 
		V = new int[2] {-1, 10}; 
		break;
	case 3468:
		U = new int[2] {-1, -1}; 
		V = new int[2] {3, 3}; 
		break;
	case 3469:
		U = new int[2] {1, 10}; 
		V = new int[2] {-1, -8}; 
		break;
	case 3470:
		U = new int[2] {-1, 1}; 
		V = new int[2] {3, -5}; 
		break;
	case 3471:
		U = new int[2] {-3, -9}; 
		V = new int[2] {1, -9}; 
		break;
	case 3472:
		U = new int[2] {5, -10}; 
		V = new int[2] {-5, 10}; 
		break;
	case 3473:
		U = new int[2] {0, -2}; 
		V = new int[2] {-8, -3}; 
		break;
	case 3474:
		U = new int[2] {8, -6}; 
		V = new int[2] {-2, 2}; 
		break;
	case 3475:
		U = new int[2] {1, 9}; 
		V = new int[2] {6, -9}; 
		break;
	case 3476:
		U = new int[2] {3, 3}; 
		V = new int[2] {-3, 4}; 
		break;
	case 3477:
		U = new int[2] {-8, -5}; 
		V = new int[2] {-1, -7}; 
		break;
	case 3478:
		U = new int[2] {-9, 0}; 
		V = new int[2] {-7, 0}; 
		break;
	case 3479:
		U = new int[2] {-8, 1}; 
		V = new int[2] {-2, 5}; 
		break;
	case 3480:
		U = new int[2] {9, 3}; 
		V = new int[2] {-5, 4}; 
		break;
	case 3481:
		U = new int[2] {-7, -9}; 
		V = new int[2] {-1, 10}; 
		break;
	case 3482:
		U = new int[2] {2, 9}; 
		V = new int[2] {1, 9}; 
		break;
	case 3483:
		U = new int[2] {7, -4}; 
		V = new int[2] {8, -4}; 
		break;
	case 3484:
		U = new int[2] {7, 2}; 
		V = new int[2] {6, 3}; 
		break;
	case 3485:
		U = new int[2] {6, 10}; 
		V = new int[2] {9, 10}; 
		break;
	case 3486:
		U = new int[2] {4, -5}; 
		V = new int[2] {3, 9}; 
		break;
	case 3487:
		U = new int[2] {6, -8}; 
		V = new int[2] {6, -8}; 
		break;
	case 3488:
		U = new int[2] {-10, 5}; 
		V = new int[2] {4, 7}; 
		break;
	case 3489:
		U = new int[2] {-10, 6}; 
		V = new int[2] {-1, -4}; 
		break;
	case 3490:
		U = new int[2] {8, -1}; 
		V = new int[2] {-8, 5}; 
		break;
	case 3491:
		U = new int[2] {9, -3}; 
		V = new int[2] {4, 5}; 
		break;
	case 3492:
		U = new int[2] {5, 3}; 
		V = new int[2] {9, 7}; 
		break;
	case 3493:
		U = new int[2] {-3, -8}; 
		V = new int[2] {10, 7}; 
		break;
	case 3494:
		U = new int[2] {-9, 2}; 
		V = new int[2] {2, -8}; 
		break;
	case 3495:
		U = new int[2] {-9, 0}; 
		V = new int[2] {-5, -4}; 
		break;
	case 3496:
		U = new int[2] {5, 8}; 
		V = new int[2] {-6, -9}; 
		break;
	case 3497:
		U = new int[2] {6, 2}; 
		V = new int[2] {4, -6}; 
		break;
	case 3498:
		U = new int[2] {8, 4}; 
		V = new int[2] {0, -8}; 
		break;
	case 3499:
		U = new int[2] {-2, -10}; 
		V = new int[2] {1, -1}; 
		break;
	case 3500:
		U = new int[2] {-1, -5}; 
		V = new int[2] {8, -8}; 
		break;
	case 3501:
		U = new int[2] {9, -3}; 
		V = new int[2] {10, 4}; 
		break;
	case 3502:
		U = new int[2] {-7, -10}; 
		V = new int[2] {-9, -9}; 
		break;
	case 3503:
		U = new int[2] {3, -9}; 
		V = new int[2] {-8, -7}; 
		break;
	case 3504:
		U = new int[2] {-6, -7}; 
		V = new int[2] {4, 6}; 
		break;
	case 3505:
		U = new int[2] {0, 7}; 
		V = new int[2] {-9, -4}; 
		break;
	case 3506:
		U = new int[2] {8, 0}; 
		V = new int[2] {-1, 1}; 
		break;
	case 3507:
		U = new int[2] {6, -3}; 
		V = new int[2] {-9, 3}; 
		break;
	case 3508:
		U = new int[2] {-1, -2}; 
		V = new int[2] {-3, 0}; 
		break;
	case 3509:
		U = new int[2] {-4, 9}; 
		V = new int[2] {-8, -8}; 
		break;
	case 3510:
		U = new int[2] {2, -5}; 
		V = new int[2] {-5, 3}; 
		break;
	case 3511:
		U = new int[2] {-6, -8}; 
		V = new int[2] {-5, -6}; 
		break;
	case 3512:
		U = new int[2] {1, -2}; 
		V = new int[2] {-9, -9}; 
		break;
	case 3513:
		U = new int[2] {-3, -10}; 
		V = new int[2] {-1, -1}; 
		break;
	case 3514:
		U = new int[2] {9, 3}; 
		V = new int[2] {9, -2}; 
		break;
	case 3515:
		U = new int[2] {0, -10}; 
		V = new int[2] {9, -4}; 
		break;
	case 3516:
		U = new int[2] {-5, 8}; 
		V = new int[2] {2, 6}; 
		break;
	case 3517:
		U = new int[2] {8, 5}; 
		V = new int[2] {1, 8}; 
		break;
	case 3518:
		U = new int[2] {-9, 4}; 
		V = new int[2] {1, -10}; 
		break;
	case 3519:
		U = new int[2] {0, 5}; 
		V = new int[2] {-1, 0}; 
		break;
	case 3520:
		U = new int[2] {5, 6}; 
		V = new int[2] {-10, 8}; 
		break;
	case 3521:
		U = new int[2] {-5, 7}; 
		V = new int[2] {-2, 7}; 
		break;
	case 3522:
		U = new int[2] {9, 6}; 
		V = new int[2] {-6, -6}; 
		break;
	case 3523:
		U = new int[2] {-6, -7}; 
		V = new int[2] {-6, -7}; 
		break;
	case 3524:
		U = new int[2] {5, -1}; 
		V = new int[2] {-10, 8}; 
		break;
	case 3525:
		U = new int[2] {-6, -5}; 
		V = new int[2] {-7, -6}; 
		break;
	case 3526:
		U = new int[2] {-1, -6}; 
		V = new int[2] {10, 8}; 
		break;
	case 3527:
		U = new int[2] {-2, -4}; 
		V = new int[2] {-5, -2}; 
		break;
	case 3528:
		U = new int[2] {3, 10}; 
		V = new int[2] {-4, 7}; 
		break;
	case 3529:
		U = new int[2] {-2, -2}; 
		V = new int[2] {10, -6}; 
		break;
	case 3530:
		U = new int[2] {4, -2}; 
		V = new int[2] {9, -7}; 
		break;
	case 3531:
		U = new int[2] {-10, -10}; 
		V = new int[2] {-5, -10}; 
		break;
	case 3532:
		U = new int[2] {-5, 3}; 
		V = new int[2] {-1, 10}; 
		break;
	case 3533:
		U = new int[2] {-4, -10}; 
		V = new int[2] {4, 9}; 
		break;
	case 3534:
		U = new int[2] {-8, -4}; 
		V = new int[2] {-8, 1}; 
		break;
	case 3535:
		U = new int[2] {-10, 1}; 
		V = new int[2] {-5, -5}; 
		break;
	case 3536:
		U = new int[2] {-4, -6}; 
		V = new int[2] {-2, -2}; 
		break;
	case 3537:
		U = new int[2] {5, 6}; 
		V = new int[2] {-3, 1}; 
		break;
	case 3538:
		U = new int[2] {-2, -10}; 
		V = new int[2] {4, -8}; 
		break;
	case 3539:
		U = new int[2] {5, 8}; 
		V = new int[2] {0, 6}; 
		break;
	case 3540:
		U = new int[2] {7, -9}; 
		V = new int[2] {8, 8}; 
		break;
	case 3541:
		U = new int[2] {-5, 4}; 
		V = new int[2] {-6, 1}; 
		break;
	case 3542:
		U = new int[2] {-5, -10}; 
		V = new int[2] {5, 2}; 
		break;
	case 3543:
		U = new int[2] {10, 7}; 
		V = new int[2] {2, 0}; 
		break;
	case 3544:
		U = new int[2] {10, -4}; 
		V = new int[2] {1, -8}; 
		break;
	case 3545:
		U = new int[2] {10, -1}; 
		V = new int[2] {-6, 1}; 
		break;
	case 3546:
		U = new int[2] {5, -3}; 
		V = new int[2] {9, 4}; 
		break;
	case 3547:
		U = new int[2] {2, -6}; 
		V = new int[2] {4, -2}; 
		break;
	case 3548:
		U = new int[2] {-1, -2}; 
		V = new int[2] {4, -9}; 
		break;
	case 3549:
		U = new int[2] {2, -10}; 
		V = new int[2] {-7, -8}; 
		break;
	case 3550:
		U = new int[2] {-10, 8}; 
		V = new int[2] {-3, 8}; 
		break;
	case 3551:
		U = new int[2] {2, 2}; 
		V = new int[2] {1, -10}; 
		break;
	case 3552:
		U = new int[2] {-4, 2}; 
		V = new int[2] {-2, 8}; 
		break;
	case 3553:
		U = new int[2] {-7, 1}; 
		V = new int[2] {-4, 1}; 
		break;
	case 3554:
		U = new int[2] {-2, 1}; 
		V = new int[2] {10, 8}; 
		break;
	case 3555:
		U = new int[2] {-2, 4}; 
		V = new int[2] {-9, -2}; 
		break;
	case 3556:
		U = new int[2] {-10, -6}; 
		V = new int[2] {2, -8}; 
		break;
	case 3557:
		U = new int[2] {-10, 2}; 
		V = new int[2] {-6, 0}; 
		break;
	case 3558:
		U = new int[2] {-8, 1}; 
		V = new int[2] {-4, 1}; 
		break;
	case 3559:
		U = new int[2] {-5, 9}; 
		V = new int[2] {-6, 6}; 
		break;
	case 3560:
		U = new int[2] {8, -6}; 
		V = new int[2] {-1, 6}; 
		break;
	case 3561:
		U = new int[2] {-7, 0}; 
		V = new int[2] {2, -4}; 
		break;
	case 3562:
		U = new int[2] {9, -2}; 
		V = new int[2] {7, 9}; 
		break;
	case 3563:
		U = new int[2] {1, 0}; 
		V = new int[2] {10, 3}; 
		break;
	case 3564:
		U = new int[2] {-4, 0}; 
		V = new int[2] {-7, 3}; 
		break;
	case 3565:
		U = new int[2] {1, -8}; 
		V = new int[2] {10, 4}; 
		break;
	case 3566:
		U = new int[2] {-9, 8}; 
		V = new int[2] {-10, -6}; 
		break;
	case 3567:
		U = new int[2] {-4, 2}; 
		V = new int[2] {4, 1}; 
		break;
	case 3568:
		U = new int[2] {-3, -1}; 
		V = new int[2] {9, -5}; 
		break;
	case 3569:
		U = new int[2] {-10, 6}; 
		V = new int[2] {0, 9}; 
		break;
	case 3570:
		U = new int[2] {6, -8}; 
		V = new int[2] {-9, -3}; 
		break;
	case 3571:
		U = new int[2] {4, 3}; 
		V = new int[2] {-3, 4}; 
		break;
	case 3572:
		U = new int[2] {-6, -3}; 
		V = new int[2] {-10, 1}; 
		break;
	case 3573:
		U = new int[2] {5, -8}; 
		V = new int[2] {-6, -7}; 
		break;
	case 3574:
		U = new int[2] {10, -2}; 
		V = new int[2] {0, 1}; 
		break;
	case 3575:
		U = new int[2] {-10, -9}; 
		V = new int[2] {-2, -7}; 
		break;
	case 3576:
		U = new int[2] {3, 6}; 
		V = new int[2] {-3, 1}; 
		break;
	case 3577:
		U = new int[2] {-8, 9}; 
		V = new int[2] {1, 10}; 
		break;
	case 3578:
		U = new int[2] {1, 7}; 
		V = new int[2] {3, 2}; 
		break;
	case 3579:
		U = new int[2] {-4, -10}; 
		V = new int[2] {5, 10}; 
		break;
	case 3580:
		U = new int[2] {3, 3}; 
		V = new int[2] {6, 8}; 
		break;
	case 3581:
		U = new int[2] {10, 6}; 
		V = new int[2] {-8, 10}; 
		break;
	case 3582:
		U = new int[2] {8, -8}; 
		V = new int[2] {-3, 0}; 
		break;
	case 3583:
		U = new int[2] {-3, -8}; 
		V = new int[2] {-3, 2}; 
		break;
	case 3584:
		U = new int[2] {3, -10}; 
		V = new int[2] {-5, 10}; 
		break;
	case 3585:
		U = new int[2] {-5, 6}; 
		V = new int[2] {2, -8}; 
		break;
	case 3586:
		U = new int[2] {-9, -2}; 
		V = new int[2] {-9, 2}; 
		break;
	case 3587:
		U = new int[2] {-9, 2}; 
		V = new int[2] {-10, -5}; 
		break;
	case 3588:
		U = new int[2] {10, -2}; 
		V = new int[2] {-5, -4}; 
		break;
	case 3589:
		U = new int[2] {-5, -6}; 
		V = new int[2] {-5, -8}; 
		break;
	case 3590:
		U = new int[2] {-4, 0}; 
		V = new int[2] {1, -2}; 
		break;
	case 3591:
		U = new int[2] {5, -7}; 
		V = new int[2] {-9, -8}; 
		break;
	case 3592:
		U = new int[2] {6, 0}; 
		V = new int[2] {10, 9}; 
		break;
	case 3593:
		U = new int[2] {7, 5}; 
		V = new int[2] {-2, -8}; 
		break;
	case 3594:
		U = new int[2] {6, -10}; 
		V = new int[2] {-5, -4}; 
		break;
	case 3595:
		U = new int[2] {-5, 5}; 
		V = new int[2] {4, 6}; 
		break;
	case 3596:
		U = new int[2] {3, -9}; 
		V = new int[2] {-9, 9}; 
		break;
	case 3597:
		U = new int[2] {-3, -4}; 
		V = new int[2] {-7, 4}; 
		break;
	case 3598:
		U = new int[2] {4, -9}; 
		V = new int[2] {-2, -2}; 
		break;
	case 3599:
		U = new int[2] {3, -9}; 
		V = new int[2] {-3, 0}; 
		break;
	case 3600:
		U = new int[2] {-1, -2}; 
		V = new int[2] {-10, 4}; 
		break;
	case 3601:
		U = new int[2] {1, -8}; 
		V = new int[2] {3, -10}; 
		break;
	case 3602:
		U = new int[2] {-10, 0}; 
		V = new int[2] {8, 10}; 
		break;
	case 3603:
		U = new int[2] {-4, -3}; 
		V = new int[2] {2, 7}; 
		break;
	case 3604:
		U = new int[2] {9, 3}; 
		V = new int[2] {-5, -6}; 
		break;
	case 3605:
		U = new int[2] {0, 8}; 
		V = new int[2] {-4, -6}; 
		break;
	case 3606:
		U = new int[2] {3, -7}; 
		V = new int[2] {-9, 0}; 
		break;
	case 3607:
		U = new int[2] {7, -3}; 
		V = new int[2] {1, 4}; 
		break;
	case 3608:
		U = new int[2] {-1, 6}; 
		V = new int[2] {4, -9}; 
		break;
	case 3609:
		U = new int[2] {8, 6}; 
		V = new int[2] {8, 3}; 
		break;
	case 3610:
		U = new int[2] {2, -1}; 
		V = new int[2] {8, 5}; 
		break;
	case 3611:
		U = new int[2] {10, 7}; 
		V = new int[2] {6, -5}; 
		break;
	case 3612:
		U = new int[2] {6, 6}; 
		V = new int[2] {3, 9}; 
		break;
	case 3613:
		U = new int[2] {-6, 2}; 
		V = new int[2] {-4, -6}; 
		break;
	case 3614:
		U = new int[2] {-1, 8}; 
		V = new int[2] {0, 10}; 
		break;
	case 3615:
		U = new int[2] {-9, 5}; 
		V = new int[2] {-4, 2}; 
		break;
	case 3616:
		U = new int[2] {10, 1}; 
		V = new int[2] {-9, 0}; 
		break;
	case 3617:
		U = new int[2] {9, -7}; 
		V = new int[2] {8, 9}; 
		break;
	case 3618:
		U = new int[2] {7, 6}; 
		V = new int[2] {-10, -5}; 
		break;
	case 3619:
		U = new int[2] {-6, -1}; 
		V = new int[2] {-10, 0}; 
		break;
	case 3620:
		U = new int[2] {10, 4}; 
		V = new int[2] {-4, 2}; 
		break;
	case 3621:
		U = new int[2] {-2, -8}; 
		V = new int[2] {-1, 8}; 
		break;
	case 3622:
		U = new int[2] {0, 8}; 
		V = new int[2] {-10, 2}; 
		break;
	case 3623:
		U = new int[2] {-3, 0}; 
		V = new int[2] {-7, -3}; 
		break;
	case 3624:
		U = new int[2] {7, 4}; 
		V = new int[2] {-2, -1}; 
		break;
	case 3625:
		U = new int[2] {2, 8}; 
		V = new int[2] {-8, 10}; 
		break;
	case 3626:
		U = new int[2] {7, 2}; 
		V = new int[2] {2, -6}; 
		break;
	case 3627:
		U = new int[2] {-9, 2}; 
		V = new int[2] {-10, -6}; 
		break;
	case 3628:
		U = new int[2] {1, 8}; 
		V = new int[2] {10, 7}; 
		break;
	case 3629:
		U = new int[2] {-10, 8}; 
		V = new int[2] {9, 6}; 
		break;
	case 3630:
		U = new int[2] {-9, 7}; 
		V = new int[2] {8, 9}; 
		break;
	case 3631:
		U = new int[2] {-6, -9}; 
		V = new int[2] {2, -9}; 
		break;
	case 3632:
		U = new int[2] {4, 7}; 
		V = new int[2] {5, -8}; 
		break;
	case 3633:
		U = new int[2] {5, 7}; 
		V = new int[2] {-4, -4}; 
		break;
	case 3634:
		U = new int[2] {-4, 8}; 
		V = new int[2] {-4, 1}; 
		break;
	case 3635:
		U = new int[2] {9, 8}; 
		V = new int[2] {8, 6}; 
		break;
	case 3636:
		U = new int[2] {-2, -5}; 
		V = new int[2] {-4, 1}; 
		break;
	case 3637:
		U = new int[2] {-1, 3}; 
		V = new int[2] {5, 9}; 
		break;
	case 3638:
		U = new int[2] {-1, -5}; 
		V = new int[2] {7, 8}; 
		break;
	case 3639:
		U = new int[2] {9, -9}; 
		V = new int[2] {-7, -5}; 
		break;
	case 3640:
		U = new int[2] {-6, -8}; 
		V = new int[2] {-6, -7}; 
		break;
	case 3641:
		U = new int[2] {-8, -6}; 
		V = new int[2] {-8, 3}; 
		break;
	case 3642:
		U = new int[2] {-3, 2}; 
		V = new int[2] {3, 4}; 
		break;
	case 3643:
		U = new int[2] {4, 6}; 
		V = new int[2] {-7, -4}; 
		break;
	case 3644:
		U = new int[2] {-5, 6}; 
		V = new int[2] {-2, 4}; 
		break;
	case 3645:
		U = new int[2] {-1, -2}; 
		V = new int[2] {-6, -6}; 
		break;
	case 3646:
		U = new int[2] {-4, 10}; 
		V = new int[2] {9, 1}; 
		break;
	case 3647:
		U = new int[2] {-10, -5}; 
		V = new int[2] {-10, -1}; 
		break;
	case 3648:
		U = new int[2] {7, -10}; 
		V = new int[2] {1, 10}; 
		break;
	case 3649:
		U = new int[2] {-4, 3}; 
		V = new int[2] {2, -2}; 
		break;
	case 3650:
		U = new int[2] {10, 2}; 
		V = new int[2] {5, -7}; 
		break;
	case 3651:
		U = new int[2] {6, -5}; 
		V = new int[2] {7, 9}; 
		break;
	case 3652:
		U = new int[2] {-2, -9}; 
		V = new int[2] {-3, 10}; 
		break;
	case 3653:
		U = new int[2] {0, 4}; 
		V = new int[2] {-9, 9}; 
		break;
	case 3654:
		U = new int[2] {9, 3}; 
		V = new int[2] {1, 6}; 
		break;
	case 3655:
		U = new int[2] {-7, 2}; 
		V = new int[2] {1, -7}; 
		break;
	case 3656:
		U = new int[2] {2, -10}; 
		V = new int[2] {-9, -3}; 
		break;
	case 3657:
		U = new int[2] {7, -2}; 
		V = new int[2] {-3, 5}; 
		break;
	case 3658:
		U = new int[2] {-5, 7}; 
		V = new int[2] {8, -6}; 
		break;
	case 3659:
		U = new int[2] {2, -8}; 
		V = new int[2] {6, 6}; 
		break;
	case 3660:
		U = new int[2] {-7, 4}; 
		V = new int[2] {9, 6}; 
		break;
	case 3661:
		U = new int[2] {-7, -9}; 
		V = new int[2] {7, -7}; 
		break;
	case 3662:
		U = new int[2] {-5, 8}; 
		V = new int[2] {4, -3}; 
		break;
	case 3663:
		U = new int[2] {-3, -4}; 
		V = new int[2] {0, 0}; 
		break;
	case 3664:
		U = new int[2] {4, -9}; 
		V = new int[2] {-1, 10}; 
		break;
	case 3665:
		U = new int[2] {-9, 5}; 
		V = new int[2] {-10, 8}; 
		break;
	case 3666:
		U = new int[2] {-6, -5}; 
		V = new int[2] {-9, 8}; 
		break;
	case 3667:
		U = new int[2] {5, 4}; 
		V = new int[2] {-5, -7}; 
		break;
	case 3668:
		U = new int[2] {10, -6}; 
		V = new int[2] {-5, -8}; 
		break;
	case 3669:
		U = new int[2] {2, 9}; 
		V = new int[2] {1, -5}; 
		break;
	case 3670:
		U = new int[2] {10, -1}; 
		V = new int[2] {-5, -9}; 
		break;
	case 3671:
		U = new int[2] {6, 10}; 
		V = new int[2] {-5, -5}; 
		break;
	case 3672:
		U = new int[2] {-4, 10}; 
		V = new int[2] {5, -7}; 
		break;
	case 3673:
		U = new int[2] {9, 1}; 
		V = new int[2] {6, 0}; 
		break;
	case 3674:
		U = new int[2] {-6, 1}; 
		V = new int[2] {-2, 4}; 
		break;
	case 3675:
		U = new int[2] {8, -10}; 
		V = new int[2] {7, -10}; 
		break;
	case 3676:
		U = new int[2] {-10, -1}; 
		V = new int[2] {4, 0}; 
		break;
	case 3677:
		U = new int[2] {0, -7}; 
		V = new int[2] {4, 3}; 
		break;
	case 3678:
		U = new int[2] {3, -9}; 
		V = new int[2] {4, -6}; 
		break;
	case 3679:
		U = new int[2] {0, -1}; 
		V = new int[2] {-7, 9}; 
		break;
	case 3680:
		U = new int[2] {-10, 4}; 
		V = new int[2] {-2, -10}; 
		break;
	case 3681:
		U = new int[2] {8, 1}; 
		V = new int[2] {2, -1}; 
		break;
	case 3682:
		U = new int[2] {3, -5}; 
		V = new int[2] {-1, -1}; 
		break;
	case 3683:
		U = new int[2] {-2, 2}; 
		V = new int[2] {4, 7}; 
		break;
	case 3684:
		U = new int[2] {-10, 7}; 
		V = new int[2] {-6, 8}; 
		break;
	case 3685:
		U = new int[2] {-8, -2}; 
		V = new int[2] {0, 6}; 
		break;
	case 3686:
		U = new int[2] {-7, -8}; 
		V = new int[2] {-9, -8}; 
		break;
	case 3687:
		U = new int[2] {-8, 3}; 
		V = new int[2] {8, -5}; 
		break;
	case 3688:
		U = new int[2] {1, 10}; 
		V = new int[2] {0, -9}; 
		break;
	case 3689:
		U = new int[2] {5, 10}; 
		V = new int[2] {2, 10}; 
		break;
	case 3690:
		U = new int[2] {-5, -2}; 
		V = new int[2] {-3, 8}; 
		break;
	case 3691:
		U = new int[2] {-6, -7}; 
		V = new int[2] {-1, 4}; 
		break;
	case 3692:
		U = new int[2] {9, 6}; 
		V = new int[2] {-2, -6}; 
		break;
	case 3693:
		U = new int[2] {4, 9}; 
		V = new int[2] {7, -5}; 
		break;
	case 3694:
		U = new int[2] {10, 4}; 
		V = new int[2] {4, 2}; 
		break;
	case 3695:
		U = new int[2] {-2, -5}; 
		V = new int[2] {3, -8}; 
		break;
	case 3696:
		U = new int[2] {-6, 8}; 
		V = new int[2] {4, -4}; 
		break;
	case 3697:
		U = new int[2] {10, 0}; 
		V = new int[2] {9, -6}; 
		break;
	case 3698:
		U = new int[2] {1, 10}; 
		V = new int[2] {-6, 9}; 
		break;
	case 3699:
		U = new int[2] {-1, 6}; 
		V = new int[2] {6, -3}; 
		break;
	case 3700:
		U = new int[2] {-9, 2}; 
		V = new int[2] {10, -6}; 
		break;
	case 3701:
		U = new int[2] {0, -9}; 
		V = new int[2] {-3, 0}; 
		break;
	case 3702:
		U = new int[2] {10, 5}; 
		V = new int[2] {-2, 0}; 
		break;
	case 3703:
		U = new int[2] {-1, -7}; 
		V = new int[2] {-1, 9}; 
		break;
	case 3704:
		U = new int[2] {5, 1}; 
		V = new int[2] {4, 6}; 
		break;
	case 3705:
		U = new int[2] {6, 5}; 
		V = new int[2] {3, 4}; 
		break;
	case 3706:
		U = new int[2] {0, 4}; 
		V = new int[2] {1, 10}; 
		break;
	case 3707:
		U = new int[2] {3, 9}; 
		V = new int[2] {-5, -9}; 
		break;
	case 3708:
		U = new int[2] {-4, 3}; 
		V = new int[2] {-10, 7}; 
		break;
	case 3709:
		U = new int[2] {6, 7}; 
		V = new int[2] {2, 8}; 
		break;
	case 3710:
		U = new int[2] {-10, -6}; 
		V = new int[2] {-4, 7}; 
		break;
	case 3711:
		U = new int[2] {0, 4}; 
		V = new int[2] {6, -1}; 
		break;
	case 3712:
		U = new int[2] {10, -10}; 
		V = new int[2] {7, -10}; 
		break;
	case 3713:
		U = new int[2] {1, -9}; 
		V = new int[2] {4, -6}; 
		break;
	case 3714:
		U = new int[2] {10, 6}; 
		V = new int[2] {-7, -3}; 
		break;
	case 3715:
		U = new int[2] {-1, -8}; 
		V = new int[2] {2, -8}; 
		break;
	case 3716:
		U = new int[2] {-1, -6}; 
		V = new int[2] {9, -4}; 
		break;
	case 3717:
		U = new int[2] {4, 8}; 
		V = new int[2] {3, 2}; 
		break;
	case 3718:
		U = new int[2] {7, -10}; 
		V = new int[2] {1, -5}; 
		break;
	case 3719:
		U = new int[2] {6, -1}; 
		V = new int[2] {7, -7}; 
		break;
	case 3720:
		U = new int[2] {-3, -1}; 
		V = new int[2] {3, -6}; 
		break;
	case 3721:
		U = new int[2] {-9, 7}; 
		V = new int[2] {9, 5}; 
		break;
	case 3722:
		U = new int[2] {-10, 6}; 
		V = new int[2] {-4, -10}; 
		break;
	case 3723:
		U = new int[2] {1, -2}; 
		V = new int[2] {-6, -5}; 
		break;
	case 3724:
		U = new int[2] {5, 4}; 
		V = new int[2] {5, -2}; 
		break;
	case 3725:
		U = new int[2] {4, 1}; 
		V = new int[2] {-6, 3}; 
		break;
	case 3726:
		U = new int[2] {8, -1}; 
		V = new int[2] {8, 9}; 
		break;
	case 3727:
		U = new int[2] {1, -3}; 
		V = new int[2] {5, -10}; 
		break;
	case 3728:
		U = new int[2] {-5, 7}; 
		V = new int[2] {7, 7}; 
		break;
	case 3729:
		U = new int[2] {-5, -2}; 
		V = new int[2] {-8, -7}; 
		break;
	case 3730:
		U = new int[2] {-4, 6}; 
		V = new int[2] {-6, -5}; 
		break;
	case 3731:
		U = new int[2] {10, -4}; 
		V = new int[2] {10, 10}; 
		break;
	case 3732:
		U = new int[2] {-10, -1}; 
		V = new int[2] {-10, 1}; 
		break;
	case 3733:
		U = new int[2] {1, -5}; 
		V = new int[2] {-6, 5}; 
		break;
	case 3734:
		U = new int[2] {0, -8}; 
		V = new int[2] {-10, -7}; 
		break;
	case 3735:
		U = new int[2] {6, 8}; 
		V = new int[2] {-3, -10}; 
		break;
	case 3736:
		U = new int[2] {8, -2}; 
		V = new int[2] {-8, 0}; 
		break;
	case 3737:
		U = new int[2] {6, 5}; 
		V = new int[2] {-10, -3}; 
		break;
	case 3738:
		U = new int[2] {-5, -2}; 
		V = new int[2] {0, -10}; 
		break;
	case 3739:
		U = new int[2] {9, 3}; 
		V = new int[2] {3, 7}; 
		break;
	case 3740:
		U = new int[2] {4, -6}; 
		V = new int[2] {-7, -10}; 
		break;
	case 3741:
		U = new int[2] {5, 10}; 
		V = new int[2] {-1, -9}; 
		break;
	case 3742:
		U = new int[2] {3, 4}; 
		V = new int[2] {4, -5}; 
		break;
	case 3743:
		U = new int[2] {3, 8}; 
		V = new int[2] {6, -10}; 
		break;
	case 3744:
		U = new int[2] {2, -5}; 
		V = new int[2] {1, -1}; 
		break;
	case 3745:
		U = new int[2] {1, 2}; 
		V = new int[2] {-9, 7}; 
		break;
	case 3746:
		U = new int[2] {-10, 9}; 
		V = new int[2] {-8, 8}; 
		break;
	case 3747:
		U = new int[2] {-2, -5}; 
		V = new int[2] {3, 7}; 
		break;
	case 3748:
		U = new int[2] {-1, -4}; 
		V = new int[2] {-4, -2}; 
		break;
	case 3749:
		U = new int[2] {4, 0}; 
		V = new int[2] {-10, -7}; 
		break;
	case 3750:
		U = new int[2] {-5, 6}; 
		V = new int[2] {1, -3}; 
		break;
	case 3751:
		U = new int[2] {0, -9}; 
		V = new int[2] {-3, 10}; 
		break;
	case 3752:
		U = new int[2] {-8, -6}; 
		V = new int[2] {-2, 5}; 
		break;
	case 3753:
		U = new int[2] {-10, 3}; 
		V = new int[2] {10, -6}; 
		break;
	case 3754:
		U = new int[2] {8, 6}; 
		V = new int[2] {-5, 4}; 
		break;
	case 3755:
		U = new int[2] {0, 4}; 
		V = new int[2] {9, -6}; 
		break;
	case 3756:
		U = new int[2] {-10, 1}; 
		V = new int[2] {-2, 9}; 
		break;
	case 3757:
		U = new int[2] {-5, 5}; 
		V = new int[2] {-4, -2}; 
		break;
	case 3758:
		U = new int[2] {-1, -5}; 
		V = new int[2] {0, 8}; 
		break;
	case 3759:
		U = new int[2] {-7, -1}; 
		V = new int[2] {-8, -2}; 
		break;
	case 3760:
		U = new int[2] {10, -9}; 
		V = new int[2] {9, 2}; 
		break;
	case 3761:
		U = new int[2] {-8, -3}; 
		V = new int[2] {10, -6}; 
		break;
	case 3762:
		U = new int[2] {10, 3}; 
		V = new int[2] {7, -1}; 
		break;
	case 3763:
		U = new int[2] {10, 5}; 
		V = new int[2] {-10, -10}; 
		break;
	case 3764:
		U = new int[2] {8, 2}; 
		V = new int[2] {-4, 2}; 
		break;
	case 3765:
		U = new int[2] {8, -6}; 
		V = new int[2] {-8, 7}; 
		break;
	case 3766:
		U = new int[2] {4, 5}; 
		V = new int[2] {-7, -5}; 
		break;
	case 3767:
		U = new int[2] {1, -9}; 
		V = new int[2] {0, 6}; 
		break;
	case 3768:
		U = new int[2] {0, -3}; 
		V = new int[2] {7, 3}; 
		break;
	case 3769:
		U = new int[2] {6, -8}; 
		V = new int[2] {2, -10}; 
		break;
	case 3770:
		U = new int[2] {10, -9}; 
		V = new int[2] {-3, -6}; 
		break;
	case 3771:
		U = new int[2] {9, -4}; 
		V = new int[2] {-9, 9}; 
		break;
	case 3772:
		U = new int[2] {-4, 10}; 
		V = new int[2] {-8, 7}; 
		break;
	case 3773:
		U = new int[2] {9, 9}; 
		V = new int[2] {-10, 5}; 
		break;
	case 3774:
		U = new int[2] {-9, 8}; 
		V = new int[2] {-7, 0}; 
		break;
	case 3775:
		U = new int[2] {1, -10}; 
		V = new int[2] {10, 3}; 
		break;
	case 3776:
		U = new int[2] {-9, 8}; 
		V = new int[2] {8, -9}; 
		break;
	case 3777:
		U = new int[2] {-7, 2}; 
		V = new int[2] {9, -8}; 
		break;
	case 3778:
		U = new int[2] {9, -4}; 
		V = new int[2] {-7, 8}; 
		break;
	case 3779:
		U = new int[2] {-10, 2}; 
		V = new int[2] {6, -10}; 
		break;
	case 3780:
		U = new int[2] {-2, -3}; 
		V = new int[2] {-2, 9}; 
		break;
	case 3781:
		U = new int[2] {-6, 5}; 
		V = new int[2] {6, -4}; 
		break;
	case 3782:
		U = new int[2] {7, -4}; 
		V = new int[2] {-5, -4}; 
		break;
	case 3783:
		U = new int[2] {1, 10}; 
		V = new int[2] {9, -6}; 
		break;
	case 3784:
		U = new int[2] {1, 1}; 
		V = new int[2] {5, 0}; 
		break;
	case 3785:
		U = new int[2] {2, 3}; 
		V = new int[2] {-6, 2}; 
		break;
	case 3786:
		U = new int[2] {-5, -5}; 
		V = new int[2] {8, -10}; 
		break;
	case 3787:
		U = new int[2] {5, -9}; 
		V = new int[2] {-10, -9}; 
		break;
	case 3788:
		U = new int[2] {1, -5}; 
		V = new int[2] {7, -10}; 
		break;
	case 3789:
		U = new int[2] {-5, 3}; 
		V = new int[2] {8, -10}; 
		break;
	case 3790:
		U = new int[2] {10, 2}; 
		V = new int[2] {6, -2}; 
		break;
	case 3791:
		U = new int[2] {-6, -5}; 
		V = new int[2] {1, 2}; 
		break;
	case 3792:
		U = new int[2] {9, -8}; 
		V = new int[2] {5, 6}; 
		break;
	case 3793:
		U = new int[2] {-5, 3}; 
		V = new int[2] {7, 7}; 
		break;
	case 3794:
		U = new int[2] {-2, 4}; 
		V = new int[2] {-2, 4}; 
		break;
	case 3795:
		U = new int[2] {-8, -7}; 
		V = new int[2] {7, -9}; 
		break;
	case 3796:
		U = new int[2] {-8, -3}; 
		V = new int[2] {6, -9}; 
		break;
	case 3797:
		U = new int[2] {-10, -9}; 
		V = new int[2] {5, -5}; 
		break;
	case 3798:
		U = new int[2] {5, -2}; 
		V = new int[2] {4, 10}; 
		break;
	case 3799:
		U = new int[2] {2, 3}; 
		V = new int[2] {-3, 7}; 
		break;
	case 3800:
		U = new int[2] {2, 10}; 
		V = new int[2] {0, 4}; 
		break;
	case 3801:
		U = new int[2] {8, -1}; 
		V = new int[2] {1, 4}; 
		break;
	case 3802:
		U = new int[2] {1, -3}; 
		V = new int[2] {9, 10}; 
		break;
	case 3803:
		U = new int[2] {5, 9}; 
		V = new int[2] {0, 10}; 
		break;
	case 3804:
		U = new int[2] {5, 8}; 
		V = new int[2] {-2, 3}; 
		break;
	case 3805:
		U = new int[2] {-2, -5}; 
		V = new int[2] {6, -10}; 
		break;
	case 3806:
		U = new int[2] {0, 1}; 
		V = new int[2] {-5, -10}; 
		break;
	case 3807:
		U = new int[2] {8, -5}; 
		V = new int[2] {-6, 2}; 
		break;
	case 3808:
		U = new int[2] {-9, -1}; 
		V = new int[2] {4, 8}; 
		break;
	case 3809:
		U = new int[2] {1, -1}; 
		V = new int[2] {-9, 8}; 
		break;
	case 3810:
		U = new int[2] {7, 10}; 
		V = new int[2] {-4, 8}; 
		break;
	case 3811:
		U = new int[2] {8, -2}; 
		V = new int[2] {-2, -6}; 
		break;
	case 3812:
		U = new int[2] {-4, 2}; 
		V = new int[2] {3, 0}; 
		break;
	case 3813:
		U = new int[2] {-8, 2}; 
		V = new int[2] {-9, -6}; 
		break;
	case 3814:
		U = new int[2] {6, -2}; 
		V = new int[2] {-2, 5}; 
		break;
	case 3815:
		U = new int[2] {-6, 7}; 
		V = new int[2] {5, 5}; 
		break;
	case 3816:
		U = new int[2] {10, 9}; 
		V = new int[2] {-7, 4}; 
		break;
	case 3817:
		U = new int[2] {5, -8}; 
		V = new int[2] {5, -4}; 
		break;
	case 3818:
		U = new int[2] {-8, 8}; 
		V = new int[2] {4, 9}; 
		break;
	case 3819:
		U = new int[2] {0, 6}; 
		V = new int[2] {-8, 4}; 
		break;
	case 3820:
		U = new int[2] {-3, -4}; 
		V = new int[2] {-9, 8}; 
		break;
	case 3821:
		U = new int[2] {6, 1}; 
		V = new int[2] {0, 10}; 
		break;
	case 3822:
		U = new int[2] {1, -5}; 
		V = new int[2] {-3, 4}; 
		break;
	case 3823:
		U = new int[2] {-4, -8}; 
		V = new int[2] {0, -4}; 
		break;
	case 3824:
		U = new int[2] {10, -5}; 
		V = new int[2] {-2, -4}; 
		break;
	case 3825:
		U = new int[2] {1, 9}; 
		V = new int[2] {-6, 7}; 
		break;
	case 3826:
		U = new int[2] {6, -8}; 
		V = new int[2] {7, -4}; 
		break;
	case 3827:
		U = new int[2] {9, 4}; 
		V = new int[2] {5, 2}; 
		break;
	case 3828:
		U = new int[2] {3, 0}; 
		V = new int[2] {-4, -4}; 
		break;
	case 3829:
		U = new int[2] {5, -5}; 
		V = new int[2] {-9, 0}; 
		break;
	case 3830:
		U = new int[2] {-6, -10}; 
		V = new int[2] {-6, -10}; 
		break;
	case 3831:
		U = new int[2] {9, 10}; 
		V = new int[2] {4, 9}; 
		break;
	case 3832:
		U = new int[2] {10, -9}; 
		V = new int[2] {-4, 2}; 
		break;
	case 3833:
		U = new int[2] {1, -1}; 
		V = new int[2] {-7, -2}; 
		break;
	case 3834:
		U = new int[2] {-1, 8}; 
		V = new int[2] {7, 4}; 
		break;
	case 3835:
		U = new int[2] {-4, -2}; 
		V = new int[2] {3, -3}; 
		break;
	case 3836:
		U = new int[2] {7, 5}; 
		V = new int[2] {5, -6}; 
		break;
	case 3837:
		U = new int[2] {2, 9}; 
		V = new int[2] {5, 4}; 
		break;
	case 3838:
		U = new int[2] {0, -4}; 
		V = new int[2] {9, 4}; 
		break;
	case 3839:
		U = new int[2] {9, -2}; 
		V = new int[2] {4, -7}; 
		break;
	case 3840:
		U = new int[2] {8, -7}; 
		V = new int[2] {-2, -5}; 
		break;
	case 3841:
		U = new int[2] {-9, -3}; 
		V = new int[2] {5, 8}; 
		break;
	case 3842:
		U = new int[2] {-2, 10}; 
		V = new int[2] {6, -7}; 
		break;
	case 3843:
		U = new int[2] {10, 8}; 
		V = new int[2] {-8, -1}; 
		break;
	case 3844:
		U = new int[2] {-4, 0}; 
		V = new int[2] {-2, -5}; 
		break;
	case 3845:
		U = new int[2] {-8, -9}; 
		V = new int[2] {-2, -4}; 
		break;
	case 3846:
		U = new int[2] {7, -3}; 
		V = new int[2] {-7, 0}; 
		break;
	case 3847:
		U = new int[2] {2, -6}; 
		V = new int[2] {-1, -4}; 
		break;
	case 3848:
		U = new int[2] {-8, 2}; 
		V = new int[2] {-10, -4}; 
		break;
	case 3849:
		U = new int[2] {-1, -4}; 
		V = new int[2] {-7, 1}; 
		break;
	case 3850:
		U = new int[2] {-5, -3}; 
		V = new int[2] {2, 4}; 
		break;
	case 3851:
		U = new int[2] {-7, -8}; 
		V = new int[2] {3, 7}; 
		break;
	case 3852:
		U = new int[2] {5, 2}; 
		V = new int[2] {1, 1}; 
		break;
	case 3853:
		U = new int[2] {-3, -8}; 
		V = new int[2] {2, -1}; 
		break;
	case 3854:
		U = new int[2] {-6, -8}; 
		V = new int[2] {-9, 9}; 
		break;
	case 3855:
		U = new int[2] {-2, -10}; 
		V = new int[2] {-8, 8}; 
		break;
	case 3856:
		U = new int[2] {-9, -5}; 
		V = new int[2] {4, -10}; 
		break;
	case 3857:
		U = new int[2] {3, -8}; 
		V = new int[2] {-10, -9}; 
		break;
	case 3858:
		U = new int[2] {-1, -9}; 
		V = new int[2] {-9, 5}; 
		break;
	case 3859:
		U = new int[2] {7, -1}; 
		V = new int[2] {-10, 6}; 
		break;
	case 3860:
		U = new int[2] {9, 10}; 
		V = new int[2] {-3, 6}; 
		break;
	case 3861:
		U = new int[2] {7, -4}; 
		V = new int[2] {-6, 4}; 
		break;
	case 3862:
		U = new int[2] {3, -6}; 
		V = new int[2] {-2, 7}; 
		break;
	case 3863:
		U = new int[2] {1, 7}; 
		V = new int[2] {0, -4}; 
		break;
	case 3864:
		U = new int[2] {1, 7}; 
		V = new int[2] {-4, -6}; 
		break;
	case 3865:
		U = new int[2] {9, -4}; 
		V = new int[2] {7, -8}; 
		break;
	case 3866:
		U = new int[2] {-4, 6}; 
		V = new int[2] {4, 6}; 
		break;
	case 3867:
		U = new int[2] {7, -8}; 
		V = new int[2] {-1, 4}; 
		break;
	case 3868:
		U = new int[2] {-4, 6}; 
		V = new int[2] {8, -5}; 
		break;
	case 3869:
		U = new int[2] {-9, 8}; 
		V = new int[2] {2, 3}; 
		break;
	case 3870:
		U = new int[2] {3, 2}; 
		V = new int[2] {4, 8}; 
		break;
	case 3871:
		U = new int[2] {2, 0}; 
		V = new int[2] {9, -10}; 
		break;
	case 3872:
		U = new int[2] {4, 7}; 
		V = new int[2] {5, 4}; 
		break;
	case 3873:
		U = new int[2] {-5, 3}; 
		V = new int[2] {10, -2}; 
		break;
	case 3874:
		U = new int[2] {6, 10}; 
		V = new int[2] {-1, 2}; 
		break;
	case 3875:
		U = new int[2] {8, 6}; 
		V = new int[2] {9, 6}; 
		break;
	case 3876:
		U = new int[2] {-2, 9}; 
		V = new int[2] {7, 10}; 
		break;
	case 3877:
		U = new int[2] {4, -10}; 
		V = new int[2] {-4, 6}; 
		break;
	case 3878:
		U = new int[2] {-3, -6}; 
		V = new int[2] {-7, 2}; 
		break;
	case 3879:
		U = new int[2] {-8, 9}; 
		V = new int[2] {8, -2}; 
		break;
	case 3880:
		U = new int[2] {-1, -2}; 
		V = new int[2] {7, -8}; 
		break;
	case 3881:
		U = new int[2] {-4, -6}; 
		V = new int[2] {10, 5}; 
		break;
	case 3882:
		U = new int[2] {2, 3}; 
		V = new int[2] {-5, -1}; 
		break;
	case 3883:
		U = new int[2] {-3, -4}; 
		V = new int[2] {7, 10}; 
		break;
	case 3884:
		U = new int[2] {0, 3}; 
		V = new int[2] {-9, -4}; 
		break;
	case 3885:
		U = new int[2] {-3, 2}; 
		V = new int[2] {5, -5}; 
		break;
	case 3886:
		U = new int[2] {-3, 0}; 
		V = new int[2] {9, -2}; 
		break;
	case 3887:
		U = new int[2] {0, 9}; 
		V = new int[2] {5, 1}; 
		break;
	case 3888:
		U = new int[2] {-3, -9}; 
		V = new int[2] {-5, 2}; 
		break;
	case 3889:
		U = new int[2] {8, -8}; 
		V = new int[2] {-2, 3}; 
		break;
	case 3890:
		U = new int[2] {7, 8}; 
		V = new int[2] {3, -4}; 
		break;
	case 3891:
		U = new int[2] {-3, 6}; 
		V = new int[2] {0, 3}; 
		break;
	case 3892:
		U = new int[2] {3, -7}; 
		V = new int[2] {0, 1}; 
		break;
	case 3893:
		U = new int[2] {4, 1}; 
		V = new int[2] {-5, -4}; 
		break;
	case 3894:
		U = new int[2] {9, 2}; 
		V = new int[2] {-10, -10}; 
		break;
	case 3895:
		U = new int[2] {4, 10}; 
		V = new int[2] {6, 10}; 
		break;
	case 3896:
		U = new int[2] {-8, 7}; 
		V = new int[2] {1, 8}; 
		break;
	case 3897:
		U = new int[2] {6, 10}; 
		V = new int[2] {-1, -8}; 
		break;
	case 3898:
		U = new int[2] {10, -9}; 
		V = new int[2] {4, -5}; 
		break;
	case 3899:
		U = new int[2] {-10, 7}; 
		V = new int[2] {-10, 2}; 
		break;
	case 3900:
		U = new int[2] {6, 0}; 
		V = new int[2] {-6, 0}; 
		break;
	case 3901:
		U = new int[2] {-5, 4}; 
		V = new int[2] {-5, -10}; 
		break;
	case 3902:
		U = new int[2] {5, 4}; 
		V = new int[2] {-5, -9}; 
		break;
	case 3903:
		U = new int[2] {1, 5}; 
		V = new int[2] {2, 1}; 
		break;
	case 3904:
		U = new int[2] {-7, -9}; 
		V = new int[2] {-2, 1}; 
		break;
	case 3905:
		U = new int[2] {7, -4}; 
		V = new int[2] {5, 7}; 
		break;
	case 3906:
		U = new int[2] {0, -10}; 
		V = new int[2] {-4, 6}; 
		break;
	case 3907:
		U = new int[2] {2, -4}; 
		V = new int[2] {-7, 5}; 
		break;
	case 3908:
		U = new int[2] {2, 5}; 
		V = new int[2] {-9, 3}; 
		break;
	case 3909:
		U = new int[2] {4, -9}; 
		V = new int[2] {-4, -1}; 
		break;
	case 3910:
		U = new int[2] {7, 3}; 
		V = new int[2] {-6, 6}; 
		break;
	case 3911:
		U = new int[2] {8, -5}; 
		V = new int[2] {-4, 1}; 
		break;
	case 3912:
		U = new int[2] {-7, 8}; 
		V = new int[2] {1, -5}; 
		break;
	case 3913:
		U = new int[2] {-4, -1}; 
		V = new int[2] {8, -1}; 
		break;
	case 3914:
		U = new int[2] {-2, -1}; 
		V = new int[2] {-6, 8}; 
		break;
	case 3915:
		U = new int[2] {-3, 3}; 
		V = new int[2] {5, 4}; 
		break;
	case 3916:
		U = new int[2] {-10, 2}; 
		V = new int[2] {4, 5}; 
		break;
	case 3917:
		U = new int[2] {9, -5}; 
		V = new int[2] {-9, 7}; 
		break;
	case 3918:
		U = new int[2] {-5, -3}; 
		V = new int[2] {6, -10}; 
		break;
	case 3919:
		U = new int[2] {-7, 9}; 
		V = new int[2] {-4, -5}; 
		break;
	case 3920:
		U = new int[2] {-9, -9}; 
		V = new int[2] {8, -1}; 
		break;
	case 3921:
		U = new int[2] {9, 2}; 
		V = new int[2] {0, -10}; 
		break;
	case 3922:
		U = new int[2] {9, 1}; 
		V = new int[2] {0, 1}; 
		break;
	case 3923:
		U = new int[2] {-7, -4}; 
		V = new int[2] {-1, 1}; 
		break;
	case 3924:
		U = new int[2] {8, -2}; 
		V = new int[2] {10, 3}; 
		break;
	case 3925:
		U = new int[2] {-6, -7}; 
		V = new int[2] {-6, 7}; 
		break;
	case 3926:
		U = new int[2] {2, -4}; 
		V = new int[2] {-3, -7}; 
		break;
	case 3927:
		U = new int[2] {-3, 9}; 
		V = new int[2] {1, 9}; 
		break;
	case 3928:
		U = new int[2] {4, 3}; 
		V = new int[2] {7, 4}; 
		break;
	case 3929:
		U = new int[2] {-5, 5}; 
		V = new int[2] {-7, -8}; 
		break;
	case 3930:
		U = new int[2] {4, -2}; 
		V = new int[2] {-7, 9}; 
		break;
	case 3931:
		U = new int[2] {-6, -4}; 
		V = new int[2] {9, -1}; 
		break;
	case 3932:
		U = new int[2] {2, 4}; 
		V = new int[2] {8, -10}; 
		break;
	case 3933:
		U = new int[2] {-6, 5}; 
		V = new int[2] {0, -6}; 
		break;
	case 3934:
		U = new int[2] {-3, -10}; 
		V = new int[2] {-2, 0}; 
		break;
	case 3935:
		U = new int[2] {-1, -8}; 
		V = new int[2] {0, 10}; 
		break;
	case 3936:
		U = new int[2] {2, -3}; 
		V = new int[2] {-5, 7}; 
		break;
	case 3937:
		U = new int[2] {-9, -6}; 
		V = new int[2] {7, 5}; 
		break;
	case 3938:
		U = new int[2] {7, -2}; 
		V = new int[2] {2, 2}; 
		break;
	case 3939:
		U = new int[2] {-8, -8}; 
		V = new int[2] {10, -2}; 
		break;
	case 3940:
		U = new int[2] {3, 6}; 
		V = new int[2] {-2, -9}; 
		break;
	case 3941:
		U = new int[2] {-7, 1}; 
		V = new int[2] {-7, -8}; 
		break;
	case 3942:
		U = new int[2] {-8, -8}; 
		V = new int[2] {-2, 5}; 
		break;
	case 3943:
		U = new int[2] {6, 6}; 
		V = new int[2] {4, -7}; 
		break;
	case 3944:
		U = new int[2] {0, 6}; 
		V = new int[2] {-9, 10}; 
		break;
	case 3945:
		U = new int[2] {-2, 8}; 
		V = new int[2] {8, 5}; 
		break;
	case 3946:
		U = new int[2] {7, 7}; 
		V = new int[2] {5, 0}; 
		break;
	case 3947:
		U = new int[2] {-1, 5}; 
		V = new int[2] {10, -4}; 
		break;
	case 3948:
		U = new int[2] {10, 5}; 
		V = new int[2] {8, -8}; 
		break;
	case 3949:
		U = new int[2] {9, -3}; 
		V = new int[2] {6, -3}; 
		break;
	case 3950:
		U = new int[2] {-6, -2}; 
		V = new int[2] {-5, -3}; 
		break;
	case 3951:
		U = new int[2] {6, -5}; 
		V = new int[2] {-7, -8}; 
		break;
	case 3952:
		U = new int[2] {5, 9}; 
		V = new int[2] {-9, 3}; 
		break;
	case 3953:
		U = new int[2] {3, -1}; 
		V = new int[2] {-6, 6}; 
		break;
	case 3954:
		U = new int[2] {-1, 6}; 
		V = new int[2] {2, -2}; 
		break;
	case 3955:
		U = new int[2] {9, -3}; 
		V = new int[2] {-6, 5}; 
		break;
	case 3956:
		U = new int[2] {9, -1}; 
		V = new int[2] {8, 0}; 
		break;
	case 3957:
		U = new int[2] {-7, 0}; 
		V = new int[2] {5, 0}; 
		break;
	case 3958:
		U = new int[2] {2, 9}; 
		V = new int[2] {-2, 0}; 
		break;
	case 3959:
		U = new int[2] {-7, -9}; 
		V = new int[2] {-7, -7}; 
		break;
	case 3960:
		U = new int[2] {-10, 9}; 
		V = new int[2] {2, -3}; 
		break;
	case 3961:
		U = new int[2] {-1, -5}; 
		V = new int[2] {9, -10}; 
		break;
	case 3962:
		U = new int[2] {10, -2}; 
		V = new int[2] {-4, -7}; 
		break;
	case 3963:
		U = new int[2] {2, -9}; 
		V = new int[2] {8, 0}; 
		break;
	case 3964:
		U = new int[2] {10, -4}; 
		V = new int[2] {-5, 9}; 
		break;
	case 3965:
		U = new int[2] {0, 0}; 
		V = new int[2] {-7, 0}; 
		break;
	case 3966:
		U = new int[2] {-9, 8}; 
		V = new int[2] {-7, 6}; 
		break;
	case 3967:
		U = new int[2] {2, -7}; 
		V = new int[2] {-8, -3}; 
		break;
	case 3968:
		U = new int[2] {-6, -7}; 
		V = new int[2] {10, 4}; 
		break;
	case 3969:
		U = new int[2] {2, 2}; 
		V = new int[2] {4, -8}; 
		break;
	case 3970:
		U = new int[2] {-4, 9}; 
		V = new int[2] {1, -4}; 
		break;
	case 3971:
		U = new int[2] {4, 3}; 
		V = new int[2] {7, -4}; 
		break;
	case 3972:
		U = new int[2] {9, -4}; 
		V = new int[2] {-2, -5}; 
		break;
	case 3973:
		U = new int[2] {-4, -9}; 
		V = new int[2] {6, 1}; 
		break;
	case 3974:
		U = new int[2] {-1, -6}; 
		V = new int[2] {-7, 10}; 
		break;
	case 3975:
		U = new int[2] {-8, 9}; 
		V = new int[2] {5, 1}; 
		break;
	case 3976:
		U = new int[2] {5, 6}; 
		V = new int[2] {5, 7}; 
		break;
	case 3977:
		U = new int[2] {10, 1}; 
		V = new int[2] {-9, -7}; 
		break;
	case 3978:
		U = new int[2] {-1, -1}; 
		V = new int[2] {5, -6}; 
		break;
	case 3979:
		U = new int[2] {9, -5}; 
		V = new int[2] {-3, -7}; 
		break;
	case 3980:
		U = new int[2] {-2, -6}; 
		V = new int[2] {10, 0}; 
		break;
	case 3981:
		U = new int[2] {-1, 9}; 
		V = new int[2] {4, -9}; 
		break;
	case 3982:
		U = new int[2] {9, 5}; 
		V = new int[2] {2, 10}; 
		break;
	case 3983:
		U = new int[2] {1, -5}; 
		V = new int[2] {-2, -9}; 
		break;
	case 3984:
		U = new int[2] {10, 6}; 
		V = new int[2] {-6, -5}; 
		break;
	case 3985:
		U = new int[2] {-9, -10}; 
		V = new int[2] {-4, -2}; 
		break;
	case 3986:
		U = new int[2] {6, -3}; 
		V = new int[2] {-8, -9}; 
		break;
	case 3987:
		U = new int[2] {1, -9}; 
		V = new int[2] {4, 1}; 
		break;
	case 3988:
		U = new int[2] {-5, 8}; 
		V = new int[2] {-7, -6}; 
		break;
	case 3989:
		U = new int[2] {-4, -9}; 
		V = new int[2] {7, -10}; 
		break;
	case 3990:
		U = new int[2] {5, 2}; 
		V = new int[2] {-2, 7}; 
		break;
	case 3991:
		U = new int[2] {-8, -8}; 
		V = new int[2] {8, 9}; 
		break;
	case 3992:
		U = new int[2] {-8, 6}; 
		V = new int[2] {8, 2}; 
		break;
	case 3993:
		U = new int[2] {-6, -9}; 
		V = new int[2] {-2, 9}; 
		break;
	case 3994:
		U = new int[2] {4, 2}; 
		V = new int[2] {5, -9}; 
		break;
	case 3995:
		U = new int[2] {8, 0}; 
		V = new int[2] {2, -7}; 
		break;
	case 3996:
		U = new int[2] {8, 1}; 
		V = new int[2] {0, 9}; 
		break;
	case 3997:
		U = new int[2] {1, 10}; 
		V = new int[2] {0, -5}; 
		break;
	case 3998:
		U = new int[2] {-9, 3}; 
		V = new int[2] {-1, 6}; 
		break;
	case 3999:
		U = new int[2] {8, 3}; 
		V = new int[2] {-10, 2}; 
		break;
	case 4000:
		U = new int[2] {1, 5}; 
		V = new int[2] {-10, 7}; 
		break;
	case 4001:
		U = new int[2] {-4, -7}; 
		V = new int[2] {-4, 3}; 
		break;
	case 4002:
		U = new int[2] {-9, 8}; 
		V = new int[2] {-2, -9}; 
		break;
	case 4003:
		U = new int[2] {-4, -2}; 
		V = new int[2] {0, 8}; 
		break;
	case 4004:
		U = new int[2] {7, 6}; 
		V = new int[2] {-3, 2}; 
		break;
	case 4005:
		U = new int[2] {9, 0}; 
		V = new int[2] {4, 3}; 
		break;
	case 4006:
		U = new int[2] {-2, -5}; 
		V = new int[2] {7, -2}; 
		break;
	case 4007:
		U = new int[2] {10, -3}; 
		V = new int[2] {6, 10}; 
		break;
	case 4008:
		U = new int[2] {10, 10}; 
		V = new int[2] {-4, -1}; 
		break;
	case 4009:
		U = new int[2] {7, 9}; 
		V = new int[2] {9, -7}; 
		break;
	case 4010:
		U = new int[2] {-1, 6}; 
		V = new int[2] {0, 9}; 
		break;
	case 4011:
		U = new int[2] {-10, 4}; 
		V = new int[2] {-3, 1}; 
		break;
	case 4012:
		U = new int[2] {5, 6}; 
		V = new int[2] {-9, -9}; 
		break;
	case 4013:
		U = new int[2] {2, 0}; 
		V = new int[2] {10, -4}; 
		break;
	case 4014:
		U = new int[2] {-9, -4}; 
		V = new int[2] {-3, 4}; 
		break;
	case 4015:
		U = new int[2] {-7, -2}; 
		V = new int[2] {2, -9}; 
		break;
	case 4016:
		U = new int[2] {0, -7}; 
		V = new int[2] {-3, -3}; 
		break;
	case 4017:
		U = new int[2] {-2, -1}; 
		V = new int[2] {-4, 2}; 
		break;
	case 4018:
		U = new int[2] {-3, -1}; 
		V = new int[2] {-2, -8}; 
		break;
	case 4019:
		U = new int[2] {4, -7}; 
		V = new int[2] {4, -9}; 
		break;
	case 4020:
		U = new int[2] {1, -6}; 
		V = new int[2] {5, -8}; 
		break;
	case 4021:
		U = new int[2] {-6, -4}; 
		V = new int[2] {1, 9}; 
		break;
	case 4022:
		U = new int[2] {-7, -4}; 
		V = new int[2] {2, 8}; 
		break;
	case 4023:
		U = new int[2] {-8, 4}; 
		V = new int[2] {-1, 2}; 
		break;
	case 4024:
		U = new int[2] {-3, -5}; 
		V = new int[2] {-8, 8}; 
		break;
	case 4025:
		U = new int[2] {-10, 0}; 
		V = new int[2] {-7, -3}; 
		break;
	case 4026:
		U = new int[2] {-9, -6}; 
		V = new int[2] {-9, 8}; 
		break;
	case 4027:
		U = new int[2] {-10, -3}; 
		V = new int[2] {3, -3}; 
		break;
	case 4028:
		U = new int[2] {-4, 8}; 
		V = new int[2] {2, -3}; 
		break;
	case 4029:
		U = new int[2] {-2, 5}; 
		V = new int[2] {10, -10}; 
		break;
	case 4030:
		U = new int[2] {9, 4}; 
		V = new int[2] {-2, -3}; 
		break;
	case 4031:
		U = new int[2] {10, -4}; 
		V = new int[2] {-3, -8}; 
		break;
	case 4032:
		U = new int[2] {-10, -4}; 
		V = new int[2] {-8, -10}; 
		break;
	case 4033:
		U = new int[2] {-4, -8}; 
		V = new int[2] {-3, 4}; 
		break;
	case 4034:
		U = new int[2] {6, -4}; 
		V = new int[2] {6, 0}; 
		break;
	case 4035:
		U = new int[2] {-7, -6}; 
		V = new int[2] {-4, 6}; 
		break;
	case 4036:
		U = new int[2] {5, -1}; 
		V = new int[2] {-1, 2}; 
		break;
	case 4037:
		U = new int[2] {0, -1}; 
		V = new int[2] {3, 9}; 
		break;
	case 4038:
		U = new int[2] {7, -9}; 
		V = new int[2] {-3, 9}; 
		break;
	case 4039:
		U = new int[2] {6, 4}; 
		V = new int[2] {-7, -7}; 
		break;
	case 4040:
		U = new int[2] {1, 2}; 
		V = new int[2] {8, 3}; 
		break;
	case 4041:
		U = new int[2] {-3, -1}; 
		V = new int[2] {-9, 9}; 
		break;
	case 4042:
		U = new int[2] {-10, -10}; 
		V = new int[2] {9, 1}; 
		break;
	case 4043:
		U = new int[2] {0, -1}; 
		V = new int[2] {-7, -7}; 
		break;
	case 4044:
		U = new int[2] {2, -1}; 
		V = new int[2] {10, -1}; 
		break;
	case 4045:
		U = new int[2] {7, 10}; 
		V = new int[2] {7, -4}; 
		break;
	case 4046:
		U = new int[2] {0, -5}; 
		V = new int[2] {-5, 1}; 
		break;
	case 4047:
		U = new int[2] {2, 6}; 
		V = new int[2] {-1, -1}; 
		break;
	case 4048:
		U = new int[2] {-2, -5}; 
		V = new int[2] {-5, -3}; 
		break;
	case 4049:
		U = new int[2] {-1, 1}; 
		V = new int[2] {5, -6}; 
		break;
	case 4050:
		U = new int[2] {5, 2}; 
		V = new int[2] {10, -8}; 
		break;
	case 4051:
		U = new int[2] {4, 0}; 
		V = new int[2] {8, -8}; 
		break;
	case 4052:
		U = new int[2] {-5, -10}; 
		V = new int[2] {9, -4}; 
		break;
	case 4053:
		U = new int[2] {0, 5}; 
		V = new int[2] {-8, 4}; 
		break;
	case 4054:
		U = new int[2] {9, 4}; 
		V = new int[2] {-5, -1}; 
		break;
	case 4055:
		U = new int[2] {-2, 5}; 
		V = new int[2] {8, -7}; 
		break;
	case 4056:
		U = new int[2] {-8, 1}; 
		V = new int[2] {5, 1}; 
		break;
	case 4057:
		U = new int[2] {2, 0}; 
		V = new int[2] {5, -2}; 
		break;
	case 4058:
		U = new int[2] {5, 3}; 
		V = new int[2] {-8, 2}; 
		break;
	case 4059:
		U = new int[2] {-6, -7}; 
		V = new int[2] {0, -3}; 
		break;
	case 4060:
		U = new int[2] {10, 0}; 
		V = new int[2] {-9, -8}; 
		break;
	case 4061:
		U = new int[2] {-10, -8}; 
		V = new int[2] {5, -4}; 
		break;
	case 4062:
		U = new int[2] {-1, -2}; 
		V = new int[2] {-8, 0}; 
		break;
	case 4063:
		U = new int[2] {1, 10}; 
		V = new int[2] {-7, 6}; 
		break;
	case 4064:
		U = new int[2] {-1, 10}; 
		V = new int[2] {-3, 8}; 
		break;
	case 4065:
		U = new int[2] {-8, 7}; 
		V = new int[2] {-2, -9}; 
		break;
	case 4066:
		U = new int[2] {-6, 8}; 
		V = new int[2] {-4, -6}; 
		break;
	case 4067:
		U = new int[2] {-2, -3}; 
		V = new int[2] {2, 1}; 
		break;
	case 4068:
		U = new int[2] {3, -7}; 
		V = new int[2] {-3, 0}; 
		break;
	case 4069:
		U = new int[2] {5, -4}; 
		V = new int[2] {1, -9}; 
		break;
	case 4070:
		U = new int[2] {2, 1}; 
		V = new int[2] {9, -1}; 
		break;
	case 4071:
		U = new int[2] {3, -6}; 
		V = new int[2] {-7, -10}; 
		break;
	case 4072:
		U = new int[2] {6, -8}; 
		V = new int[2] {2, -10}; 
		break;
	case 4073:
		U = new int[2] {0, 10}; 
		V = new int[2] {2, -5}; 
		break;
	case 4074:
		U = new int[2] {0, 8}; 
		V = new int[2] {1, 10}; 
		break;
	case 4075:
		U = new int[2] {2, -2}; 
		V = new int[2] {-10, 10}; 
		break;
	case 4076:
		U = new int[2] {-7, 5}; 
		V = new int[2] {5, -1}; 
		break;
	case 4077:
		U = new int[2] {-9, 6}; 
		V = new int[2] {4, 8}; 
		break;
	case 4078:
		U = new int[2] {-8, -2}; 
		V = new int[2] {5, 4}; 
		break;
	case 4079:
		U = new int[2] {-2, -6}; 
		V = new int[2] {4, 9}; 
		break;
	case 4080:
		U = new int[2] {-2, -6}; 
		V = new int[2] {-9, 9}; 
		break;
	case 4081:
		U = new int[2] {-4, -9}; 
		V = new int[2] {-9, 0}; 
		break;
	case 4082:
		U = new int[2] {1, 5}; 
		V = new int[2] {6, 3}; 
		break;
	case 4083:
		U = new int[2] {5, -7}; 
		V = new int[2] {6, 7}; 
		break;
	case 4084:
		U = new int[2] {9, 4}; 
		V = new int[2] {7, 8}; 
		break;
	case 4085:
		U = new int[2] {-1, -4}; 
		V = new int[2] {-3, 6}; 
		break;
	case 4086:
		U = new int[2] {6, 0}; 
		V = new int[2] {9, -8}; 
		break;
	case 4087:
		U = new int[2] {-8, 6}; 
		V = new int[2] {6, -5}; 
		break;
	case 4088:
		U = new int[2] {-7, 2}; 
		V = new int[2] {-7, 4}; 
		break;
	case 4089:
		U = new int[2] {6, -5}; 
		V = new int[2] {-5, 2}; 
		break;
	case 4090:
		U = new int[2] {6, -5}; 
		V = new int[2] {2, 3}; 
		break;
	case 4091:
		U = new int[2] {1, 9}; 
		V = new int[2] {-3, 1}; 
		break;
	case 4092:
		U = new int[2] {-3, -3}; 
		V = new int[2] {-5, -9}; 
		break;
	case 4093:
		U = new int[2] {-10, -9}; 
		V = new int[2] {8, 7}; 
		break;
	case 4094:
		U = new int[2] {-10, -1}; 
		V = new int[2] {5, -9}; 
		break;
	case 4095:
		U = new int[2] {0, -9}; 
		V = new int[2] {8, -2}; 
		break;
	}

	if (offsetChosen == 'U'){
		delete[] V;
		return U;
	}else{
		delete[] U;
		return V;
	}
}

