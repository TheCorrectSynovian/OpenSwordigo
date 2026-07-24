/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00404bec
 * Function: Caver::Proto::BlendAnimationComponent::~BlendAnimationComponent
 * Signature: undefined __thiscall ~BlendAnimationComponent(BlendAnimationComponent * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::BlendAnimationComponent::~BlendAnimationComponent() */

void __thiscall
Caver::Proto::BlendAnimationComponent::~BlendAnimationComponent(BlendAnimationComponent *this)

{
  *(undefined **)this = PTR_vtable_007e7198 + 0x10;
  google::protobuf::MessageLite::~MessageLite((MessageLite *)this);
  operator_delete(this);
  return;
}


