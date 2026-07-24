/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00429280
 * Function: Caver::Proto::GenericMonsterControllerComponent::GenericMonsterControllerComponent
 * Signature: undefined __thiscall GenericMonsterControllerComponent(GenericMonsterControllerComponent * this, GenericMonsterControllerComponent * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::GenericMonsterControllerComponent::GenericMonsterControllerComponent(Caver::Proto::GenericMonsterControllerComponent
   const&) */

void __thiscall
Caver::Proto::GenericMonsterControllerComponent::GenericMonsterControllerComponent
          (GenericMonsterControllerComponent *this,GenericMonsterControllerComponent *param_1)

{
  undefined *puVar1;
  
  puVar1 = PTR_vtable_007e47a8;
                    /* try { // try from 00429294 to 005292cf has its CatchHandler @ 004295c8 */
  *(undefined4 *)(this + 0x10) = 0;
  *(undefined **)this = puVar1 + 0x10;
  *(undefined8 *)(this + 8) = 0;
  MergeFrom(this,param_1);
  return;
}


