/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0037aed8
 * Function: Caver::MonsterEntityComponent::MonsterEntityComponent
 * Signature: undefined __thiscall MonsterEntityComponent(MonsterEntityComponent * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::MonsterEntityComponent::MonsterEntityComponent() */

void __thiscall Caver::MonsterEntityComponent::MonsterEntityComponent(MonsterEntityComponent *this)

{
  undefined *puVar1;
  undefined *puVar2;
  
  EntityComponent::EntityComponent((EntityComponent *)this);
  puVar2 = PTR_DAT_007e5de8;
  puVar1 = PTR_vtable_007e4e30;
  *(undefined2 *)(this + 0x198) = 0x101;
  *(undefined **)this = puVar1 + 0x10;
  *(undefined8 *)(this + 0x140) = 0;
  *(undefined8 *)(this + 0x148) = 0;
  *(undefined8 *)(this + 0x170) = 0;
  *(undefined8 *)(this + 0x178) = 0;
  *(undefined8 *)(this + 0x160) = 0;
  *(undefined8 *)(this + 0x168) = 0;
  *(undefined8 *)(this + 0x188) = 0;
  *(undefined8 *)(this + 400) = 0;
  *(undefined8 *)(this + 0x180) = 0x7f7fffff00000000;
  *(undefined8 *)(this + 0x150) = 0;
  *(undefined **)(this + 0x158) = puVar2 + 0x18;
  *(undefined **)(this + 0x130) = puVar2 + 0x18;
  *(undefined8 *)(this + 0x138) = 0;
  *(undefined **)(this + 0x18) = puVar1 + 0x168;
  *(undefined **)(this + 0x10) = puVar1 + 0x128;
  this[0x19a] = (MonsterEntityComponent)0x1;
  return;
}


