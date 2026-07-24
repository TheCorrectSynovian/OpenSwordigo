/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003176cc
 * Function: Caver::CollisionShape::TransformedPolygonSegmentAtIndex
 * Signature: undefined __cdecl TransformedPolygonSegmentAtIndex(int param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::CollisionShape::TransformedPolygonSegmentAtIndex(int) const */

void Caver::CollisionShape::TransformedPolygonSegmentAtIndex(int param_1)

{
  undefined8 *puVar1;
  long lVar2;
  ulong uVar3;
  int in_w1;
  Vector2 *in_x8;
  long lVar4;
  Vector2 *pVVar5;
  undefined8 local_50;
  
  uVar3 = (ulong)(uint)param_1;
  lVar2 = tpidr_el0;
  lVar4 = *(long *)(lVar2 + 0x28);
  puVar1 = (undefined8 *)(*(long *)(*(long *)(uVar3 + 8) + 8) + (long)in_w1 * 8);
  pVVar5 = in_x8 + 8;
  *(undefined8 *)in_x8 = *puVar1;
  *(undefined8 *)pVVar5 = puVar1[1];
  Vector2::Transformed(in_x8,*(float *)(uVar3 + 0x20),*(float *)(uVar3 + 0x24));
  *(undefined8 *)in_x8 = local_50;
  Vector2::Transformed(pVVar5,*(float *)(uVar3 + 0x20),*(float *)(uVar3 + 0x24));
  *(undefined8 *)pVVar5 = local_50;
  if (*(long *)(lVar2 + 0x28) == lVar4) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


