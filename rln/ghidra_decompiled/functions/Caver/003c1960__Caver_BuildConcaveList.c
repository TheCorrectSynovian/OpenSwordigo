/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003c1960
 * Function: Caver::BuildConcaveList
 * Signature: undefined __cdecl BuildConcaveList(Vector2 * param_1, int param_2, VertexList_ * param_3)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::BuildConcaveList(Caver::Vector2*, int, Caver::VertexList_*) */

undefined8 * Caver::BuildConcaveList(Vector2 *param_1,int param_2,VertexList_ *param_3)

{
  long *plVar1;
  long *plVar2;
  uint uVar3;
  long lVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  undefined8 *puVar8;
  long *plVar9;
  long lVar10;
  ulong uVar11;
  undefined8 uVar12;
  ulong uVar13;
  long *plVar14;
  float fVar15;
  float fVar16;
  double dVar17;
  undefined8 local_98;
  undefined8 local_90;
  long local_88;
  
  lVar4 = tpidr_el0;
  local_88 = *(long *)(lVar4 + 0x28);
  uVar13 = (ulong)(uint)param_2;
  puVar8 = malloc(0x18);
  if (param_2 == 0) {
    puVar8[1] = 0;
    *(undefined4 *)(puVar8 + 2) = 0;
  }
  else {
    plVar9 = malloc(-(ulong)((uint)param_2 >> 0x1f) & 0xffffffe000000000 | uVar13 << 5);
    *puVar8 = plVar9;
    *(int *)(puVar8 + 2) = param_2;
    if (0 < param_2) {
      lVar10 = 0;
      uVar11 = 0;
      do {
        uVar12 = *(undefined8 *)(param_1 + uVar11 * 8);
        plVar14 = (long *)((long)plVar9 + lVar10);
        *(int *)(plVar14 + 2) = (int)uVar11;
        *(undefined8 *)((long)plVar14 + 0x14) = uVar12;
        if (lVar10 != 0) {
          *plVar14 = (long)(plVar14 + -4);
          plVar14[-3] = (long)plVar14;
        }
        uVar11 = uVar11 + 1;
        lVar10 = lVar10 + 0x20;
      } while ((uint)param_2 != uVar11);
    }
    *plVar9 = (long)(plVar9 + (long)param_2 * 4 + -4);
    plVar9[(long)param_2 * 4 + -3] = (long)plVar9;
    puVar8[1] = plVar9;
    dVar7 = DAT_00689fc8;
    dVar6 = DAT_00684790;
    dVar5 = DAT_00684028;
    if (0 < param_2) {
      lVar10 = 0;
      uVar11 = (ulong)(uint)param_2;
      plVar14 = plVar9;
      do {
        plVar1 = (long *)(*(long *)param_3 + lVar10);
        fVar15 = (float)*(undefined8 *)((long)plVar1 + 0x14);
        fVar16 = (float)((ulong)*(undefined8 *)((long)plVar1 + 0x14) >> 0x20);
        local_90 = CONCAT44((float)((ulong)*(undefined8 *)(*plVar1 + 0x14) >> 0x20) - fVar16,
                            (float)*(undefined8 *)(*plVar1 + 0x14) - fVar15);
        local_98 = CONCAT44((float)((ulong)*(undefined8 *)(plVar1[1] + 0x14) >> 0x20) - fVar16,
                            (float)*(undefined8 *)(plVar1[1] + 0x14) - fVar15);
        fVar15 = (float)Vector2::Angle((Vector2 *)&local_98);
        fVar16 = (float)Vector2::Angle((Vector2 *)&local_90);
        dVar17 = (double)(fVar15 - fVar16);
        if (((fVar15 - fVar16 <= 0.0) && (dVar7 <= dVar17)) ||
           ((dVar17 <= dVar6 && (dVar5 <= dVar17)))) {
          plVar1 = (long *)((long)plVar9 + lVar10);
          uVar3 = (int)uVar13 - 1;
          uVar13 = (ulong)uVar3;
          *(undefined4 *)(plVar1 + 2) = 0xffffffff;
          *(uint *)(puVar8 + 2) = uVar3;
          if (uVar3 == 0) {
            plVar14 = (long *)0x0;
            puVar8[1] = 0;
          }
          else {
            plVar2 = (long *)plVar1[1];
            *plVar2 = *plVar1;
            *(long **)(*plVar1 + 8) = plVar2;
            if (plVar1 == plVar14) {
              plVar14 = *(long **)((long)plVar9 + lVar10 + 8);
              puVar8[1] = plVar14;
            }
          }
        }
        uVar11 = uVar11 - 1;
        lVar10 = lVar10 + 0x20;
      } while (uVar11 != 0);
    }
  }
  if (*(long *)(lVar4 + 0x28) == local_88) {
    return puVar8;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


