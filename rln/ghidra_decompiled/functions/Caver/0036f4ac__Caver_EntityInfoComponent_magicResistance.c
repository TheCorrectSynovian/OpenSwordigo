/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0036f4ac
 * Function: Caver::EntityInfoComponent::magicResistance
 * Signature: undefined __thiscall magicResistance(EntityInfoComponent * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::EntityInfoComponent::magicResistance() const */

undefined4 __thiscall Caver::EntityInfoComponent::magicResistance(EntityInfoComponent *this)

{
  if (*(long *)(this + 0x80) != 0) {
    return *(undefined4 *)(*(long *)(this + 0x80) + 0x14);
  }
  return 0;
}


