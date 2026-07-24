/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00328848
 * Function: Caver::ModelTransformControllerComponent::Clone
 * Signature: undefined __thiscall Clone(ModelTransformControllerComponent * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::ModelTransformControllerComponent::Clone() const */

ModelTransformControllerComponent * __thiscall
Caver::ModelTransformControllerComponent::Clone(ModelTransformControllerComponent *this)

{
  ModelTransformControllerComponent *this_00;
  undefined8 uVar1;
  
  this_00 = operator_new(0xb0);
  ModelTransformControllerComponent(this_00);
  *(undefined4 *)(this_00 + 0x20) = *(undefined4 *)(this + 0x20);
  FUN_0066a6a8(this_00 + 0x38,this + 0x38);
  *(undefined4 *)(this_00 + 0x78) = *(undefined4 *)(this + 0x78);
  uVar1 = *(undefined8 *)(this + 0x8c);
  *(undefined8 *)(this_00 + 0x94) = *(undefined8 *)(this + 0x94);
  *(undefined8 *)(this_00 + 0x8c) = uVar1;
  uVar1 = *(undefined8 *)(this + 0x9c);
  *(undefined8 *)(this_00 + 0xa4) = *(undefined8 *)(this + 0xa4);
  *(undefined8 *)(this_00 + 0x9c) = uVar1;
  return this_00;
}


