/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0042e26c
 * Function: Caver::Proto::CollectableItemComponent::~CollectableItemComponent
 * Signature: undefined __thiscall ~CollectableItemComponent(CollectableItemComponent * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::CollectableItemComponent::~CollectableItemComponent() */

void __thiscall
Caver::Proto::CollectableItemComponent::~CollectableItemComponent(CollectableItemComponent *this)

{
  *(undefined **)this = PTR_vtable_007e67c0 + 0x10;
  SharedDtor(this);
  google::protobuf::MessageLite::~MessageLite((MessageLite *)this);
  return;
}


