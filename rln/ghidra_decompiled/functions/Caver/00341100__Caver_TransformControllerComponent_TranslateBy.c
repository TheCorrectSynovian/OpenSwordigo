/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00341100
 * Function: Caver::TransformControllerComponent::TranslateBy
 * Signature: undefined __thiscall TranslateBy(TransformControllerComponent * this, Vector3 * param_1, float param_2)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::TransformControllerComponent::TranslateBy(Caver::Vector3 const&, float) */

void __thiscall
Caver::TransformControllerComponent::TranslateBy
          (TransformControllerComponent *this,Vector3 *param_1,float param_2)

{
  float fVar1;
  undefined8 uVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  undefined8 uVar6;
  float fVar7;
  float fVar8;
  
  uVar2 = *(undefined8 *)param_1;
  fVar4 = *(float *)(param_1 + 8);
  uVar6 = *(undefined8 *)(*(long *)(this + 0x28) + 0x70);
  fVar8 = *(float *)(*(long *)(this + 0x28) + 0x78);
  this[0x8c] = (TransformControllerComponent)0x1;
  fVar5 = (float)uVar6;
  fVar1 = fVar5 + (float)uVar2;
  fVar7 = (float)((ulong)uVar6 >> 0x20);
  fVar3 = fVar7 + (float)((ulong)uVar2 >> 0x20);
  fVar4 = fVar8 + fVar4;
  *(ulong *)(this + 0x90) = CONCAT44(fVar3,fVar1);
  *(float *)(this + 0x98) = fVar4;
  *(ulong *)(this + 0x9c) = CONCAT44(fVar3 - fVar7,fVar1 - fVar5);
  *(float *)(this + 0xa4) = fVar4 - fVar8;
  *(float *)(this + 0xa8) = param_2;
  return;
}


