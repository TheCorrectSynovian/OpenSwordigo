/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 004240a4
 * Function: Caver::Proto::WalkingMonsterControllerComponent::WalkingMonsterControllerComponent
 * Signature: undefined __thiscall WalkingMonsterControllerComponent(WalkingMonsterControllerComponent * this, WalkingMonsterControllerComponent * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::WalkingMonsterControllerComponent::WalkingMonsterControllerComponent(Caver::Proto::WalkingMonsterControllerComponent
   const&) */

void __thiscall
Caver::Proto::WalkingMonsterControllerComponent::WalkingMonsterControllerComponent
          (WalkingMonsterControllerComponent *this,WalkingMonsterControllerComponent *param_1)

{
  undefined *puVar1;
  
  puVar1 = PTR_vtable_007e63f8;
  *(undefined4 *)(this + 0x10) = 0;
  *(undefined **)this = puVar1 + 0x10;
  *(undefined8 *)(this + 8) = 0;
  MergeFrom(this,param_1);
                    /* catch() { ... } // from try @ 00424084 with catch @ 004240d0 */
  return;
}


