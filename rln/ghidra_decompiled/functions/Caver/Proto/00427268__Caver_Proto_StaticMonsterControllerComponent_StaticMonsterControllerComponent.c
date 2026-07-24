/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00427268
 * Function: Caver::Proto::StaticMonsterControllerComponent::StaticMonsterControllerComponent
 * Signature: undefined __thiscall StaticMonsterControllerComponent(StaticMonsterControllerComponent * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::StaticMonsterControllerComponent::StaticMonsterControllerComponent() */

void __thiscall
Caver::Proto::StaticMonsterControllerComponent::StaticMonsterControllerComponent
          (StaticMonsterControllerComponent *this)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  uVar2 = DAT_0068b470;
                    /* try { // try from 00427270 to 005272ab has its CatchHandler @ 00427b0c */
  puVar1 = PTR_vtable_007e4848 + 0x10;
  *(undefined8 *)(this + 8) = 0;
  *(StaticMonsterControllerComponent **)(this + 0x10) = this + 0x20;
  *(undefined **)this = puVar1;
  *(undefined8 *)(this + 0x18) = uVar2;
  *(undefined4 *)(this + 0x30) = 0;
  return;
}


