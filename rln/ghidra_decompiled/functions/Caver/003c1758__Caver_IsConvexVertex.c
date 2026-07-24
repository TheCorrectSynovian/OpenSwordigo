/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003c1758
 * Function: Caver::IsConvexVertex
 * Signature: undefined __cdecl IsConvexVertex(VertexList_ * param_1, VertexListNode_ * param_2)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::IsConvexVertex(Caver::VertexList_*, Caver::VertexListNode_*) */

void Caver::IsConvexVertex(VertexList_ *param_1,VertexListNode_ *param_2)

{
  long lVar1;
  bool bVar2;
  float fVar3;
  float fVar4;
  double dVar5;
  undefined8 local_38;
  undefined8 local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  fVar3 = (float)*(undefined8 *)(param_2 + 0x14);
  fVar4 = (float)((ulong)*(undefined8 *)(param_2 + 0x14) >> 0x20);
  local_30 = CONCAT44((float)((ulong)*(undefined8 *)(*(long *)param_2 + 0x14) >> 0x20) - fVar4,
                      (float)*(undefined8 *)(*(long *)param_2 + 0x14) - fVar3);
  local_38 = CONCAT44((float)((ulong)*(undefined8 *)(*(long *)(param_2 + 8) + 0x14) >> 0x20) - fVar4
                      ,(float)*(undefined8 *)(*(long *)(param_2 + 8) + 0x14) - fVar3);
  fVar3 = (float)Vector2::Angle((Vector2 *)&local_38);
  fVar4 = (float)Vector2::Angle((Vector2 *)&local_30);
  dVar5 = (double)(fVar3 - fVar4);
  if ((0.0 < fVar3 - fVar4) || (dVar5 < DAT_00689fc8)) {
    bVar2 = dVar5 <= DAT_00684790 && DAT_00684028 <= dVar5;
  }
  else {
    bVar2 = true;
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(bVar2);
}


