#ifndef THERMISTORTABLES_H_
#define THERMISTORTABLES_H_

#if (THERMISTORHEATER == 1) || (THERMISTORBED == 1) //100k bed thermistor


#define NUMTEMPS_1 58
const short temptable_1[NUMTEMPS_1][2] = {
{	15	,	286	},
{	16	,	282	},
{	17	,	278	},
{	18	,	274	},
{	19	,	270	},
{	20	,	266	},
{	21	,	262	},
{	22	,	258	},
{	23	,	254	},
{	25	,	250	},
{	27	,	246	},
{	28	,	242	},
{	31	,	238	},
{	33	,	234	},
{	35	,	230	},
{	38	,	226	},
{	41	,	222	},
{	44	,	218	},
{	48	,	214	},
{	52	,	210	},
{	56	,	206	},
{	61	,	202	},
{	66	,	198	},
{	71	,	194	},
{	78	,	190	},
{	84	,	186	},
{	92	,	182	},
{	100	,	178	},
{	109	,	174	},
{	120	,	170	},
{	131	,	166	},
{	143	,	162	},
{	156	,	158	},
{	171	,	154	},
{	187	,	150	},
{	205	,	146	},
{	224	,	142	},
{	224	,	160	},
{	245	,	155	},
{	268	,	150	},
{	293	,	145	},
{	320	,	140	},
{	348	,	135	},
{	379	,	130	},
{	411	,	125	},
{	480	,	115	},
{	553	,	105	},
{	628	,	95	},
{	702	,	85	},
{	770	,	75	},
{	830	,	65	},
{	881	,	55	},
{	922	,	45	},
{	954	,	35	},
{	977	,	25	},
{	993	,	15	},
{	999	,	10	},
{	1008	,	0	},
};
#endif
#if (THERMISTORHEATER == 2) || (THERMISTORBED == 2) //100k bed thermistor
#define NUMTEMPS_2 33
const short temptable_2[NUMTEMPS_2][2] = {
   {1, 628},
   {32, 254},
   {63, 213},
   {94, 191},
   {125, 176},
   {156, 165},
   {187, 156},
   {218, 148},
   {249, 141},
   {280, 135},
   {311, 129},
   {342, 124},
   {373, 120},
   {404, 115},
   {435, 111},
   {466, 107},
   {497, 103},
   {528, 99},
   {559, 96},
   {590, 92},
   {621, 88},
   {652, 84},
   {683, 81},
   {714, 77},
   {745, 73},
   {776, 68},
   {807, 64},
   {838, 59},
   {869, 54},
   {900, 48},
   {931, 40},
   {962, 31},
   {993, 17}
};

#endif
#if (THERMISTORHEATER == 3) || (THERMISTORBED == 3) //mendel-parts
#define NUMTEMPS_3 28
const short temptable_3[NUMTEMPS_3][2] = {
		{1,864},
		{21,300},
		{25,290},
		{29,280},
		{33,270},
		{39,260},
		{46,250},
		{54,240},
		{64,230},
		{75,220},
		{90,210},
		{107,200},
		{128,190},
		{154,180},
		{184,170},
		{221,160},
		{265,150},
		{316,140},
		{375,130},
		{441,120},
		{513,110},
		{588,100},
		{734,80},
		{856,60},
		{938,40},
		{986,20},
		{1008,0},
		{1018,-20}
	};

#endif
#if (THERMISTORHEATER == 4) || (THERMISTORBED == 4) //10k thermistor

#define NUMTEMPS_4 20
short temptable_4[NUMTEMPS_4][2] = {
   {1, 430},
   {54, 137},
   {107, 107},
   {160, 91},
   {213, 80},
   {266, 71},
   {319, 64},
   {372, 57},
   {425, 51},
   {478, 46},
   {531, 41},
   {584, 35},
   {637, 30},
   {690, 25},
   {743, 20},
   {796, 14},
   {849, 7},
   {902, 0},
   {955, -11},
   {1008, -35}
};
#endif

#if THERMISTORHEATER == 1
#define NUMTEMPS NUMTEMPS_1
#define temptable temptable_1
#elif THERMISTORHEATER == 2
#define NUMTEMPS NUMTEMPS_2
#define temptable temptable_2
#elif THERMISTORHEATER == 3
#define NUMTEMPS NUMTEMPS_3
#define temptable temptable_3
#elif THERMISTORHEATER == 4
#define NUMTEMPS NUMTEMPS_4
#define temptable temptable_4
#elif defined HEATER_USES_THERMISTOR
#error No heater thermistor table specified
#endif
#if THERMISTORBED == 1
#define BNUMTEMPS NUMTEMPS_1
#define bedtemptable temptable_1
#elif THERMISTORBED == 2
#define BNUMTEMPS NUMTEMPS_2
#define bedtemptable temptable_2
#elif THERMISTORBED == 3
#define BNUMTEMPS NUMTEMPS_3
#define bedtemptable temptable_3
#elif THERMISTORBED == 4
#define BNUMTEMPS NUMTEMPS_4
#define bedtemptable temptable_4
#elif defined BED_USES_THERMISTOR
#error No bed thermistor table specified
#endif

#endif //THERMISTORTABLES_H_
