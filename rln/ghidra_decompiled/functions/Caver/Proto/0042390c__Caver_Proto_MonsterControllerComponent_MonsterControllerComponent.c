/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0042390c
 * Function: Caver::Proto::MonsterControllerComponent::MonsterControllerComponent
 * Signature: undefined __thiscall MonsterControllerComponent(MonsterControllerComponent * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::MonsterControllerComponent::MonsterControllerComponent() */

void __thiscall
Caver::Proto::MonsterControllerComponent::MonsterControllerComponent
          (MonsterControllerComponent *this)

{
  undefined *puVar1;
  
  puVar1 = PTR_vtable_007e65d8;
  *(undefined8 *)(this + 0x10) = 0;
  *(undefined8 *)(this + 0x18) = 0;
  *(undefined **)this = puVar1 + 0x10;
  *(undefined8 *)(this + 8) = 0;
  return;
}


