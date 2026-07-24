/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00412d78
 * Function: Caver::Proto::CharControllerComponent::~CharControllerComponent
 * Signature: undefined __thiscall ~CharControllerComponent(CharControllerComponent * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::CharControllerComponent::~CharControllerComponent() */

void __thiscall
Caver::Proto::CharControllerComponent::~CharControllerComponent(CharControllerComponent *this)

{
  CharControllerComponent *pCVar1;
  
  pCVar1 = *(CharControllerComponent **)(this + 0x48);
  *(undefined **)this = PTR_vtable_007e6f20 + 0x10;
  if ((pCVar1 != this + 0x58) && (pCVar1 != (CharControllerComponent *)0x0)) {
    operator_delete__(pCVar1);
  }
  google::protobuf::MessageLite::~MessageLite((MessageLite *)this);
  operator_delete(this);
  return;
}


