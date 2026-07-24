/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005d0c34
 * Function: Caver::CopyFromFileBuffer32
 * Signature: undefined __cdecl CopyFromFileBuffer32(uchar * param_1, uchar * param_2, int param_3)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::CopyFromFileBuffer32(unsigned char*, unsigned char const*, int) */

void Caver::CopyFromFileBuffer32(uchar *param_1,uchar *param_2,int param_3)

{
  if (0 < param_3) {
    do {
      param_3 = param_3 + -1;
      *(undefined4 *)param_1 = *(undefined4 *)param_2;
      param_1 = param_1 + 4;
      param_2 = param_2 + 4;
    } while (param_3 != 0);
  }
  return;
}


