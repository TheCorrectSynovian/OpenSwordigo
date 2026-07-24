/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003846cc
 * Function: Caver::MagicBoltComponent::Prepare
 * Signature: undefined __thiscall Prepare(MagicBoltComponent * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::MagicBoltComponent::Prepare() */

void __thiscall Caver::MagicBoltComponent::Prepare(MagicBoltComponent *this)

{
  long lVar1;
  ProjectileControllerComponent *this_00;
  SceneObject *this_01;
  
  SpellComponent::Prepare();
  this_01 = *(SceneObject **)(this + 0x28);
  lVar1 = SceneObject::ComponentWithInterface(this_01,(long)PTR_Interface_007e6e68);
  if (lVar1 == 0) {
    this_00 = operator_new(0x80);
    ProjectileControllerComponent::ProjectileControllerComponent(this_00);
    SceneObject::AddComponent(this_01,(Component *)this_00);
  }
  lVar1 = SceneObject::ComponentWithInterface
                    (*(SceneObject **)(this + 0x28),(long)PTR_Interface_007e4ee0);
  this[0x130] = (MagicBoltComponent)(lVar1 != 0);
  SceneObject::Activate(*(SceneObject **)(this + 0x28));
  *(undefined4 *)(this + 0x128) = 0x3e19999a;
  return;
}


