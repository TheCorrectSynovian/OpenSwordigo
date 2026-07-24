/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0037845c
 * Function: Caver::ItemDropComponent::Trigger
 * Signature: undefined __thiscall Trigger(ItemDropComponent * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::ItemDropComponent::Trigger() */

void __thiscall Caver::ItemDropComponent::Trigger(ItemDropComponent *this)

{
  CreateItemObjects(this);
  if (*(long *)(this + 0xa0) == *(long *)(this + 0x98)) {
    return;
  }
  DropItemObjects(this,(vector *)(this + 0x98));
  return;
}


