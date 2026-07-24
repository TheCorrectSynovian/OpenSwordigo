/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00341140
 * Function: Caver::TransformControllerComponent::TranslateTo
 * Signature: undefined __thiscall TranslateTo(TransformControllerComponent * this, Vector3 * param_1, float param_2)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::TransformControllerComponent::TranslateTo(Caver::Vector3 const&, float) */

void __thiscall
Caver::TransformControllerComponent::TranslateTo
          (TransformControllerComponent *this,Vector3 *param_1,float param_2)

{
  float fVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  float fVar4;
  
  this[0x8c] = (TransformControllerComponent)0x1;
  uVar2 = *(undefined8 *)param_1;
  *(undefined8 *)(this + 0x90) = uVar2;
  fVar1 = *(float *)(param_1 + 8);
  *(float *)(this + 0x98) = fVar1;
  uVar3 = *(undefined8 *)(*(long *)(this + 0x28) + 0x70);
  fVar4 = *(float *)(*(long *)(this + 0x28) + 0x78);
  *(ulong *)(this + 0x9c) =
       CONCAT44((float)((ulong)uVar2 >> 0x20) - (float)((ulong)uVar3 >> 0x20),
                (float)uVar2 - (float)uVar3);
  *(float *)(this + 0xa4) = fVar1 - fVar4;
  *(float *)(this + 0xa8) = param_2;
  return;
}


