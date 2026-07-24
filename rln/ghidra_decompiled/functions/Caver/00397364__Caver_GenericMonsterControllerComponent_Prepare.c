/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00397364
 * Function: Caver::GenericMonsterControllerComponent::Prepare
 * Signature: undefined __thiscall Prepare(GenericMonsterControllerComponent * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::GenericMonsterControllerComponent::Prepare() */

void __thiscall
Caver::GenericMonsterControllerComponent::Prepare(GenericMonsterControllerComponent *this)

{
  MonsterControllerComponent::Prepare((MonsterControllerComponent *)this);
  SceneObject::GetComponentsWithInterface<Caver::AttackComponent>
            (*(SceneObject **)(this + 0x28),(vector *)(this + 0xe8));
  *(undefined4 *)(this + 0x114) = *(undefined4 *)(this + 200);
  return;
}


