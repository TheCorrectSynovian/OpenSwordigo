/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00618874
 * Function: PVRTTextureFormatGetBPP
 * Signature: undefined __cdecl PVRTTextureFormatGetBPP(uint param_1, uint param_2)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* PVRTTextureFormatGetBPP(unsigned int, unsigned int) */

undefined8 PVRTTextureFormatGetBPP(uint param_1,uint param_2)

{
  undefined8 uVar1;
  
  uVar1 = 2;
                    /* try { // try from 00618898 to 0071889f has its CatchHandler @ 00618bd4 */
  switch(param_1) {
  case 0x8c00:
  case 0x8c02:
    return 4;
  case 0x8c01:
  case 0x8c03:
    goto switchD_00618898_caseD_8c01;
  default:
    if (param_1 == 0x1401) {
      if (param_2 == 0x1908) {
        return 0x20;
      }
      if (param_2 == 0x80e1) {
        return 0x20;
      }
    }
    else {
                    /* try { // try from 006188c4 to 007188cb has its CatchHandler @ 00618b84 */
      if ((param_1 == 0x8034) && (param_2 == 0x1908)) {
        return 0x10;
      }
    }
                    /* try { // try from 006188ec to 00718913 has its CatchHandler @ 00618b2c */
    uVar1 = 0xffffffff;
switchD_00618898_caseD_8c01:
    return uVar1;
  }
}


