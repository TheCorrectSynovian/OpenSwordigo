/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00428de0
 * Function: Caver::Proto::MonsterDeathControllerComponent::MonsterDeathControllerComponent
 * Signature: undefined __thiscall MonsterDeathControllerComponent(MonsterDeathControllerComponent * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::MonsterDeathControllerComponent::MonsterDeathControllerComponent() */

void __thiscall
Caver::Proto::MonsterDeathControllerComponent::MonsterDeathControllerComponent
          (MonsterDeathControllerComponent *this)

{
  undefined *puVar1;
  
  puVar1 = PTR_vtable_007e4ca0;
  *(undefined4 *)(this + 0x10) = 0;
  *(undefined **)this = puVar1 + 0x10;
  *(undefined8 *)(this + 8) = 0;
                    /* try { // try from 00428df4 to 00528df7 has its CatchHandler @ 00428ecc */
  return;
}


