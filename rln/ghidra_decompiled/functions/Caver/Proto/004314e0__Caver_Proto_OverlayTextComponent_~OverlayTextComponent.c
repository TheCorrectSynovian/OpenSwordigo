/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 004314e0
 * Function: Caver::Proto::OverlayTextComponent::~OverlayTextComponent
 * Signature: undefined __thiscall ~OverlayTextComponent(OverlayTextComponent * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::OverlayTextComponent::~OverlayTextComponent() */

void __thiscall
Caver::Proto::OverlayTextComponent::~OverlayTextComponent(OverlayTextComponent *this)

{
  *(undefined **)this = PTR_vtable_007e7bd8 + 0x10;
  SharedDtor(this);
  google::protobuf::MessageLite::~MessageLite((MessageLite *)this);
  operator_delete(this);
  return;
}


