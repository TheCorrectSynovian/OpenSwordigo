/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005d1020
 * Function: Caver::AudioBuffer::ALFormatForBufferFormat
 * Signature: undefined __cdecl ALFormatForBufferFormat(BufferFormat param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::AudioBuffer::ALFormatForBufferFormat(Caver::AudioBuffer::BufferFormat) */

int Caver::AudioBuffer::ALFormatForBufferFormat(int param_1)

{
  if (param_1 - 1U < 4) {
    return param_1 + 0x10ff;
  }
  return 0;
}


