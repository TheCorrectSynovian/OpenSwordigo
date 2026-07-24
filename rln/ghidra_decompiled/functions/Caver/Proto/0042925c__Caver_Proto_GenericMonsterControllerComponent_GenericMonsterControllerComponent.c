/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0042925c
 * Function: Caver::Proto::GenericMonsterControllerComponent::GenericMonsterControllerComponent
 * Signature: undefined __thiscall GenericMonsterControllerComponent(GenericMonsterControllerComponent * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::GenericMonsterControllerComponent::GenericMonsterControllerComponent() */

void __thiscall
Caver::Proto::GenericMonsterControllerComponent::GenericMonsterControllerComponent
          (GenericMonsterControllerComponent *this)

{
  undefined *puVar1;
  
  puVar1 = PTR_vtable_007e47a8;
  *(undefined4 *)(this + 0x10) = 0;
                    /* try { // try from 00429268 to 00529273 has its CatchHandler @ 00429624 */
  *(undefined **)this = puVar1 + 0x10;
  *(undefined8 *)(this + 8) = 0;
  return;
}


