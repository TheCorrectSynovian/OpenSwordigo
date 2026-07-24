/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005d1040
 * Function: Caver::AudioBuffer::BufferFormatForALFormat
 * Signature: undefined __cdecl BufferFormatForALFormat(int param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::AudioBuffer::BufferFormatForALFormat(int) */

int Caver::AudioBuffer::BufferFormatForALFormat(int param_1)

{
  if ((uint)param_1 >> 2 == 0x440) {
    return param_1 + -0x10ff;
  }
  return 0;
}


