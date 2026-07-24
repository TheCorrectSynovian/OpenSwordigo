/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0031340c
 * Function: Caver::AnimNode::UpdateWithModelInstance
 * Signature: undefined __cdecl UpdateWithModelInstance(float param_1, ModelInstance * param_2)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::AnimNode::UpdateWithModelInstance(float, Caver::ModelInstance*) */

void Caver::AnimNode::UpdateWithModelInstance(float param_1,ModelInstance *param_2)

{
  ulong uVar1;
  FloatDataBuffer *pFVar2;
  ModelInstance *in_x1;
  
  uVar1 = (**(code **)(*(long *)param_2 + 0x10))();
  if (((in_x1 != (ModelInstance *)0x0) && ((uVar1 & 1) != 0)) &&
     (*(long **)(in_x1 + 0x18) != (long *)0x0)) {
    (**(code **)(*(long *)param_2 + 0x20))(param_2,2,**(long **)(in_x1 + 0x18) + 0x10);
    pFVar2 = (FloatDataBuffer *)(**(code **)(*(long *)param_2 + 0x28))(param_2);
    ModelInstance::ExtractSkeletonDataFromBuffer(in_x1,pFVar2);
    return;
  }
  return;
}


