/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0034fb04
 * Function: Caver::UtilityShapeComponent::Create
 * Signature: undefined __cdecl Create(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::UtilityShapeComponent::Create() */

ShapeComponent * Caver::UtilityShapeComponent::Create(void)

{
  undefined *puVar1;
  undefined *puVar2;
  ShapeComponent *this;
  
  this = operator_new(0x88);
  memset(this,0,0x88);
  ShapeComponent::ShapeComponent(this);
  puVar1 = PTR_vtable_007e5f78 + 0x148;
  puVar2 = PTR_vtable_007e5f78 + 0x188;
  *(undefined **)this = PTR_vtable_007e5f78 + 0x10;
  *(undefined **)(this + 0x18) = puVar2;
  *(undefined **)(this + 0x10) = puVar1;
  return this;
}


