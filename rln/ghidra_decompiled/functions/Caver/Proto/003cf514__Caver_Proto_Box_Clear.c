/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003cf514
 * Function: Caver::Proto::Box::Clear
 * Signature: undefined __thiscall Clear(Box * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::Box::Clear() */

void __thiscall Caver::Proto::Box::Clear(Box *this)

{
  if (this[0x24] != (Box)0x0) {
    *(undefined8 *)(this + 0x14) = 0;
    *(undefined8 *)(this + 0xc) = 0;
    *(undefined8 *)(this + 0x1c) = 0;
  }
  *(undefined4 *)(this + 0x24) = 0;
  return;
}


