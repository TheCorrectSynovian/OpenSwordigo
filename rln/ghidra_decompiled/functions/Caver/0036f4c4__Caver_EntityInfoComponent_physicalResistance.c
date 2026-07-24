/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0036f4c4
 * Function: Caver::EntityInfoComponent::physicalResistance
 * Signature: undefined __thiscall physicalResistance(EntityInfoComponent * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::EntityInfoComponent::physicalResistance() const */

undefined4 __thiscall Caver::EntityInfoComponent::physicalResistance(EntityInfoComponent *this)

{
  if (*(long *)(this + 0x80) != 0) {
    return *(undefined4 *)(*(long *)(this + 0x80) + 0x18);
  }
  return 0;
}


