/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003c1bdc
 * Function: Caver::IsAnEar
 * Signature: undefined __cdecl IsAnEar(VertexList_ * param_1, VertexListNode_ * param_2, VertexList_ * param_3)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::IsAnEar(Caver::VertexList_*, Caver::VertexListNode_*, Caver::VertexList_*) */

undefined8 Caver::IsAnEar(VertexList_ *param_1,VertexListNode_ *param_2,VertexList_ *param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  
  if (*(int *)(param_3 + 0x10) != 0) {
    if (-1 < *(int *)(*(long *)param_3 + (long)*(int *)(param_2 + 0x10) * 0x20 + 0x10)) {
      return 0;
    }
    lVar1 = *(long *)param_2;
    lVar2 = *(long *)(param_3 + 8);
    do {
      if ((*(int *)(lVar2 + 0x10) != *(int *)(lVar1 + 0x10)) &&
         (lVar3 = *(long *)(param_2 + 8), *(int *)(lVar2 + 0x10) != *(int *)(lVar3 + 0x10))) {
        fVar4 = *(float *)(lVar1 + 0x14);
        fVar5 = *(float *)(lVar1 + 0x18);
        fVar8 = *(float *)(lVar3 + 0x14);
        fVar9 = *(float *)(lVar3 + 0x18);
        fVar6 = *(float *)(lVar2 + 0x14);
        fVar7 = *(float *)(lVar2 + 0x18);
        if (0.0 <= (fVar4 - fVar8) * (fVar7 - fVar9) - (fVar5 - fVar9) * (fVar6 - fVar8)) {
          fVar10 = *(float *)(param_2 + 0x14);
          fVar11 = *(float *)(param_2 + 0x18);
          if ((0.0 <= (fVar8 - fVar10) * (fVar7 - fVar11) - (fVar9 - fVar11) * (fVar6 - fVar10)) &&
             (0.0 <= (fVar10 - fVar4) * (fVar7 - fVar5) - (fVar11 - fVar5) * (fVar6 - fVar4))) {
            return 0;
          }
        }
      }
      lVar2 = *(long *)(lVar2 + 8);
    } while (lVar2 != *(long *)(param_3 + 8));
  }
  return 1;
}


