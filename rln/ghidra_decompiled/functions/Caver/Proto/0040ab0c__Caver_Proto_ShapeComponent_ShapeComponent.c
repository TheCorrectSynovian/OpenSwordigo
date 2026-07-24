/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0040ab0c
 * Function: Caver::Proto::ShapeComponent::ShapeComponent
 * Signature: undefined __thiscall ShapeComponent(ShapeComponent * this, ShapeComponent * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::ShapeComponent::ShapeComponent(Caver::Proto::ShapeComponent const&) */

void __thiscall
Caver::Proto::ShapeComponent::ShapeComponent(ShapeComponent *this,ShapeComponent *param_1)

{
  undefined *puVar1;
  
  puVar1 = PTR_vtable_007e6c08;
  *(undefined4 *)(this + 8) = 0;
  *(undefined8 *)(this + 0x18) = 0;
  *(undefined8 *)(this + 0x20) = 0;
  *(undefined8 *)(this + 0x10) = 0;
  *(undefined **)this = puVar1 + 0x10;
  *(undefined4 *)(this + 0x28) = 0;
  MergeFrom(this,param_1);
  return;
}


