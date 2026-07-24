/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005d228c
 * Function: Caver::BytesPerPixelForPixelFormat
 * Signature: undefined __cdecl BytesPerPixelForPixelFormat(PixelFormat param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::BytesPerPixelForPixelFormat(Caver::PixelFormat) */

undefined4 Caver::BytesPerPixelForPixelFormat(int param_1)

{
  if (param_1 - 1U < 8) {
    return *(undefined4 *)(&DAT_00698170 + (long)(int)(param_1 - 1U) * 4);
  }
  return 0;
}


