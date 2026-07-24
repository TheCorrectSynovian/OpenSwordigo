/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005d0b54
 * Function: Caver::CopyToFileBuffer32
 * Signature: undefined __cdecl CopyToFileBuffer32(uchar * param_1, uchar * param_2, int param_3)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::CopyToFileBuffer32(unsigned char*, unsigned char const*, int) */

void Caver::CopyToFileBuffer32(uchar *param_1,uchar *param_2,int param_3)

{
  undefined4 uVar1;
  
  if (0 < param_3) {
    do {
      uVar1 = *(undefined4 *)param_2;
      param_3 = param_3 + -1;
      *param_1 = (uchar)uVar1;
      param_1[1] = (uchar)((uint)uVar1 >> 8);
                    /* try { // try from 005d0b78 to 006d0b9f has its CatchHandler @ 005d2c28 */
      param_1[2] = (uchar)((uint)uVar1 >> 0x10);
      param_1[3] = (uchar)((uint)uVar1 >> 0x18);
      param_1 = param_1 + 4;
      param_2 = param_2 + 4;
    } while (param_3 != 0);
  }
  return;
}


