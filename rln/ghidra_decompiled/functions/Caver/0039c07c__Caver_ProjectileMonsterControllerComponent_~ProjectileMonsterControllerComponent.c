/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0039c07c
 * Function: Caver::ProjectileMonsterControllerComponent::~ProjectileMonsterControllerComponent
 * Signature: undefined __thiscall ~ProjectileMonsterControllerComponent(ProjectileMonsterControllerComponent * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::ProjectileMonsterControllerComponent::~ProjectileMonsterControllerComponent() */

void __thiscall
Caver::ProjectileMonsterControllerComponent::~ProjectileMonsterControllerComponent
          (ProjectileMonsterControllerComponent *this)

{
  MonsterControllerComponent::~MonsterControllerComponent((MonsterControllerComponent *)this);
  operator_delete(this);
  return;
}


