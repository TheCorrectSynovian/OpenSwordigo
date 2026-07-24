/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0038a0ec
 * Function: Caver::MagicHookshotComponent::Destroy
 * Signature: undefined __thiscall Destroy(MagicHookshotComponent * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::MagicHookshotComponent::Destroy() */

void __thiscall Caver::MagicHookshotComponent::Destroy(MagicHookshotComponent *this)

{
  TransformControllerComponent *this_00;
  SceneObject *this_01;
  
  this_01 = *(SceneObject **)(this + 0x28);
  this[0x158] = (MagicHookshotComponent)0x1;
  this_00 = (TransformControllerComponent *)
            SceneObject::ComponentWithInterface(this_01,(long)PTR_Interface_007e6a60);
  if (this_00 == (TransformControllerComponent *)0x0) {
    this_00 = operator_new(0xc0);
    TransformControllerComponent::TransformControllerComponent(this_00);
    SceneObject::AddComponent(this_01,(Component *)this_00);
  }
  TransformControllerComponent::ScaleTo(this_00,DAT_00683944,DAT_00684318);
  this[0xb8] = (MagicHookshotComponent)0x1;
  return;
}


