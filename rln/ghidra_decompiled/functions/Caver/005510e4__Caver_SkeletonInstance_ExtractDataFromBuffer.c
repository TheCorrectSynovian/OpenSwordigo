/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005510e4
 * Function: Caver::SkeletonInstance::ExtractDataFromBuffer
 * Signature: undefined __thiscall ExtractDataFromBuffer(SkeletonInstance * this, FloatDataBuffer * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::SkeletonInstance::ExtractDataFromBuffer(Caver::FloatDataBuffer const*) */

void __thiscall
Caver::SkeletonInstance::ExtractDataFromBuffer(SkeletonInstance *this,FloatDataBuffer *param_1)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  int *piVar4;
  int iVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  
  lVar3 = *(long *)(param_1 + 8);
  if ((lVar3 != 0) && (piVar4 = *(int **)this, 0 < *piVar4)) {
    uVar1 = piVar4[9];
    uVar2 = piVar4[6];
                    /* try { // try from 00551120 to 0065112b has its CatchHandler @ 0055115c */
    puVar6 = *(undefined8 **)(this + 0x10);
    iVar5 = 0;
    puVar7 = (undefined8 *)(lVar3 + (ulong)(uint)piVar4[8] * 4);
    puVar8 = (undefined8 *)(lVar3 + (ulong)(uint)piVar4[5] * 4);
    do {
      *(undefined4 *)(puVar6 + 1) = *(undefined4 *)(puVar8 + 1);
      *puVar6 = *puVar8;
      uVar9 = *puVar7;
                    /* try { // try from 00551150 to 00651153 has its CatchHandler @ 00551190 */
      *(undefined8 *)((long)puVar6 + 0x14) = puVar7[1];
      *(undefined8 *)((long)puVar6 + 0xc) = uVar9;
                    /* try { // try from 00551154 to 0065117f has its CatchHandler @ 00550ec4 */
      Quaternion::Normalize((Quaternion *)((long)puVar6 + 0xc));
                    /* catch() { ... } // from try @ 00551120 with catch @ 0055115c */
      iVar5 = iVar5 + 1;
      puVar7 = (undefined8 *)((long)puVar7 + (ulong)uVar1 * 4);
      puVar8 = (undefined8 *)((long)puVar8 + (ulong)uVar2 * 4);
      puVar6 = (undefined8 *)((long)puVar6 + 0xdc);
    } while (iVar5 < **(int **)this);
  }
                    /* try { // try from 00551180 to 00651187 has its CatchHandler @ 0055118c */
                    /* catch() { ... } // from try @ 00551180 with catch @ 0055118c */
  return;
}


