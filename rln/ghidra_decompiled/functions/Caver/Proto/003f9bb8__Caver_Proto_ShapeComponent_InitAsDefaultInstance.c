/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003f9bb8
 * Function: Caver::Proto::ShapeComponent::InitAsDefaultInstance
 * Signature: undefined __thiscall InitAsDefaultInstance(ShapeComponent * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::ShapeComponent::InitAsDefaultInstance() */

void __thiscall Caver::Proto::ShapeComponent::InitAsDefaultInstance(ShapeComponent *this)

{
  undefined8 uVar1;
  
  uVar1 = Rectangle::default_instance();
  *(undefined8 *)(this + 0x10) = uVar1;
  uVar1 = Circle::default_instance();
  *(undefined8 *)(this + 0x18) = uVar1;
  uVar1 = Polygon::default_instance();
  *(undefined8 *)(this + 0x20) = uVar1;
  return;
}


