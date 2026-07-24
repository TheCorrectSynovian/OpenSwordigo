/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00424ee4
 * Function: Caver::Proto::SnappingMonsterControllerComponent::~SnappingMonsterControllerComponent
 * Signature: undefined __thiscall ~SnappingMonsterControllerComponent(SnappingMonsterControllerComponent * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::SnappingMonsterControllerComponent::~SnappingMonsterControllerComponent() */

void __thiscall
Caver::Proto::SnappingMonsterControllerComponent::~SnappingMonsterControllerComponent
          (SnappingMonsterControllerComponent *this)

{
  *(undefined **)this = PTR_vtable_007e74f0 + 0x10;
  google::protobuf::MessageLite::~MessageLite((MessageLite *)this);
  return;
}


