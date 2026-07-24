/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003ce304
 * Function: Caver::Proto::Vector2::Clear
 * Signature: undefined __thiscall Clear(Vector2 * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::Vector2::Clear() */

void __thiscall Caver::Proto::Vector2::Clear(Vector2 *this)

{
  if (this[0x14] != (Vector2)0x0) {
    *(undefined4 *)(this + 0xc) = 0;
    *(undefined4 *)(this + 0x10) = 0;
  }
  *(undefined4 *)(this + 0x14) = 0;
  return;
}


