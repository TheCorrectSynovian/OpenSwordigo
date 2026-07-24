/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0057e2f0
 * Function: Caver::SizeOfDataType
 * Signature: undefined __cdecl SizeOfDataType(DataType param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::SizeOfDataType(Caver::DataType) */

undefined4 Caver::SizeOfDataType(int param_1)

{
  if (param_1 - 0x1400U < 7) {
    return *(undefined4 *)(&DAT_006965f0 + (long)(int)(param_1 - 0x1400U) * 4);
  }
  return 0;
}


