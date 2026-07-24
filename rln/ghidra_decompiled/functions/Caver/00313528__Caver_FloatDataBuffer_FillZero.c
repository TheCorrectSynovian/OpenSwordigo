/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00313528
 * Function: Caver::FloatDataBuffer::FillZero
 * Signature: undefined __thiscall FillZero(FloatDataBuffer * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::FloatDataBuffer::FillZero() */

void __thiscall Caver::FloatDataBuffer::FillZero(FloatDataBuffer *this)

{
  memset(*(void **)(this + 8),0,(ulong)*(uint *)this << 2);
  return;
}


