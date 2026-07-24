/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 004272a0
 * Function: Caver::Proto::StaticMonsterControllerComponent::StaticMonsterControllerComponent
 * Signature: undefined __thiscall StaticMonsterControllerComponent(StaticMonsterControllerComponent * this, StaticMonsterControllerComponent * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::StaticMonsterControllerComponent::StaticMonsterControllerComponent(Caver::Proto::StaticMonsterControllerComponent
   const&) */

void __thiscall
Caver::Proto::StaticMonsterControllerComponent::StaticMonsterControllerComponent
          (StaticMonsterControllerComponent *this,StaticMonsterControllerComponent *param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  uVar2 = DAT_0068b470;
  puVar1 = PTR_vtable_007e4848 + 0x10;
  *(undefined8 *)(this + 8) = 0;
  *(StaticMonsterControllerComponent **)(this + 0x10) = this + 0x20;
                    /* try { // try from 004272cc to 005272df has its CatchHandler @ 00427b08 */
  *(undefined **)this = puVar1;
  *(undefined8 *)(this + 0x18) = uVar2;
  *(undefined4 *)(this + 0x30) = 0;
  MergeFrom(this,param_1);
  return;
}


