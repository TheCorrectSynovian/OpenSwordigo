/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00342128
 * Function: Caver::Component::ShouldPrepare
 * Signature: undefined __thiscall ShouldPrepare(Component * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Component::ShouldPrepare() const */

bool __thiscall Caver::Component::ShouldPrepare(Component *this)

{
  if (*(long *)(this + 0x28) != 0) {
    return *(long *)(*(long *)(this + 0x28) + 0x20) != 0;
  }
  return false;
}


