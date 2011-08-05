#ifndef THERMISTORTABLE_H_
#define THERMISTORTABLE_H_

// Thermistor lookup table for RepRap Temperature Sensor Boards (http://make.rrrf.org/ts)
// See this page:  
// http://dev.www.reprap.org/bin/view/Main/Thermistor
// for details of what goes in this table.
// Made with createTemperatureLookup.py (http://svn.reprap.org/trunk/reprap/firmware/Arduino/utilities/createTemperatureLookup.py)
// ./createTemperatureLookup.py --r0=100000 --t0=25 --r1=0 --r2=4700 --beta=4066 --max-adc=1023
// r0: 100000
// t0: 25
// r1: 0
// r2: 4700
// beta: 4066
// max adc: 1023

#define NUMTEMPS 58
const short  tempTable[NUMTEMPS][2] = {
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

