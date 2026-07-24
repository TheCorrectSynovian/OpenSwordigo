/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003faa68
 * Function: Caver::Proto::CollectableItemComponent::InitAsDefaultInstance
 * Signature: undefined __thiscall InitAsDefaultInstance(CollectableItemComponent * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::CollectableItemComponent::InitAsDefaultInstance() */

void __thiscall
Caver::Proto::CollectableItemComponent::InitAsDefaultInstance(CollectableItemComponent *this)

{
  undefined8 uVar1;
  
  uVar1 = Program::default_instance();
  *(undefined8 *)(this + 0x30) = uVar1;
  return;
}


