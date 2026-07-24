/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00428f38
 * Function: Caver::Proto::MonsterDeathControllerComponent::~MonsterDeathControllerComponent
 * Signature: undefined __thiscall ~MonsterDeathControllerComponent(MonsterDeathControllerComponent * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::MonsterDeathControllerComponent::~MonsterDeathControllerComponent() */

void __thiscall
Caver::Proto::MonsterDeathControllerComponent::~MonsterDeathControllerComponent
          (MonsterDeathControllerComponent *this)

{
                    /* try { // try from 00428f54 to 00528f83 has its CatchHandler @ 00428f54
                       catch() { ... } // from try @ 00428f54 with catch @ 00428f54
                       catch() { ... } // from try @ 004292d0 with catch @ 00428f54 */
  *(undefined **)this = PTR_vtable_007e4ca0 + 0x10;
  google::protobuf::MessageLite::~MessageLite((MessageLite *)this);
  operator_delete(this);
  return;
}


