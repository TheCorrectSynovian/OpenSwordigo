/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003ce848
 * Function: Caver::Proto::Vector3::Clear
 * Signature: undefined __thiscall Clear(Vector3 * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::Vector3::Clear() */

void __thiscall Caver::Proto::Vector3::Clear(Vector3 *this)

{
  if (this[0x18] != (Vector3)0x0) {
    *(undefined4 *)(this + 0xc) = 0;
    *(undefined8 *)(this + 0x10) = 0;
  }
  *(undefined4 *)(this + 0x18) = 0;
  return;
}


