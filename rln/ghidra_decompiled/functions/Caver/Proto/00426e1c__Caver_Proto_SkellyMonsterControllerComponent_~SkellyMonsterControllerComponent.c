/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00426e1c
 * Function: Caver::Proto::SkellyMonsterControllerComponent::~SkellyMonsterControllerComponent
 * Signature: undefined __thiscall ~SkellyMonsterControllerComponent(SkellyMonsterControllerComponent * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::SkellyMonsterControllerComponent::~SkellyMonsterControllerComponent() */

void __thiscall
Caver::Proto::SkellyMonsterControllerComponent::~SkellyMonsterControllerComponent
          (SkellyMonsterControllerComponent *this)

{
                    /* try { // try from 00426e1c to 00526e7b has its CatchHandler @ 00426d64 */
  *(undefined **)this = PTR_vtable_007e4c78 + 0x10;
  google::protobuf::MessageLite::~MessageLite((MessageLite *)this);
  operator_delete(this);
  return;
}


