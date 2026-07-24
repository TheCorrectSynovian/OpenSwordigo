/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0042b530
 * Function: Caver::Proto::SwingComponent::~SwingComponent
 * Signature: undefined __thiscall ~SwingComponent(SwingComponent * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::SwingComponent::~SwingComponent() */

void __thiscall Caver::Proto::SwingComponent::~SwingComponent(SwingComponent *this)

{
  *(undefined **)this = PTR_vtable_007e62a8 + 0x10;
  google::protobuf::MessageLite::~MessageLite((MessageLite *)this);
  operator_delete(this);
  return;
}


