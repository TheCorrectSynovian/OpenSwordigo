/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003cee3c
 * Function: Caver::Proto::Rectangle::Clear
 * Signature: undefined __thiscall Clear(Rectangle * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::Rectangle::Clear() */

void __thiscall Caver::Proto::Rectangle::Clear(Rectangle *this)

{
  if (this[0x1c] != (Rectangle)0x0) {
    *(undefined8 *)(this + 0x14) = 0;
    *(undefined8 *)(this + 0xc) = 0;
  }
  *(undefined4 *)(this + 0x1c) = 0;
  return;
}


