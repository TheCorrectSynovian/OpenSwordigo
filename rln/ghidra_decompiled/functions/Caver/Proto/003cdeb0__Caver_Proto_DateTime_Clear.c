/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003cdeb0
 * Function: Caver::Proto::DateTime::Clear
 * Signature: undefined __thiscall Clear(DateTime * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::DateTime::Clear() */

void __thiscall Caver::Proto::DateTime::Clear(DateTime *this)

{
  if (this[0x18] != (DateTime)0x0) {
    *(undefined8 *)(this + 0x10) = 0;
  }
  *(undefined4 *)(this + 0x18) = 0;
  return;
}


