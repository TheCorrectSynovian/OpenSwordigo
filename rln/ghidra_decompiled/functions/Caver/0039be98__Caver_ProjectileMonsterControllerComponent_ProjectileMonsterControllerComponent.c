/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0039be98
 * Function: Caver::ProjectileMonsterControllerComponent::ProjectileMonsterControllerComponent
 * Signature: undefined __thiscall ProjectileMonsterControllerComponent(ProjectileMonsterControllerComponent * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::ProjectileMonsterControllerComponent::ProjectileMonsterControllerComponent() */

void __thiscall
Caver::ProjectileMonsterControllerComponent::ProjectileMonsterControllerComponent
          (ProjectileMonsterControllerComponent *this)

{
  undefined *puVar1;
  undefined *puVar2;
  
  MonsterControllerComponent::MonsterControllerComponent((MonsterControllerComponent *)this);
  puVar1 = PTR_vtable_007e4920 + 0x128;
  puVar2 = PTR_vtable_007e4920 + 0x168;
  *(undefined **)this = PTR_vtable_007e4920 + 0x10;
  *(undefined **)(this + 0x18) = puVar2;
  *(undefined **)(this + 0x10) = puVar1;
  return;
}


