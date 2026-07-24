/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0042813c
 * Function: Caver::Proto::BatMonsterControllerComponent::BatMonsterControllerComponent
 * Signature: undefined __thiscall BatMonsterControllerComponent(BatMonsterControllerComponent * this, BatMonsterControllerComponent * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::BatMonsterControllerComponent::BatMonsterControllerComponent(Caver::Proto::BatMonsterControllerComponent
   const&) */

void __thiscall
Caver::Proto::BatMonsterControllerComponent::BatMonsterControllerComponent
          (BatMonsterControllerComponent *this,BatMonsterControllerComponent *param_1)

{
  undefined *puVar1;
  
  puVar1 = PTR_vtable_007e54c0;
  *(undefined8 *)(this + 8) = 0;
  *(undefined8 *)(this + 0x10) = 0;
  *(undefined **)this = puVar1 + 0x10;
  MergeFrom(this,param_1);
  return;
}


