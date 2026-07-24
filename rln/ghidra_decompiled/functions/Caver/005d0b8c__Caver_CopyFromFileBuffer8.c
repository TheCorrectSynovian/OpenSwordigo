/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005d0b8c
 * Function: Caver::CopyFromFileBuffer8
 * Signature: undefined __cdecl CopyFromFileBuffer8(uchar * param_1, uchar * param_2, int param_3)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::CopyFromFileBuffer8(unsigned char*, unsigned char const*, int) */

void Caver::CopyFromFileBuffer8(uchar *param_1,uchar *param_2,int param_3)

{
  memcpy(param_1,param_2,(long)param_3);
  return;
}


