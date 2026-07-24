/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00405558
 * Function: Caver::Proto::ModelTransformControllerComponent::Clear
 * Signature: undefined __thiscall Clear(ModelTransformControllerComponent * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::ModelTransformControllerComponent::Clear() */

void __thiscall
Caver::Proto::ModelTransformControllerComponent::Clear(ModelTransformControllerComponent *this)

{
  ModelTransformControllerComponent MVar1;
  uint uVar2;
  
  MVar1 = this[0x28];
  uVar2 = (uint)(byte)MVar1;
  if (MVar1 != (ModelTransformControllerComponent)0x0) {
    *(undefined4 *)(this + 0xc) = 0;
    if ((((byte)MVar1 >> 1 & 1) != 0) && (*(Vector3 **)(this + 0x10) != (Vector3 *)0x0)) {
      Vector3::Clear(*(Vector3 **)(this + 0x10));
      uVar2 = *(uint *)(this + 0x28);
    }
    if (((uVar2 >> 2 & 1) != 0) && (*(Vector3 **)(this + 0x18) != (Vector3 *)0x0)) {
      Vector3::Clear(*(Vector3 **)(this + 0x18));
    }
    *(undefined8 *)(this + 0x20) = 0;
  }
  *(undefined4 *)(this + 0x28) = 0;
  return;
}


