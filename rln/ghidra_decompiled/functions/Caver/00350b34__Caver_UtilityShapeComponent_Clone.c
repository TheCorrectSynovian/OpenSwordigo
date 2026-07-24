/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00350b34
 * Function: Caver::UtilityShapeComponent::Clone
 * Signature: undefined __thiscall Clone(UtilityShapeComponent * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::UtilityShapeComponent::Clone() const */

ShapeComponent * __thiscall Caver::UtilityShapeComponent::Clone(UtilityShapeComponent *this)

{
  undefined *puVar1;
  undefined *puVar2;
  ShapeComponent *this_00;
  
  this_00 = operator_new(0x88);
  memset(this_00,0,0x88);
  ShapeComponent::ShapeComponent(this_00);
  puVar1 = PTR_vtable_007e5f78 + 0x148;
  puVar2 = PTR_vtable_007e5f78 + 0x188;
  *(undefined **)this_00 = PTR_vtable_007e5f78 + 0x10;
  *(undefined **)(this_00 + 0x18) = puVar2;
  *(undefined **)(this_00 + 0x10) = puVar1;
  ShapeComponent::InitWithComponent(this_00,(ShapeComponent *)this);
  return this_00;
}


