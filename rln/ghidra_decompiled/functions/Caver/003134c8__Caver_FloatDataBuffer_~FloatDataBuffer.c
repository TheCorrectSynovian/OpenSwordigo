/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003134c8
 * Function: Caver::FloatDataBuffer::~FloatDataBuffer
 * Signature: undefined __thiscall ~FloatDataBuffer(FloatDataBuffer * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::FloatDataBuffer::~FloatDataBuffer() */

void __thiscall Caver::FloatDataBuffer::~FloatDataBuffer(FloatDataBuffer *this)

{
  if (*(void **)(this + 8) != (void *)0x0) {
    operator_delete__(*(void **)(this + 8));
    return;
  }
  return;
}


