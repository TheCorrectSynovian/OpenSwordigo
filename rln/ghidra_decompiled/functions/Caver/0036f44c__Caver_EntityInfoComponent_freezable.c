/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0036f44c
 * Function: Caver::EntityInfoComponent::freezable
 * Signature: undefined __thiscall freezable(EntityInfoComponent * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::EntityInfoComponent::freezable() const */

bool __thiscall Caver::EntityInfoComponent::freezable(EntityInfoComponent *this)

{
  if (*(long *)(this + 0x80) != 0) {
    return *(char *)(*(long *)(this + 0x80) + 0x11) != '\0';
  }
  return true;
}


