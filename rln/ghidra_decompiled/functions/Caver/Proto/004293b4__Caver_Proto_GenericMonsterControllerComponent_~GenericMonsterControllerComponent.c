/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 004293b4
 * Function: Caver::Proto::GenericMonsterControllerComponent::~GenericMonsterControllerComponent
 * Signature: undefined __thiscall ~GenericMonsterControllerComponent(GenericMonsterControllerComponent * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::GenericMonsterControllerComponent::~GenericMonsterControllerComponent() */

void __thiscall
Caver::Proto::GenericMonsterControllerComponent::~GenericMonsterControllerComponent
          (GenericMonsterControllerComponent *this)

{
  *(undefined **)this = PTR_vtable_007e47a8 + 0x10;
  google::protobuf::MessageLite::~MessageLite((MessageLite *)this);
  operator_delete(this);
  return;
}


