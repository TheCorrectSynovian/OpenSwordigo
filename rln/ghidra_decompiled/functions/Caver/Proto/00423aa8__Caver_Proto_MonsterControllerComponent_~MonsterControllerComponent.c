/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00423aa8
 * Function: Caver::Proto::MonsterControllerComponent::~MonsterControllerComponent
 * Signature: undefined __thiscall ~MonsterControllerComponent(MonsterControllerComponent * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::MonsterControllerComponent::~MonsterControllerComponent() */

void __thiscall
Caver::Proto::MonsterControllerComponent::~MonsterControllerComponent
          (MonsterControllerComponent *this)

{
                    /* try { // try from 00423ab4 to 00523ab7 has its CatchHandler @ 00423c6c */
  *(undefined **)this = PTR_vtable_007e65d8 + 0x10;
                    /* try { // try from 00423ab8 to 00523c97 has its CatchHandler @ 004239b4 */
  google::protobuf::MessageLite::~MessageLite((MessageLite *)this);
  return;
}


