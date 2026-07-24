/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 004241d8
 * Function: Caver::Proto::WalkingMonsterControllerComponent::~WalkingMonsterControllerComponent
 * Signature: undefined __thiscall ~WalkingMonsterControllerComponent(WalkingMonsterControllerComponent * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::WalkingMonsterControllerComponent::~WalkingMonsterControllerComponent() */

void __thiscall
Caver::Proto::WalkingMonsterControllerComponent::~WalkingMonsterControllerComponent
          (WalkingMonsterControllerComponent *this)

{
                    /* try { // try from 004241dc to 0052422f has its CatchHandler @ 004240e4 */
  *(undefined **)this = PTR_vtable_007e63f8 + 0x10;
  google::protobuf::MessageLite::~MessageLite((MessageLite *)this);
  operator_delete(this);
  return;
}


