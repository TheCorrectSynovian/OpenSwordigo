/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0042748c
 * Function: Caver::Proto::StaticMonsterControllerComponent::~StaticMonsterControllerComponent
 * Signature: undefined __thiscall ~StaticMonsterControllerComponent(StaticMonsterControllerComponent * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::StaticMonsterControllerComponent::~StaticMonsterControllerComponent() */

void __thiscall
Caver::Proto::StaticMonsterControllerComponent::~StaticMonsterControllerComponent
          (StaticMonsterControllerComponent *this)

{
  StaticMonsterControllerComponent *pSVar1;
  
  pSVar1 = *(StaticMonsterControllerComponent **)(this + 0x10);
                    /* try { // try from 004274b4 to 00527e3f has its CatchHandler @ 00426f20 */
  *(undefined **)this = PTR_vtable_007e4848 + 0x10;
  if ((pSVar1 != this + 0x20) && (pSVar1 != (StaticMonsterControllerComponent *)0x0)) {
    operator_delete__(pSVar1);
  }
  google::protobuf::MessageLite::~MessageLite((MessageLite *)this);
  return;
}


