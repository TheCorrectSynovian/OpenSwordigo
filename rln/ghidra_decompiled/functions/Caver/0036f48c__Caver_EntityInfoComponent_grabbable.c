/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0036f48c
 * Function: Caver::EntityInfoComponent::grabbable
 * Signature: undefined __thiscall grabbable(EntityInfoComponent * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::EntityInfoComponent::grabbable() const */

bool __thiscall Caver::EntityInfoComponent::grabbable(EntityInfoComponent *this)

{
  if (*(long *)(this + 0x80) != 0) {
    return *(char *)(*(long *)(this + 0x80) + 0x13) != '\0';
  }
  return true;
}


