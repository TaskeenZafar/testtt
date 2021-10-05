#include <iostream>
#include <string>
#include <vector>
#include <cmath>
#include <windows.h>
#include <conio.h>
#include <dos.h>
using namespace std;
int correctMarks(int marks, int creditHours);
float calculator1(int subjects, int mark1, int creditHour1){
	float crdtHour1[21] = {1, 1, 1, 1, 1, 1, 1, 1};
	crdtHour1[8] = 1, crdtHour1[9] = 1.5, crdtHour1[10] = 2, crdtHour1[11] = 2.33, crdtHour1[12] = 2.67, crdtHour1[13] = 3, crdtHour1[14] = 3.33, crdtHour1[15] = 3.67, crdtHour1[16] = 4, crdtHour1[17] = 4, crdtHour1[18] = 4, crdtHour1[19] = 4, crdtHour1[20] = 4; 
	float crdtHour2[41] = {2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2};
	crdtHour2[16] = 2, crdtHour2[17] = 2.5, crdtHour2[18] = 3, crdtHour2[19] = 3.5, crdtHour2[20] = 4, crdtHour2[21] = 4.33, crdtHour2[22] = 4.67, crdtHour2[23] = 5, crdtHour2[24] = 5.33, crdtHour2[25] = 5.67, crdtHour2[26] = 6, crdtHour2[27] = 6.33, crdtHour2[28] = 6.67, crdtHour2[29] = 7, crdtHour2[30] = 7.33, crdtHour2[31] = 7.67, crdtHour2[32] = 8, crdtHour2[33] = 8, crdtHour2[34] = 8, crdtHour2[35] = 8, crdtHour2[36] = 8, crdtHour2[37] = 8, crdtHour2[38] = 8, crdtHour2[39] = 8, crdtHour2[40] = 8;
	float crdtHour3[61] = {3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3};
	crdtHour3[24] = 3, crdtHour3[25] = 3.5, crdtHour3[26] = 4, crdtHour3[27] = 4.5, crdtHour3[28] = 5, crdtHour3[29] = 5.5, crdtHour3[30] = 6, crdtHour3[31] = 6.33, crdtHour3[32] = 6.67, crdtHour3[33] = 7, crdtHour3[34] = 7.33, crdtHour3[35] = 7.67, crdtHour3[36] = 8, crdtHour3[37] = 8.33, crdtHour3[38] = 8.67, crdtHour3[39] = 9, crdtHour3[40] = 9.33, crdtHour3[41] = 9.67, crdtHour3[42] = 10, crdtHour3[43] = 10.33, crdtHour3[44] = 10.67, crdtHour3[45] = 11, crdtHour3[46] = 11.33, crdtHour3[47] = 11.67, crdtHour3[48] = 12, crdtHour3[49] = 12, crdtHour3[50] = 12, crdtHour3[51] = 12, crdtHour3[52] = 12, crdtHour3[53] = 12, crdtHour3[54] = 12, crdtHour3[55] = 12, crdtHour3[56] = 12, crdtHour3[57] = 12, crdtHour3[58] = 12, crdtHour3[59] = 12, crdtHour3[60] = 12;
	float crdtHour4[81] = {4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4};
	crdtHour4[32] = 4, crdtHour4[33] = 4.5, crdtHour4[34] = 5, crdtHour4[35] = 5.5, crdtHour4[36] = 6, crdtHour4[37] = 6.5, crdtHour4[38] = 7, crdtHour4[39] = 7.5, crdtHour4[40] = 8, crdtHour4[41] = 8.33, crdtHour4[42] = 8.67, crdtHour4[43] = 9, crdtHour4[44] = 9.33, crdtHour4[45] = 9.67, crdtHour4[46] = 10, crdtHour4[47] = 10.33, crdtHour4[48] = 10.67, crdtHour4[49] = 11, crdtHour4[50] = 11.33, crdtHour4[51] = 11.67, crdtHour4[52] = 12, crdtHour4[53] = 12.33, crdtHour4[54] = 12.67, crdtHour4[55] = 13, crdtHour4[56] = 13.33, crdtHour4[57] = 13.67, crdtHour4[58] = 14, crdtHour4[59] = 14.33, crdtHour4[60] = 14.67, crdtHour4[61] = 15, crdtHour4[62] = 15.33, crdtHour4[63] = 15.67, crdtHour4[64] = 16, crdtHour4[65] = 16, crdtHour4[66] = 16, crdtHour4[67] = 16, crdtHour4[68] = 16, crdtHour4[69] = 16, crdtHour4[70] = 16, crdtHour4[71] = 16, crdtHour4[72] = 16, crdtHour4[73] = 16, crdtHour4[74] = 16, crdtHour4[75] = 16, crdtHour4[76] = 16, crdtHour4[77] = 16, crdtHour4[78] = 16, crdtHour4[79] = 16, crdtHour4[80] = 16;	
	float crdtHour5[101] = {5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5};
	crdtHour5[40] = 5, crdtHour5[41] = 5.5, crdtHour5[42] = 6, crdtHour5[43] = 6.5, crdtHour5[44] = 7, crdtHour5[45] = 7.5, crdtHour5[46] = 8, crdtHour5[47] = 8.5, crdtHour5[48] = 9, crdtHour5[49] = 9.5, crdtHour5[50] = 10, crdtHour5[51] = 10.33, crdtHour5[52] = 10.67, crdtHour5[53] = 11, crdtHour5[54] = 11.33, crdtHour5[55] = 11.67, crdtHour5[56] = 12, crdtHour5[57] = 12.33, crdtHour5[58] = 12.67, crdtHour5[59] = 13, crdtHour5[60] = 13.33, crdtHour5[61] = 13.67, crdtHour5[62] = 14, crdtHour5[63] = 14.33, crdtHour5[64] = 14.67, crdtHour5[65] = 15, crdtHour5[66] = 15.33, crdtHour5[67] = 15.67, crdtHour5[68] = 16, crdtHour5[69] = 16.33, crdtHour5[70] = 16.67, crdtHour5[71] = 17, crdtHour5[72] = 17.33, crdtHour5[73] = 17.67, crdtHour5[74] = 18, crdtHour5[75] = 18.33, crdtHour5[76] = 18.67, crdtHour5[77] = 19, crdtHour5[78] = 19.33, crdtHour5[79] = 19.67, crdtHour5[80] = 20, crdtHour5[81] = 20, crdtHour5[82] = 20, crdtHour5[83] = 20, crdtHour5[84] = 20, crdtHour5[85] = 20, crdtHour5[86] = 20, crdtHour5[87] = 20, crdtHour5[88] = 20, crdtHour5[89] = 20, crdtHour5[90] = 20, crdtHour5[91] = 20, crdtHour5[92] = 20, crdtHour5[93] = 20, crdtHour5[94] = 20, crdtHour5[95] = 20, crdtHour5[96] = 20, crdtHour5[97] = 20, crdtHour5[98] = 20, crdtHour5[99] = 20, crdtHour5[100] = 20;   
	float n1; 
	float result;
	if(subjects == 1){
		if(creditHour1 == 1){
			n1 = crdtHour1[mark1];
		}else if(creditHour1 == 2){
			n1 = crdtHour2[mark1];
		}else if(creditHour1 == 3){
			n1 = crdtHour3[mark1];
		}else if(creditHour1 == 4){
			n1 = crdtHour4[mark1];
		}else if(creditHour1 == 5){
			n1 = crdtHour5[mark1];
		}
	}result = (n1)/creditHour1;
	return result;
}
float calculator2(int subjects, int mark1, int mark2, int creditHour1, int creditHour2){
	float crdtHour1[21] = {1, 1, 1, 1, 1, 1, 1, 1};
	crdtHour1[8] = 1, crdtHour1[9] = 1.5, crdtHour1[10] = 2, crdtHour1[11] = 2.33, crdtHour1[12] = 2.67, crdtHour1[13] = 3, crdtHour1[14] = 3.33, crdtHour1[15] = 3.67, crdtHour1[16] = 4, crdtHour1[17] = 4, crdtHour1[18] = 4, crdtHour1[19] = 4, crdtHour1[20] = 4; 
	float crdtHour2[41] = {2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2};
	crdtHour2[16] = 2, crdtHour2[17] = 2.5, crdtHour2[18] = 3, crdtHour2[19] = 3.5, crdtHour2[20] = 4, crdtHour2[21] = 4.33, crdtHour2[22] = 4.67, crdtHour2[23] = 5, crdtHour2[24] = 5.33, crdtHour2[25] = 5.67, crdtHour2[26] = 6, crdtHour2[27] = 6.33, crdtHour2[28] = 6.67, crdtHour2[29] = 7, crdtHour2[30] = 7.33, crdtHour2[31] = 7.67, crdtHour2[32] = 8, crdtHour2[33] = 8, crdtHour2[34] = 8, crdtHour2[35] = 8, crdtHour2[36] = 8, crdtHour2[37] = 8, crdtHour2[38] = 8, crdtHour2[39] = 8, crdtHour2[40] = 8;
	float crdtHour3[61] = {3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3};
	crdtHour3[24] = 3, crdtHour3[25] = 3.5, crdtHour3[26] = 4, crdtHour3[27] = 4.5, crdtHour3[28] = 5, crdtHour3[29] = 5.5, crdtHour3[30] = 6, crdtHour3[31] = 6.33, crdtHour3[32] = 6.67, crdtHour3[33] = 7, crdtHour3[34] = 7.33, crdtHour3[35] = 7.67, crdtHour3[36] = 8, crdtHour3[37] = 8.33, crdtHour3[38] = 8.67, crdtHour3[39] = 9, crdtHour3[40] = 9.33, crdtHour3[41] = 9.67, crdtHour3[42] = 10, crdtHour3[43] = 10.33, crdtHour3[44] = 10.67, crdtHour3[45] = 11, crdtHour3[46] = 11.33, crdtHour3[47] = 11.67, crdtHour3[48] = 12, crdtHour3[49] = 12, crdtHour3[50] = 12, crdtHour3[51] = 12, crdtHour3[52] = 12, crdtHour3[53] = 12, crdtHour3[54] = 12, crdtHour3[55] = 12, crdtHour3[56] = 12, crdtHour3[57] = 12, crdtHour3[58] = 12, crdtHour3[59] = 12, crdtHour3[60] = 12;
	float crdtHour4[81] = {4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4};
	crdtHour4[32] = 4, crdtHour4[33] = 4.5, crdtHour4[34] = 5, crdtHour4[35] = 5.5, crdtHour4[36] = 6, crdtHour4[37] = 6.5, crdtHour4[38] = 7, crdtHour4[39] = 7.5, crdtHour4[40] = 8, crdtHour4[41] = 8.33, crdtHour4[42] = 8.67, crdtHour4[43] = 9, crdtHour4[44] = 9.33, crdtHour4[45] = 9.67, crdtHour4[46] = 10, crdtHour4[47] = 10.33, crdtHour4[48] = 10.67, crdtHour4[49] = 11, crdtHour4[50] = 11.33, crdtHour4[51] = 11.67, crdtHour4[52] = 12, crdtHour4[53] = 12.33, crdtHour4[54] = 12.67, crdtHour4[55] = 13, crdtHour4[56] = 13.33, crdtHour4[57] = 13.67, crdtHour4[58] = 14, crdtHour4[59] = 14.33, crdtHour4[60] = 14.67, crdtHour4[61] = 15, crdtHour4[62] = 15.33, crdtHour4[63] = 15.67, crdtHour4[64] = 16, crdtHour4[65] = 16, crdtHour4[66] = 16, crdtHour4[67] = 16, crdtHour4[68] = 16, crdtHour4[69] = 16, crdtHour4[70] = 16, crdtHour4[71] = 16, crdtHour4[72] = 16, crdtHour4[73] = 16, crdtHour4[74] = 16, crdtHour4[75] = 16, crdtHour4[76] = 16, crdtHour4[77] = 16, crdtHour4[78] = 16, crdtHour4[79] = 16, crdtHour4[80] = 16;	
	float crdtHour5[101] = {5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5};
	crdtHour5[40] = 5, crdtHour5[41] = 5.5, crdtHour5[42] = 6, crdtHour5[43] = 6.5, crdtHour5[44] = 7, crdtHour5[45] = 7.5, crdtHour5[46] = 8, crdtHour5[47] = 8.5, crdtHour5[48] = 9, crdtHour5[49] = 9.5, crdtHour5[50] = 10, crdtHour5[51] = 10.33, crdtHour5[52] = 10.67, crdtHour5[53] = 11, crdtHour5[54] = 11.33, crdtHour5[55] = 11.67, crdtHour5[56] = 12, crdtHour5[57] = 12.33, crdtHour5[58] = 12.67, crdtHour5[59] = 13, crdtHour5[60] = 13.33, crdtHour5[61] = 13.67, crdtHour5[62] = 14, crdtHour5[63] = 14.33, crdtHour5[64] = 14.67, crdtHour5[65] = 15, crdtHour5[66] = 15.33, crdtHour5[67] = 15.67, crdtHour5[68] = 16, crdtHour5[69] = 16.33, crdtHour5[70] = 16.67, crdtHour5[71] = 17, crdtHour5[72] = 17.33, crdtHour5[73] = 17.67, crdtHour5[74] = 18, crdtHour5[75] = 18.33, crdtHour5[76] = 18.67, crdtHour5[77] = 19, crdtHour5[78] = 19.33, crdtHour5[79] = 19.67, crdtHour5[80] = 20, crdtHour5[81] = 20, crdtHour5[82] = 20, crdtHour5[83] = 20, crdtHour5[84] = 20, crdtHour5[85] = 20, crdtHour5[86] = 20, crdtHour5[87] = 20, crdtHour5[88] = 20, crdtHour5[89] = 20, crdtHour5[90] = 20, crdtHour5[91] = 20, crdtHour5[92] = 20, crdtHour5[93] = 20, crdtHour5[94] = 20, crdtHour5[95] = 20, crdtHour5[96] = 20, crdtHour5[97] = 20, crdtHour5[98] = 20, crdtHour5[99] = 20, crdtHour5[100] = 20;   
	float n1, n2; 
	float result;
	if(subjects == 2){
		if(creditHour1 == 1){
			n1 = crdtHour1[mark1];
		}else if(creditHour1 == 2){
			n1 = crdtHour2[mark1];
		}else if(creditHour1 == 3){
			n1 = crdtHour3[mark1];
		}else if(creditHour1 == 4){
			n1 = crdtHour4[mark1];
		}else if(creditHour1 == 5){
			n1 = crdtHour5[mark1];
		}
		if(creditHour2 == 1){
			n2 = crdtHour1[mark2];
		}else if(creditHour2 == 2){
			n2 = crdtHour2[mark2];
		}else if(creditHour2 == 3){
			n2 = crdtHour3[mark2];
		}else if(creditHour2 == 4){
			n2 = crdtHour4[mark2];
		}else if(creditHour2 == 5){
			n2 = crdtHour5[mark2];
		}
	}result = (n1+n2)/(creditHour1+creditHour2);
	return result;
}
float calculator3(int subjects, int mark1, int mark2, int mark3, int creditHour1, int creditHour2, int creditHour3){
	float crdtHour1[21] = {1, 1, 1, 1, 1, 1, 1, 1};
	crdtHour1[8] = 1, crdtHour1[9] = 1.5, crdtHour1[10] = 2, crdtHour1[11] = 2.33, crdtHour1[12] = 2.67, crdtHour1[13] = 3, crdtHour1[14] = 3.33, crdtHour1[15] = 3.67, crdtHour1[16] = 4, crdtHour1[17] = 4, crdtHour1[18] = 4, crdtHour1[19] = 4, crdtHour1[20] = 4; 
	float crdtHour2[41] = {2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2};
	crdtHour2[16] = 2, crdtHour2[17] = 2.5, crdtHour2[18] = 3, crdtHour2[19] = 3.5, crdtHour2[20] = 4, crdtHour2[21] = 4.33, crdtHour2[22] = 4.67, crdtHour2[23] = 5, crdtHour2[24] = 5.33, crdtHour2[25] = 5.67, crdtHour2[26] = 6, crdtHour2[27] = 6.33, crdtHour2[28] = 6.67, crdtHour2[29] = 7, crdtHour2[30] = 7.33, crdtHour2[31] = 7.67, crdtHour2[32] = 8, crdtHour2[33] = 8, crdtHour2[34] = 8, crdtHour2[35] = 8, crdtHour2[36] = 8, crdtHour2[37] = 8, crdtHour2[38] = 8, crdtHour2[39] = 8, crdtHour2[40] = 8;
	float crdtHour3[61] = {3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3};
	crdtHour3[24] = 3, crdtHour3[25] = 3.5, crdtHour3[26] = 4, crdtHour3[27] = 4.5, crdtHour3[28] = 5, crdtHour3[29] = 5.5, crdtHour3[30] = 6, crdtHour3[31] = 6.33, crdtHour3[32] = 6.67, crdtHour3[33] = 7, crdtHour3[34] = 7.33, crdtHour3[35] = 7.67, crdtHour3[36] = 8, crdtHour3[37] = 8.33, crdtHour3[38] = 8.67, crdtHour3[39] = 9, crdtHour3[40] = 9.33, crdtHour3[41] = 9.67, crdtHour3[42] = 10, crdtHour3[43] = 10.33, crdtHour3[44] = 10.67, crdtHour3[45] = 11, crdtHour3[46] = 11.33, crdtHour3[47] = 11.67, crdtHour3[48] = 12, crdtHour3[49] = 12, crdtHour3[50] = 12, crdtHour3[51] = 12, crdtHour3[52] = 12, crdtHour3[53] = 12, crdtHour3[54] = 12, crdtHour3[55] = 12, crdtHour3[56] = 12, crdtHour3[57] = 12, crdtHour3[58] = 12, crdtHour3[59] = 12, crdtHour3[60] = 12;
	float crdtHour4[81] = {4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4};
	crdtHour4[32] = 4, crdtHour4[33] = 4.5, crdtHour4[34] = 5, crdtHour4[35] = 5.5, crdtHour4[36] = 6, crdtHour4[37] = 6.5, crdtHour4[38] = 7, crdtHour4[39] = 7.5, crdtHour4[40] = 8, crdtHour4[41] = 8.33, crdtHour4[42] = 8.67, crdtHour4[43] = 9, crdtHour4[44] = 9.33, crdtHour4[45] = 9.67, crdtHour4[46] = 10, crdtHour4[47] = 10.33, crdtHour4[48] = 10.67, crdtHour4[49] = 11, crdtHour4[50] = 11.33, crdtHour4[51] = 11.67, crdtHour4[52] = 12, crdtHour4[53] = 12.33, crdtHour4[54] = 12.67, crdtHour4[55] = 13, crdtHour4[56] = 13.33, crdtHour4[57] = 13.67, crdtHour4[58] = 14, crdtHour4[59] = 14.33, crdtHour4[60] = 14.67, crdtHour4[61] = 15, crdtHour4[62] = 15.33, crdtHour4[63] = 15.67, crdtHour4[64] = 16, crdtHour4[65] = 16, crdtHour4[66] = 16, crdtHour4[67] = 16, crdtHour4[68] = 16, crdtHour4[69] = 16, crdtHour4[70] = 16, crdtHour4[71] = 16, crdtHour4[72] = 16, crdtHour4[73] = 16, crdtHour4[74] = 16, crdtHour4[75] = 16, crdtHour4[76] = 16, crdtHour4[77] = 16, crdtHour4[78] = 16, crdtHour4[79] = 16, crdtHour4[80] = 16;	
	float crdtHour5[101] = {5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5};
	crdtHour5[40] = 5, crdtHour5[41] = 5.5, crdtHour5[42] = 6, crdtHour5[43] = 6.5, crdtHour5[44] = 7, crdtHour5[45] = 7.5, crdtHour5[46] = 8, crdtHour5[47] = 8.5, crdtHour5[48] = 9, crdtHour5[49] = 9.5, crdtHour5[50] = 10, crdtHour5[51] = 10.33, crdtHour5[52] = 10.67, crdtHour5[53] = 11, crdtHour5[54] = 11.33, crdtHour5[55] = 11.67, crdtHour5[56] = 12, crdtHour5[57] = 12.33, crdtHour5[58] = 12.67, crdtHour5[59] = 13, crdtHour5[60] = 13.33, crdtHour5[61] = 13.67, crdtHour5[62] = 14, crdtHour5[63] = 14.33, crdtHour5[64] = 14.67, crdtHour5[65] = 15, crdtHour5[66] = 15.33, crdtHour5[67] = 15.67, crdtHour5[68] = 16, crdtHour5[69] = 16.33, crdtHour5[70] = 16.67, crdtHour5[71] = 17, crdtHour5[72] = 17.33, crdtHour5[73] = 17.67, crdtHour5[74] = 18, crdtHour5[75] = 18.33, crdtHour5[76] = 18.67, crdtHour5[77] = 19, crdtHour5[78] = 19.33, crdtHour5[79] = 19.67, crdtHour5[80] = 20, crdtHour5[81] = 20, crdtHour5[82] = 20, crdtHour5[83] = 20, crdtHour5[84] = 20, crdtHour5[85] = 20, crdtHour5[86] = 20, crdtHour5[87] = 20, crdtHour5[88] = 20, crdtHour5[89] = 20, crdtHour5[90] = 20, crdtHour5[91] = 20, crdtHour5[92] = 20, crdtHour5[93] = 20, crdtHour5[94] = 20, crdtHour5[95] = 20, crdtHour5[96] = 20, crdtHour5[97] = 20, crdtHour5[98] = 20, crdtHour5[99] = 20, crdtHour5[100] = 20;   
	float n1, n2, n3; 
	float result;
	if(subjects == 3){
		if(creditHour1 == 1){
			n1 = crdtHour1[mark1];
		}else if(creditHour1 == 2){
			n1 = crdtHour2[mark1];
		}else if(creditHour1 == 3){
			n1 = crdtHour3[mark1];
		}else if(creditHour1 == 4){
			n1 = crdtHour4[mark1];
		}else if(creditHour1 == 5){
			n1 = crdtHour5[mark1];
		}
		if(creditHour2 == 1){
			n2 = crdtHour1[mark2];
		}else if(creditHour2 == 2){
			n2 = crdtHour2[mark2];
		}else if(creditHour2 == 3){
			n2 = crdtHour3[mark2];
		}else if(creditHour2 == 4){
			n2 = crdtHour4[mark2];
		}else if(creditHour2 == 5){
			n2 = crdtHour5[mark2];
		}
		if(creditHour3 == 1){
			n3 = crdtHour1[mark3];
		}else if(creditHour3 == 2){
			n3 = crdtHour2[mark3];
		}else if(creditHour3 == 3){
			n3 = crdtHour3[mark3];
		}else if(creditHour3 == 4){
			n3 = crdtHour4[mark3];
		}else if(creditHour3 == 5){
			n3 = crdtHour5[mark3];
		}
	}result = (n1+n2+n3)/(creditHour1+creditHour2+creditHour3);
	return result;
}
float calculator4(int subjects, int mark1, int mark2, int mark3, int mark4, int creditHour1, int creditHour2, int creditHour3, int creditHour4){
	float crdtHour1[21] = {1, 1, 1, 1, 1, 1, 1, 1};
	crdtHour1[8] = 1, crdtHour1[9] = 1.5, crdtHour1[10] = 2, crdtHour1[11] = 2.33, crdtHour1[12] = 2.67, crdtHour1[13] = 3, crdtHour1[14] = 3.33, crdtHour1[15] = 3.67, crdtHour1[16] = 4, crdtHour1[17] = 4, crdtHour1[18] = 4, crdtHour1[19] = 4, crdtHour1[20] = 4; 
	float crdtHour2[41] = {2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2};
	crdtHour2[16] = 2, crdtHour2[17] = 2.5, crdtHour2[18] = 3, crdtHour2[19] = 3.5, crdtHour2[20] = 4, crdtHour2[21] = 4.33, crdtHour2[22] = 4.67, crdtHour2[23] = 5, crdtHour2[24] = 5.33, crdtHour2[25] = 5.67, crdtHour2[26] = 6, crdtHour2[27] = 6.33, crdtHour2[28] = 6.67, crdtHour2[29] = 7, crdtHour2[30] = 7.33, crdtHour2[31] = 7.67, crdtHour2[32] = 8, crdtHour2[33] = 8, crdtHour2[34] = 8, crdtHour2[35] = 8, crdtHour2[36] = 8, crdtHour2[37] = 8, crdtHour2[38] = 8, crdtHour2[39] = 8, crdtHour2[40] = 8;
	float crdtHour3[61] = {3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3};
	crdtHour3[24] = 3, crdtHour3[25] = 3.5, crdtHour3[26] = 4, crdtHour3[27] = 4.5, crdtHour3[28] = 5, crdtHour3[29] = 5.5, crdtHour3[30] = 6, crdtHour3[31] = 6.33, crdtHour3[32] = 6.67, crdtHour3[33] = 7, crdtHour3[34] = 7.33, crdtHour3[35] = 7.67, crdtHour3[36] = 8, crdtHour3[37] = 8.33, crdtHour3[38] = 8.67, crdtHour3[39] = 9, crdtHour3[40] = 9.33, crdtHour3[41] = 9.67, crdtHour3[42] = 10, crdtHour3[43] = 10.33, crdtHour3[44] = 10.67, crdtHour3[45] = 11, crdtHour3[46] = 11.33, crdtHour3[47] = 11.67, crdtHour3[48] = 12, crdtHour3[49] = 12, crdtHour3[50] = 12, crdtHour3[51] = 12, crdtHour3[52] = 12, crdtHour3[53] = 12, crdtHour3[54] = 12, crdtHour3[55] = 12, crdtHour3[56] = 12, crdtHour3[57] = 12, crdtHour3[58] = 12, crdtHour3[59] = 12, crdtHour3[60] = 12;
	float crdtHour4[81] = {4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4};
	crdtHour4[32] = 4, crdtHour4[33] = 4.5, crdtHour4[34] = 5, crdtHour4[35] = 5.5, crdtHour4[36] = 6, crdtHour4[37] = 6.5, crdtHour4[38] = 7, crdtHour4[39] = 7.5, crdtHour4[40] = 8, crdtHour4[41] = 8.33, crdtHour4[42] = 8.67, crdtHour4[43] = 9, crdtHour4[44] = 9.33, crdtHour4[45] = 9.67, crdtHour4[46] = 10, crdtHour4[47] = 10.33, crdtHour4[48] = 10.67, crdtHour4[49] = 11, crdtHour4[50] = 11.33, crdtHour4[51] = 11.67, crdtHour4[52] = 12, crdtHour4[53] = 12.33, crdtHour4[54] = 12.67, crdtHour4[55] = 13, crdtHour4[56] = 13.33, crdtHour4[57] = 13.67, crdtHour4[58] = 14, crdtHour4[59] = 14.33, crdtHour4[60] = 14.67, crdtHour4[61] = 15, crdtHour4[62] = 15.33, crdtHour4[63] = 15.67, crdtHour4[64] = 16, crdtHour4[65] = 16, crdtHour4[66] = 16, crdtHour4[67] = 16, crdtHour4[68] = 16, crdtHour4[69] = 16, crdtHour4[70] = 16, crdtHour4[71] = 16, crdtHour4[72] = 16, crdtHour4[73] = 16, crdtHour4[74] = 16, crdtHour4[75] = 16, crdtHour4[76] = 16, crdtHour4[77] = 16, crdtHour4[78] = 16, crdtHour4[79] = 16, crdtHour4[80] = 16;	
	float crdtHour5[101] = {5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5};
	crdtHour5[40] = 5, crdtHour5[41] = 5.5, crdtHour5[42] = 6, crdtHour5[43] = 6.5, crdtHour5[44] = 7, crdtHour5[45] = 7.5, crdtHour5[46] = 8, crdtHour5[47] = 8.5, crdtHour5[48] = 9, crdtHour5[49] = 9.5, crdtHour5[50] = 10, crdtHour5[51] = 10.33, crdtHour5[52] = 10.67, crdtHour5[53] = 11, crdtHour5[54] = 11.33, crdtHour5[55] = 11.67, crdtHour5[56] = 12, crdtHour5[57] = 12.33, crdtHour5[58] = 12.67, crdtHour5[59] = 13, crdtHour5[60] = 13.33, crdtHour5[61] = 13.67, crdtHour5[62] = 14, crdtHour5[63] = 14.33, crdtHour5[64] = 14.67, crdtHour5[65] = 15, crdtHour5[66] = 15.33, crdtHour5[67] = 15.67, crdtHour5[68] = 16, crdtHour5[69] = 16.33, crdtHour5[70] = 16.67, crdtHour5[71] = 17, crdtHour5[72] = 17.33, crdtHour5[73] = 17.67, crdtHour5[74] = 18, crdtHour5[75] = 18.33, crdtHour5[76] = 18.67, crdtHour5[77] = 19, crdtHour5[78] = 19.33, crdtHour5[79] = 19.67, crdtHour5[80] = 20, crdtHour5[81] = 20, crdtHour5[82] = 20, crdtHour5[83] = 20, crdtHour5[84] = 20, crdtHour5[85] = 20, crdtHour5[86] = 20, crdtHour5[87] = 20, crdtHour5[88] = 20, crdtHour5[89] = 20, crdtHour5[90] = 20, crdtHour5[91] = 20, crdtHour5[92] = 20, crdtHour5[93] = 20, crdtHour5[94] = 20, crdtHour5[95] = 20, crdtHour5[96] = 20, crdtHour5[97] = 20, crdtHour5[98] = 20, crdtHour5[99] = 20, crdtHour5[100] = 20;   
	float n1, n2, n3, n4; 
	float result;
	if(subjects == 4){
		if(creditHour1 == 1){
			n1 = crdtHour1[mark1];
		}else if(creditHour1 == 2){
			n1 = crdtHour2[mark1];
		}else if(creditHour1 == 3){
			n1 = crdtHour3[mark1];
		}else if(creditHour1 == 4){
			n1 = crdtHour4[mark1];
		}else if(creditHour1 == 5){
			n1 = crdtHour5[mark1];
		}
		if(creditHour2 == 1){
			n2 = crdtHour1[mark2];
		}else if(creditHour2 == 2){
			n2 = crdtHour2[mark2];
		}else if(creditHour2 == 3){
			n2 = crdtHour3[mark2];
		}else if(creditHour2 == 4){
			n2 = crdtHour4[mark2];
		}else if(creditHour2 == 5){
			n2 = crdtHour5[mark2];
		}
		if(creditHour3 == 1){
			n3 = crdtHour1[mark3];
		}else if(creditHour3 == 2){
			n3 = crdtHour2[mark3];
		}else if(creditHour3 == 3){
			n3 = crdtHour3[mark3];
		}else if(creditHour3 == 4){
			n3 = crdtHour4[mark3];
		}else if(creditHour3 == 5){
			n3 = crdtHour5[mark3];
		}
		if(creditHour4 == 1){
			n4 = crdtHour1[mark4];
		}else if(creditHour4 == 2){
			n4 = crdtHour2[mark4];
		}else if(creditHour4 == 3){
			n4 = crdtHour3[mark4];
		}else if(creditHour4 == 4){
			n4 = crdtHour4[mark4];
		}else if(creditHour4 == 5){
			n4 = crdtHour5[mark4];
		}
	}result = (n1+n2+n3+n4)/(creditHour1+creditHour2+creditHour3+creditHour4);
	return result;
}
float calculator5(int subjects, int mark1, int mark2, int mark3, int mark4, int mark5, int creditHour1, int creditHour2, int creditHour3, int creditHour4, int creditHour5){
	float crdtHour1[21] = {1, 1, 1, 1, 1, 1, 1, 1};
	crdtHour1[8] = 1, crdtHour1[9] = 1.5, crdtHour1[10] = 2, crdtHour1[11] = 2.33, crdtHour1[12] = 2.67, crdtHour1[13] = 3, crdtHour1[14] = 3.33, crdtHour1[15] = 3.67, crdtHour1[16] = 4, crdtHour1[17] = 4, crdtHour1[18] = 4, crdtHour1[19] = 4, crdtHour1[20] = 4; 
	float crdtHour2[41] = {2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2};
	crdtHour2[16] = 2, crdtHour2[17] = 2.5, crdtHour2[18] = 3, crdtHour2[19] = 3.5, crdtHour2[20] = 4, crdtHour2[21] = 4.33, crdtHour2[22] = 4.67, crdtHour2[23] = 5, crdtHour2[24] = 5.33, crdtHour2[25] = 5.67, crdtHour2[26] = 6, crdtHour2[27] = 6.33, crdtHour2[28] = 6.67, crdtHour2[29] = 7, crdtHour2[30] = 7.33, crdtHour2[31] = 7.67, crdtHour2[32] = 8, crdtHour2[33] = 8, crdtHour2[34] = 8, crdtHour2[35] = 8, crdtHour2[36] = 8, crdtHour2[37] = 8, crdtHour2[38] = 8, crdtHour2[39] = 8, crdtHour2[40] = 8;
	float crdtHour3[61] = {3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3};
	crdtHour3[24] = 3, crdtHour3[25] = 3.5, crdtHour3[26] = 4, crdtHour3[27] = 4.5, crdtHour3[28] = 5, crdtHour3[29] = 5.5, crdtHour3[30] = 6, crdtHour3[31] = 6.33, crdtHour3[32] = 6.67, crdtHour3[33] = 7, crdtHour3[34] = 7.33, crdtHour3[35] = 7.67, crdtHour3[36] = 8, crdtHour3[37] = 8.33, crdtHour3[38] = 8.67, crdtHour3[39] = 9, crdtHour3[40] = 9.33, crdtHour3[41] = 9.67, crdtHour3[42] = 10, crdtHour3[43] = 10.33, crdtHour3[44] = 10.67, crdtHour3[45] = 11, crdtHour3[46] = 11.33, crdtHour3[47] = 11.67, crdtHour3[48] = 12, crdtHour3[49] = 12, crdtHour3[50] = 12, crdtHour3[51] = 12, crdtHour3[52] = 12, crdtHour3[53] = 12, crdtHour3[54] = 12, crdtHour3[55] = 12, crdtHour3[56] = 12, crdtHour3[57] = 12, crdtHour3[58] = 12, crdtHour3[59] = 12, crdtHour3[60] = 12;
	float crdtHour4[81] = {4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4};
	crdtHour4[32] = 4, crdtHour4[33] = 4.5, crdtHour4[34] = 5, crdtHour4[35] = 5.5, crdtHour4[36] = 6, crdtHour4[37] = 6.5, crdtHour4[38] = 7, crdtHour4[39] = 7.5, crdtHour4[40] = 8, crdtHour4[41] = 8.33, crdtHour4[42] = 8.67, crdtHour4[43] = 9, crdtHour4[44] = 9.33, crdtHour4[45] = 9.67, crdtHour4[46] = 10, crdtHour4[47] = 10.33, crdtHour4[48] = 10.67, crdtHour4[49] = 11, crdtHour4[50] = 11.33, crdtHour4[51] = 11.67, crdtHour4[52] = 12, crdtHour4[53] = 12.33, crdtHour4[54] = 12.67, crdtHour4[55] = 13, crdtHour4[56] = 13.33, crdtHour4[57] = 13.67, crdtHour4[58] = 14, crdtHour4[59] = 14.33, crdtHour4[60] = 14.67, crdtHour4[61] = 15, crdtHour4[62] = 15.33, crdtHour4[63] = 15.67, crdtHour4[64] = 16, crdtHour4[65] = 16, crdtHour4[66] = 16, crdtHour4[67] = 16, crdtHour4[68] = 16, crdtHour4[69] = 16, crdtHour4[70] = 16, crdtHour4[71] = 16, crdtHour4[72] = 16, crdtHour4[73] = 16, crdtHour4[74] = 16, crdtHour4[75] = 16, crdtHour4[76] = 16, crdtHour4[77] = 16, crdtHour4[78] = 16, crdtHour4[79] = 16, crdtHour4[80] = 16;	
	float crdtHour5[101] = {5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5};
	crdtHour5[40] = 5, crdtHour5[41] = 5.5, crdtHour5[42] = 6, crdtHour5[43] = 6.5, crdtHour5[44] = 7, crdtHour5[45] = 7.5, crdtHour5[46] = 8, crdtHour5[47] = 8.5, crdtHour5[48] = 9, crdtHour5[49] = 9.5, crdtHour5[50] = 10, crdtHour5[51] = 10.33, crdtHour5[52] = 10.67, crdtHour5[53] = 11, crdtHour5[54] = 11.33, crdtHour5[55] = 11.67, crdtHour5[56] = 12, crdtHour5[57] = 12.33, crdtHour5[58] = 12.67, crdtHour5[59] = 13, crdtHour5[60] = 13.33, crdtHour5[61] = 13.67, crdtHour5[62] = 14, crdtHour5[63] = 14.33, crdtHour5[64] = 14.67, crdtHour5[65] = 15, crdtHour5[66] = 15.33, crdtHour5[67] = 15.67, crdtHour5[68] = 16, crdtHour5[69] = 16.33, crdtHour5[70] = 16.67, crdtHour5[71] = 17, crdtHour5[72] = 17.33, crdtHour5[73] = 17.67, crdtHour5[74] = 18, crdtHour5[75] = 18.33, crdtHour5[76] = 18.67, crdtHour5[77] = 19, crdtHour5[78] = 19.33, crdtHour5[79] = 19.67, crdtHour5[80] = 20, crdtHour5[81] = 20, crdtHour5[82] = 20, crdtHour5[83] = 20, crdtHour5[84] = 20, crdtHour5[85] = 20, crdtHour5[86] = 20, crdtHour5[87] = 20, crdtHour5[88] = 20, crdtHour5[89] = 20, crdtHour5[90] = 20, crdtHour5[91] = 20, crdtHour5[92] = 20, crdtHour5[93] = 20, crdtHour5[94] = 20, crdtHour5[95] = 20, crdtHour5[96] = 20, crdtHour5[97] = 20, crdtHour5[98] = 20, crdtHour5[99] = 20, crdtHour5[100] = 20;   
	float n1, n2, n3, n4, n5; 
	float result;
	if(subjects == 5){
		if(creditHour1 == 1){
			n1 = crdtHour1[mark1];
		}else if(creditHour1 == 2){
			n1 = crdtHour2[mark1];
		}else if(creditHour1 == 3){
			n1 = crdtHour3[mark1];
		}else if(creditHour1 == 4){
			n1 = crdtHour4[mark1];
		}else if(creditHour1 == 5){
			n1 = crdtHour5[mark1];
		}
		if(creditHour2 == 1){
			n2 = crdtHour1[mark2];
		}else if(creditHour2 == 2){
			n2 = crdtHour2[mark2];
		}else if(creditHour2 == 3){
			n2 = crdtHour3[mark2];
		}else if(creditHour2 == 4){
			n2 = crdtHour4[mark2];
		}else if(creditHour2 == 5){
			n2 = crdtHour5[mark2];
		}
		if(creditHour3 == 1){
			n3 = crdtHour1[mark3];
		}else if(creditHour3 == 2){
			n3 = crdtHour2[mark3];
		}else if(creditHour3 == 3){
			n3 = crdtHour3[mark3];
		}else if(creditHour3 == 4){
			n3 = crdtHour4[mark3];
		}else if(creditHour3 == 5){
			n3 = crdtHour5[mark3];
		}
		if(creditHour4 == 1){
			n4 = crdtHour1[mark4];
		}else if(creditHour4 == 2){
			n4 = crdtHour2[mark4];
		}else if(creditHour4 == 3){
			n4 = crdtHour3[mark4];
		}else if(creditHour4 == 4){
			n4 = crdtHour4[mark4];
		}else if(creditHour4 == 5){
			n4 = crdtHour5[mark4];
		}
		if(creditHour5 == 1){
			n5 = crdtHour1[mark5];
		}else if(creditHour5 == 2){
			n5 = crdtHour2[mark5];
		}else if(creditHour5 == 3){
			n5 = crdtHour3[mark5];
		}else if(creditHour5 == 4){
			n5 = crdtHour4[mark5];
		}else if(creditHour5 == 5){
			n5 = crdtHour5[mark5];
		}
	}result = (n1+n2+n3+n4+n5)/(creditHour1+creditHour2+creditHour3+creditHour4+creditHour5);
	return result;
}
float calculator6(int subjects, int mark1, int mark2, int mark3, int mark4, int mark5, int mark6, int creditHour1, int creditHour2, int creditHour3, int creditHour4, int creditHour5, int creditHour6){
	float crdtHour1[21] = {1, 1, 1, 1, 1, 1, 1, 1};
	crdtHour1[8] = 1, crdtHour1[9] = 1.5, crdtHour1[10] = 2, crdtHour1[11] = 2.33, crdtHour1[12] = 2.67, crdtHour1[13] = 3, crdtHour1[14] = 3.33, crdtHour1[15] = 3.67, crdtHour1[16] = 4, crdtHour1[17] = 4, crdtHour1[18] = 4, crdtHour1[19] = 4, crdtHour1[20] = 4; 
	float crdtHour2[41] = {2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2};
	crdtHour2[16] = 2, crdtHour2[17] = 2.5, crdtHour2[18] = 3, crdtHour2[19] = 3.5, crdtHour2[20] = 4, crdtHour2[21] = 4.33, crdtHour2[22] = 4.67, crdtHour2[23] = 5, crdtHour2[24] = 5.33, crdtHour2[25] = 5.67, crdtHour2[26] = 6, crdtHour2[27] = 6.33, crdtHour2[28] = 6.67, crdtHour2[29] = 7, crdtHour2[30] = 7.33, crdtHour2[31] = 7.67, crdtHour2[32] = 8, crdtHour2[33] = 8, crdtHour2[34] = 8, crdtHour2[35] = 8, crdtHour2[36] = 8, crdtHour2[37] = 8, crdtHour2[38] = 8, crdtHour2[39] = 8, crdtHour2[40] = 8;
	float crdtHour3[61] = {3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3};
	crdtHour3[24] = 3, crdtHour3[25] = 3.5, crdtHour3[26] = 4, crdtHour3[27] = 4.5, crdtHour3[28] = 5, crdtHour3[29] = 5.5, crdtHour3[30] = 6, crdtHour3[31] = 6.33, crdtHour3[32] = 6.67, crdtHour3[33] = 7, crdtHour3[34] = 7.33, crdtHour3[35] = 7.67, crdtHour3[36] = 8, crdtHour3[37] = 8.33, crdtHour3[38] = 8.67, crdtHour3[39] = 9, crdtHour3[40] = 9.33, crdtHour3[41] = 9.67, crdtHour3[42] = 10, crdtHour3[43] = 10.33, crdtHour3[44] = 10.67, crdtHour3[45] = 11, crdtHour3[46] = 11.33, crdtHour3[47] = 11.67, crdtHour3[48] = 12, crdtHour3[49] = 12, crdtHour3[50] = 12, crdtHour3[51] = 12, crdtHour3[52] = 12, crdtHour3[53] = 12, crdtHour3[54] = 12, crdtHour3[55] = 12, crdtHour3[56] = 12, crdtHour3[57] = 12, crdtHour3[58] = 12, crdtHour3[59] = 12, crdtHour3[60] = 12;
	float crdtHour4[81] = {4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4};
	crdtHour4[32] = 4, crdtHour4[33] = 4.5, crdtHour4[34] = 5, crdtHour4[35] = 5.5, crdtHour4[36] = 6, crdtHour4[37] = 6.5, crdtHour4[38] = 7, crdtHour4[39] = 7.5, crdtHour4[40] = 8, crdtHour4[41] = 8.33, crdtHour4[42] = 8.67, crdtHour4[43] = 9, crdtHour4[44] = 9.33, crdtHour4[45] = 9.67, crdtHour4[46] = 10, crdtHour4[47] = 10.33, crdtHour4[48] = 10.67, crdtHour4[49] = 11, crdtHour4[50] = 11.33, crdtHour4[51] = 11.67, crdtHour4[52] = 12, crdtHour4[53] = 12.33, crdtHour4[54] = 12.67, crdtHour4[55] = 13, crdtHour4[56] = 13.33, crdtHour4[57] = 13.67, crdtHour4[58] = 14, crdtHour4[59] = 14.33, crdtHour4[60] = 14.67, crdtHour4[61] = 15, crdtHour4[62] = 15.33, crdtHour4[63] = 15.67, crdtHour4[64] = 16, crdtHour4[65] = 16, crdtHour4[66] = 16, crdtHour4[67] = 16, crdtHour4[68] = 16, crdtHour4[69] = 16, crdtHour4[70] = 16, crdtHour4[71] = 16, crdtHour4[72] = 16, crdtHour4[73] = 16, crdtHour4[74] = 16, crdtHour4[75] = 16, crdtHour4[76] = 16, crdtHour4[77] = 16, crdtHour4[78] = 16, crdtHour4[79] = 16, crdtHour4[80] = 16;	
	float crdtHour5[101] = {5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5};
	crdtHour5[40] = 5, crdtHour5[41] = 5.5, crdtHour5[42] = 6, crdtHour5[43] = 6.5, crdtHour5[44] = 7, crdtHour5[45] = 7.5, crdtHour5[46] = 8, crdtHour5[47] = 8.5, crdtHour5[48] = 9, crdtHour5[49] = 9.5, crdtHour5[50] = 10, crdtHour5[51] = 10.33, crdtHour5[52] = 10.67, crdtHour5[53] = 11, crdtHour5[54] = 11.33, crdtHour5[55] = 11.67, crdtHour5[56] = 12, crdtHour5[57] = 12.33, crdtHour5[58] = 12.67, crdtHour5[59] = 13, crdtHour5[60] = 13.33, crdtHour5[61] = 13.67, crdtHour5[62] = 14, crdtHour5[63] = 14.33, crdtHour5[64] = 14.67, crdtHour5[65] = 15, crdtHour5[66] = 15.33, crdtHour5[67] = 15.67, crdtHour5[68] = 16, crdtHour5[69] = 16.33, crdtHour5[70] = 16.67, crdtHour5[71] = 17, crdtHour5[72] = 17.33, crdtHour5[73] = 17.67, crdtHour5[74] = 18, crdtHour5[75] = 18.33, crdtHour5[76] = 18.67, crdtHour5[77] = 19, crdtHour5[78] = 19.33, crdtHour5[79] = 19.67, crdtHour5[80] = 20, crdtHour5[81] = 20, crdtHour5[82] = 20, crdtHour5[83] = 20, crdtHour5[84] = 20, crdtHour5[85] = 20, crdtHour5[86] = 20, crdtHour5[87] = 20, crdtHour5[88] = 20, crdtHour5[89] = 20, crdtHour5[90] = 20, crdtHour5[91] = 20, crdtHour5[92] = 20, crdtHour5[93] = 20, crdtHour5[94] = 20, crdtHour5[95] = 20, crdtHour5[96] = 20, crdtHour5[97] = 20, crdtHour5[98] = 20, crdtHour5[99] = 20, crdtHour5[100] = 20;   
	float n1, n2, n3, n4, n5, n6; 
	float result;
	if(subjects == 6){
		if(creditHour1 == 1){
			n1 = crdtHour1[mark1];
		}else if(creditHour1 == 2){
			n1 = crdtHour2[mark1];
		}else if(creditHour1 == 3){
			n1 = crdtHour3[mark1];
		}else if(creditHour1 == 4){
			n1 = crdtHour4[mark1];
		}else if(creditHour1 == 5){
			n1 = crdtHour5[mark1];
		}
		if(creditHour2 == 1){
			n2 = crdtHour1[mark2];
		}else if(creditHour2 == 2){
			n2 = crdtHour2[mark2];
		}else if(creditHour2 == 3){
			n2 = crdtHour3[mark2];
		}else if(creditHour2 == 4){
			n2 = crdtHour4[mark2];
		}else if(creditHour2 == 5){
			n2 = crdtHour5[mark2];
		}
		if(creditHour3 == 1){
			n3 = crdtHour1[mark3];
		}else if(creditHour3 == 2){
			n3 = crdtHour2[mark3];
		}else if(creditHour3 == 3){
			n3 = crdtHour3[mark3];
		}else if(creditHour3 == 4){
			n3 = crdtHour4[mark3];
		}else if(creditHour3 == 5){
			n3 = crdtHour5[mark3];
		}
		if(creditHour4 == 1){
			n4 = crdtHour1[mark4];
		}else if(creditHour4 == 2){
			n4 = crdtHour2[mark4];
		}else if(creditHour4 == 3){
			n4 = crdtHour3[mark4];
		}else if(creditHour4 == 4){
			n4 = crdtHour4[mark4];
		}else if(creditHour4 == 5){
			n4 = crdtHour5[mark4];
		}
		if(creditHour5 == 1){
			n5 = crdtHour1[mark5];
		}else if(creditHour5 == 2){
			n5 = crdtHour2[mark5];
		}else if(creditHour5 == 3){
			n5 = crdtHour3[mark5];
		}else if(creditHour5 == 4){
			n5 = crdtHour4[mark5];
		}else if(creditHour5 == 5){
			n5 = crdtHour5[mark5];
		}
		if(creditHour6 == 1){
			n6 = crdtHour1[mark6];
		}else if(creditHour6 == 2){
			n6 = crdtHour2[mark6];
		}else if(creditHour6 == 3){
			n6 = crdtHour3[mark6];
		}else if(creditHour6 == 4){
			n6 = crdtHour4[mark6];
		}else if(creditHour6 == 5){
			n6 = crdtHour5[mark6];
		}
	}result = (n1+n2+n3+n4+n5+n6)/(creditHour1+creditHour2+creditHour3+creditHour4+creditHour5+creditHour6);
	return result;
}
float calculator7(int subjects, int mark1, int mark2, int mark3, int mark4, int mark5, int mark6, int mark7, int creditHour1, int creditHour2, int creditHour3, int creditHour4, int creditHour5, int creditHour6, int creditHour7){
	float crdtHour1[21] = {1, 1, 1, 1, 1, 1, 1, 1};
	crdtHour1[8] = 1, crdtHour1[9] = 1.5, crdtHour1[10] = 2, crdtHour1[11] = 2.33, crdtHour1[12] = 2.67, crdtHour1[13] = 3, crdtHour1[14] = 3.33, crdtHour1[15] = 3.67, crdtHour1[16] = 4, crdtHour1[17] = 4, crdtHour1[18] = 4, crdtHour1[19] = 4, crdtHour1[20] = 4; 
	float crdtHour2[41] = {2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2};
	crdtHour2[16] = 2, crdtHour2[17] = 2.5, crdtHour2[18] = 3, crdtHour2[19] = 3.5, crdtHour2[20] = 4, crdtHour2[21] = 4.33, crdtHour2[22] = 4.67, crdtHour2[23] = 5, crdtHour2[24] = 5.33, crdtHour2[25] = 5.67, crdtHour2[26] = 6, crdtHour2[27] = 6.33, crdtHour2[28] = 6.67, crdtHour2[29] = 7, crdtHour2[30] = 7.33, crdtHour2[31] = 7.67, crdtHour2[32] = 8, crdtHour2[33] = 8, crdtHour2[34] = 8, crdtHour2[35] = 8, crdtHour2[36] = 8, crdtHour2[37] = 8, crdtHour2[38] = 8, crdtHour2[39] = 8, crdtHour2[40] = 8;
	float crdtHour3[61] = {3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3};
	crdtHour3[24] = 3, crdtHour3[25] = 3.5, crdtHour3[26] = 4, crdtHour3[27] = 4.5, crdtHour3[28] = 5, crdtHour3[29] = 5.5, crdtHour3[30] = 6, crdtHour3[31] = 6.33, crdtHour3[32] = 6.67, crdtHour3[33] = 7, crdtHour3[34] = 7.33, crdtHour3[35] = 7.67, crdtHour3[36] = 8, crdtHour3[37] = 8.33, crdtHour3[38] = 8.67, crdtHour3[39] = 9, crdtHour3[40] = 9.33, crdtHour3[41] = 9.67, crdtHour3[42] = 10, crdtHour3[43] = 10.33, crdtHour3[44] = 10.67, crdtHour3[45] = 11, crdtHour3[46] = 11.33, crdtHour3[47] = 11.67, crdtHour3[48] = 12, crdtHour3[49] = 12, crdtHour3[50] = 12, crdtHour3[51] = 12, crdtHour3[52] = 12, crdtHour3[53] = 12, crdtHour3[54] = 12, crdtHour3[55] = 12, crdtHour3[56] = 12, crdtHour3[57] = 12, crdtHour3[58] = 12, crdtHour3[59] = 12, crdtHour3[60] = 12;
	float crdtHour4[81] = {4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4};
	crdtHour4[32] = 4, crdtHour4[33] = 4.5, crdtHour4[34] = 5, crdtHour4[35] = 5.5, crdtHour4[36] = 6, crdtHour4[37] = 6.5, crdtHour4[38] = 7, crdtHour4[39] = 7.5, crdtHour4[40] = 8, crdtHour4[41] = 8.33, crdtHour4[42] = 8.67, crdtHour4[43] = 9, crdtHour4[44] = 9.33, crdtHour4[45] = 9.67, crdtHour4[46] = 10, crdtHour4[47] = 10.33, crdtHour4[48] = 10.67, crdtHour4[49] = 11, crdtHour4[50] = 11.33, crdtHour4[51] = 11.67, crdtHour4[52] = 12, crdtHour4[53] = 12.33, crdtHour4[54] = 12.67, crdtHour4[55] = 13, crdtHour4[56] = 13.33, crdtHour4[57] = 13.67, crdtHour4[58] = 14, crdtHour4[59] = 14.33, crdtHour4[60] = 14.67, crdtHour4[61] = 15, crdtHour4[62] = 15.33, crdtHour4[63] = 15.67, crdtHour4[64] = 16, crdtHour4[65] = 16, crdtHour4[66] = 16, crdtHour4[67] = 16, crdtHour4[68] = 16, crdtHour4[69] = 16, crdtHour4[70] = 16, crdtHour4[71] = 16, crdtHour4[72] = 16, crdtHour4[73] = 16, crdtHour4[74] = 16, crdtHour4[75] = 16, crdtHour4[76] = 16, crdtHour4[77] = 16, crdtHour4[78] = 16, crdtHour4[79] = 16, crdtHour4[80] = 16;	
	float crdtHour5[101] = {5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5};
	crdtHour5[40] = 5, crdtHour5[41] = 5.5, crdtHour5[42] = 6, crdtHour5[43] = 6.5, crdtHour5[44] = 7, crdtHour5[45] = 7.5, crdtHour5[46] = 8, crdtHour5[47] = 8.5, crdtHour5[48] = 9, crdtHour5[49] = 9.5, crdtHour5[50] = 10, crdtHour5[51] = 10.33, crdtHour5[52] = 10.67, crdtHour5[53] = 11, crdtHour5[54] = 11.33, crdtHour5[55] = 11.67, crdtHour5[56] = 12, crdtHour5[57] = 12.33, crdtHour5[58] = 12.67, crdtHour5[59] = 13, crdtHour5[60] = 13.33, crdtHour5[61] = 13.67, crdtHour5[62] = 14, crdtHour5[63] = 14.33, crdtHour5[64] = 14.67, crdtHour5[65] = 15, crdtHour5[66] = 15.33, crdtHour5[67] = 15.67, crdtHour5[68] = 16, crdtHour5[69] = 16.33, crdtHour5[70] = 16.67, crdtHour5[71] = 17, crdtHour5[72] = 17.33, crdtHour5[73] = 17.67, crdtHour5[74] = 18, crdtHour5[75] = 18.33, crdtHour5[76] = 18.67, crdtHour5[77] = 19, crdtHour5[78] = 19.33, crdtHour5[79] = 19.67, crdtHour5[80] = 20, crdtHour5[81] = 20, crdtHour5[82] = 20, crdtHour5[83] = 20, crdtHour5[84] = 20, crdtHour5[85] = 20, crdtHour5[86] = 20, crdtHour5[87] = 20, crdtHour5[88] = 20, crdtHour5[89] = 20, crdtHour5[90] = 20, crdtHour5[91] = 20, crdtHour5[92] = 20, crdtHour5[93] = 20, crdtHour5[94] = 20, crdtHour5[95] = 20, crdtHour5[96] = 20, crdtHour5[97] = 20, crdtHour5[98] = 20, crdtHour5[99] = 20, crdtHour5[100] = 20;   
	float n1, n2, n3, n4, n5, n6, n7; 
	float result;
	if(subjects == 7){
		if(creditHour1 == 1){
			n1 = crdtHour1[mark1];
		}else if(creditHour1 == 2){
			n1 = crdtHour2[mark1];
		}else if(creditHour1 == 3){
			n1 = crdtHour3[mark1];
		}else if(creditHour1 == 4){
			n1 = crdtHour4[mark1];
		}else if(creditHour1 == 5){
			n1 = crdtHour5[mark1];
		}
		if(creditHour2 == 1){
			n2 = crdtHour1[mark2];
		}else if(creditHour2 == 2){
			n2 = crdtHour2[mark2];
		}else if(creditHour2 == 3){
			n2 = crdtHour3[mark2];
		}else if(creditHour2 == 4){
			n2 = crdtHour4[mark2];
		}else if(creditHour2 == 5){
			n2 = crdtHour5[mark2];
		}
		if(creditHour3 == 1){
			n3 = crdtHour1[mark3];
		}else if(creditHour3 == 2){
			n3 = crdtHour2[mark3];
		}else if(creditHour3 == 3){
			n3 = crdtHour3[mark3];
		}else if(creditHour3 == 4){
			n3 = crdtHour4[mark3];
		}else if(creditHour3 == 5){
			n3 = crdtHour5[mark3];
		}
		if(creditHour4 == 1){
			n4 = crdtHour1[mark4];
		}else if(creditHour4 == 2){
			n4 = crdtHour2[mark4];
		}else if(creditHour4 == 3){
			n4 = crdtHour3[mark4];
		}else if(creditHour4 == 4){
			n4 = crdtHour4[mark4];
		}else if(creditHour4 == 5){
			n4 = crdtHour5[mark4];
		}
		if(creditHour5 == 1){
			n5 = crdtHour1[mark5];
		}else if(creditHour5 == 2){
			n5 = crdtHour2[mark5];
		}else if(creditHour5 == 3){
			n5 = crdtHour3[mark5];
		}else if(creditHour5 == 4){
			n5 = crdtHour4[mark5];
		}else if(creditHour5 == 5){
			n5 = crdtHour5[mark5];
		}
		if(creditHour6 == 1){
			n6 = crdtHour1[mark6];
		}else if(creditHour6 == 2){
			n6 = crdtHour2[mark6];
		}else if(creditHour6 == 3){
			n6 = crdtHour3[mark6];
		}else if(creditHour6 == 4){
			n6 = crdtHour4[mark6];
		}else if(creditHour6 == 5){
			n6 = crdtHour5[mark6];
		}
		if(creditHour7 == 1){
			n7 = crdtHour1[mark7];
		}else if(creditHour7 == 2){
			n7 = crdtHour2[mark7];
		}else if(creditHour7 == 3){
			n7 = crdtHour3[mark7];
		}else if(creditHour7 == 4){
			n7 = crdtHour4[mark7];
		}else if(creditHour7 == 5){
			n7 = crdtHour5[mark7];
		}
	}result = (n1+n2+n3+n4+n5+n6+n7)/(creditHour1+creditHour2+creditHour3+creditHour4+creditHour5+creditHour6+creditHour7);
	return result;
}
float calculator8(int subjects, int mark1, int mark2, int mark3, int mark4, int mark5, int mark6, int mark7, int mark8, int creditHour1, int creditHour2, int creditHour3, int creditHour4, int creditHour5, int creditHour6, int creditHour7, int creditHour8){
	float crdtHour1[21] = {1, 1, 1, 1, 1, 1, 1, 1};
	crdtHour1[8] = 1, crdtHour1[9] = 1.5, crdtHour1[10] = 2, crdtHour1[11] = 2.33, crdtHour1[12] = 2.67, crdtHour1[13] = 3, crdtHour1[14] = 3.33, crdtHour1[15] = 3.67, crdtHour1[16] = 4, crdtHour1[17] = 4, crdtHour1[18] = 4, crdtHour1[19] = 4, crdtHour1[20] = 4; 
	float crdtHour2[41] = {2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2};
	crdtHour2[16] = 2, crdtHour2[17] = 2.5, crdtHour2[18] = 3, crdtHour2[19] = 3.5, crdtHour2[20] = 4, crdtHour2[21] = 4.33, crdtHour2[22] = 4.67, crdtHour2[23] = 5, crdtHour2[24] = 5.33, crdtHour2[25] = 5.67, crdtHour2[26] = 6, crdtHour2[27] = 6.33, crdtHour2[28] = 6.67, crdtHour2[29] = 7, crdtHour2[30] = 7.33, crdtHour2[31] = 7.67, crdtHour2[32] = 8, crdtHour2[33] = 8, crdtHour2[34] = 8, crdtHour2[35] = 8, crdtHour2[36] = 8, crdtHour2[37] = 8, crdtHour2[38] = 8, crdtHour2[39] = 8, crdtHour2[40] = 8;
	float crdtHour3[61] = {3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3};
	crdtHour3[24] = 3, crdtHour3[25] = 3.5, crdtHour3[26] = 4, crdtHour3[27] = 4.5, crdtHour3[28] = 5, crdtHour3[29] = 5.5, crdtHour3[30] = 6, crdtHour3[31] = 6.33, crdtHour3[32] = 6.67, crdtHour3[33] = 7, crdtHour3[34] = 7.33, crdtHour3[35] = 7.67, crdtHour3[36] = 8, crdtHour3[37] = 8.33, crdtHour3[38] = 8.67, crdtHour3[39] = 9, crdtHour3[40] = 9.33, crdtHour3[41] = 9.67, crdtHour3[42] = 10, crdtHour3[43] = 10.33, crdtHour3[44] = 10.67, crdtHour3[45] = 11, crdtHour3[46] = 11.33, crdtHour3[47] = 11.67, crdtHour3[48] = 12, crdtHour3[49] = 12, crdtHour3[50] = 12, crdtHour3[51] = 12, crdtHour3[52] = 12, crdtHour3[53] = 12, crdtHour3[54] = 12, crdtHour3[55] = 12, crdtHour3[56] = 12, crdtHour3[57] = 12, crdtHour3[58] = 12, crdtHour3[59] = 12, crdtHour3[60] = 12;
	float crdtHour4[81] = {4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4};
	crdtHour4[32] = 4, crdtHour4[33] = 4.5, crdtHour4[34] = 5, crdtHour4[35] = 5.5, crdtHour4[36] = 6, crdtHour4[37] = 6.5, crdtHour4[38] = 7, crdtHour4[39] = 7.5, crdtHour4[40] = 8, crdtHour4[41] = 8.33, crdtHour4[42] = 8.67, crdtHour4[43] = 9, crdtHour4[44] = 9.33, crdtHour4[45] = 9.67, crdtHour4[46] = 10, crdtHour4[47] = 10.33, crdtHour4[48] = 10.67, crdtHour4[49] = 11, crdtHour4[50] = 11.33, crdtHour4[51] = 11.67, crdtHour4[52] = 12, crdtHour4[53] = 12.33, crdtHour4[54] = 12.67, crdtHour4[55] = 13, crdtHour4[56] = 13.33, crdtHour4[57] = 13.67, crdtHour4[58] = 14, crdtHour4[59] = 14.33, crdtHour4[60] = 14.67, crdtHour4[61] = 15, crdtHour4[62] = 15.33, crdtHour4[63] = 15.67, crdtHour4[64] = 16, crdtHour4[65] = 16, crdtHour4[66] = 16, crdtHour4[67] = 16, crdtHour4[68] = 16, crdtHour4[69] = 16, crdtHour4[70] = 16, crdtHour4[71] = 16, crdtHour4[72] = 16, crdtHour4[73] = 16, crdtHour4[74] = 16, crdtHour4[75] = 16, crdtHour4[76] = 16, crdtHour4[77] = 16, crdtHour4[78] = 16, crdtHour4[79] = 16, crdtHour4[80] = 16;	
	float crdtHour5[101] = {5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5};
	crdtHour5[40] = 5, crdtHour5[41] = 5.5, crdtHour5[42] = 6, crdtHour5[43] = 6.5, crdtHour5[44] = 7, crdtHour5[45] = 7.5, crdtHour5[46] = 8, crdtHour5[47] = 8.5, crdtHour5[48] = 9, crdtHour5[49] = 9.5, crdtHour5[50] = 10, crdtHour5[51] = 10.33, crdtHour5[52] = 10.67, crdtHour5[53] = 11, crdtHour5[54] = 11.33, crdtHour5[55] = 11.67, crdtHour5[56] = 12, crdtHour5[57] = 12.33, crdtHour5[58] = 12.67, crdtHour5[59] = 13, crdtHour5[60] = 13.33, crdtHour5[61] = 13.67, crdtHour5[62] = 14, crdtHour5[63] = 14.33, crdtHour5[64] = 14.67, crdtHour5[65] = 15, crdtHour5[66] = 15.33, crdtHour5[67] = 15.67, crdtHour5[68] = 16, crdtHour5[69] = 16.33, crdtHour5[70] = 16.67, crdtHour5[71] = 17, crdtHour5[72] = 17.33, crdtHour5[73] = 17.67, crdtHour5[74] = 18, crdtHour5[75] = 18.33, crdtHour5[76] = 18.67, crdtHour5[77] = 19, crdtHour5[78] = 19.33, crdtHour5[79] = 19.67, crdtHour5[80] = 20, crdtHour5[81] = 20, crdtHour5[82] = 20, crdtHour5[83] = 20, crdtHour5[84] = 20, crdtHour5[85] = 20, crdtHour5[86] = 20, crdtHour5[87] = 20, crdtHour5[88] = 20, crdtHour5[89] = 20, crdtHour5[90] = 20, crdtHour5[91] = 20, crdtHour5[92] = 20, crdtHour5[93] = 20, crdtHour5[94] = 20, crdtHour5[95] = 20, crdtHour5[96] = 20, crdtHour5[97] = 20, crdtHour5[98] = 20, crdtHour5[99] = 20, crdtHour5[100] = 20;   
	float n1, n2, n3, n4, n5, n6, n7, n8; 
	float result;
	if(subjects == 8){
		if(creditHour1 == 1){
			n1 = crdtHour1[mark1];
		}else if(creditHour1 == 2){
			n1 = crdtHour2[mark1];
		}else if(creditHour1 == 3){
			n1 = crdtHour3[mark1];
		}else if(creditHour1 == 4){
			n1 = crdtHour4[mark1];
		}else if(creditHour1 == 5){
			n1 = crdtHour5[mark1];
		}
		if(creditHour2 == 1){
			n2 = crdtHour1[mark2];
		}else if(creditHour2 == 2){
			n2 = crdtHour2[mark2];
		}else if(creditHour2 == 3){
			n2 = crdtHour3[mark2];
		}else if(creditHour2 == 4){
			n2 = crdtHour4[mark2];
		}else if(creditHour2 == 5){
			n2 = crdtHour5[mark2];
		}
		if(creditHour3 == 1){
			n3 = crdtHour1[mark3];
		}else if(creditHour3 == 2){
			n3 = crdtHour2[mark3];
		}else if(creditHour3 == 3){
			n3 = crdtHour3[mark3];
		}else if(creditHour3 == 4){
			n3 = crdtHour4[mark3];
		}else if(creditHour3 == 5){
			n3 = crdtHour5[mark3];
		}
		if(creditHour4 == 1){
			n4 = crdtHour1[mark4];
		}else if(creditHour4 == 2){
			n4 = crdtHour2[mark4];
		}else if(creditHour4 == 3){
			n4 = crdtHour3[mark4];
		}else if(creditHour4 == 4){
			n4 = crdtHour4[mark4];
		}else if(creditHour4 == 5){
			n4 = crdtHour5[mark4];
		}
		if(creditHour5 == 1){
			n5 = crdtHour1[mark5];
		}else if(creditHour5 == 2){
			n5 = crdtHour2[mark5];
		}else if(creditHour5 == 3){
			n5 = crdtHour3[mark5];
		}else if(creditHour5 == 4){
			n5 = crdtHour4[mark5];
		}else if(creditHour5 == 5){
			n5 = crdtHour5[mark5];
		}
		if(creditHour6 == 1){
			n6 = crdtHour1[mark6];
		}else if(creditHour6 == 2){
			n6 = crdtHour2[mark6];
		}else if(creditHour6 == 3){
			n6 = crdtHour3[mark6];
		}else if(creditHour6 == 4){
			n6 = crdtHour4[mark6];
		}else if(creditHour6 == 5){
			n6 = crdtHour5[mark6];
		}
		if(creditHour7 == 1){
			n7 = crdtHour1[mark7];
		}else if(creditHour7 == 2){
			n7 = crdtHour2[mark7];
		}else if(creditHour7 == 3){
			n7 = crdtHour3[mark7];
		}else if(creditHour7 == 4){
			n7 = crdtHour4[mark7];
		}else if(creditHour7 == 5){
			n7 = crdtHour5[mark7];
		}
		if(creditHour8 == 1){
			n8 = crdtHour1[mark8];
		}else if(creditHour8 == 2){
			n8 = crdtHour2[mark8];
		}else if(creditHour8 == 3){
			n8 = crdtHour3[mark8];
		}else if(creditHour8 == 4){
			n8 = crdtHour4[mark8];
		}else if(creditHour8 == 5){
			n8 = crdtHour5[mark8];
		}
	}result = (n1+n2+n3+n4+n5+n6+n7+n8)/(creditHour1+creditHour2+creditHour3+creditHour4+creditHour5+creditHour6+creditHour7+creditHour8);
	return result;
}
float calculator9(int subjects, int mark1, int mark2, int mark3, int mark4, int mark5, int mark6, int mark7, int mark8, int mark9, int creditHour1, int creditHour2, int creditHour3, int creditHour4, int creditHour5, int creditHour6, int creditHour7, int creditHour8, int creditHour9){
	float crdtHour1[21] = {1, 1, 1, 1, 1, 1, 1, 1};
	crdtHour1[8] = 1, crdtHour1[9] = 1.5, crdtHour1[10] = 2, crdtHour1[11] = 2.33, crdtHour1[12] = 2.67, crdtHour1[13] = 3, crdtHour1[14] = 3.33, crdtHour1[15] = 3.67, crdtHour1[16] = 4, crdtHour1[17] = 4, crdtHour1[18] = 4, crdtHour1[19] = 4, crdtHour1[20] = 4; 
	float crdtHour2[41] = {2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2};
	crdtHour2[16] = 2, crdtHour2[17] = 2.5, crdtHour2[18] = 3, crdtHour2[19] = 3.5, crdtHour2[20] = 4, crdtHour2[21] = 4.33, crdtHour2[22] = 4.67, crdtHour2[23] = 5, crdtHour2[24] = 5.33, crdtHour2[25] = 5.67, crdtHour2[26] = 6, crdtHour2[27] = 6.33, crdtHour2[28] = 6.67, crdtHour2[29] = 7, crdtHour2[30] = 7.33, crdtHour2[31] = 7.67, crdtHour2[32] = 8, crdtHour2[33] = 8, crdtHour2[34] = 8, crdtHour2[35] = 8, crdtHour2[36] = 8, crdtHour2[37] = 8, crdtHour2[38] = 8, crdtHour2[39] = 8, crdtHour2[40] = 8;
	float crdtHour3[61] = {3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3};
	crdtHour3[24] = 3, crdtHour3[25] = 3.5, crdtHour3[26] = 4, crdtHour3[27] = 4.5, crdtHour3[28] = 5, crdtHour3[29] = 5.5, crdtHour3[30] = 6, crdtHour3[31] = 6.33, crdtHour3[32] = 6.67, crdtHour3[33] = 7, crdtHour3[34] = 7.33, crdtHour3[35] = 7.67, crdtHour3[36] = 8, crdtHour3[37] = 8.33, crdtHour3[38] = 8.67, crdtHour3[39] = 9, crdtHour3[40] = 9.33, crdtHour3[41] = 9.67, crdtHour3[42] = 10, crdtHour3[43] = 10.33, crdtHour3[44] = 10.67, crdtHour3[45] = 11, crdtHour3[46] = 11.33, crdtHour3[47] = 11.67, crdtHour3[48] = 12, crdtHour3[49] = 12, crdtHour3[50] = 12, crdtHour3[51] = 12, crdtHour3[52] = 12, crdtHour3[53] = 12, crdtHour3[54] = 12, crdtHour3[55] = 12, crdtHour3[56] = 12, crdtHour3[57] = 12, crdtHour3[58] = 12, crdtHour3[59] = 12, crdtHour3[60] = 12;
	float crdtHour4[81] = {4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4};
	crdtHour4[32] = 4, crdtHour4[33] = 4.5, crdtHour4[34] = 5, crdtHour4[35] = 5.5, crdtHour4[36] = 6, crdtHour4[37] = 6.5, crdtHour4[38] = 7, crdtHour4[39] = 7.5, crdtHour4[40] = 8, crdtHour4[41] = 8.33, crdtHour4[42] = 8.67, crdtHour4[43] = 9, crdtHour4[44] = 9.33, crdtHour4[45] = 9.67, crdtHour4[46] = 10, crdtHour4[47] = 10.33, crdtHour4[48] = 10.67, crdtHour4[49] = 11, crdtHour4[50] = 11.33, crdtHour4[51] = 11.67, crdtHour4[52] = 12, crdtHour4[53] = 12.33, crdtHour4[54] = 12.67, crdtHour4[55] = 13, crdtHour4[56] = 13.33, crdtHour4[57] = 13.67, crdtHour4[58] = 14, crdtHour4[59] = 14.33, crdtHour4[60] = 14.67, crdtHour4[61] = 15, crdtHour4[62] = 15.33, crdtHour4[63] = 15.67, crdtHour4[64] = 16, crdtHour4[65] = 16, crdtHour4[66] = 16, crdtHour4[67] = 16, crdtHour4[68] = 16, crdtHour4[69] = 16, crdtHour4[70] = 16, crdtHour4[71] = 16, crdtHour4[72] = 16, crdtHour4[73] = 16, crdtHour4[74] = 16, crdtHour4[75] = 16, crdtHour4[76] = 16, crdtHour4[77] = 16, crdtHour4[78] = 16, crdtHour4[79] = 16, crdtHour4[80] = 16;	
	float crdtHour5[101] = {5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5};
	crdtHour5[40] = 5, crdtHour5[41] = 5.5, crdtHour5[42] = 6, crdtHour5[43] = 6.5, crdtHour5[44] = 7, crdtHour5[45] = 7.5, crdtHour5[46] = 8, crdtHour5[47] = 8.5, crdtHour5[48] = 9, crdtHour5[49] = 9.5, crdtHour5[50] = 10, crdtHour5[51] = 10.33, crdtHour5[52] = 10.67, crdtHour5[53] = 11, crdtHour5[54] = 11.33, crdtHour5[55] = 11.67, crdtHour5[56] = 12, crdtHour5[57] = 12.33, crdtHour5[58] = 12.67, crdtHour5[59] = 13, crdtHour5[60] = 13.33, crdtHour5[61] = 13.67, crdtHour5[62] = 14, crdtHour5[63] = 14.33, crdtHour5[64] = 14.67, crdtHour5[65] = 15, crdtHour5[66] = 15.33, crdtHour5[67] = 15.67, crdtHour5[68] = 16, crdtHour5[69] = 16.33, crdtHour5[70] = 16.67, crdtHour5[71] = 17, crdtHour5[72] = 17.33, crdtHour5[73] = 17.67, crdtHour5[74] = 18, crdtHour5[75] = 18.33, crdtHour5[76] = 18.67, crdtHour5[77] = 19, crdtHour5[78] = 19.33, crdtHour5[79] = 19.67, crdtHour5[80] = 20, crdtHour5[81] = 20, crdtHour5[82] = 20, crdtHour5[83] = 20, crdtHour5[84] = 20, crdtHour5[85] = 20, crdtHour5[86] = 20, crdtHour5[87] = 20, crdtHour5[88] = 20, crdtHour5[89] = 20, crdtHour5[90] = 20, crdtHour5[91] = 20, crdtHour5[92] = 20, crdtHour5[93] = 20, crdtHour5[94] = 20, crdtHour5[95] = 20, crdtHour5[96] = 20, crdtHour5[97] = 20, crdtHour5[98] = 20, crdtHour5[99] = 20, crdtHour5[100] = 20;   
	float n1, n2, n3, n4, n5, n6, n7, n8, n9; 
	float result;
	if(subjects == 9){
		if(creditHour1 == 1){
			n1 = crdtHour1[mark1];
		}else if(creditHour1 == 2){
			n1 = crdtHour2[mark1];
		}else if(creditHour1 == 3){
			n1 = crdtHour3[mark1];
		}else if(creditHour1 == 4){
			n1 = crdtHour4[mark1];
		}else if(creditHour1 == 5){
			n1 = crdtHour5[mark1];
		}
		if(creditHour2 == 1){
			n2 = crdtHour1[mark2];
		}else if(creditHour2 == 2){
			n2 = crdtHour2[mark2];
		}else if(creditHour2 == 3){
			n2 = crdtHour3[mark2];
		}else if(creditHour2 == 4){
			n2 = crdtHour4[mark2];
		}else if(creditHour2 == 5){
			n2 = crdtHour5[mark2];
		}
		if(creditHour3 == 1){
			n3 = crdtHour1[mark3];
		}else if(creditHour3 == 2){
			n3 = crdtHour2[mark3];
		}else if(creditHour3 == 3){
			n3 = crdtHour3[mark3];
		}else if(creditHour3 == 4){
			n3 = crdtHour4[mark3];
		}else if(creditHour3 == 5){
			n3 = crdtHour5[mark3];
		}
		if(creditHour4 == 1){
			n4 = crdtHour1[mark4];
		}else if(creditHour4 == 2){
			n4 = crdtHour2[mark4];
		}else if(creditHour4 == 3){
			n4 = crdtHour3[mark4];
		}else if(creditHour4 == 4){
			n4 = crdtHour4[mark4];
		}else if(creditHour4 == 5){
			n4 = crdtHour5[mark4];
		}
		if(creditHour5 == 1){
			n5 = crdtHour1[mark5];
		}else if(creditHour5 == 2){
			n5 = crdtHour2[mark5];
		}else if(creditHour5 == 3){
			n5 = crdtHour3[mark5];
		}else if(creditHour5 == 4){
			n5 = crdtHour4[mark5];
		}else if(creditHour5 == 5){
			n5 = crdtHour5[mark5];
		}
		if(creditHour6 == 1){
			n6 = crdtHour1[mark6];
		}else if(creditHour6 == 2){
			n6 = crdtHour2[mark6];
		}else if(creditHour6 == 3){
			n6 = crdtHour3[mark6];
		}else if(creditHour6 == 4){
			n6 = crdtHour4[mark6];
		}else if(creditHour6 == 5){
			n6 = crdtHour5[mark6];
		}
		if(creditHour7 == 1){
			n7 = crdtHour1[mark7];
		}else if(creditHour7 == 2){
			n7 = crdtHour2[mark7];
		}else if(creditHour7 == 3){
			n7 = crdtHour3[mark7];
		}else if(creditHour7 == 4){
			n7 = crdtHour4[mark7];
		}else if(creditHour7 == 5){
			n7 = crdtHour5[mark7];
		}
		if(creditHour8 == 1){
			n8 = crdtHour1[mark8];
		}else if(creditHour8 == 2){
			n8 = crdtHour2[mark8];
		}else if(creditHour8 == 3){
			n8 = crdtHour3[mark8];
		}else if(creditHour8 == 4){
			n8 = crdtHour4[mark8];
		}else if(creditHour8 == 5){
			n8 = crdtHour5[mark8];
		}
		if(creditHour9 == 1){
			n9 = crdtHour1[mark9];
		}else if(creditHour9 == 2){
			n9 = crdtHour2[mark9];
		}else if(creditHour9 == 3){
			n9 = crdtHour3[mark9];
		}else if(creditHour9 == 4){
			n9 = crdtHour4[mark9];
		}else if(creditHour9 == 5){
			n9 = crdtHour5[mark9];
		}
	}result = (n1+n2+n3+n4+n5+n6+n7+n8+n9)/(creditHour1+creditHour2+creditHour3+creditHour4+creditHour5+creditHour6+creditHour7+creditHour8+creditHour9);
	return result;
}
float calculator10(int subjects, int mark1, int mark2, int mark3, int mark4, int mark5, int mark6, int mark7, int mark8, int mark9, int mark10, int creditHour1, int creditHour2, int creditHour3, int creditHour4, int creditHour5, int creditHour6, int creditHour7, int creditHour8, int creditHour9, int creditHour10){
	float crdtHour1[21] = {1, 1, 1, 1, 1, 1, 1, 1};
	crdtHour1[8] = 1, crdtHour1[9] = 1.5, crdtHour1[10] = 2, crdtHour1[11] = 2.33, crdtHour1[12] = 2.67, crdtHour1[13] = 3, crdtHour1[14] = 3.33, crdtHour1[15] = 3.67, crdtHour1[16] = 4, crdtHour1[17] = 4, crdtHour1[18] = 4, crdtHour1[19] = 4, crdtHour1[20] = 4; 
	float crdtHour2[41] = {2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2};
	crdtHour2[16] = 2, crdtHour2[17] = 2.5, crdtHour2[18] = 3, crdtHour2[19] = 3.5, crdtHour2[20] = 4, crdtHour2[21] = 4.33, crdtHour2[22] = 4.67, crdtHour2[23] = 5, crdtHour2[24] = 5.33, crdtHour2[25] = 5.67, crdtHour2[26] = 6, crdtHour2[27] = 6.33, crdtHour2[28] = 6.67, crdtHour2[29] = 7, crdtHour2[30] = 7.33, crdtHour2[31] = 7.67, crdtHour2[32] = 8, crdtHour2[33] = 8, crdtHour2[34] = 8, crdtHour2[35] = 8, crdtHour2[36] = 8, crdtHour2[37] = 8, crdtHour2[38] = 8, crdtHour2[39] = 8, crdtHour2[40] = 8;
	float crdtHour3[61] = {3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3};
	crdtHour3[24] = 3, crdtHour3[25] = 3.5, crdtHour3[26] = 4, crdtHour3[27] = 4.5, crdtHour3[28] = 5, crdtHour3[29] = 5.5, crdtHour3[30] = 6, crdtHour3[31] = 6.33, crdtHour3[32] = 6.67, crdtHour3[33] = 7, crdtHour3[34] = 7.33, crdtHour3[35] = 7.67, crdtHour3[36] = 8, crdtHour3[37] = 8.33, crdtHour3[38] = 8.67, crdtHour3[39] = 9, crdtHour3[40] = 9.33, crdtHour3[41] = 9.67, crdtHour3[42] = 10, crdtHour3[43] = 10.33, crdtHour3[44] = 10.67, crdtHour3[45] = 11, crdtHour3[46] = 11.33, crdtHour3[47] = 11.67, crdtHour3[48] = 12, crdtHour3[49] = 12, crdtHour3[50] = 12, crdtHour3[51] = 12, crdtHour3[52] = 12, crdtHour3[53] = 12, crdtHour3[54] = 12, crdtHour3[55] = 12, crdtHour3[56] = 12, crdtHour3[57] = 12, crdtHour3[58] = 12, crdtHour3[59] = 12, crdtHour3[60] = 12;
	float crdtHour4[81] = {4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4};
	crdtHour4[32] = 4, crdtHour4[33] = 4.5, crdtHour4[34] = 5, crdtHour4[35] = 5.5, crdtHour4[36] = 6, crdtHour4[37] = 6.5, crdtHour4[38] = 7, crdtHour4[39] = 7.5, crdtHour4[40] = 8, crdtHour4[41] = 8.33, crdtHour4[42] = 8.67, crdtHour4[43] = 9, crdtHour4[44] = 9.33, crdtHour4[45] = 9.67, crdtHour4[46] = 10, crdtHour4[47] = 10.33, crdtHour4[48] = 10.67, crdtHour4[49] = 11, crdtHour4[50] = 11.33, crdtHour4[51] = 11.67, crdtHour4[52] = 12, crdtHour4[53] = 12.33, crdtHour4[54] = 12.67, crdtHour4[55] = 13, crdtHour4[56] = 13.33, crdtHour4[57] = 13.67, crdtHour4[58] = 14, crdtHour4[59] = 14.33, crdtHour4[60] = 14.67, crdtHour4[61] = 15, crdtHour4[62] = 15.33, crdtHour4[63] = 15.67, crdtHour4[64] = 16, crdtHour4[65] = 16, crdtHour4[66] = 16, crdtHour4[67] = 16, crdtHour4[68] = 16, crdtHour4[69] = 16, crdtHour4[70] = 16, crdtHour4[71] = 16, crdtHour4[72] = 16, crdtHour4[73] = 16, crdtHour4[74] = 16, crdtHour4[75] = 16, crdtHour4[76] = 16, crdtHour4[77] = 16, crdtHour4[78] = 16, crdtHour4[79] = 16, crdtHour4[80] = 16;	
	float crdtHour5[101] = {5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5};
	crdtHour5[40] = 5, crdtHour5[41] = 5.5, crdtHour5[42] = 6, crdtHour5[43] = 6.5, crdtHour5[44] = 7, crdtHour5[45] = 7.5, crdtHour5[46] = 8, crdtHour5[47] = 8.5, crdtHour5[48] = 9, crdtHour5[49] = 9.5, crdtHour5[50] = 10, crdtHour5[51] = 10.33, crdtHour5[52] = 10.67, crdtHour5[53] = 11, crdtHour5[54] = 11.33, crdtHour5[55] = 11.67, crdtHour5[56] = 12, crdtHour5[57] = 12.33, crdtHour5[58] = 12.67, crdtHour5[59] = 13, crdtHour5[60] = 13.33, crdtHour5[61] = 13.67, crdtHour5[62] = 14, crdtHour5[63] = 14.33, crdtHour5[64] = 14.67, crdtHour5[65] = 15, crdtHour5[66] = 15.33, crdtHour5[67] = 15.67, crdtHour5[68] = 16, crdtHour5[69] = 16.33, crdtHour5[70] = 16.67, crdtHour5[71] = 17, crdtHour5[72] = 17.33, crdtHour5[73] = 17.67, crdtHour5[74] = 18, crdtHour5[75] = 18.33, crdtHour5[76] = 18.67, crdtHour5[77] = 19, crdtHour5[78] = 19.33, crdtHour5[79] = 19.67, crdtHour5[80] = 20, crdtHour5[81] = 20, crdtHour5[82] = 20, crdtHour5[83] = 20, crdtHour5[84] = 20, crdtHour5[85] = 20, crdtHour5[86] = 20, crdtHour5[87] = 20, crdtHour5[88] = 20, crdtHour5[89] = 20, crdtHour5[90] = 20, crdtHour5[91] = 20, crdtHour5[92] = 20, crdtHour5[93] = 20, crdtHour5[94] = 20, crdtHour5[95] = 20, crdtHour5[96] = 20, crdtHour5[97] = 20, crdtHour5[98] = 20, crdtHour5[99] = 20, crdtHour5[100] = 20;   
	float n1, n2, n3, n4, n5, n6, n7, n8, n9, n10; 
	float result;
	if(subjects == 10){
		if(creditHour1 == 1){
			n1 = crdtHour1[mark1];
		}else if(creditHour1 == 2){
			n1 = crdtHour2[mark1];
		}else if(creditHour1 == 3){
			n1 = crdtHour3[mark1];
		}else if(creditHour1 == 4){
			n1 = crdtHour4[mark1];
		}else if(creditHour1 == 5){
			n1 = crdtHour5[mark1];
		}
		if(creditHour2 == 1){
			n2 = crdtHour1[mark2];
		}else if(creditHour2 == 2){
			n2 = crdtHour2[mark2];
		}else if(creditHour2 == 3){
			n2 = crdtHour3[mark2];
		}else if(creditHour2 == 4){
			n2 = crdtHour4[mark2];
		}else if(creditHour2 == 5){
			n2 = crdtHour5[mark2];
		}
		if(creditHour3 == 1){
			n3 = crdtHour1[mark3];
		}else if(creditHour3 == 2){
			n3 = crdtHour2[mark3];
		}else if(creditHour3 == 3){
			n3 = crdtHour3[mark3];
		}else if(creditHour3 == 4){
			n3 = crdtHour4[mark3];
		}else if(creditHour3 == 5){
			n3 = crdtHour5[mark3];
		}
		if(creditHour4 == 1){
			n4 = crdtHour1[mark4];
		}else if(creditHour4 == 2){
			n4 = crdtHour2[mark4];
		}else if(creditHour4 == 3){
			n4 = crdtHour3[mark4];
		}else if(creditHour4 == 4){
			n4 = crdtHour4[mark4];
		}else if(creditHour4 == 5){
			n4 = crdtHour5[mark4];
		}
		if(creditHour5 == 1){
			n5 = crdtHour1[mark5];
		}else if(creditHour5 == 2){
			n5 = crdtHour2[mark5];
		}else if(creditHour5 == 3){
			n5 = crdtHour3[mark5];
		}else if(creditHour5 == 4){
			n5 = crdtHour4[mark5];
		}else if(creditHour5 == 5){
			n5 = crdtHour5[mark5];
		}
		if(creditHour6 == 1){
			n6 = crdtHour1[mark6];
		}else if(creditHour6 == 2){
			n6 = crdtHour2[mark6];
		}else if(creditHour6 == 3){
			n6 = crdtHour3[mark6];
		}else if(creditHour6 == 4){
			n6 = crdtHour4[mark6];
		}else if(creditHour6 == 5){
			n6 = crdtHour5[mark6];
		}
		if(creditHour7 == 1){
			n7 = crdtHour1[mark7];
		}else if(creditHour7 == 2){
			n7 = crdtHour2[mark7];
		}else if(creditHour7 == 3){
			n7 = crdtHour3[mark7];
		}else if(creditHour7 == 4){
			n7 = crdtHour4[mark7];
		}else if(creditHour7 == 5){
			n7 = crdtHour5[mark7];
		}
		if(creditHour8 == 1){
			n8 = crdtHour1[mark8];
		}else if(creditHour8 == 2){
			n8 = crdtHour2[mark8];
		}else if(creditHour8 == 3){
			n8 = crdtHour3[mark8];
		}else if(creditHour8 == 4){
			n8 = crdtHour4[mark8];
		}else if(creditHour8 == 5){
			n8 = crdtHour5[mark8];
		}
		if(creditHour9 == 1){
			n9 = crdtHour1[mark9];
		}else if(creditHour9 == 2){
			n9 = crdtHour2[mark9];
		}else if(creditHour9 == 3){
			n9 = crdtHour3[mark9];
		}else if(creditHour9 == 4){
			n9 = crdtHour4[mark9];
		}else if(creditHour9 == 5){
			n9 = crdtHour5[mark9];
		}
		if(creditHour10 == 1){
			n10 = crdtHour1[mark10];
		}else if(creditHour10 == 2){
			n10 = crdtHour2[mark10];
		}else if(creditHour10 == 3){
			n10 = crdtHour3[mark10];
		}else if(creditHour10 == 4){
			n10 = crdtHour4[mark10];
		}else if(creditHour10 == 5){
			n10 = crdtHour5[mark10];
		}
	}result = (n1+n2+n3+n4+n5+n6+n7+n8+n9+n10)/(creditHour1+creditHour2+creditHour3+creditHour4+creditHour5+creditHour6+creditHour7+creditHour8+creditHour9+creditHour10);
	return result;
}
void correctGpa1(float gpa){
//	float gpA;
	if(gpa > 4){
		cout << "GPA can not be more than 4 .";
	}	//gpA = gpa;
	//gpa = gpA;
}

int main()
{
	
	string gpaorCgpa;
	int subjects, checkSubjects;
	float sbjct1, sbjct2, sbjct3, sbjct4, sbjct5, sbjct6, sbjct7, sbjct8, sbjct9, sbjct10;
	int marks;
	int mark1, mark2, mark3, mark4, mark5, mark6, mark7, mark8, mark9, mark10;
	int creditHours;
	int creditHour1, creditHour2, creditHour3, creditHour4, creditHour5, creditHour6, creditHour7, creditHour8, creditHour9, creditHour10; 
	bool rightMarks = correctMarks(marks, creditHours);
	//bool rightSubjects = correctSubjects(checkSubjects);
	int smesters;
	float gpa;
	float gpa1, gpa2, gpa3, gpa4, gpa5, gpa6, gpa7, gpa8;
	bool rightGpa;
	cout << endl << endl << "                                        University of Agriculture Faisalabad                                             ";
	Sleep(1502);
	cout << endl << "                                                GPA & CGPA calculator.                                             " << endl << endl;
	Sleep(1502);
	cout << "I";
	Sleep(250);
	cout << "m";
	Sleep(250);
	cout << "p";
	Sleep(250);
	cout << "o";
	Sleep(250);
	cout << "r";
	Sleep(250);
	cout << "t";
	Sleep(250);
	cout << "a";
	Sleep(250);
	cout << "n";
	Sleep(250);
	cout << "t";
	Sleep(250);
	cout << " ";
	Sleep(250);
	cout << "I";
	Sleep(250);
	cout << "n";
	Sleep(250);
	cout << "s";
	Sleep(250);
	cout << "t";
	Sleep(250);
	cout << "r";
	Sleep(250);
	cout << "u";
	Sleep(250);
	cout << "c";
	Sleep(250);
	cout << "t";
	Sleep(250);
	cout << "i";
	Sleep(250);
	cout << "o";
	Sleep(250);
	cout << "n";
	Sleep(250);
	cout << " :";
	Sleep(250);
	cout << " T";
	Sleep(250);
	cout << "h";
	Sleep(250);
	cout << "i";
	Sleep(250);
	cout << "s";
	Sleep(250);	
	cout << " C";
	Sleep(250);
	cout << "a";
	Sleep(250);
	cout << "l";
	Sleep(250);
	cout << "c";
	Sleep(250);
	cout << "u";
	Sleep(250);
	cout << "l";
	Sleep(250);
	cout << "a";
	Sleep(250);
	cout << "t";
	Sleep(250);
	cout << "o";
	Sleep(250);
	cout << "r";
	Sleep(250);
	cout << " i";
	Sleep(250);
	cout << "s";
	Sleep(250);
	cout << " o";
	Sleep(250);
	cout << "n";
	Sleep(250);
	cout << "l";
	Sleep(250);
	cout << "y";
	Sleep(250);
	cout << " f";
	Sleep(250);
	cout << "o";
	Sleep(250);
	cout << "r";
	Sleep(250);
	cout << " U";
	Sleep(250);
	cout << "A";
	Sleep(250);
	cout << "F";
	Sleep(250);
	cout << " s";
	Sleep(250);
	cout << "t";
	Sleep(250);
	cout << "u";
	Sleep(250);
	cout << "d";
	Sleep(250);
	cout << "e";
	Sleep(250);
	cout << "n";
	Sleep(250);
	cout << "t";
	Sleep(250);
	cout << "s";
	Sleep(250);
	cout << " .";
	Sleep(250);
	cout << endl << endl << "---BEST OF LUCK !!!!!!                                             " << endl << endl;
	Sleep(3000);
	
	system("cls");
	cout << endl << "1. If you want to calculate GPA write gpa in lower case letters." << endl << endl;
	Sleep(3000);
	cout << "2. If you want to calculate CGPA enter cgpa in lower case letters." << endl << endl;
	Sleep(3000);
	cout << "-You want to calculate gpa or cgpa ? : ";
	cin >> gpaorCgpa;
	system("cls");
	if(gpaorCgpa.compare("gpa") == 0){
		cout << endl << "-Enter the number of subjects you want to calculate GPA for : ";
		cin >> subjects;
		if(subjects >= 11){
			cout << "-Sorry you entered wrong number of subjects, try again .";
		}else if(subjects == 1){
			cout << "-Enter the marks of first subject : ";
			cin >> mark1;
			cout << "-Enter Credit hours for subject : ";
			cin >> creditHour1;
			marks = mark1;
			creditHours = creditHour1;
			if(rightMarks){
				mark1 = correctMarks(marks, creditHours);
				creditHour1 = creditHours;
			}else{
				mark1 = marks;
				creditHour1 = creditHours;
			}
			cout << endl;
			sbjct1 = calculator1(subjects, mark1, creditHour1);
			cout << sbjct1 << "  is your total GPA ." ;
		}else if(subjects == 2){
			cout << "-Enter the marks of first subject : ";
			cin >> mark1;
			cout << "-Enter Credit hours for subject : ";
			cin >> creditHour1;
			marks = mark1;
			creditHours = creditHour1;
			if(rightMarks){
				mark1 = correctMarks(marks, creditHours);
				creditHour1 = creditHours;
			}else{
				mark1 = marks;
				creditHour1 = creditHours;
			}
			cout << endl;
			cout << "-Enter the marks of second subject : ";
			cin >> mark2;
			cout << "-Enter Credit hours for subject : ";
			cin >> creditHour2;
			marks = mark2;
			creditHours = creditHour2;
			if(rightMarks){
				mark2 = correctMarks(marks, creditHours);
				creditHour2 = creditHours;
			}else{
				mark2 = marks;
				creditHour2 = creditHours;
			}
			cout << endl;
			sbjct2 = calculator2(subjects, mark1, mark2, creditHour1, creditHour2);
			cout << sbjct2 << "  is your total GPA ." ; 
		}else if(subjects == 3){
			cout << "-Enter the marks of first subject : ";
			cin >> mark1;
			cout << "-Enter Credit hours for subject : ";
			cin >> creditHour1;
			marks = mark1;
			creditHours = creditHour1;
			if(rightMarks){
				mark1 = correctMarks(marks, creditHours);
				creditHour1 = creditHours;
			}else{
				mark1 = marks;
				creditHour1 = creditHours;
			}
			cout << endl;
			cout << "-Enter the marks of second subject : ";
			cin >> mark2;
			cout << "-Enter Credit hours for subject : ";
			cin >> creditHour2;
			marks = mark2;
			creditHours = creditHour2;
			if(rightMarks){
				mark2 = correctMarks(marks, creditHours);
				creditHour2 = creditHours;
			}else{
				mark2 = marks;
				creditHour2 = creditHours;
			}
			cout << endl;
			cout << "-Enter the marks of third subject : ";
			cin >> mark3;
			cout << "-Enter Credit hours for subject : ";
			cin >> creditHour3;
			marks = mark3;
			creditHours = creditHour3;
			if(rightMarks){
				mark3 = correctMarks(marks, creditHours);
				creditHour3 = creditHours;
			}else{
				mark3 = marks;
				creditHour3 = creditHours;
			}
			cout << endl;
			sbjct3 = calculator3(subjects, mark1, mark2, mark3, creditHour1, creditHour2, creditHour3);
			cout << sbjct3 << "  is your total GPA ." ; 
		}else if(subjects == 4){
			cout << "-Enter the marks of first subject : ";
			cin >> mark1;
			cout << "-Enter Credit hours for subject : ";
			cin >> creditHour1;
			marks = mark1;
			creditHours = creditHour1;
			if(rightMarks){
				mark1 = correctMarks(marks, creditHours);
				creditHour1 = creditHours;
			}else{
				mark1 = marks;
				creditHour1 = creditHours;
			}
			cout << endl;
			cout << "-Enter the marks of second subject : ";
			cin >> mark2;
			cout << "-Enter Credit hours for subject : ";
			cin >> creditHour2;
			marks = mark2;
			creditHours = creditHour2;
			if(rightMarks){
				mark2 = correctMarks(marks, creditHours);
				creditHour2 = creditHours;
			}else{
				mark2 = marks;
				creditHour2 = creditHours;
			}
			cout << endl;
			cout << "-Enter the marks of third subject : ";
			cin >> mark3;
			cout << "-Enter Credit hours for subject : ";
			cin >> creditHour3;
			marks = mark3;
			creditHours = creditHour3;
			if(rightMarks){
				mark3 = correctMarks(marks, creditHours);
				creditHour3 = creditHours;
			}else{
				mark3 = marks;
				creditHour3 = creditHours;
			}
			cout << endl;
			cout << "-Enter the marks of fourth subject : ";
			cin >> mark4;
			cout << "-Enter Credit hours for subject : ";
			cin >> creditHour4;
			marks = mark4;
			creditHours = creditHour4;
			if(rightMarks){
				mark4 = correctMarks(marks, creditHours);
				creditHour4 = creditHours;
			}else{
				mark4 = marks;
				creditHour4 = creditHours;
			}
			cout << endl;
			sbjct4 = calculator4(subjects, mark1, mark2, mark3, mark4, creditHour1, creditHour2, creditHour3, creditHour4);
			cout << sbjct4 << "  is your total GPA ." ; 
		}else if(subjects == 5){
			cout << "-Enter the marks of first subject : ";
			cin >> mark1;
			cout << "-Enter Credit hours for subject : ";
			cin >> creditHour1;
			marks = mark1;
			creditHours = creditHour1;
			if(rightMarks){
				mark1 = correctMarks(marks, creditHours);
				creditHour1 = creditHours;
			}else{
				mark1 = marks;
				creditHour1 = creditHours;
			}
			cout << endl;
			cout << "-Enter the marks of second subject : ";
			cin >> mark2;
			cout << "-Enter Credit hours for subject : ";
			cin >> creditHour2;
			marks = mark2;
			creditHours = creditHour2;
			if(rightMarks){
				mark2 = correctMarks(marks, creditHours);
				creditHour2 = creditHours;
			}else{
				mark2 = marks;
				creditHour2 = creditHours;
			}
			cout << endl;
			cout << "-Enter the marks of third subject : ";
			cin >> mark3;
			cout << "-Enter Credit hours for subject : ";
			cin >> creditHour3;
			marks = mark3;
			creditHours = creditHour3;
			if(rightMarks){
				mark3 = correctMarks(marks, creditHours);
				creditHour3 = creditHours;
			}else{
				mark3 = marks;
				creditHour3 = creditHours;
			}
			cout << endl;
			cout << "-Enter the marks of fourth subject : ";
			cin >> mark4;
			cout << "-Enter Credit hours for subject : ";
			cin >> creditHour4;
			marks = mark4;
			creditHours = creditHour4;
			if(rightMarks){
				mark4 = correctMarks(marks, creditHours);
				creditHour4 = creditHours;
			}else{
				mark4 = marks;
				creditHour4 = creditHours;
			}
			cout << endl;
			cout << "-Enter the marks of fifth subject : ";
			cin >> mark5;
			cout << "-Enter Credit hours for subject : ";
			cin >> creditHour5;
			marks = mark5;
			creditHours = creditHour5;
			if(rightMarks){
				mark5 = correctMarks(marks, creditHours);
				creditHour5 = creditHours;
			}else{
				mark5 = marks;
				creditHour5 = creditHours;
			}
			cout << endl;
			sbjct5 = calculator5(subjects, mark1, mark2, mark3, mark4, mark5, creditHour1, creditHour2, creditHour3, creditHour4, creditHour5);
			cout << sbjct5 << "  is your total GPA ." ; 
		}else if(subjects == 6){
			cout << "-Enter the marks of first subject : ";
			cin >> mark1;
			cout << "-Enter Credit hours for subject : ";
			cin >> creditHour1;
			marks = mark1;
			creditHours = creditHour1;
			if(rightMarks){
				mark1 = correctMarks(marks, creditHours);
				creditHour1 = creditHours;
			}else{
				mark1 = marks;
				creditHour1 = creditHours;
			}
			cout << endl;
			cout << "-Enter the marks of second subject : ";
			cin >> mark2;
			cout << "-Enter Credit hours for subject : ";
			cin >> creditHour2;
			marks = mark2;
			creditHours = creditHour2;
			if(rightMarks){
				mark2 = correctMarks(marks, creditHours);
				creditHour2 = creditHours;
			}else{
				mark2 = marks;
				creditHour2 = creditHours;
			}
			cout << endl;
			cout << "-Enter the marks of third subject : ";
			cin >> mark3;
			cout << "-Enter Credit hours for subject : ";
			cin >> creditHour3;
			marks = mark3;
			creditHours = creditHour3;
			if(rightMarks){
				mark3 = correctMarks(marks, creditHours);
				creditHour3 = creditHours;
			}else{
				mark3 = marks;
				creditHour3 = creditHours;
			}
			cout << endl;
			cout << "-Enter the marks of fourth subject : ";
			cin >> mark4;
			cout << "-Enter Credit hours for subject : ";
			cin >> creditHour4;
			marks = mark4;
			creditHours = creditHour4;
			if(rightMarks){
				mark4 = correctMarks(marks, creditHours);
				creditHour4 = creditHours;
			}else{
				mark4 = marks;
				creditHour4 = creditHours;
			}
			cout << endl;
			cout << "-Enter the marks of fifth subject : ";
			cin >> mark5;
			cout << "-Enter Credit hours for subject : ";
			cin >> creditHour5;
			marks = mark5;
			creditHours = creditHour5;
			if(rightMarks){
				mark5 = correctMarks(marks, creditHours);
				creditHour5 = creditHours;
			}else{
				mark5 = marks;
				creditHour5 = creditHours;
			}
			cout << endl;
			cout << "-Enter the marks of sixth subject : ";
			cin >> mark6;
			cout << "-Enter Credit hours for subject : ";
			cin >> creditHour6;
			marks = mark6;
			creditHours = creditHour6;
			if(rightMarks){
				mark6 = correctMarks(marks, creditHours);
				creditHour6 = creditHours;
			}else{
				mark6 = marks;
				creditHour6 = creditHours;
			}
			cout << endl;
			sbjct6 = calculator6(subjects, mark1, mark2, mark3, mark4, mark5, mark6, creditHour1, creditHour2, creditHour3, creditHour4, creditHour5, creditHour6);
			cout << sbjct6 << "  is your total GPA ." ; 
		}else if(subjects == 7){
			cout << "-Enter the marks of first subject : ";
			cin >> mark1;
			cout << "-Enter Credit hours for subject : ";
			cin >> creditHour1;
			marks = mark1;
			creditHours = creditHour1;
			if(rightMarks){
				mark1 = correctMarks(marks, creditHours);
				creditHour1 = creditHours;
			}else{
				mark1 = marks;
				creditHour1 = creditHours;
			}
			cout << endl;
			cout << "-Enter the marks of second subject : ";
			cin >> mark2;
			cout << "-Enter Credit hours for subject : ";
			cin >> creditHour2;
			marks = mark2;
			creditHours = creditHour2;
			if(rightMarks){
				mark2 = correctMarks(marks, creditHours);
				creditHour2 = creditHours;
			}else{
				mark2 = marks;
				creditHour2 = creditHours;
			}
			cout << endl;
			cout << "-Enter the marks of third subject : ";
			cin >> mark3;
			cout << "-Enter Credit hours for subject : ";
			cin >> creditHour3;
			marks = mark3;
			creditHours = creditHour3;
			if(rightMarks){
				mark3 = correctMarks(marks, creditHours);
				creditHour3 = creditHours;
			}else{
				mark3 = marks;
				creditHour3 = creditHours;
			}
			cout << endl;
			cout << "-Enter the marks of fourth subject : ";
			cin >> mark4;
			cout << "-Enter Credit hours for subject : ";
			cin >> creditHour4;
			marks = mark4;
			creditHours = creditHour4;
			if(rightMarks){
				mark4 = correctMarks(marks, creditHours);
				creditHour4 = creditHours;
			}else{
				mark4 = marks;
				creditHour4 = creditHours;
			}
			cout << endl;
			cout << "-Enter the marks of fifth subject : ";
			cin >> mark5;
			cout << "-Enter Credit hours for subject : ";
			cin >> creditHour5;
			marks = mark5;
			creditHours = creditHour5;
			if(rightMarks){
				mark5 = correctMarks(marks, creditHours);
				creditHour5 = creditHours;
			}else{
				mark5 = marks;
				creditHour5 = creditHours;
			}
			cout << endl;
			cout << "-Enter the marks of sixth subject : ";
			cin >> mark6;
			cout << "-Enter Credit hours for subject : ";
			cin >> creditHour6;
			marks = mark6;
			creditHours = creditHour6;
			if(rightMarks){
				mark6 = correctMarks(marks, creditHours);
				creditHour6 = creditHours;
			}else{
				mark6 = marks;
				creditHour6 = creditHours;
			}
			cout << endl;
			cout << "-Enter the marks of seventh subject : ";
			cin >> mark7;
			cout << "-Enter Credit hours for subject : ";
			cin >> creditHour7;
			marks = mark7;
			creditHours = creditHour7;
			if(rightMarks){
				mark7 = correctMarks(marks, creditHours);
				creditHour7 = creditHours;
			}else{
				mark7 = marks;
				creditHour7 = creditHours;
			}
			cout << endl;
			sbjct7 = calculator7(subjects, mark1, mark2, mark3, mark4, mark5, mark6, mark7, creditHour1, creditHour2, creditHour3, creditHour4, creditHour5, creditHour6, creditHour7);
			cout << sbjct7 << "  is your total GPA ." ; 
		}else if(subjects == 8){
			cout << "-Enter the marks of first subject : ";
			cin >> mark1;
			cout << "-Enter Credit hours for subject : ";
			cin >> creditHour1;
			marks = mark1;
			creditHours = creditHour1;
			if(rightMarks){
				mark1 = correctMarks(marks, creditHours);
				creditHour1 = creditHours;
			}else{
				mark1 = marks;
				creditHour1 = creditHours;
			}
			cout << endl;
			cout << "-Enter the marks of second subject : ";
			cin >> mark2;
			cout << "-Enter Credit hours for subject : ";
			cin >> creditHour2;
			marks = mark2;
			creditHours = creditHour2;
			if(rightMarks){
				mark2 = correctMarks(marks, creditHours);
				creditHour2 = creditHours;
			}else{
				mark2 = marks;
				creditHour2 = creditHours;
			}
			cout << endl;
			cout << "-Enter the marks of third subject : ";
			cin >> mark3;
			cout << "-Enter Credit hours for subject : ";
			cin >> creditHour3;
			marks = mark3;
			creditHours = creditHour3;
			if(rightMarks){
				mark3 = correctMarks(marks, creditHours);
				creditHour3 = creditHours;
			}else{
				mark3 = marks;
				creditHour3 = creditHours;
			}
			cout << endl;
			cout << "-Enter the marks of fourth subject : ";
			cin >> mark4;
			cout << "-Enter Credit hours for subject : ";
			cin >> creditHour4;
			marks = mark4;
			creditHours = creditHour4;
			if(rightMarks){
				mark4 = correctMarks(marks, creditHours);
				creditHour4 = creditHours;
			}else{
				mark4 = marks;
				creditHour4 = creditHours;
			}
			cout << endl;
			cout << "-Enter the marks of fifth subject : ";
			cin >> mark5;
			cout << "-Enter Credit hours for subject : ";
			cin >> creditHour5;
			marks = mark5;
			creditHours = creditHour5;
			if(rightMarks){
				mark5 = correctMarks(marks, creditHours);
				creditHour5 = creditHours;
			}else{
				mark5 = marks;
				creditHour5 = creditHours;
			}
			cout << endl;
			cout << "-Enter the marks of sixth subject : ";
			cin >> mark6;
			cout << "-Enter Credit hours for subject : ";
			cin >> creditHour6;
			marks = mark6;
			creditHours = creditHour6;
			if(rightMarks){
				mark6 = correctMarks(marks, creditHours);
				creditHour6 = creditHours;
			}else{
				mark6 = marks;
				creditHour6 = creditHours;
			}
			cout << endl;
			cout << "-Enter the marks of seventh subject : ";
			cin >> mark7;
			cout << "-Enter Credit hours for subject : ";
			cin >> creditHour7;
			marks = mark7;
			creditHours = creditHour7;
			if(rightMarks){
				mark7 = correctMarks(marks, creditHours);
				creditHour7 = creditHours;
			}else{
				mark7 = marks;
				creditHour7 = creditHours;
			}
			cout << endl;
			cout << "-Enter the marks of eighth subject : ";
			cin >> mark8;
			cout << "-Enter Credit hours for subject : ";
			cin >> creditHour8;
			marks = mark8;
			creditHours = creditHour8;
			if(rightMarks){
				mark8 = correctMarks(marks, creditHours);
				creditHour8 = creditHours;
			}else{
				mark8 = marks;
				creditHour8 = creditHours;
			}
			cout << endl;
			sbjct8 = calculator8(subjects, mark1, mark2, mark3, mark4, mark5, mark6, mark7, mark8, creditHour1, creditHour2, creditHour3, creditHour4, creditHour5, creditHour6, creditHour7, creditHour8);
			cout << sbjct8 << "  is your total GPA ." ; 
		}else if(subjects == 9){
			cout << "-Enter the marks of first subject : ";
			cin >> mark1;
			cout << "-Enter Credit hours for subject : ";
			cin >> creditHour1;
			marks = mark1;
			creditHours = creditHour1;
			if(rightMarks){
				mark1 = correctMarks(marks, creditHours);
				creditHour1 = creditHours;
			}else{
				mark1 = marks;
				creditHour1 = creditHours;
			}
			cout << endl;
			cout << "-Enter the marks of second subject : ";
			cin >> mark2;
			cout << "-Enter Credit hours for subject : ";
			cin >> creditHour2;
			marks = mark2;
			creditHours = creditHour2;
			if(rightMarks){
				mark2 = correctMarks(marks, creditHours);
				creditHour2 = creditHours;
			}else{
				mark2 = marks;
				creditHour2 = creditHours;
			}
			cout << endl;
			cout << "-Enter the marks of third subject : ";
			cin >> mark3;
			cout << "-Enter Credit hours for subject : ";
			cin >> creditHour3;
			marks = mark3;
			creditHours = creditHour3;
			if(rightMarks){
				mark3 = correctMarks(marks, creditHours);
				creditHour3 = creditHours;
			}else{
				mark3 = marks;
				creditHour3 = creditHours;
			}
			cout << endl;
			cout << "-Enter the marks of fourth subject : ";
			cin >> mark4;
			cout << "-Enter Credit hours for subject : ";
			cin >> creditHour4;
			marks = mark4;
			creditHours = creditHour4;
			if(rightMarks){
				mark4 = correctMarks(marks, creditHours);
				creditHour4 = creditHours;
			}else{
				mark4 = marks;
				creditHour4 = creditHours;
			}
			cout << endl;
			cout << "-Enter the marks of fifth subject : ";
			cin >> mark5;
			cout << "-Enter Credit hours for subject : ";
			cin >> creditHour5;
			marks = mark5;
			creditHours = creditHour5;
			if(rightMarks){
				mark5 = correctMarks(marks, creditHours);
				creditHour5 = creditHours;
			}else{
				mark5 = marks;
				creditHour5 = creditHours;
			}
			cout << endl;
			cout << "-Enter the marks of sixth subject : ";
			cin >> mark6;
			cout << "-Enter Credit hours for subject : ";
			cin >> creditHour6;
			marks = mark6;
			creditHours = creditHour6;
			if(rightMarks){
				mark6 = correctMarks(marks, creditHours);
				creditHour6 = creditHours;
			}else{
				mark6 = marks;
				creditHour6 = creditHours;
			}
			cout << endl;
			cout << "-Enter the marks of seventh subject : ";
			cin >> mark7;
			cout << "-Enter Credit hours for subject : ";
			cin >> creditHour7;
			marks = mark7;
			creditHours = creditHour7;
			if(rightMarks){
				mark7 = correctMarks(marks, creditHours);
				creditHour7 = creditHours;
			}else{
				mark7 = marks;
				creditHour7 = creditHours;
			}
			cout << endl;
			cout << "-Enter the marks of eighth subject : ";
			cin >> mark8;
			cout << "-Enter Credit hours for subject : ";
			cin >> creditHour8;
			marks = mark8;
			creditHours = creditHour8;
			if(rightMarks){
				mark8 = correctMarks(marks, creditHours);
				creditHour8 = creditHours;
			}else{
				mark8 = marks;
				creditHour8 = creditHours;
			}
			cout << endl;
			cout << "-Enter the marks of nineth subject : ";
			cin >> mark9;
			cout << "-Enter Credit hours for subject : ";
			cin >> creditHour9;
			marks = mark9;
			creditHours = creditHour9;
			if(rightMarks){
				mark9 = correctMarks(marks, creditHours);
				creditHour9 = creditHours;
			}else{
				mark9 = marks;
				creditHour9 = creditHours;
			}
			cout << endl;
			sbjct9 = calculator9(subjects, mark1, mark2, mark3, mark4, mark5, mark6, mark7, mark8, mark9, creditHour1, creditHour2, creditHour3, creditHour4, creditHour5, creditHour6, creditHour7, creditHour8, creditHour9);
			cout << sbjct9 << "  is your total GPA ." ; 
		}else if(subjects == 10){
			cout << "-Enter the marks of first subject : ";
			cin >> mark1;
			cout << "-Enter Credit hours for subject : ";
			cin >> creditHour1;
			marks = mark1;
			creditHours = creditHour1;
			if(rightMarks){
				mark1 = correctMarks(marks, creditHours);
				creditHour1 = creditHours;
			}else{
				mark1 = marks;
				creditHour1 = creditHours;
			}
			cout << endl;
			cout << "-Enter the marks of second subject : ";
			cin >> mark2;
			cout << "-Enter Credit hours for subject : ";
			cin >> creditHour2;
			marks = mark2;
			creditHours = creditHour2;
			if(rightMarks){
				mark2 = correctMarks(marks, creditHours);
				creditHour2 = creditHours;
			}else{
				mark2 = marks;
				creditHour2 = creditHours;
			}
			cout << endl;
			cout << "-Enter the marks of third subject : ";
			cin >> mark3;
			cout << "-Enter Credit hours for subject : ";
			cin >> creditHour3;
			marks = mark3;
			creditHours = creditHour3;
			if(rightMarks){
				mark3 = correctMarks(marks, creditHours);
				creditHour3 = creditHours;
			}else{
				mark3 = marks;
				creditHour3 = creditHours;
			}
			cout << endl;
			cout << "-Enter the marks of fourth subject : ";
			cin >> mark4;
			cout << "-Enter Credit hours for subject : ";
			cin >> creditHour4;
			marks = mark4;
			creditHours = creditHour4;
			if(rightMarks){
				mark4 = correctMarks(marks, creditHours);
				creditHour4 = creditHours;
			}else{
				mark4 = marks;
				creditHour4 = creditHours;
			}
			cout << endl;
			cout << "-Enter the marks of fifth subject : ";
			cin >> mark5;
			cout << "-Enter Credit hours for subject : ";
			cin >> creditHour5;
			marks = mark5;
			creditHours = creditHour5;
			if(rightMarks){
				mark5 = correctMarks(marks, creditHours);
				creditHour5 = creditHours;
			}else{
				mark5 = marks;
				creditHour5 = creditHours;
			}
			cout << endl;
			cout << "-Enter the marks of sixth subject : ";
			cin >> mark6;
			cout << "-Enter Credit hours for subject : ";
			cin >> creditHour6;
			marks = mark6;
			creditHours = creditHour6;
			if(rightMarks){
				mark6 = correctMarks(marks, creditHours);
				creditHour6 = creditHours;
			}else{
				mark6 = marks;
				creditHour6 = creditHours;
			}
			cout << endl;
			cout << "-Enter the marks of seventh subject : ";
			cin >> mark7;
			cout << "-Enter Credit hours for subject : ";
			cin >> creditHour7;
			marks = mark7;
			creditHours = creditHour7;
			if(rightMarks){
				mark7 = correctMarks(marks, creditHours);
				creditHour7 = creditHours;
			}else{
				mark7 = marks;
				creditHour7 = creditHours;
			}
			cout << endl;
			cout << "-Enter the marks of eighth subject : ";
			cin >> mark8;
			cout << "-Enter Credit hours for subject : ";
			cin >> creditHour8;
			marks = mark8;
			creditHours = creditHour8;
			if(rightMarks){
				mark8 = correctMarks(marks, creditHours);
				creditHour8 = creditHours;
			}else{
				mark8 = marks;
				creditHour8 = creditHours;
			}
			cout << endl;
			cout << "-Enter the marks of nineth subject : ";
			cin >> mark9;
			cout << "-Enter Credit hours for subject : ";
			cin >> creditHour9;
			marks = mark9;
			creditHours = creditHour9;
			if(rightMarks){
				mark9 = correctMarks(marks, creditHours);
				creditHour9 = creditHours;
			}else{
				mark9 = marks;
				creditHour9 = creditHours;
			}
			cout << endl;
			cout << "-Enter the marks of tenth subject : ";
			cin >> mark10;
			cout << "-Enter Credit hours for subject : ";
			cin >> creditHour10;
			marks = mark10;
			creditHours = creditHour10;
			if(rightMarks){
				mark10 = correctMarks(marks, creditHours);
				creditHour10 = creditHours;
			}else{
				mark10 = marks;
				creditHour10 = creditHours;
			}
			cout << endl;
			sbjct10 = calculator10(subjects, mark1, mark2, mark3, mark4, mark5, mark6, mark7, mark8, mark9, mark10, creditHour1, creditHour2, creditHour3, creditHour4, creditHour5, creditHour6, creditHour7, creditHour8, creditHour9, creditHour10);
			cout << sbjct10 << "  is your total GPA ." ; 
		}
	}else if(gpaorCgpa.compare("cgpa") == 0){
		cout << endl << "-Enter the total number of smesters you want to calculate CGPA for : ";
		cin >> smesters;
		cout << endl;
		if(smesters >= 9){
			cout << "-Sorry you entered wrong no of smesters, try again .";
		}else if(smesters == 1){
			cout << "Enter GPA of first smester : ";
			cin >> gpa1;
			gpa = gpa1;
			if(gpa > 4){
				rightGpa = true;
				correctGpa1(gpa);
			}else{
				rightGpa = false;
			}
			while(rightGpa){
				cout << endl;
				cout << endl;
				cout << "Enter correct GPA : ";
				cin >> gpa;
				if(gpa > 4){
				rightGpa = true;
			    }else{
				rightGpa = false;
			    }
			}
			gpa1 = gpa;
			cout << endl;
			cout << "-Your GPA " << gpa1 << " is your CGPA as you have completed only one smester .";
		}else if(smesters == 2){
			cout << "Enter GPA of first smester : ";
			cin >> gpa1;
			gpa = gpa1;
			if(gpa > 4){
				rightGpa = true;
				correctGpa1(gpa);
			}else{
				rightGpa = false;
			}
			while(rightGpa){
				cout << endl;
				cout << "Enter correct GPA : ";
				cin >> gpa;
				if(gpa > 4){
				rightGpa = true;
			    }else{
				rightGpa = false;
			    }
			}
			gpa1 = gpa;
			cout << endl;
			cout << "Enter GPA of second smester : ";
			cin >> gpa2;
			gpa = gpa2;
			if(gpa > 4){
				rightGpa = true;
				correctGpa1(gpa);
			}else{
				rightGpa = false;
			}
			while(rightGpa){
				cout << endl;
				cout << "Enter correct GPA : ";
				cin >> gpa;
				if(gpa > 4){
				rightGpa = true;
			    }else{
				rightGpa = false;
			    }
			}
			gpa2 = gpa;
			cout << endl;
			cout << (gpa1+gpa2)/2 << " is your CGPA of two smesters .";
		}else if(smesters == 3){
			cout << "Enter GPA of first smester : ";
			cin >> gpa1;
			gpa = gpa1;
			if(gpa > 4){
				rightGpa = true;
				correctGpa1(gpa);
			}else{
				rightGpa = false;
			}
			while(rightGpa){
				cout << endl;
				cout << "Enter correct GPA : ";
				cin >> gpa;
				if(gpa > 4){
				rightGpa = true;
			    }else{
				rightGpa = false;
			    }
			}
			gpa1 = gpa;
			cout << endl;
			cout << "Enter GPA of second smester : ";
			cin >> gpa2;
			gpa = gpa2;
			if(gpa > 4){
				rightGpa = true;
				correctGpa1(gpa);
			}else{
				rightGpa = false;
			}
			while(rightGpa){
				cout << endl;
				cout << "Enter correct GPA : ";
				cin >> gpa;
				if(gpa > 4){
				rightGpa = true;
			    }else{
				rightGpa = false;
			    }
			}
			gpa2 = gpa;
			cout << endl;
			cout << "Enter GPA of third smester : ";
			cin >> gpa3;
			gpa = gpa3;
			if(gpa > 4){
				rightGpa = true;
				correctGpa1(gpa);
			}else{
				rightGpa = false;
			}
			while(rightGpa){
				cout << endl;
				cout << "Enter correct GPA : ";
				cin >> gpa;
				if(gpa > 4){
				rightGpa = true;
			    }else{
				rightGpa = false;
			    }
			}
			gpa3 = gpa;
			cout << endl;
			cout << (gpa1+gpa2+gpa3)/3 << " is your CGPA of three smesters .";
		}else if(smesters == 4){
			cout << "Enter GPA of first smester : ";
			cin >> gpa1;
			gpa = gpa1;
			if(gpa > 4){
				rightGpa = true;
				correctGpa1(gpa);
			}else{
				rightGpa = false;
			}
			while(rightGpa){
				cout << endl;
				cout << "Enter correct GPA : ";
				cin >> gpa;
				if(gpa > 4){
				rightGpa = true;
			    }else{
				rightGpa = false;
			    }
			}
			gpa1 = gpa;
			cout << endl;
			cout << "Enter GPA of second smester : ";
			cin >> gpa2;
			gpa = gpa2;
			if(gpa > 4){
				rightGpa = true;
				correctGpa1(gpa);
			}else{
				rightGpa = false;
			}
			while(rightGpa){
				cout << endl;
				cout << "Enter correct GPA : ";
				cin >> gpa;
				if(gpa > 4){
				rightGpa = true;
			    }else{
				rightGpa = false;
			    }
			}
			gpa2 = gpa;
			cout << endl;
			cout << "Enter GPA of third smester : ";
			cin >> gpa3;
			gpa = gpa3;
			if(gpa > 4){
				rightGpa = true;
				correctGpa1(gpa);
			}else{
				rightGpa = false;
			}
			while(rightGpa){
				cout << endl;
				cout << "Enter correct GPA : ";
				cin >> gpa;
				if(gpa > 4){
				rightGpa = true;
			    }else{
				rightGpa = false;
			    }
			}
			gpa3 = gpa;
			cout << endl;
			cout << "Enter GPA of fourth smester : ";
			cin >> gpa4;
			gpa = gpa4;
			if(gpa > 4){
				rightGpa = true;
				correctGpa1(gpa);
			}else{
				rightGpa = false;
			}
			while(rightGpa){
				cout << endl;
				cout << "Enter correct GPA : ";
				cin >> gpa;
				if(gpa > 4){
				rightGpa = true;
			    }else{
				rightGpa = false;
			    }
			}
			gpa4 = gpa;
			cout << endl;
			cout << (gpa1+gpa2+gpa3+gpa4)/4 << " is your CGPA of four smesters .";
		}else if(smesters == 5){
			cout << "Enter GPA of first smester : ";
			cin >> gpa1;
			gpa = gpa1;
			if(gpa > 4){
				rightGpa = true;
				correctGpa1(gpa);
			}else{
				rightGpa = false;
			}
			while(rightGpa){
				cout << endl;
				cout << "Enter correct GPA : ";
				cin >> gpa;
				if(gpa > 4){
				rightGpa = true;
			    }else{
				rightGpa = false;
			    }
			}
			gpa1 = gpa;
			cout << endl;
			cout << "Enter GPA of second smester : ";
			cin >> gpa2;
			gpa = gpa2;
			if(gpa > 4){
				rightGpa = true;
				correctGpa1(gpa);
			}else{
				rightGpa = false;
			}
			while(rightGpa){
				cout << endl;
				cout << "Enter correct GPA : ";
				cin >> gpa;
				if(gpa > 4){
				rightGpa = true;
			    }else{
				rightGpa = false;
			    }
			}
			gpa2 = gpa;
			cout << endl;
			cout << "Enter GPA of third smester : ";
			cin >> gpa3;
			gpa = gpa3;
			if(gpa > 4){
				rightGpa = true;
				correctGpa1(gpa);
			}else{
				rightGpa = false;
			}
			while(rightGpa){
				cout << endl;
				cout << "Enter correct GPA : ";
				cin >> gpa;
				if(gpa > 4){
				rightGpa = true;
			    }else{
				rightGpa = false;
			    }
			}
			gpa3 = gpa;
			cout << endl;
			cout << "Enter GPA of fourth smester : ";
			cin >> gpa4;
			gpa = gpa4;
			if(gpa > 4){
				rightGpa = true;
				correctGpa1(gpa);
			}else{
				rightGpa = false;
			}
			while(rightGpa){
				cout << endl;
				cout << "Enter correct GPA : ";
				cin >> gpa;
				if(gpa > 4){
				rightGpa = true;
			    }else{
				rightGpa = false;
			    }
			}
			gpa4 = gpa;
			cout << endl;
			cout << "Enter GPA of fifth smester : ";
			cin >> gpa5;
			gpa = gpa5;
			if(gpa > 4){
				rightGpa = true;
				correctGpa1(gpa);
			}else{
				rightGpa = false;
			}
			while(rightGpa){
				cout << endl;
				cout << "Enter correct GPA : ";
				cin >> gpa;
				if(gpa > 4){
				rightGpa = true;
			    }else{
				rightGpa = false;
			    }
			}
			gpa5 = gpa;
			cout << endl;
			cout << (gpa1+gpa2+gpa3+gpa4+gpa5)/5 << " is your CGPA of five smesters .";
		}else if(smesters == 6){
			cout << "Enter GPA of first smester : ";
			cin >> gpa1;
			gpa = gpa1;
			if(gpa > 4){
				rightGpa = true;
				correctGpa1(gpa);
			}else{
				rightGpa = false;
			}
			while(rightGpa){
				cout << endl;
				cout << "Enter correct GPA : ";
				cin >> gpa;
				if(gpa > 4){
				rightGpa = true;
			    }else{
				rightGpa = false;
			    }
			}
			gpa1 = gpa;
			cout << endl;
			cout << "Enter GPA of second smester : ";
			cin >> gpa2;
			gpa = gpa2;
			if(gpa > 4){
				rightGpa = true;
				correctGpa1(gpa);
			}else{
				rightGpa = false;
			}
			while(rightGpa){
				cout << endl;
				cout << "Enter correct GPA : ";
				cin >> gpa;
				if(gpa > 4){
				rightGpa = true;
			    }else{
				rightGpa = false;
			    }
			}
			gpa2 = gpa;
			cout << endl;
			cout << "Enter GPA of third smester : ";
			cin >> gpa3;
			gpa = gpa3;
			if(gpa > 4){
				rightGpa = true;
				correctGpa1(gpa);
			}else{
				rightGpa = false;
			}
			while(rightGpa){
				cout << endl;
				cout << "Enter correct GPA : ";
				cin >> gpa;
				if(gpa > 4){
				rightGpa = true;
			    }else{
				rightGpa = false;
			    }
			}
			gpa3 = gpa;
			cout << endl;
			cout << "Enter GPA of fourth smester : ";
			cin >> gpa4;
			gpa = gpa4;
			if(gpa > 4){
				rightGpa = true;
				correctGpa1(gpa);
			}else{
				rightGpa = false;
			}
			while(rightGpa){
				cout << endl;
				cout << "Enter correct GPA : ";
				cin >> gpa;
				if(gpa > 4){
				rightGpa = true;
			    }else{
				rightGpa = false;
			    }
			}
			gpa4 = gpa;
			cout << endl;
			cout << "Enter GPA of fifth smester : ";
			cin >> gpa5;
			gpa = gpa5;
			if(gpa > 4){
				rightGpa = true;
				correctGpa1(gpa);
			}else{
				rightGpa = false;
			}
			while(rightGpa){
				cout << endl;
				cout << "Enter correct GPA : ";
				cin >> gpa;
				if(gpa > 4){
				rightGpa = true;
			    }else{
				rightGpa = false;
			    }
			}
			gpa5 = gpa;
			cout << endl;
			cout << "Enter GPA of sixth smester : ";
			cin >> gpa6;
			gpa = gpa6;
			if(gpa > 4){
				rightGpa = true;
				correctGpa1(gpa);
			}else{
				rightGpa = false;
			}
			while(rightGpa){
				cout << endl;
				cout << "Enter correct GPA : ";
				cin >> gpa;
				if(gpa > 4){
				rightGpa = true;
			    }else{
				rightGpa = false;
			    }
			}
			gpa6 = gpa;
			cout << endl;
			cout << (gpa1+gpa2+gpa3+gpa4+gpa5+gpa6)/6 << " is your CGPA of six smesters .";
		}else if(smesters == 7){
			cout << "Enter GPA of first smester : ";
			cin >> gpa1;
			gpa = gpa1;
			if(gpa > 4){
				rightGpa = true;
				correctGpa1(gpa);
			}else{
				rightGpa = false;
			}
			while(rightGpa){
				cout << endl;
				cout << "Enter correct GPA : ";
				cin >> gpa;
				if(gpa > 4){
				rightGpa = true;
			    }else{
				rightGpa = false;
			    }
			}
			gpa1 = gpa;
			cout << endl;
			cout << "Enter GPA of second smester : ";
			cin >> gpa2;
			gpa = gpa2;
			if(gpa > 4){
				rightGpa = true;
				correctGpa1(gpa);
			}else{
				rightGpa = false;
			}
			while(rightGpa){
				cout << endl;
				cout << "Enter correct GPA : ";
				cin >> gpa;
				if(gpa > 4){
				rightGpa = true;
			    }else{
				rightGpa = false;
			    }
			}
			gpa2 = gpa;
			cout << endl;
			cout << "Enter GPA of third smester : ";
			cin >> gpa3;
			gpa = gpa3;
			if(gpa > 4){
				rightGpa = true;
				correctGpa1(gpa);
			}else{
				rightGpa = false;
			}
			while(rightGpa){
				cout << endl;
				cout << "Enter correct GPA : ";
				cin >> gpa;
				if(gpa > 4){
				rightGpa = true;
			    }else{
				rightGpa = false;
			    }
			}
			gpa3 = gpa;
			cout << endl;
			cout << "Enter GPA of fourth smester : ";
			cin >> gpa4;
			gpa = gpa4;
			if(gpa > 4){
				rightGpa = true;
				correctGpa1(gpa);
			}else{
				rightGpa = false;
			}
			while(rightGpa){
				cout << endl;
				cout << "Enter correct GPA : ";
				cin >> gpa;
				if(gpa > 4){
				rightGpa = true;
			    }else{
				rightGpa = false;
			    }
			}
			gpa4 = gpa;
			cout << endl;
			cout << "Enter GPA of fifth smester : ";
			cin >> gpa5;
			gpa = gpa5;
			if(gpa > 4){
				rightGpa = true;
				correctGpa1(gpa);
			}else{
				rightGpa = false;
			}
			while(rightGpa){
				cout << endl;
				cout << "Enter correct GPA : ";
				cin >> gpa;
				if(gpa > 4){
				rightGpa = true;
			    }else{
				rightGpa = false;
			    }
			}
			gpa5 = gpa;
			cout << endl;
			cout << "Enter GPA of sixth smester : ";
			cin >> gpa6;
			gpa = gpa6;
			if(gpa > 4){
				rightGpa = true;
				correctGpa1(gpa);
			}else{
				rightGpa = false;
			}
			while(rightGpa){
				cout << endl;
				cout << "Enter correct GPA : ";
				cin >> gpa;
				if(gpa > 4){
				rightGpa = true;
			    }else{
				rightGpa = false;
			    }
			}
			gpa6 = gpa;
			cout << endl;
			cout << "Enter GPA of seventh smester : ";
			cin >> gpa7;
			gpa = gpa7;
			if(gpa > 4){
				rightGpa = true;
				correctGpa1(gpa);
			}else{
				rightGpa = false;
			}
			while(rightGpa){
				cout << endl;
				cout << "Enter correct GPA : ";
				cin >> gpa;
				if(gpa > 4){
				rightGpa = true;
			    }else{
				rightGpa = false;
			    }
			}
			gpa7 = gpa;
			cout << endl;
			cout << (gpa1+gpa2+gpa3+gpa4+gpa5+gpa6+gpa7)/7 << " is your CGPA of seven smesters .";
		}else if(smesters == 8){
			cout << "Enter GPA of first smester : ";
			cin >> gpa1;
			gpa = gpa1;
			if(gpa > 4){
				rightGpa = true;
				correctGpa1(gpa);
			}else{
				rightGpa = false;
			}
			while(rightGpa){
				cout << endl;
				cout << "Enter correct GPA : ";
				cin >> gpa;
				if(gpa > 4){
				rightGpa = true;
			    }else{
				rightGpa = false;
			    }
			}
			gpa1 = gpa;
			cout << endl;
			cout << "Enter GPA of second smester : ";
			cin >> gpa2;
			gpa = gpa2;
			if(gpa > 4){
				rightGpa = true;
				correctGpa1(gpa);
			}else{
				rightGpa = false;
			}
			while(rightGpa){
				cout << endl;
				cout << "Enter correct GPA : ";
				cin >> gpa;
				if(gpa > 4){
				rightGpa = true;
			    }else{
				rightGpa = false;
			    }
			}
			gpa2 = gpa;
			cout << endl;
			cout << "Enter GPA of third smester : ";
			cin >> gpa3;
			gpa = gpa3;
			if(gpa > 4){
				rightGpa = true;
				correctGpa1(gpa);
			}else{
				rightGpa = false;
			}
			while(rightGpa){
				cout << endl;
				cout << "Enter correct GPA : ";
				cin >> gpa;
				if(gpa > 4){
				rightGpa = true;
			    }else{
				rightGpa = false;
			    }
			}
			gpa3 = gpa;
			cout << endl;
			cout << "Enter GPA of fourth smester : ";
			cin >> gpa4;
			gpa = gpa4;
			if(gpa > 4){
				rightGpa = true;
				correctGpa1(gpa);
			}else{
				rightGpa = false;
			}
			while(rightGpa){
				cout << endl;
				cout << "Enter correct GPA : ";
				cin >> gpa;
				if(gpa > 4){
				rightGpa = true;
			    }else{
				rightGpa = false;
			    }
			}
			gpa4 = gpa;
			cout << endl;
			cout << "Enter GPA of fifth smester : ";
			cin >> gpa5;
			gpa = gpa5;
			if(gpa > 4){
				rightGpa = true;
				correctGpa1(gpa);
			}else{
				rightGpa = false;
			}
			while(rightGpa){
				cout << endl;
				cout << "Enter correct GPA : ";
				cin >> gpa;
				if(gpa > 4){
				rightGpa = true;
			    }else{
				rightGpa = false;
			    }
			}
			gpa5 = gpa;
			cout << endl;
			cout << "Enter GPA of sixth smester : ";
			cin >> gpa6;
			gpa = gpa6;
			if(gpa > 4){
				rightGpa = true;
				correctGpa1(gpa);
			}else{
				rightGpa = false;
			}
			while(rightGpa){
				cout << endl;
				cout << "Enter correct GPA : ";
				cin >> gpa;
				if(gpa > 4){
				rightGpa = true;
			    }else{
				rightGpa = false;
			    }
			}
			gpa6 = gpa;
			cout << endl;
			cout << "Enter GPA of seventh smester : ";
			cin >> gpa7;
			gpa = gpa7;
			if(gpa > 4){
				rightGpa = true;
				correctGpa1(gpa);
			}else{
				rightGpa = false;
			}
			while(rightGpa){
				cout << endl;
				cout << "Enter correct GPA : ";
				cin >> gpa;
				if(gpa > 4){
				rightGpa = true;
			    }else{
				rightGpa = false;
			    }
			}
			gpa7 = gpa;
			cout << endl;
			cout << "Enter GPA of eighth smester : ";
			cin >> gpa8;
			gpa = gpa8;
			if(gpa > 4){
				rightGpa = true;
				correctGpa1(gpa);
			}else{
				rightGpa = false;
			}
			while(rightGpa){
				cout << endl;
				cout << "Enter correct GPA : ";
				cin >> gpa;
				if(gpa > 4){
				rightGpa = true;
			    }else{
				rightGpa = false;
			    }
			}
			gpa8 = gpa;
			cout << endl;
			cout << (gpa1+gpa2+gpa3+gpa4+gpa5+gpa6+gpa7+gpa8)/8 << " is your CGPA of eight smesters .";
		}
}else{
	cout << "-You entered some invalid input which we can not detect , try calculating from start ." << endl;
	Sleep(1000);
	cout << "--Thanks ! ";
}
	system("pause>0");	
}

int correctMarks(int marks, int creditHours){
	int newMarks;
	newMarks = marks;
	if(creditHours == 1 && newMarks >= 21){
		Sleep(1000);
		cout << "Your marks are not according to your given credit hours." << endl;
		while(newMarks >= 21){
			Sleep(1000);
			cout  << endl << "Enter correct marks : ";
			cin >> newMarks;
		}
		marks = newMarks;
	}else if(creditHours == 2 && newMarks >= 41){
		Sleep(1000);
		cout << "Your marks are not according to your given credit hours." << endl;
		while(newMarks >= 41){
			Sleep(1000);
			cout << endl << "Enter correct marks : ";
			cin >> newMarks;
		}
		marks = newMarks;
	}else if(creditHours == 3 && newMarks >= 61){
		Sleep(1000);
		cout << "Your marks are not according to your given credit hours." << endl;
		while(newMarks >= 61){
			Sleep(1000);
			cout << endl << "Enter correct marks : ";
			cin >> newMarks;
		}
		marks = newMarks;
	}else if(creditHours == 4 && newMarks >= 81){
		Sleep(1000);
		cout << endl << "Your marks are not according to your given credit hours." << endl;
		while(newMarks >= 81){
			Sleep(1000);
			cout << "Enter correct marks : ";
			cin >> newMarks;
		}
		marks = newMarks;
	}else if(creditHours == 5 && newMarks >= 101){
		Sleep(1000);
		cout << endl << "Your marks are not according to your given credit hours." << endl;
		while(newMarks >= 101){
			Sleep(1000);
			cout << "Enter correct marks : ";
			cin >> newMarks;
		}
		marks = newMarks;
	}
}
