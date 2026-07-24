/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0036f46c
 * Function: Caver::EntityInfoComponent::stunnable
 * Signature: undefined __thiscall stunnable(EntityInfoComponent * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::EntityInfoComponent::stunnable() const */

bool __thiscall Caver::EntityInfoComponent::stunnable(EntityInfoComponent *this)

{
  if (*(long *)(this + 0x80) != 0) {
    return *(char *)(*(long *)(this + 0x80) + 0x12) != '\0';
  }
  return true;
}


