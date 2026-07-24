/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0037dba4
 * Function: Caver::MonsterEntityComponent::Clone
 * Signature: undefined __thiscall Clone(MonsterEntityComponent * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::MonsterEntityComponent::Clone() const */

EntityComponent * __thiscall Caver::MonsterEntityComponent::Clone(MonsterEntityComponent *this)

{
  undefined *puVar1;
  undefined *puVar2;
  EntityComponent *this_00;
  
  this_00 = operator_new(0x1a0);
  EntityComponent::EntityComponent(this_00);
  puVar2 = PTR_DAT_007e5de8;
  puVar1 = PTR_vtable_007e4e30;
  *(undefined2 *)(this_00 + 0x198) = 0x101;
  *(undefined **)this_00 = puVar1 + 0x10;
  *(undefined8 *)(this_00 + 0x140) = 0;
  *(undefined8 *)(this_00 + 0x148) = 0;
  *(undefined8 *)(this_00 + 0x170) = 0;
  *(undefined8 *)(this_00 + 0x178) = 0;
  *(undefined8 *)(this_00 + 0x160) = 0;
  *(undefined8 *)(this_00 + 0x168) = 0;
  *(undefined8 *)(this_00 + 0x188) = 0;
  *(undefined8 *)(this_00 + 400) = 0;
  *(undefined8 *)(this_00 + 0x180) = 0x7f7fffff00000000;
  *(undefined8 *)(this_00 + 0x150) = 0;
  *(undefined **)(this_00 + 0x158) = puVar2 + 0x18;
  *(undefined **)(this_00 + 0x130) = puVar2 + 0x18;
  *(undefined8 *)(this_00 + 0x138) = 0;
  *(undefined **)(this_00 + 0x18) = puVar1 + 0x168;
  *(undefined **)(this_00 + 0x10) = puVar1 + 0x128;
  this_00[0x19a] = (EntityComponent)0x1;
  InitWithComponent((MonsterEntityComponent *)this_00,this);
  return this_00;
}


