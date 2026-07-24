/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00424efc
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
                    /* try { // try from 00424efc to 00524f07 has its CatchHandler @ 00425450 */
  *(undefined **)this = PTR_vtable_007e74f0 + 0x10;
  google::protobuf::MessageLite::~MessageLite((MessageLite *)this);
                    /* try { // try from 00424f28 to 00524f63 has its CatchHandler @ 004253f4 */
  operator_delete(this);
  return;
}


