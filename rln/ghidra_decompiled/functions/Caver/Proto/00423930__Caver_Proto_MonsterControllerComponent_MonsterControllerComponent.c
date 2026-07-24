/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00423930
 * Function: Caver::Proto::MonsterControllerComponent::MonsterControllerComponent
 * Signature: undefined __thiscall MonsterControllerComponent(MonsterControllerComponent * this, MonsterControllerComponent * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::MonsterControllerComponent::MonsterControllerComponent(Caver::Proto::MonsterControllerComponent
   const&) */

void __thiscall
Caver::Proto::MonsterControllerComponent::MonsterControllerComponent
          (MonsterControllerComponent *this,MonsterControllerComponent *param_1)

{
  undefined *puVar1;
  
  puVar1 = PTR_vtable_007e65d8;
                    /* catch() { ... } // from try @ 004238e8 with catch @ 00423944 */
                    /* catch() { ... } // from try @ 004238bc with catch @ 00423948 */
  *(undefined8 *)(this + 0x10) = 0;
  *(undefined8 *)(this + 0x18) = 0;
  *(undefined **)this = puVar1 + 0x10;
  *(undefined8 *)(this + 8) = 0;
  MergeFrom(this,param_1);
  return;
}


