/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0054ae0c
 * Function: Caver::ModelInstance::ExtractSkeletonDataFromBuffer
 * Signature: undefined __thiscall ExtractSkeletonDataFromBuffer(ModelInstance * this, FloatDataBuffer * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::ModelInstance::ExtractSkeletonDataFromBuffer(Caver::FloatDataBuffer const*) */

void __thiscall
Caver::ModelInstance::ExtractSkeletonDataFromBuffer(ModelInstance *this,FloatDataBuffer *param_1)

{
  if (param_1 != (FloatDataBuffer *)0x0) {
    SkeletonInstance::ExtractDataFromBuffer(*(SkeletonInstance **)(this + 0x18),param_1);
    SkeletonInstance::EvaluateMatrices();
    this[0x10] = (ModelInstance)0x1;
    this[0x45] = (ModelInstance)0x1;
  }
                    /* try { // try from 0054ae40 to 0064ae67 has its CatchHandler @ 0054b748 */
  return;
}


