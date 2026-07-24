/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003d62f4
 * Function: Caver::Proto::GUIMargins::Clear
 * Signature: undefined __thiscall Clear(GUIMargins * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::GUIMargins::Clear() */

void __thiscall Caver::Proto::GUIMargins::Clear(GUIMargins *this)

{
  if (this[0x1c] != (GUIMargins)0x0) {
    *(undefined8 *)(this + 0x14) = 0;
    *(undefined8 *)(this + 0xc) = 0;
  }
  *(undefined4 *)(this + 0x1c) = 0;
  return;
}


