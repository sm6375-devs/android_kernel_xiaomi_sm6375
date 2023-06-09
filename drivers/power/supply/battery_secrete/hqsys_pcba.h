#ifndef HQSYS_PCBA
#define HQSYS_PCBA

typedef enum {
   PCBA_UNKNOW = -1,

   PCBA_M17_P0_1_CN = 0x10,
   PCBA_M17_P0_1_GL,
   PCBA_M17_P0_1_IN,
   PCBA_M17_P0_1_CN_NEW,
   PCBA_M17P_P0_1_IN,
   PCBA_M17P_P0_1_GL,

   PCBA_M17_P1_CN = 0x20,
   PCBA_M17_P1_GL,
   PCBA_M17_P1_IN,
   PCBA_M17_P1_CN_NEW,
   PCBA_M17P_P1_IN,
   PCBA_M17P_P1_GL,

   PCBA_M17_P1_1_CN = 0x30,
   PCBA_M17_P1_1_GL,
   PCBA_M17_P1_1_IN,
   PCBA_M17_P1_1_CN_NEW,
   PCBA_M17P_P1_1_IN,
   PCBA_M17P_P1_1_GL,

   PCBA_M17_P2_CN = 0x40,
   PCBA_M17_P2_GL,
   PCBA_M17_P2_IN,
   PCBA_M17_P2_CN_NEW,
   PCBA_M17P_P2_IN,
   PCBA_M17P_P2_GL,

   PCBA_M17_MP_CN = 0x50,
   PCBA_M17_MP_GL,
   PCBA_M17_MP_IN,
   PCBA_M17_MP_CN_NEW,
   PCBA_M17P_MP_IN,
   PCBA_M17P_MP_GL,

   PCBA_END,
} PCBA_CONFIG;

struct pcba_info {
	PCBA_CONFIG pcba_config;
	char pcba_name[32];
};

PCBA_CONFIG get_huaqin_pcba_config(void);

#endif
