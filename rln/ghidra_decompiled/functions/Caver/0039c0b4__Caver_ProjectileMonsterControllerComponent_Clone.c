/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0039c0b4
 * Function: Caver::ProjectileMonsterControllerComponent::Clone
 * Signature: undefined __thiscall Clone(ProjectileMonsterControllerComponent * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::ProjectileMonsterControllerComponent::Clone() const */

MonsterControllerComponent * __thiscall
Caver::ProjectileMonsterControllerComponent::Clone(ProjectileMonsterControllerComponent *this)

{
  undefined *puVar1;
  undefined *puVar2;
  MonsterControllerComponent *this_00;
  
  this_00 = operator_new(0xd0);
  MonsterControllerComponent::MonsterControllerComponent(this_00);
  puVar1 = PTR_vtable_007e4920 + 0x128;
  puVar2 = PTR_vtable_007e4920 + 0x168;
  *(undefined **)this_00 = PTR_vtable_007e4920 + 0x10;
  *(undefined **)(this_00 + 0x18) = puVar2;
  *(undefined **)(this_00 + 0x10) = puVar1;
  MonsterControllerComponent::InitWithComponent(this_00,(MonsterControllerComponent *)this);
  return this_00;
}


