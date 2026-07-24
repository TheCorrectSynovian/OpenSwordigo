/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005d0a94
 * Function: Caver::CopyToFileBuffer8
 * Signature: undefined __cdecl CopyToFileBuffer8(uchar * param_1, uchar * param_2, int param_3)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::CopyToFileBuffer8(unsigned char*, unsigned char const*, int) */

void Caver::CopyToFileBuffer8(uchar *param_1,uchar *param_2,int param_3)

{
  memcpy(param_1,param_2,(long)param_3);
  return;
}


