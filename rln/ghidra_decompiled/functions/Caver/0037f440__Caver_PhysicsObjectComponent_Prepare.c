/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0037f440
 * Function: Caver::PhysicsObjectComponent::Prepare
 * Signature: undefined __thiscall Prepare(PhysicsObjectComponent * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::PhysicsObjectComponent::Prepare() */

void __thiscall Caver::PhysicsObjectComponent::Prepare(PhysicsObjectComponent *this)

{
  undefined4 uVar1;
  SceneObject *this_00;
  long lVar2;
  ShadowComponent *this_01;
  
  RegisterLibrary(this);
  this_00 = *(SceneObject **)(this + 0x28);
  *(undefined4 *)(this + 0xb0) = 0;
  *(SceneObject **)(this + 0x78) = this_00;
  uVar1 = *(undefined4 *)(this_00 + 0x78);
  *(undefined8 *)(this + 0x100) = *(undefined8 *)(this_00 + 0x70);
  *(undefined4 *)(this + 0x108) = uVar1;
  lVar2 = SceneObject::ComponentWithInterface(this_00,(long)PTR_Interface_007e4828);
  if (lVar2 != 0) {
    return;
  }
  this_01 = operator_new(0xe0);
  ShadowComponent::ShadowComponent(this_01);
  this_01[0x78] = (ShadowComponent)0x0;
  SceneObject::AddComponent(*(SceneObject **)(this + 0x28),(Component *)this_01);
  return;
}


