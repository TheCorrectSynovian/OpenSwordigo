/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00417654
 * Function: Caver::Proto::MonsterEntityComponent::MonsterEntityComponent
 * Signature: undefined __thiscall MonsterEntityComponent(MonsterEntityComponent * this, MonsterEntityComponent * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::MonsterEntityComponent::MonsterEntityComponent(Caver::Proto::MonsterEntityComponent
   const&) */

void __thiscall
Caver::Proto::MonsterEntityComponent::MonsterEntityComponent
          (MonsterEntityComponent *this,MonsterEntityComponent *param_1)

{
  undefined *puVar1;
  
  puVar1 = PTR_vtable_007e47e8;
  *(undefined4 *)(this + 8) = 0;
  *(undefined4 *)(this + 0x24) = 0;
  *(undefined8 *)(this + 0x10) = 0;
  *(undefined8 *)(this + 0x18) = 0;
  *(undefined **)this = puVar1 + 0x10;
  *(undefined2 *)(this + 0x20) = 0;
  MergeFrom(this,param_1);
  return;
}


