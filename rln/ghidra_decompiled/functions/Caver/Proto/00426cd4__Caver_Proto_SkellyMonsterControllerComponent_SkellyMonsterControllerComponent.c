/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00426cd4
 * Function: Caver::Proto::SkellyMonsterControllerComponent::SkellyMonsterControllerComponent
 * Signature: undefined __thiscall SkellyMonsterControllerComponent(SkellyMonsterControllerComponent * this, SkellyMonsterControllerComponent * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::SkellyMonsterControllerComponent::SkellyMonsterControllerComponent(Caver::Proto::SkellyMonsterControllerComponent
   const&) */

void __thiscall
Caver::Proto::SkellyMonsterControllerComponent::SkellyMonsterControllerComponent
          (SkellyMonsterControllerComponent *this,SkellyMonsterControllerComponent *param_1)

{
  undefined *puVar1;
  
  puVar1 = PTR_vtable_007e4c78;
  *(undefined8 *)(this + 8) = 0;
  *(undefined8 *)(this + 0x10) = 0;
  *(undefined **)this = puVar1 + 0x10;
  MergeFrom(this,param_1);
  return;
}


