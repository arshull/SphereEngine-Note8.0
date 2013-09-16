#ifndef __MDNIE_TABLE_P2_BOE_H__
#define __MDNIE_TABLE_P2_BOE_H__

#include "mdnie.h"


static unsigned short tune_dynamic_gallery_boe[] = {
	/*start P2 dynamic, gallery, cabcoff*/
	0x0001, 0x0060,	/* LABC 0060 LABC SCR*/
	0x002c, 0x0fff,	/*DNR bypass 0x003C*/
	0x002d, 0x1900,	/*DNR bypass 0x0a08*/
	0x002e, 0x0000,	/*DNR bypass 0x1010*/
	0x002f, 0x0fff,	/*DNR bypass 0x0400*/
	0x003A, 0x000d,	/*HDTR (DE off)(CS only 9)*/
	0x003B, 0x03ff,	/*DE SHARPNESS*/
	0x003C, 0x0000,	/*NOISE LEVEL*/
	0x003F, 0x01a0,	/*CS GAIN*/
	0x0042, 0x0000,	/*DE TH (MAX DIFF)*/
	/*0x00b4, 0x4640,	count PWM*/
	0x00c8, 0x0000,	/*kb R	SCR*/
	0x00c9, 0x0000,	/*gc R*/
	0x00ca, 0xffff,	/*rm R*/
	0x00cb, 0xfffa,	/*yw R*/
	0x00cc, 0x0000,	/*kb G*/
	0x00cd, 0xffff,	/*gc G*/
	0x00ce, 0x0000,	/*rm G*/
	0x00cf, 0xfffa,	/*yw G*/
	0x00d0, 0x00ff,	/*kb B*/
	0x00d1, 0x00ff,	/*gc B*/
	0x00d2, 0x00ff,	/*rm B*/
	0x00d3, 0x00ff,	/*yw B*/
	0x00d6, 0x1a00,	/*GAMMA p5 2.5/1.8*/
	0x00d7, 0x1a00,
	0x00d8, 0x1a00,
	0x00d9, 0x1a00,
	0x00da, 0x1a00,
	0x00db, 0x1a00,
	0x00dc, 0x1a00,
	0x00dd, 0x1a00,
	0x00de, 0x1a00,
	0x00df, 0x1a00,
	0x00e0, 0xa40c,
	0x00e1, 0xa40c,
	0x00e2, 0xa40c,
	0x00e3, 0xa40d,
	0x00e4, 0xa40d,
	0x00e5, 0xa40e,
	0x00e6, 0xa40e,
	0x00e7, 0xa40e,
	0x00e8, 0xa40e,
	0x00e9, 0xa30a,
	0x00ea, 0xa30a,
	0x00eb, 0x1c22,
	0x00ec, 0x1a31,
	0x00ed, 0xFF00,
	0x00d5, 0x0001,	/*gamma apply*/
	0x0028, 0x0000,	/*Register Mask*/
	/*end*/
	END_SEQ, 0x0000
};

static unsigned short tune_dynamic_ui_boe[] = {
	/*start P2 dynamic, ui, cabcoff*/
	0x0001, 0x0060,	/*SCR LABC 0060*/
	0x002c, 0x0fff,	/*DNR bypass 0x003C*/
	0x002d, 0x1900,	/*DNR bypass 0x0a08*/
	0x002e, 0x0000,	/*DNR bypass 0x1010*/
	0x002f, 0x0fff,	/*DNR bypass 0x0400*/
	0x003A, 0x0009,	/*HDTR (DE off)(CS only 9)*/
	0x003B, 0x0000,	/*DE SHARPNESS*/
	0x003C, 0x0000,	/*NOISE LEVEL*/
	0x003F, 0x01a0,	/*CS GAIN*/
	0x0042, 0x003f,	/*DE TH (MAX DIFF)*/
	/*0x00b4, 0x4640,	count PWM*/
	0x00c8, 0x0000,	/*kb R	SCR*/
	0x00c9, 0x0000,	/*gc R*/
	0x00ca, 0xffff,	/*rm R*/
	0x00cb, 0xfffa,	/*yw R*/
	0x00cc, 0x0000,	/*kb G*/
	0x00cd, 0xffff,	/*gc G*/
	0x00ce, 0x0000,	/*rm G*/
	0x00cf, 0xfffa,	/*yw G*/
	0x00d0, 0x00ff,	/*kb B*/
	0x00d1, 0x00ff,	/*gc B*/
	0x00d2, 0x00ff,	/*rm B*/
	0x00d3, 0x00ff,	/*yw B*/
	0x00d6, 0x1a00,	/*GAMMA p5 2.5/1.8*/
	0x00d7, 0x1a00,
	0x00d8, 0x1a00,
	0x00d9, 0x1a00,
	0x00da, 0x1a00,
	0x00db, 0x1a00,
	0x00dc, 0x1a00,
	0x00dd, 0x1a00,
	0x00de, 0x1a00,
	0x00df, 0x1a00,
	0x00e0, 0xa40c,
	0x00e1, 0xa40c,
	0x00e2, 0xa40c,
	0x00e3, 0xa40d,
	0x00e4, 0xa40d,
	0x00e5, 0xa40e,
	0x00e6, 0xa40e,
	0x00e7, 0xa40e,
	0x00e8, 0xa40e,
	0x00e9, 0xa30a,
	0x00ea, 0xa30a,
	0x00eb, 0x1c22,
	0x00ec, 0x1a31,
	0x00ed, 0xFF00,
	0x00d5, 0x0001,	/*gamma apply*/
	0x0028, 0x0000,	/*Register Mask*/
	/*end*/
	END_SEQ, 0x0000
};

static unsigned short tune_dynamic_video_boe[] = {
	/*start P2 dynamic, videoeo, cabcoff*/
	0x0001, 0x0060,	/* LABC 0060 LABC SCR*/
	0x002c, 0x0fff,	/*DNR bypass 0x003C*/
	0x002d, 0x1900,	/*DNR bypass 0x0a08*/
	0x002e, 0x0000,	/*DNR bypass 0x1010*/
	0x002f, 0x0fff,	/*DNR bypass 0x0400*/
	0x003A, 0x000d,	/*HDTR (DE off)(CS only 9)*/
	0x003B, 0x03ff,	/*DE SHARPNESS*/
	0x003C, 0x0000,	/*NOISE LEVEL*/
	0x003F, 0x01a0,	/*CS GAIN*/
	0x0042, 0x0000,	/*DE TH (MAX DIFF)*/
	/*0x00b4, 0x4640,	count PWM*/
	0x00c8, 0x0000,	/*kb R	SCR*/
	0x00c9, 0x0000,	/*gc R*/
	0x00ca, 0xffff,	/*rm R*/
	0x00cb, 0xfffa,	/*yw R*/
	0x00cc, 0x0000,	/*kb G*/
	0x00cd, 0xffff,	/*gc G*/
	0x00ce, 0x0000,	/*rm G*/
	0x00cf, 0xfffa,	/*yw G*/
	0x00d0, 0x00ff,	/*kb B*/
	0x00d1, 0x00ff,	/*gc B*/
	0x00d2, 0x00ff,	/*rm B*/
	0x00d3, 0x00ff,	/*yw B*/
	0x00d6, 0x1a00,	/*GAMMA p5 2.5/1.8*/
	0x00d7, 0x1a00,
	0x00d8, 0x1a00,
	0x00d9, 0x1a00,
	0x00da, 0x1a00,
	0x00db, 0x1a00,
	0x00dc, 0x1a00,
	0x00dd, 0x1a00,
	0x00de, 0x1a00,
	0x00df, 0x1a00,
	0x00e0, 0xa40c,
	0x00e1, 0xa40c,
	0x00e2, 0xa40c,
	0x00e3, 0xa40d,
	0x00e4, 0xa40d,
	0x00e5, 0xa40e,
	0x00e6, 0xa40e,
	0x00e7, 0xa40e,
	0x00e8, 0xa40e,
	0x00e9, 0xa30a,
	0x00ea, 0xa30a,
	0x00eb, 0x1c22,
	0x00ec, 0x1a31,
	0x00ed, 0xFF00,
	0x00d5, 0x0001,	/*gamma apply*/
	0x0028, 0x0000,	/*Register Mask*/
	/*end*/
	END_SEQ, 0x0000
};

static unsigned short tune_dynamic_vt_boe[] = {
	/*start P2 dynamic, vt, cabcoff*/
	0x0001, 0x0060,	/* LABC 0060 LABC SCR*/
	0x002c, 0x0fff,	/*DNR VTcall,dir_th   0x003c*/
	0x002d, 0x19ff,	/*DNR dir_num,decont7 0x0a08*/
	0x002e, 0xff16,	/*DNR decont5,mask_th 0x1010*/
	0x002f, 0x0000,	/*DNR block_th        0x0400*/
	0x003A, 0x000d,	/*HDTR (DE off)(CS only 9)*/
	0x003B, 0x03ff,	/*DE SHARPNESS*/
	0x003C, 0x0000,	/*NOISE LEVEL*/
	0x003F, 0x01a0,	/*CS GAIN*/
	0x0042, 0x0000,	/*DE TH (MAX DIFF)*/
	/*0x00b4, 0x4640,	count PWM*/
	0x00c8, 0x0000,	/*kb R	SCR*/
	0x00c9, 0x0000,	/*gc R*/
	0x00ca, 0xffff,	/*rm R*/
	0x00cb, 0xfffa,	/*yw R*/
	0x00cc, 0x0000,	/*kb G*/
	0x00cd, 0xffff,	/*gc G*/
	0x00ce, 0x0000,	/*rm G*/
	0x00cf, 0xfffa,	/*yw G*/
	0x00d0, 0x00ff,	/*kb B*/
	0x00d1, 0x00ff,	/*gc B*/
	0x00d2, 0x00ff,	/*rm B*/
	0x00d3, 0x00ff,	/*yw B*/
	0x00d6, 0x1a00,	/*GAMMA p5 2.5/1.8*/
	0x00d7, 0x1a00,
	0x00d8, 0x1a00,
	0x00d9, 0x1a00,
	0x00da, 0x1a00,
	0x00db, 0x1a00,
	0x00dc, 0x1a00,
	0x00dd, 0x1a00,
	0x00de, 0x1a00,
	0x00df, 0x1a00,
	0x00e0, 0xa40c,
	0x00e1, 0xa40c,
	0x00e2, 0xa40c,
	0x00e3, 0xa40d,
	0x00e4, 0xa40d,
	0x00e5, 0xa40e,
	0x00e6, 0xa40e,
	0x00e7, 0xa40e,
	0x00e8, 0xa40e,
	0x00e9, 0xa30a,
	0x00ea, 0xa30a,
	0x00eb, 0x1c22,
	0x00ec, 0x1a31,
	0x00ed, 0xFF00,
	0x00d5, 0x0001,	/*gamma apply*/
	0x0028, 0x0000,	/*Register Mask*/
	/*end*/
	END_SEQ, 0x0000
};

static unsigned short tune_movie_gallery_boe[] = {
	/*start P2 movieie, gallery, cabcoff*/
	0x0001, 0x0060,	/*SCR LABC 0060*/
	0x002c, 0x0fff,	/*DNR bypass 0x003C*/
	0x002d, 0x1900,	/*DNR bypass 0x0a08*/
	0x002e, 0x0000,	/*DNR bypass 0x1010*/
	0x002f, 0x0fff,	/*DNR bypass 0x0400*/
	0x003A, 0x0009,	/*HDTR (DE off)(CS only 9)*/
	0x003B, 0x0000,	/*DE SHARPNESS*/
	0x003C, 0x0000,	/*NOISE LEVEL*/
	0x003F, 0x0000,	/*CS GAIN*/
	0x0042, 0x003f,	/*DE TH (MAX DIFF)*/
	/*0x00b4, 0x4640,	count PWM*/
	0x00c8, 0x0000,	/*kb R	SCR*/
	0x00c9, 0x0000,	/*gc R*/
	0x00ca, 0xffff,	/*rm R*/
	0x00cb, 0xffff,	/*yw R*/
	0x00cc, 0x0000,	/*kb G*/
	0x00cd, 0xffff,	/*gc G*/
	0x00ce, 0x0000,	/*rm G*/
	0x00cf, 0xfcf3,	/*yw G*/
	0x00d0, 0x00ff,	/*kb B*/
	0x00d1, 0x00ff,	/*gc B*/
	0x00d2, 0x00ff,	/*rm B*/
	0x00d3, 0x00ea,	/*yw B*/
	0x00d6, 0x0b00,	/*GAMMA p1 boe*/
	0x00d7, 0x0b00,
	0x00d8, 0x0b00,
	0x00d9, 0x0b00,
	0x00da, 0x0b00,
	0x00db, 0x0b00,
	0x00dc, 0x0b00,
	0x00dd, 0xa315,
	0x00de, 0xa315,
	0x00df, 0xa315,
	0x00e0, 0xa315,
	0x00e1, 0xa315,
	0x00e2, 0xa315,
	0x00e3, 0xa315,
	0x00e4, 0xa315,
	0x00e5, 0xa315,
	0x00e6, 0xa315,
	0x00e7, 0xa315,
	0x00e8, 0xa315,
	0x00e9, 0xa315,
	0x00ea, 0xa315,
	0x00eb, 0xa315,
	0x00ec, 0xa315,
	0x00ed, 0xFF00,
	0x00d5, 0x0001,	/*gamma apply*/
	0x0028, 0x0000,	/*Register Mask*/
	/*end*/
	END_SEQ, 0x0000
};

static unsigned short tune_movie_ui_boe[] = {
	/*start P2 movieie, ui, cabcoff*/
	0x0001, 0x0060,	/*SCR LABC 0060*/
	0x002c, 0x0fff,	/*DNR bypass 0x003C*/
	0x002d, 0x1900,	/*DNR bypass 0x0a08*/
	0x002e, 0x0000,	/*DNR bypass 0x1010*/
	0x002f, 0x0fff,	/*DNR bypass 0x0400*/
	0x003A, 0x0009,	/*HDTR (DE off)(CS only 9)*/
	0x003B, 0x0000,	/*DE SHARPNESS*/
	0x003C, 0x0000,	/*NOISE LEVEL*/
	0x003F, 0x0000,	/*CS GAIN*/
	0x0042, 0x003f,	/*DE TH (MAX DIFF)*/
	/*0x00b4, 0x4640,	count PWM*/
	0x00c8, 0x0000,	/*kb R	SCR*/
	0x00c9, 0x0000,	/*gc R*/
	0x00ca, 0xffff,	/*rm R*/
	0x00cb, 0xffff,	/*yw R*/
	0x00cc, 0x0000,	/*kb G*/
	0x00cd, 0xffff,	/*gc G*/
	0x00ce, 0x0000,	/*rm G*/
	0x00cf, 0xfcf3,	/*yw G*/
	0x00d0, 0x00ff,	/*kb B*/
	0x00d1, 0x00ff,	/*gc B*/
	0x00d2, 0x00ff,	/*rm B*/
	0x00d3, 0x00ea,	/*yw B*/
	0x00d6, 0x0b00,	/*GAMMA p1 boe*/
	0x00d7, 0x0b00,
	0x00d8, 0x0b00,
	0x00d9, 0x0b00,
	0x00da, 0x0b00,
	0x00db, 0x0b00,
	0x00dc, 0x0b00,
	0x00dd, 0xa315,
	0x00de, 0xa315,
	0x00df, 0xa315,
	0x00e0, 0xa315,
	0x00e1, 0xa315,
	0x00e2, 0xa315,
	0x00e3, 0xa315,
	0x00e4, 0xa315,
	0x00e5, 0xa315,
	0x00e6, 0xa315,
	0x00e7, 0xa315,
	0x00e8, 0xa315,
	0x00e9, 0xa315,
	0x00ea, 0xa315,
	0x00eb, 0xa315,
	0x00ec, 0xa315,
	0x00ed, 0xFF00,
	0x00d5, 0x0001,	/*gamma apply*/
	0x0028, 0x0000,	/*Register Mask*/
	/*end*/
	END_SEQ, 0x0000
};

static unsigned short tune_movie_video_boe[] = {
	/*start P2 movieie, videoeo, cabcoff*/
	0x0001, 0x0060,	/*SCR LABC 0060*/
	0x002c, 0x0fff,	/*DNR bypass 0x003C*/
	0x002d, 0x1900,	/*DNR bypass 0x0a08*/
	0x002e, 0x0000,	/*DNR bypass 0x1010*/
	0x002f, 0x0fff,	/*DNR bypass 0x0400*/
	0x003A, 0x0009,	/*HDTR (DE off)(CS only 9)*/
	0x003B, 0x0000,	/*DE SHARPNESS*/
	0x003C, 0x0000,	/*NOISE LEVEL*/
	0x003F, 0x0000,	/*CS GAIN*/
	0x0042, 0x003f,	/*DE TH (MAX DIFF)*/
	/*0x00b4, 0x4640,	count PWM*/
	0x00c8, 0x0000,	/*kb R	SCR*/
	0x00c9, 0x0000,	/*gc R*/
	0x00ca, 0xffff,	/*rm R*/
	0x00cb, 0xffff,	/*yw R*/
	0x00cc, 0x0000,	/*kb G*/
	0x00cd, 0xffff,	/*gc G*/
	0x00ce, 0x0000,	/*rm G*/
	0x00cf, 0xfcf3,	/*yw G*/
	0x00d0, 0x00ff,	/*kb B*/
	0x00d1, 0x00ff,	/*gc B*/
	0x00d2, 0x00ff,	/*rm B*/
	0x00d3, 0x00ea,	/*yw B*/
	0x00d6, 0x0b00,	/*GAMMA p1 boe*/
	0x00d7, 0x0b00,
	0x00d8, 0x0b00,
	0x00d9, 0x0b00,
	0x00da, 0x0b00,
	0x00db, 0x0b00,
	0x00dc, 0x0b00,
	0x00dd, 0xa315,
	0x00de, 0xa315,
	0x00df, 0xa315,
	0x00e0, 0xa315,
	0x00e1, 0xa315,
	0x00e2, 0xa315,
	0x00e3, 0xa315,
	0x00e4, 0xa315,
	0x00e5, 0xa315,
	0x00e6, 0xa315,
	0x00e7, 0xa315,
	0x00e8, 0xa315,
	0x00e9, 0xa315,
	0x00ea, 0xa315,
	0x00eb, 0xa315,
	0x00ec, 0xa315,
	0x00ed, 0xFF00,
	0x00d5, 0x0001,	/*gamma apply*/
	0x0028, 0x0000,	/*Register Mask*/
	/*end*/
	END_SEQ, 0x0000
};

static unsigned short tune_movie_vt_boe[] = {
	/*start P2 movieie, ui, cabcoff*/
	0x0001, 0x0060,	/*SCR LABC 0060*/
	0x002c, 0x0fff,	/*DNR VTcall,dir_th   0x003c*/
	0x002d, 0x19ff,	/*DNR dir_num,decont7 0x0a08*/
	0x002e, 0xff16,	/*DNR decont5,mask_th 0x1010*/
	0x002f, 0x0000,	/*DNR block_th        0x0400*/
	0x003A, 0x0009,	/*HDTR (DE off)(CS only 9)*/
	0x003B, 0x0000,	/*DE SHARPNESS*/
	0x003C, 0x0000,	/*NOISE LEVEL*/
	0x003F, 0x0000,	/*CS GAIN*/
	0x0042, 0x003f,	/*DE TH (MAX DIFF)*/
	/*0x00b4, 0x4640,	count PWM*/
	0x00c8, 0x0000,	/*kb R	SCR*/
	0x00c9, 0x0000,	/*gc R*/
	0x00ca, 0xffff,	/*rm R*/
	0x00cb, 0xffff,	/*yw R*/
	0x00cc, 0x0000,	/*kb G*/
	0x00cd, 0xffff,	/*gc G*/
	0x00ce, 0x0000,	/*rm G*/
	0x00cf, 0xfcf3,	/*yw G*/
	0x00d0, 0x00ff,	/*kb B*/
	0x00d1, 0x00ff,	/*gc B*/
	0x00d2, 0x00ff,	/*rm B*/
	0x00d3, 0x00ea,	/*yw B*/
	0x00d6, 0x0b00,	/*GAMMA p1 boe*/
	0x00d7, 0x0b00,
	0x00d8, 0x0b00,
	0x00d9, 0x0b00,
	0x00da, 0x0b00,
	0x00db, 0x0b00,
	0x00dc, 0x0b00,
	0x00dd, 0xa315,
	0x00de, 0xa315,
	0x00df, 0xa315,
	0x00e0, 0xa315,
	0x00e1, 0xa315,
	0x00e2, 0xa315,
	0x00e3, 0xa315,
	0x00e4, 0xa315,
	0x00e5, 0xa315,
	0x00e6, 0xa315,
	0x00e7, 0xa315,
	0x00e8, 0xa315,
	0x00e9, 0xa315,
	0x00ea, 0xa315,
	0x00eb, 0xa315,
	0x00ec, 0xa315,
	0x00ed, 0xFF00,
	0x00d5, 0x0001,	/*gamma apply*/
	0x0028, 0x0000,	/*Register Mask*/
	/*end*/
	END_SEQ, 0x0000
};

static unsigned short tune_standard_gallery_boe[] = {
	/*start P2 standard, gallery, cabcoff*/
	0x0001, 0x0060,	/* LABC 0060 LABC SCR*/
	0x002c, 0x0fff,	/*DNR bypass 0x003C*/
	0x002d, 0x1900,	/*DNR bypass 0x0a08*/
	0x002e, 0x0000,	/*DNR bypass 0x1010*/
	0x002f, 0x0fff,	/*DNR bypass 0x0400*/
	0x003A, 0x000d,	/*HDTR (DE off)(CS only 9)*/
	0x003B, 0x0030,	/*DE SHARPNESS*/
	0x003C, 0x0000,	/*NOISE LEVEL*/
	0x003F, 0x00a0,	/*CS GAIN*/
	0x0042, 0x0020,	/*DE TH (MAX DIFF)*/
	/*0x00b4, 0x4640,	count PWM*/
	0x00c8, 0x0000,	/*kb R	SCR*/
	0x00c9, 0x0000,	/*gc R*/
	0x00ca, 0xffff,	/*rm R*/
	0x00cb, 0xfffa,	/*yw R*/
	0x00cc, 0x0000,	/*kb G*/
	0x00cd, 0xffff,	/*gc G*/
	0x00ce, 0x0000,	/*rm G*/
	0x00cf, 0xfffa,	/*yw G*/
	0x00d0, 0x00ff,	/*kb B*/
	0x00d1, 0x00ff,	/*gc B*/
	0x00d2, 0x00ff,	/*rm B*/
	0x00d3, 0x00ff,	/*yw B*/
	0x00d6, 0x1a00,	/*GAMMA p5 2.5/2.0*/
	0x00d7, 0x1a00,
	0x00d8, 0x1a00,
	0x00d9, 0x1a00,
	0x00da, 0x1a00,
	0x00db, 0x1a00,
	0x00dc, 0x1a00,
	0x00dd, 0x1a00,
	0x00de, 0x1a00,
	0x00df, 0x1a00,
	0x00e0, 0x1a00,
	0x00e1, 0x1a00,
	0x00e2, 0x1a00,
	0x00e3, 0x1a00,
	0x00e4, 0x1a00,
	0x00e5, 0x1a00,
	0x00e6, 0xa414,
	0x00e7, 0xa414,
	0x00e8, 0xa414,
	0x00e9, 0xa414,
	0x00ea, 0xa414,
	0x00eb, 0x2005,
	0x00ec, 0x1d1b,
	0x00ed, 0xFF00,
	0x00d5, 0x0001,	/*gamma apply*/
	0x0028, 0x0000,	/*Register Mask*/
	/*end*/
	END_SEQ, 0x0000
};

static unsigned short tune_standard_ui_boe[] = {
	/*start P2 standard, ui, cabcoff*/
	0x0001, 0x0060,	/*SCR LABC 0060*/
	0x002c, 0x0fff,	/*DNR bypass 0x003C*/
	0x002d, 0x1900,	/*DNR bypass 0x0a08*/
	0x002e, 0x0000,	/*DNR bypass 0x1010*/
	0x002f, 0x0fff,	/*DNR bypass 0x0400*/
	0x003A, 0x0009,	/*HDTR (DE off)(CS only 9)*/
	0x003B, 0x0000,	/*DE SHARPNESS*/
	0x003C, 0x0000,	/*NOISE LEVEL*/
	0x003F, 0x00a0,	/*CS GAIN*/
	0x0042, 0x003f,	/*DE TH (MAX DIFF)*/
	/*0x00b4, 0x4640,count PWM*/
	0x00c8, 0x0000,	/*kb R	SCR*/
	0x00c9, 0x0000,	/*gc R*/
	0x00ca, 0xffff,	/*rm R*/
	0x00cb, 0xfffa,	/*yw R*/
	0x00cc, 0x0000,	/*kb G*/
	0x00cd, 0xffff,	/*gc G*/
	0x00ce, 0x0000,	/*rm G*/
	0x00cf, 0xfffa,	/*yw G*/
	0x00d0, 0x00ff,	/*kb B*/
	0x00d1, 0x00ff,	/*gc B*/
	0x00d2, 0x00ff,	/*rm B*/
	0x00d3, 0x00ff,	/*yw B*/
	0x00d6, 0x1a00,	/*GAMMA p5 2.5/2.0*/
	0x00d7, 0x1a00,
	0x00d8, 0x1a00,
	0x00d9, 0x1a00,
	0x00da, 0x1a00,
	0x00db, 0x1a00,
	0x00dc, 0x1a00,
	0x00dd, 0x1a00,
	0x00de, 0x1a00,
	0x00df, 0x1a00,
	0x00e0, 0x1a00,
	0x00e1, 0x1a00,
	0x00e2, 0x1a00,
	0x00e3, 0x1a00,
	0x00e4, 0x1a00,
	0x00e5, 0x1a00,
	0x00e6, 0xa414,
	0x00e7, 0xa414,
	0x00e8, 0xa414,
	0x00e9, 0xa414,
	0x00ea, 0xa414,
	0x00eb, 0x2005,
	0x00ec, 0x1d1b,
	0x00ed, 0xFF00,
	0x00d5, 0x0001,	/*gamma apply*/
	0x0028, 0x0000,	/*Register Mask*/
	/*end*/
	END_SEQ, 0x0000
};

static unsigned short tune_standard_video_boe[] = {
	/*start P2 standard, videoeo, cabcoff*/
	0x0001, 0x0060,	/* LABC 0060 LABC SCR*/
	0x002c, 0x0fff,	/*DNR bypass 0x003C*/
	0x002d, 0x1900,	/*DNR bypass 0x0a08*/
	0x002e, 0x0000,	/*DNR bypass 0x1010*/
	0x002f, 0x0fff,	/*DNR bypass 0x0400*/
	0x003A, 0x000d,	/*HDTR (DE off)(CS only 9)*/
	0x003B, 0x0030,	/*DE SHARPNESS*/
	0x003C, 0x0000,	/*NOISE LEVEL*/
	0x003F, 0x00a0,	/*CS GAIN*/
	0x0042, 0x0020,	/*DE TH (MAX DIFF)*/
	/*0x00b4, 0x4640,count PWM*/
	0x00c8, 0x0000,	/*kb R	SCR*/
	0x00c9, 0x0000,	/*gc R*/
	0x00ca, 0xffff,	/*rm R*/
	0x00cb, 0xfffa,	/*yw R*/
	0x00cc, 0x0000,	/*kb G*/
	0x00cd, 0xffff,	/*gc G*/
	0x00ce, 0x0000,	/*rm G*/
	0x00cf, 0xfffa,	/*yw G*/
	0x00d0, 0x00ff,	/*kb B*/
	0x00d1, 0x00ff,	/*gc B*/
	0x00d2, 0x00ff,	/*rm B*/
	0x00d3, 0x00ff,	/*yw B*/
	0x00d6, 0x1a00,	/*GAMMA p5 2.5/2.0*/
	0x00d7, 0x1a00,
	0x00d8, 0x1a00,
	0x00d9, 0x1a00,
	0x00da, 0x1a00,
	0x00db, 0x1a00,
	0x00dc, 0x1a00,
	0x00dd, 0x1a00,
	0x00de, 0x1a00,
	0x00df, 0x1a00,
	0x00e0, 0x1a00,
	0x00e1, 0x1a00,
	0x00e2, 0x1a00,
	0x00e3, 0x1a00,
	0x00e4, 0x1a00,
	0x00e5, 0x1a00,
	0x00e6, 0xa414,
	0x00e7, 0xa414,
	0x00e8, 0xa414,
	0x00e9, 0xa414,
	0x00ea, 0xa414,
	0x00eb, 0x2005,
	0x00ec, 0x1d1b,
	0x00ed, 0xFF00,
	0x00d5, 0x0001,	/*gamma apply*/
	0x0028, 0x0000,	/*Register Mask*/
	/*end*/
	END_SEQ, 0x0000
};

static unsigned short tune_standard_vt_boe[] = {
	/*start P2 standard, vt, cabcoff*/
	0x0001, 0x0060,	/* LABC 0060 LABC SCR*/
	0x002c, 0x0fff,	/*DNR VTcall,dir_th   0x003c*/
	0x002d, 0x19ff,	/*DNR dir_num,decont7 0x0a08*/
	0x002e, 0xff16,	/*DNR decont5,mask_th 0x1010*/
	0x002f, 0x0000,	/*DNR block_th        0x0400*/
	0x003A, 0x000d,	/*HDTR (DE off)(CS only 9)*/
	0x003B, 0x03ff,	/*DE SHARPNESS*/
	0x003C, 0x0000,	/*NOISE LEVEL*/
	0x003F, 0x00a0,	/*CS GAIN*/
	0x0042, 0x0000,	/*DE TH (MAX DIFF)*/
	/*0x00b4, 0x4640,	count PWM*/
	0x00c8, 0x0000,	/*kb R	SCR*/
	0x00c9, 0x0000,	/*gc R*/
	0x00ca, 0xffff,	/*rm R*/
	0x00cb, 0xfffa,	/*yw R*/
	0x00cc, 0x0000,	/*kb G*/
	0x00cd, 0xffff,	/*gc G*/
	0x00ce, 0x0000,	/*rm G*/
	0x00cf, 0xfffa,	/*yw G*/
	0x00d0, 0x00ff,	/*kb B*/
	0x00d1, 0x00ff,	/*gc B*/
	0x00d2, 0x00ff,	/*rm B*/
	0x00d3, 0x00ff,	/*yw B*/
	0x00d6, 0x1a00,	/*GAMMA p5 2.5/2.0*/
	0x00d7, 0x1a00,
	0x00d8, 0x1a00,
	0x00d9, 0x1a00,
	0x00da, 0x1a00,
	0x00db, 0x1a00,
	0x00dc, 0x1a00,
	0x00dd, 0x1a00,
	0x00de, 0x1a00,
	0x00df, 0x1a00,
	0x00e0, 0x1a00,
	0x00e1, 0x1a00,
	0x00e2, 0x1a00,
	0x00e3, 0x1a00,
	0x00e4, 0x1a00,
	0x00e5, 0x1a00,
	0x00e6, 0xa414,
	0x00e7, 0xa414,
	0x00e8, 0xa414,
	0x00e9, 0xa414,
	0x00ea, 0xa414,
	0x00eb, 0x2005,
	0x00ec, 0x1d1b,
	0x00ed, 0xFF00,
	0x00d5, 0x0001,	/*gamma apply*/
	0x0028, 0x0000,	/*Register Mask*/
	/*end*/
	END_SEQ, 0x0000
};

static unsigned short tune_dynamic_gallery_cabc_boe[] = {
	/*start P2 dynamic, gallery, cabcon*/
	0x0001, 0x0070,	/* LABC SCR CABC*/
	0x002c, 0x0fff,	/*DNR bypass 0x003C*/
	0x002d, 0x1900,	/*DNR bypass 0x0a08*/
	0x002e, 0x0000,	/*DNR bypass 0x1010*/
	0x002f, 0x0fff,	/*DNR bypass 0x0400*/
	0x003A, 0x000d,	/*HDTR (DE off)(CS only 9)*/
	0x003B, 0x03ff,	/*DE SHARPNESS*/
	0x003C, 0x0000,	/*NOISE LEVEL*/
	0x003F, 0x01a0,	/*CS GAIN*/
	0x0042, 0x0000,	/*DE TH (MAX DIFF)*/
	0x0072, 0x0000,	/*CABC Dgain*/
	0x0073, 0x0000,
	0x0074, 0x0000,
	0x0075, 0x0000,
	0x007C, 0x0002,	/*Dynamic LCD*/
	/*0x00b4, 0x5640,	CABC PWM*/
	/*0x00b4, 0x4640,count PWM*/
	0x00c8, 0x0000,	/*kb R	SCR*/
	0x00c9, 0x0000,	/*gc R*/
	0x00ca, 0xffff,	/*rm R*/
	0x00cb, 0xfffa,	/*yw R*/
	0x00cc, 0x0000,	/*kb G*/
	0x00cd, 0xffff,	/*gc G*/
	0x00ce, 0x0000,	/*rm G*/
	0x00cf, 0xfffa,	/*yw G*/
	0x00d0, 0x00ff,	/*kb B*/
	0x00d1, 0x00ff,	/*gc B*/
	0x00d2, 0x00ff,	/*rm B*/
	0x00d3, 0x00ff,	/*yw B*/
	0x00d6, 0x1a00,	/*GAMMA p5 2.5/1.8*/
	0x00d7, 0x1a00,
	0x00d8, 0x1a00,
	0x00d9, 0x1a00,
	0x00da, 0x1a00,
	0x00db, 0xa407,
	0x00dc, 0xa407,
	0x00dd, 0xa407,
	0x00de, 0xa407,
	0x00df, 0xa407,
	0x00e0, 0xa407,
	0x00e1, 0xa407,
	0x00e2, 0xa407,
	0x00e3, 0xa407,
	0x00e4, 0xa407,
	0x00e5, 0xa407,
	0x00e6, 0xa407,
	0x00e7, 0xa407,
	0x00e8, 0xa407,
	0x00e9, 0xa407,
	0x00ea, 0xa407,
	0x00eb, 0x1844,
	0x00ec, 0x1461,
	0x00ed, 0xFF00,
	0x00d5, 0x0001,	/*gamma apply*/
	0x0028, 0x0000,	/*Register Mask*/
	/*end*/
	END_SEQ, 0x0000
};

static unsigned short tune_dynamic_ui_cabc_boe[] = {
	/*start P2 dynamic, ui, cabcon*/
	0x0001, 0x0070,	/*SCR LABC CABC*/
	0x002c, 0x0fff,	/*DNR bypass 0x003C*/
	0x002d, 0x1900,	/*DNR bypass 0x0a08*/
	0x002e, 0x0000,	/*DNR bypass 0x1010*/
	0x002f, 0x0fff,	/*DNR bypass 0x0400*/
	0x003A, 0x0009,	/*HDTR (DE off)(CS only 9)*/
	0x003B, 0x0000,	/*DE SHARPNESS*/
	0x003C, 0x0000,	/*NOISE LEVEL*/
	0x003F, 0x01a0,	/*CS GAIN*/
	0x0042, 0x003f,	/*DE TH (MAX DIFF)*/
	0x0072, 0x0000,	/*CABC Dgain*/
	0x0073, 0x0000,
	0x0074, 0x0000,
	0x0075, 0x0000,
	0x007C, 0x0002,	/*Dynamic LCD*/
	/*0x00b4, 0x5640,	CABC PWM*/
	/*0x00b4, 0x4640,	count PWM*/
	0x00c8, 0x0000,	/*kb R	SCR*/
	0x00c9, 0x0000,	/*gc R*/
	0x00ca, 0xffff,	/*rm R*/
	0x00cb, 0xfffa,	/*yw R*/
	0x00cc, 0x0000,	/*kb G*/
	0x00cd, 0xffff,	/*gc G*/
	0x00ce, 0x0000,	/*rm G*/
	0x00cf, 0xfffa,	/*yw G*/
	0x00d0, 0x00ff,	/*kb B*/
	0x00d1, 0x00ff,	/*gc B*/
	0x00d2, 0x00ff,	/*rm B*/
	0x00d3, 0x00ff,	/*yw B*/
	0x00d6, 0x1a00,	/*GAMMA p5 2.5/1.8*/
	0x00d7, 0x1a00,
	0x00d8, 0x1a00,
	0x00d9, 0x1a00,
	0x00da, 0x1a00,
	0x00db, 0xa407,
	0x00dc, 0xa407,
	0x00dd, 0xa407,
	0x00de, 0xa407,
	0x00df, 0xa407,
	0x00e0, 0xa407,
	0x00e1, 0xa407,
	0x00e2, 0xa407,
	0x00e3, 0xa407,
	0x00e4, 0xa407,
	0x00e5, 0xa407,
	0x00e6, 0xa407,
	0x00e7, 0xa407,
	0x00e8, 0xa407,
	0x00e9, 0xa407,
	0x00ea, 0xa407,
	0x00eb, 0x1844,
	0x00ec, 0x1461,
	0x00ed, 0xFF00,
	0x00d5, 0x0001,	/*gamma apply*/
	0x0028, 0x0000,	/*Register Mask*/
	/*end*/
	END_SEQ, 0x0000
};

static unsigned short tune_dynamic_video_cabc_boe[] = {
	/*start P2 dynamic, videoeo, cabcon*/
	0x0001, 0x0070,	/* LABC  SCR CABC*/
	0x002c, 0x0fff,	/*DNR bypass 0x003C*/
	0x002d, 0x1900,	/*DNR bypass 0x0a08*/
	0x002e, 0x0000,	/*DNR bypass 0x1010*/
	0x002f, 0x0fff,	/*DNR bypass 0x0400*/
	0x003A, 0x000d,	/*HDTR (DE off)(CS only 9)*/
	0x003B, 0x03ff,	/*DE SHARPNESS*/
	0x003C, 0x0000,	/*NOISE LEVEL*/
	0x003F, 0x01a0,	/*CS GAIN*/
	0x0042, 0x0000,	/*DE TH (MAX DIFF)*/
	0x0072, 0x0000,	/*CABC Dgain*/
	0x0073, 0x0000,
	0x0074, 0x0000,
	0x0075, 0x0000,
	0x007C, 0x0002,	/*Dynamic LCD*/
	/*0x00b4, 0x5640,	CABC PWM*/
	/*0x00b4, 0x4640,	count PWM*/
	0x00c8, 0x0000,	/*kb R	SCR*/
	0x00c9, 0x0000,	/*gc R*/
	0x00ca, 0xffff,	/*rm R*/
	0x00cb, 0xfffa,	/*yw R*/
	0x00cc, 0x0000,	/*kb G*/
	0x00cd, 0xffff,	/*gc G*/
	0x00ce, 0x0000,	/*rm G*/
	0x00cf, 0xfffa,	/*yw G*/
	0x00d0, 0x00ff,	/*kb B*/
	0x00d1, 0x00ff,	/*gc B*/
	0x00d2, 0x00ff,	/*rm B*/
	0x00d3, 0x00ff,	/*yw B*/
	0x00d6, 0x2600,	/*GAMMA p5 2.5/1.8*/
	0x00d7, 0x2600,
	0x00d8, 0x2600,
	0x00d9, 0x2600,
	0x00da, 0x2501,
	0x00db, 0x2501,
	0x00dc, 0x2501,
	0x00dd, 0x2501,
	0x00de, 0x2501,
	0x00df, 0x2501,
	0x00e0, 0x2501,
	0x00e1, 0x2501,
	0x00e2, 0x2501,
	0x00e3, 0x2501,
	0x00e4, 0x2501,
	0x00e5, 0x2501,
	0x00e6, 0x2501,
	0x00e7, 0x2501,
	0x00e8, 0x2501,
	0x00e9, 0x2501,
	0x00ea, 0x1f20,
	0x00eb, 0x136b,
	0x00ec, 0x1081,
	0x00ed, 0xFF00,
	0x00d5, 0x0001,	/*gamma apply*/
	0x0028, 0x0000,	/*Register Mask*/
	/*end*/
	END_SEQ, 0x0000
};

static unsigned short tune_dynamic_vt_cabc_boe[] = {
	/*start P2 dynamic, vt, cabcon*/
	0x0001, 0x0070,	/* LABC SCR CABC*/
	0x002c, 0x0fff,	/*DNR VTcall,dir_th   0x003c*/
	0x002d, 0x19ff,	/*DNR dir_num,decont7 0x0a08*/
	0x002e, 0xff16,	/*DNR decont5,mask_th 0x1010*/
	0x002f, 0x0000,	/*DNR block_th        0x0400*/
	0x003A, 0x000d,	/*HDTR (DE off)(CS only 9)*/
	0x003B, 0x03ff,	/*DE SHARPNESS*/
	0x003C, 0x0000,	/*NOISE LEVEL*/
	0x003F, 0x01a0,	/*CS GAIN*/
	0x0042, 0x0000,	/*DE TH (MAX DIFF)*/
	0x0072, 0x0000,	/*CABC Dgain*/
	0x0073, 0x0000,
	0x0074, 0x0000,
	0x0075, 0x0000,
	0x007C, 0x0002,	/*Dynamic LCD*/
	/*0x00b4, 0x5640,CABC PWM*/
	/*0x00b4, 0x4640,count PWM*/
	0x00c8, 0x0000,	/*kb R	SCR*/
	0x00c9, 0x0000,	/*gc R*/
	0x00ca, 0xffff,	/*rm R*/
	0x00cb, 0xfffa,	/*yw R*/
	0x00cc, 0x0000,	/*kb G*/
	0x00cd, 0xffff,	/*gc G*/
	0x00ce, 0x0000,	/*rm G*/
	0x00cf, 0xfffa,	/*yw G*/
	0x00d0, 0x00ff,	/*kb B*/
	0x00d1, 0x00ff,	/*gc B*/
	0x00d2, 0x00ff,	/*rm B*/
	0x00d3, 0x00ff,	/*yw B*/
	0x00d6, 0x1a00,	/*GAMMA p5 2.5/1.8*/
	0x00d7, 0x1a00,
	0x00d8, 0x1a00,
	0x00d9, 0x1a00,
	0x00da, 0x1a00,
	0x00db, 0xa407,
	0x00dc, 0xa407,
	0x00dd, 0xa407,
	0x00de, 0xa407,
	0x00df, 0xa407,
	0x00e0, 0xa407,
	0x00e1, 0xa407,
	0x00e2, 0xa407,
	0x00e3, 0xa407,
	0x00e4, 0xa407,
	0x00e5, 0xa407,
	0x00e6, 0xa407,
	0x00e7, 0xa407,
	0x00e8, 0xa407,
	0x00e9, 0xa407,
	0x00ea, 0xa407,
	0x00eb, 0x1844,
	0x00ec, 0x1461,
	0x00ed, 0xFF00,
	0x00d5, 0x0001,	/*gamma apply*/
	0x0028, 0x0000,	/*Register Mask*/
	/*end*/
	END_SEQ, 0x0000
};

static unsigned short tune_movie_gallery_cabc_boe[] = {
	/*start P2 movieie, gallery, cabcon*/
	0x0001, 0x0070,	/*SCR LABC CABC*/
	0x002c, 0x0fff,	/*DNR bypass 0x003C*/
	0x002d, 0x1900,	/*DNR bypass 0x0a08*/
	0x002e, 0x0000,	/*DNR bypass 0x1010*/
	0x002f, 0x0fff,	/*DNR bypass 0x0400*/
	0x003A, 0x0009,	/*HDTR (DE off)(CS only 9)*/
	0x003B, 0x0000,	/*DE SHARPNESS*/
	0x003C, 0x0000,	/*NOISE LEVEL*/
	0x003F, 0x0000,	/*CS GAIN*/
	0x0042, 0x003f,	/*DE TH (MAX DIFF)*/
	0x0072, 0x0000,	/*CABC Dgain*/
	0x0073, 0x0000,
	0x0074, 0x0000,
	0x0075, 0x0000,
	0x007C, 0x0002,	/*Dynamic LCD*/
	/*0x00b4, 0x5640,CABC PWM*/
	/*0x00b4, 0x4640,count PWM*/
	0x00c8, 0x0000,	/*kb R	SCR*/
	0x00c9, 0x0000,	/*gc R*/
	0x00ca, 0xffff,	/*rm R*/
	0x00cb, 0xffff,	/*yw R*/
	0x00cc, 0x0000,	/*kb G*/
	0x00cd, 0xffff,	/*gc G*/
	0x00ce, 0x0000,	/*rm G*/
	0x00cf, 0xfcf3,	/*yw G*/
	0x00d0, 0x00ff,	/*kb B*/
	0x00d1, 0x00ff,	/*gc B*/
	0x00d2, 0x00ff,	/*rm B*/
	0x00d3, 0x00ea,	/*yw B*/
	0x00d6, 0x3f00,	/*GAMMA p1 boe*/
	0x00d7, 0x2003,
	0x00d8, 0x2003,
	0x00d9, 0x2003,
	0x00da, 0x2003,
	0x00db, 0x2003,
	0x00dc, 0x2003,
	0x00dd, 0x2003,
	0x00de, 0x2003,
	0x00df, 0x2003,
	0x00e0, 0x2003,
	0x00e1, 0x2003,
	0x00e2, 0x2003,
	0x00e3, 0x2003,
	0x00e4, 0x2003,
	0x00e5, 0x2003,
	0x00e6, 0x2003,
	0x00e7, 0x2003,
	0x00e8, 0x2003,
	0x00e9, 0x2003,
	0x00ea, 0x2003,
	0x00eb, 0x2003,
	0x00ec, 0x2003,
	0x00ed, 0xFF00,
	0x00d5, 0x0001,	/*gamma apply*/
	0x0028, 0x0000,	/*Register Mask*/
	/*end*/
	END_SEQ, 0x0000
};

static unsigned short tune_movie_ui_cabc_boe[] = {
	/*start P2 movieie, ui, cabcon*/
	0x0001, 0x0070,	/*SCR LABC CABC*/
	0x002c, 0x0fff,	/*DNR bypass 0x003C*/
	0x002d, 0x1900,	/*DNR bypass 0x0a08*/
	0x002e, 0x0000,	/*DNR bypass 0x1010*/
	0x002f, 0x0fff,	/*DNR bypass 0x0400*/
	0x003A, 0x0009,	/*HDTR (DE off)(CS only 9)*/
	0x003B, 0x0000,	/*DE SHARPNESS*/
	0x003C, 0x0000,	/*NOISE LEVEL*/
	0x003F, 0x0000,	/*CS GAIN*/
	0x0042, 0x003f,	/*DE TH (MAX DIFF)*/
	0x0072, 0x0000,	/*CABC Dgain*/
	0x0073, 0x0000,
	0x0074, 0x0000,
	0x0075, 0x0000,
	0x007C, 0x0002,	/*Dynamic LCD*/
	/*0x00b4, 0x5640,	CABC PWM*/
	/*0x00b4, 0x4640,	count PWM*/
	0x00c8, 0x0000,	/*kb R	SCR*/
	0x00c9, 0x0000,	/*gc R*/
	0x00ca, 0xffff,	/*rm R*/
	0x00cb, 0xffff,	/*yw R*/
	0x00cc, 0x0000,	/*kb G*/
	0x00cd, 0xffff,	/*gc G*/
	0x00ce, 0x0000,	/*rm G*/
	0x00cf, 0xfcf3,	/*yw G*/
	0x00d0, 0x00ff,	/*kb B*/
	0x00d1, 0x00ff,	/*gc B*/
	0x00d2, 0x00ff,	/*rm B*/
	0x00d3, 0x00ea,	/*yw B*/
	0x00d6, 0x3f00,	/*GAMMA p1 boe*/
	0x00d7, 0x2003,
	0x00d8, 0x2003,
	0x00d9, 0x2003,
	0x00da, 0x2003,
	0x00db, 0x2003,
	0x00dc, 0x2003,
	0x00dd, 0x2003,
	0x00de, 0x2003,
	0x00df, 0x2003,
	0x00e0, 0x2003,
	0x00e1, 0x2003,
	0x00e2, 0x2003,
	0x00e3, 0x2003,
	0x00e4, 0x2003,
	0x00e5, 0x2003,
	0x00e6, 0x2003,
	0x00e7, 0x2003,
	0x00e8, 0x2003,
	0x00e9, 0x2003,
	0x00ea, 0x2003,
	0x00eb, 0x2003,
	0x00ec, 0x2003,
	0x00ed, 0xFF00,
	0x00d5, 0x0001,	/*gamma apply*/
	0x0028, 0x0000,	/*Register Mask*/
	/*end*/
	END_SEQ, 0x0000
};

static unsigned short tune_movie_video_cabc_boe[] = {
	/*start P2 movieie, videoeo, cabcon*/
	0x0001, 0x0070,	/*SCR LABC CABC*/
	0x002c, 0x0fff,	/*DNR bypass 0x003C*/
	0x002d, 0x1900,	/*DNR bypass 0x0a08*/
	0x002e, 0x0000,	/*DNR bypass 0x1010*/
	0x002f, 0x0fff,	/*DNR bypass 0x0400*/
	0x003A, 0x0009,	/*HDTR (DE off)(CS only 9)*/
	0x003B, 0x0000,	/*DE SHARPNESS*/
	0x003C, 0x0000,	/*NOISE LEVEL*/
	0x003F, 0x0000,	/*CS GAIN*/
	0x0042, 0x003f,	/*DE TH (MAX DIFF)*/
	0x0072, 0x0000,	/*CABC Dgain*/
	0x0073, 0x0000,
	0x0074, 0x0000,
	0x0075, 0x0000,
	0x007C, 0x0002,	/*Dynamic LCD*/
	/*0x00b4, 0x5640,	CABC PWM*/
	/*0x00b4, 0x4640,	count PWM*/
	0x00c8, 0x0000,	/*kb R	SCR*/
	0x00c9, 0x0000,	/*gc R*/
	0x00ca, 0xffff,	/*rm R*/
	0x00cb, 0xffff,	/*yw R*/
	0x00cc, 0x0000,	/*kb G*/
	0x00cd, 0xffff,	/*gc G*/
	0x00ce, 0x0000,	/*rm G*/
	0x00cf, 0xfcf3,	/*yw G*/
	0x00d0, 0x00ff,	/*kb B*/
	0x00d1, 0x00ff,	/*gc B*/
	0x00d2, 0x00ff,	/*rm B*/
	0x00d3, 0x00ea,	/*yw B*/
	0x00d6, 0x6800,	/*GAMMA p1 boe*/
	0x00d7, 0x2007,
	0x00d8, 0x2007,
	0x00d9, 0x2007,
	0x00da, 0x2007,
	0x00db, 0x2007,
	0x00dc, 0x2007,
	0x00dd, 0x2007,
	0x00de, 0x2007,
	0x00df, 0x2007,
	0x00e0, 0x2007,
	0x00e1, 0x2007,
	0x00e2, 0x2007,
	0x00e3, 0x2007,
	0x00e4, 0x2007,
	0x00e5, 0x2007,
	0x00e6, 0x2007,
	0x00e7, 0x2007,
	0x00e8, 0x2007,
	0x00e9, 0x2007,
	0x00ea, 0x2007,
	0x00eb, 0x2007,
	0x00ec, 0x1a33,
	0x00ed, 0xFF00,
	0x00d5, 0x0001,	/*gamma apply*/
	0x0028, 0x0000,	/*Register Mask*/
	/*end*/
	END_SEQ, 0x0000
};

static unsigned short tune_movie_vt_cabc_boe[] = {
	/*start P2 movieie, ui, cabcon*/
	0x0001, 0x0070,	/*SCR LABC CABC*/
	0x002c, 0x0fff,	/*DNR VTcall,dir_th   0x003c*/
	0x002d, 0x19ff,	/*DNR dir_num,decont7 0x0a08*/
	0x002e, 0xff16,	/*DNR decont5,mask_th 0x1010*/
	0x002f, 0x0000,	/*DNR block_th        0x0400*/
	0x003A, 0x0009,	/*HDTR (DE off)(CS only 9)*/
	0x003B, 0x0000,	/*DE SHARPNESS*/
	0x003C, 0x0000,	/*NOISE LEVEL*/
	0x003F, 0x0000,	/*CS GAIN*/
	0x0042, 0x003f,	/*DE TH (MAX DIFF)*/
	0x0072, 0x0000,	/*CABC Dgain*/
	0x0073, 0x0000,
	0x0074, 0x0000,
	0x0075, 0x0000,
	0x007C, 0x0002,	/*Dynamic LCD*/
	/*0x00b4, 0x5640,	CABC PWM*/
	/*0x00b4, 0x4640,	count PWM*/
	0x00c8, 0x0000,	/*kb R	SCR*/
	0x00c9, 0x0000,	/*gc R*/
	0x00ca, 0xffff,	/*rm R*/
	0x00cb, 0xffff,	/*yw R*/
	0x00cc, 0x0000,	/*kb G*/
	0x00cd, 0xffff,	/*gc G*/
	0x00ce, 0x0000,	/*rm G*/
	0x00cf, 0xfcf3,	/*yw G*/
	0x00d0, 0x00ff,	/*kb B*/
	0x00d1, 0x00ff,	/*gc B*/
	0x00d2, 0x00ff,	/*rm B*/
	0x00d3, 0x00ea,	/*yw B*/
	0x00d6, 0x3f00,	/*GAMMA p1 boe*/
	0x00d7, 0x2003,
	0x00d8, 0x2003,
	0x00d9, 0x2003,
	0x00da, 0x2003,
	0x00db, 0x2003,
	0x00dc, 0x2003,
	0x00dd, 0x2003,
	0x00de, 0x2003,
	0x00df, 0x2003,
	0x00e0, 0x2003,
	0x00e1, 0x2003,
	0x00e2, 0x2003,
	0x00e3, 0x2003,
	0x00e4, 0x2003,
	0x00e5, 0x2003,
	0x00e6, 0x2003,
	0x00e7, 0x2003,
	0x00e8, 0x2003,
	0x00e9, 0x2003,
	0x00ea, 0x2003,
	0x00eb, 0x2003,
	0x00ec, 0x2003,
	0x00ed, 0xFF00,
	0x00d5, 0x0001,	/*gamma apply*/
	0x0028, 0x0000,	/*Register Mask*/
	/*end*/
	END_SEQ, 0x0000
};

static unsigned short tune_standard_gallery_cabc_boe[] = {
	/*start P2 standard, gallery, cabcon*/
	0x0001, 0x0070,	/* LABC SCR CABC*/
	0x002c, 0x0fff,	/*DNR bypass 0x003C*/
	0x002d, 0x1900,	/*DNR bypass 0x0a08*/
	0x002e, 0x0000,	/*DNR bypass 0x1010*/
	0x002f, 0x0fff,	/*DNR bypass 0x0400*/
	0x003A, 0x000d,	/*HDTR (DE off)(CS only 9)*/
	0x003B, 0x0030,	/*DE SHARPNESS*/
	0x003C, 0x0000,	/*NOISE LEVEL*/
	0x003F, 0x00a0,	/*CS GAIN*/
	0x0042, 0x0020,	/*DE TH (MAX DIFF)*/
	0x0072, 0x0000,	/*CABC Dgain*/
	0x0073, 0x0000,
	0x0074, 0x0000,
	0x0075, 0x0000,
	0x007C, 0x0002,	/*Dynamic LCD*/
	/*0x00b4, 0x5640,	CABC PWM*/
	/*0x00b4, 0x4640,	count PWM*/
	0x00c8, 0x0000,	/*kb R	SCR*/
	0x00c9, 0x0000,	/*gc R*/
	0x00ca, 0xffff,	/*rm R*/
	0x00cb, 0xfffa,	/*yw R*/
	0x00cc, 0x0000,	/*kb G*/
	0x00cd, 0xffff,	/*gc G*/
	0x00ce, 0x0000,	/*rm G*/
	0x00cf, 0xfffa,	/*yw G*/
	0x00d0, 0x00ff,	/*kb B*/
	0x00d1, 0x00ff,	/*gc B*/
	0x00d2, 0x00ff,	/*rm B*/
	0x00d3, 0x00ff,	/*yw B*/
	0x00d6, 0x3f00,	/*GAMMA p5 2.5/2.0*/
	0x00d7, 0x2003,
	0x00d8, 0x2003,
	0x00d9, 0x2003,
	0x00da, 0x2003,
	0x00db, 0x2003,
	0x00dc, 0x2003,
	0x00dd, 0x2003,
	0x00de, 0x2003,
	0x00df, 0x2003,
	0x00e0, 0x2003,
	0x00e1, 0x2003,
	0x00e2, 0x2003,
	0x00e3, 0x2003,
	0x00e4, 0x2003,
	0x00e5, 0x2003,
	0x00e6, 0x2003,
	0x00e7, 0x2003,
	0x00e8, 0x2100,
	0x00e9, 0xa40c,
	0x00ea, 0xa40c,
	0x00eb, 0x1c26,
	0x00ec, 0x1652,
	0x00ed, 0xFF00,
	0x00d5, 0x0001,	/*gamma apply*/
	0x0028, 0x0000,	/*Register Mask*/
	/*end*/
	END_SEQ, 0x0000
};

static unsigned short tune_standard_ui_cabc_boe[] = {
	/*start P2 standard, ui, cabcon*/
	0x0001, 0x0070,	/*SCR LABC CABC*/
	0x002c, 0x0fff,	/*DNR bypass 0x003C*/
	0x002d, 0x1900,	/*DNR bypass 0x0a08*/
	0x002e, 0x0000,	/*DNR bypass 0x1010*/
	0x002f, 0x0fff,	/*DNR bypass 0x0400*/
	0x003A, 0x0009,	/*HDTR (DE off)(CS only 9)*/
	0x003B, 0x0000,	/*DE SHARPNESS*/
	0x003C, 0x0000,	/*NOISE LEVEL*/
	0x003F, 0x00a0,	/*CS GAIN*/
	0x0042, 0x003f,	/*DE TH (MAX DIFF)*/
	0x0072, 0x0000,	/*CABC Dgain*/
	0x0073, 0x0000,
	0x0074, 0x0000,
	0x0075, 0x0000,
	0x007C, 0x0002,	/*Dynamic LCD*/
	/*0x00b4, 0x5640,	CABC PWM*/
	/*0x00b4, 0x4640,	count PWM*/
	0x00c8, 0x0000,	/*kb R	SCR*/
	0x00c9, 0x0000,	/*gc R*/
	0x00ca, 0xffff,	/*rm R*/
	0x00cb, 0xfffa,	/*yw R*/
	0x00cc, 0x0000,	/*kb G*/
	0x00cd, 0xffff,	/*gc G*/
	0x00ce, 0x0000,	/*rm G*/
	0x00cf, 0xfffa,	/*yw G*/
	0x00d0, 0x00ff,	/*kb B*/
	0x00d1, 0x00ff,	/*gc B*/
	0x00d2, 0x00ff,	/*rm B*/
	0x00d3, 0x00ff,	/*yw B*/
	0x00d6, 0x3f00,  /*GAMMA p5 2.5/2.0*/
	0x00d7, 0x2003,
	0x00d8, 0x2003,
	0x00d9, 0x2003,
	0x00da, 0x2003,
	0x00db, 0x2003,
	0x00dc, 0x2003,
	0x00dd, 0x2003,
	0x00de, 0x2003,
	0x00df, 0x2003,
	0x00e0, 0x2003,
	0x00e1, 0x2003,
	0x00e2, 0x2003,
	0x00e3, 0x2003,
	0x00e4, 0x2003,
	0x00e5, 0x2003,
	0x00e6, 0x2003,
	0x00e7, 0x2003,
	0x00e8, 0x2100,
	0x00e9, 0xa40c,
	0x00ea, 0xa40c,
	0x00eb, 0x1c26,
	0x00ec, 0x1652,
	0x00ed, 0xFF00,
	0x00d5, 0x0001,	/*gamma apply*/
	0x0028, 0x0000,	/*Register Mask*/
	/*end*/
	END_SEQ, 0x0000
};

static unsigned short tune_standard_video_cabc_boe[] = {
	/*start P2 standard, videoeo, cabcon*/
	0x0001, 0x0070,	/* LABC SCR CABC*/
	0x002c, 0x0fff,	/*DNR bypass 0x003C*/
	0x002d, 0x1900,	/*DNR bypass 0x0a08*/
	0x002e, 0x0000,	/*DNR bypass 0x1010*/
	0x002f, 0x0fff,	/*DNR bypass 0x0400*/
	0x003A, 0x000d,	/*HDTR (DE off)(CS only 9)*/
	0x003B, 0x0030,	/*DE SHARPNESS*/
	0x003C, 0x0000,	/*NOISE LEVEL*/
	0x003F, 0x00a0,	/*CS GAIN*/
	0x0042, 0x0020,	/*DE TH (MAX DIFF)*/
	0x0072, 0x0000,	/*CABC Dgain*/
	0x0073, 0x0000,
	0x0074, 0x0000,
	0x0075, 0x0000,
	0x007C, 0x0002,	/*Dynamic LCD*/
	/*0x00b4, 0x5640,	CABC PWM*/
	/*0x00b4, 0x4640,	count PWM*/
	0x00c8, 0x0000,	/*kb R	SCR*/
	0x00c9, 0x0000,	/*gc R*/
	0x00ca, 0xffff,	/*rm R*/
	0x00cb, 0xfffa,	/*yw R*/
	0x00cc, 0x0000,	/*kb G*/
	0x00cd, 0xffff,	/*gc G*/
	0x00ce, 0x0000,	/*rm G*/
	0x00cf, 0xfffa,	/*yw G*/
	0x00d0, 0x00ff,	/*kb B*/
	0x00d1, 0x00ff,	/*gc B*/
	0x00d2, 0x00ff,	/*rm B*/
	0x00d3, 0x00ff,	/*yw B*/
	0x00d6, 0x2600,	/*GAMMA p5 2.5/2.0*/
	0x00d7, 0x2600,
	0x00d8, 0x2600,
	0x00d9, 0x2401,
	0x00da, 0x2401,
	0x00db, 0x2401,
	0x00dc, 0x2401,
	0x00dd, 0x2401,
	0x00de, 0x2401,
	0x00df, 0x2401,
	0x00e0, 0x2401,
	0x00e1, 0x2401,
	0x00e2, 0x2401,
	0x00e3, 0x2401,
	0x00e4, 0x2401,
	0x00e5, 0x2401,
	0x00e6, 0x2401,
	0x00e7, 0x2401,
	0x00e8, 0x2401,
	0x00e9, 0x2401,
	0x00ea, 0x2016,
	0x00eb, 0x1654,
	0x00ec, 0x1179,
	0x00ed, 0xFF00,
	0x00d5, 0x0001,	/*gamma apply*/
	0x0028, 0x0000,	/*Register Mask*/
	/*end*/
	END_SEQ, 0x0000
};

static unsigned short tune_standard_vt_cabc_boe[] = {
	/*start P2 standard, vt, cabcon*/
	0x0001, 0x0070,	/* LABC SCR CABC*/
	0x002c, 0x0fff,	/*DNR VTcall,dir_th   0x003c*/
	0x002d, 0x19ff,	/*DNR dir_num,decont7 0x0a08*/
	0x002e, 0xff16,	/*DNR decont5,mask_th 0x1010*/
	0x002f, 0x0000,	/*DNR block_th        0x0400*/
	0x003A, 0x000d,	/*HDTR (DE off)(CS only 9)*/
	0x003B, 0x03ff,	/*DE SHARPNESS*/
	0x003C, 0x0000,	/*NOISE LEVEL*/
	0x003F, 0x00a0,	/*CS GAIN*/
	0x0042, 0x0000,	/*DE TH (MAX DIFF)*/
	0x0072, 0x0000,	/*CABC Dgain*/
	0x0073, 0x0000,
	0x0074, 0x0000,
	0x0075, 0x0000,
	0x007C, 0x0002,	/*Dynamic LCD*/
	/*0x00b4, 0x5640,	CABC PWM*/
	/*0x00b4, 0x4640,	count PWM*/
	0x00c8, 0x0000,	/*kb R	SCR*/
	0x00c9, 0x0000,	/*gc R*/
	0x00ca, 0xffff,	/*rm R*/
	0x00cb, 0xfffa,	/*yw R*/
	0x00cc, 0x0000,	/*kb G*/
	0x00cd, 0xffff,	/*gc G*/
	0x00ce, 0x0000,	/*rm G*/
	0x00cf, 0xfffa,	/*yw G*/
	0x00d0, 0x00ff,	/*kb B*/
	0x00d1, 0x00ff,	/*gc B*/
	0x00d2, 0x00ff,	/*rm B*/
	0x00d3, 0x00ff,	/*yw B*/
	0x00d6, 0x3f00,	/*GAMMA p5 2.5/2.0*/
	0x00d7, 0x2003,
	0x00d8, 0x2003,
	0x00d9, 0x2003,
	0x00da, 0x2003,
	0x00db, 0x2003,
	0x00dc, 0x2003,
	0x00dd, 0x2003,
	0x00de, 0x2003,
	0x00df, 0x2003,
	0x00e0, 0x2003,
	0x00e1, 0x2003,
	0x00e2, 0x2003,
	0x00e3, 0x2003,
	0x00e4, 0x2003,
	0x00e5, 0x2003,
	0x00e6, 0x2003,
	0x00e7, 0x2003,
	0x00e8, 0x2100,
	0x00e9, 0xa40c,
	0x00ea, 0xa40c,
	0x00eb, 0x1c26,
	0x00ec, 0x1652,
	0x00ed, 0xFF00,
	0x00d5, 0x0001,	/*gamma apply*/
	0x0028, 0x0000,	/*Register Mask*/
	/*end*/
	END_SEQ, 0x0000
};

static unsigned short tune_camera_boe[] = {
	/*start P2 camera, bypass*/
	0x0001, 0x0020,
	0x002c, 0x0fff,	/*DNR bypass 0x003C*/
	0x002d, 0x1900,	/*DNR bypass 0x0a08*/
	0x002e, 0x0000,	/*DNR bypass 0x1010*/
	0x002f, 0x0fff,	/*DNR bypass 0x0400*/
	0x003A, 0x0009,	/*HDTR (DE off)(CS only 9)*/
	0x003B, 0x0000,	/*DE SHARPNESS*/
	0x003C, 0x0000,	/*NOISE LEVEL*/
	0x003F, 0x0000,	/*CS GAIN*/
	0x0042, 0x003f,	/*DE TH (MAX DIFF)*/
	/*0x00b4, 0x4640,	count PWM*/
	0x00d6, 0x2000,	/*gamma ori*/
	0x00d7, 0x2000,
	0x00d8, 0x2000,
	0x00d9, 0x2000,
	0x00da, 0x2000,
	0x00db, 0x2000,
	0x00dc, 0x2000,
	0x00dd, 0x2000,
	0x00de, 0x2000,
	0x00df, 0x2000,
	0x00e0, 0x2000,
	0x00e1, 0x2000,
	0x00e2, 0x2000,
	0x00e3, 0x2000,
	0x00e4, 0x2000,
	0x00e5, 0x2000,
	0x00e6, 0x2000,
	0x00e7, 0x2000,
	0x00e8, 0x2000,
	0x00e9, 0x2000,
	0x00ea, 0x2000,
	0x00eb, 0x2000,
	0x00ec, 0x2000,
	0x00ed, 0xFF00,
	0x00d5, 0x0001,	/*gamma apply*/
	0x0028, 0x0000,	/*Register Mask*/
	/*end*/
	END_SEQ, 0x0000
};

struct mdnie_tuning_info tuning_table_boe[CABC_MAX][MODE_MAX][SCENARIO_MAX] = {
	{
		{
			{"dynamic_ui",		tune_dynamic_ui_boe},
			{"dynamic_video",	tune_dynamic_video_boe},
			{"dynamic_video",	tune_dynamic_video_boe},
			{"dynamic_video",	tune_dynamic_video_boe},
			{"camera",		NULL},
			{"dynamic_ui",		tune_dynamic_ui_boe},
			{"dynamic_gallery",	tune_dynamic_gallery_boe},
			{"dynamic_vt",		tune_dynamic_vt_boe}
		}, {
			{"standard_ui",		tune_standard_ui_boe},
			{"standard_video",	tune_standard_video_boe},
			{"standard_video",	tune_standard_video_boe},
			{"standard_video",	tune_standard_video_boe},
			{"camera",		NULL},
			{"standard_ui",		tune_standard_ui_boe},
			{"standard_gallery",	tune_standard_gallery_boe},
			{"standard_vt",		tune_standard_vt_boe}
		}, {
			{"movie_ui",		tune_movie_ui_boe},
			{"movie_video",		tune_movie_video_boe},
			{"movie_video",		tune_movie_video_boe},
			{"movie_video",		tune_movie_video_boe},
			{"camera",		NULL},
			{"movie_ui",		tune_movie_ui_boe},
			{"movie_gallery",	tune_movie_gallery_boe},
			{"movie_vt",		tune_movie_vt_boe}
		}
	}, {
		{
			{"dynamic_ui_cabc",		tune_dynamic_ui_cabc_boe},
			{"dynamic_video_cabc",		tune_dynamic_video_cabc_boe},
			{"dynamic_video_cabc",		tune_dynamic_video_cabc_boe},
			{"dynamic_video_cabc",		tune_dynamic_video_cabc_boe},
			{"camera",			NULL},
			{"dynamic_ui_cabc",		tune_dynamic_ui_cabc_boe},
			{"dynamic_gallery_cabc",	tune_dynamic_gallery_cabc_boe},
			{"dynamic_vt_cabc",		tune_dynamic_vt_cabc_boe}
		}, {
			{"standard_ui_cabc",		tune_standard_ui_cabc_boe},
			{"standard_video_cabc",		tune_standard_video_cabc_boe},
			{"standard_video_cabc",		tune_standard_video_cabc_boe},
			{"standard_video_cabc",		tune_standard_video_cabc_boe},
			{"camera",			NULL},
			{"standard_ui_cabc",		tune_standard_ui_cabc_boe},
			{"standard_gallery_cabc",	tune_standard_gallery_cabc_boe},
			{"standard_vt_cabc",		tune_standard_vt_cabc_boe}
		}, {
			{"movie_ui_cabc",		tune_movie_ui_cabc_boe},
			{"movie_video_cabc",		tune_movie_video_cabc_boe},
			{"movie_video_cabc",		tune_movie_video_cabc_boe},
			{"movie_video_cabc",		tune_movie_video_cabc_boe},
			{"camera",			NULL},
			{"movie_ui_cabc",		tune_movie_ui_cabc_boe},
			{"movie_gallery_cabc",		tune_movie_gallery_cabc_boe},
			{"movie_vt_cabc",		tune_movie_vt_cabc_boe}
		}
	},
};

struct mdnie_tuning_info camera_table_boe[LUX_MAX][MODE_MAX] = {
	{
		{"camera",		tune_camera_boe},
		{"camera",		tune_camera_boe},
		{"camera",		tune_camera_boe}
	}, {
		{"camera",		tune_camera_boe},
		{"camera",		tune_camera_boe},
		{"camera",		tune_camera_boe}
	}, {
		{"camera",		tune_camera_boe},
		{"camera",		tune_camera_boe},
		{"camera",		tune_camera_boe}
	}, {
		{"camera",		tune_camera_boe},
		{"camera",		tune_camera_boe},
		{"camera",		tune_camera_boe}
	}
};

#endif /* __MDNIE_TABLE_P2_BOE_H__ */
