/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00363c3c
 * Function: Caver::CollectableItemComponent::~CollectableItemComponent
 * Signature: undefined __thiscall ~CollectableItemComponent(CollectableItemComponent * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::CollectableItemComponent::~CollectableItemComponent() */

void __thiscall
Caver::CollectableItemComponent::~CollectableItemComponent(CollectableItemComponent *this)

{
  ~CollectableItemComponent(this);
  operator_delete(this);
  return;
}


