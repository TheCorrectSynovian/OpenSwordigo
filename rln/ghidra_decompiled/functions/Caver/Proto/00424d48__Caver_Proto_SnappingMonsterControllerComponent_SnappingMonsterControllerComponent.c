/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00424d48
 * Function: Caver::Proto::SnappingMonsterControllerComponent::SnappingMonsterControllerComponent
 * Signature: undefined __thiscall SnappingMonsterControllerComponent(SnappingMonsterControllerComponent * this, SnappingMonsterControllerComponent * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::SnappingMonsterControllerComponent::SnappingMonsterControllerComponent(Caver::Proto::SnappingMonsterControllerComponent
   const&) */

void __thiscall
Caver::Proto::SnappingMonsterControllerComponent::SnappingMonsterControllerComponent
          (SnappingMonsterControllerComponent *this,SnappingMonsterControllerComponent *param_1)

{
  undefined *puVar1;
  
  puVar1 = PTR_vtable_007e74f0;
  *(undefined8 *)(this + 0x10) = 0;
  *(undefined8 *)(this + 0x18) = 0;
  *(undefined4 *)(this + 0x20) = 0;
  *(undefined **)this = puVar1 + 0x10;
  *(undefined8 *)(this + 8) = 0;
                    /* try { // try from 00424d70 to 00524d83 has its CatchHandler @ 004255b8 */
  MergeFrom(this,param_1);
  return;
}


