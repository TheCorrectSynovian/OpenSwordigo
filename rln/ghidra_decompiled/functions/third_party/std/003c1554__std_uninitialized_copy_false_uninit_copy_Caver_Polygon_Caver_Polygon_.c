/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003c1554
 * Function: std::__uninitialized_copy<false>::__uninit_copy<Caver::Polygon*,Caver::Polygon*>
 * Signature: Polygon * __cdecl __uninit_copy<Caver::Polygon*,Caver::Polygon*>(Polygon * param_1, Polygon * param_2, Polygon * param_3)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Polygon* std::__uninitialized_copy<false>::__uninit_copy<Caver::Polygon*,
   Caver::Polygon*>(Caver::Polygon*, Caver::Polygon*, Caver::Polygon*) */

Polygon * std::__uninitialized_copy<false>::__uninit_copy<Caver::Polygon*,Caver::Polygon*>
                    (Polygon *param_1,Polygon *param_2,Polygon *param_3)

{
  Polygon *pPVar1;
  long lVar2;
  long lVar3;
  undefined8 *puVar4;
  ulong uVar5;
  undefined8 *puVar6;
  ulong uVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  ulong uVar10;
  ulong uVar11;
  undefined8 *puVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  
  do {
    if (param_1 == param_2) {
      return param_3;
    }
    *(undefined4 *)param_3 = *(undefined4 *)param_1;
    lVar2 = *(long *)(param_1 + 8);
    lVar3 = *(long *)(param_1 + 0x10);
    *(undefined8 *)(param_3 + 8) = 0;
    *(undefined8 *)(param_3 + 0x10) = 0;
    *(undefined8 *)(param_3 + 0x18) = 0;
    uVar5 = lVar3 - lVar2;
    if (uVar5 == 0) {
      puVar6 = (undefined8 *)0x0;
    }
    else {
      if ((ulong)((long)uVar5 >> 3) >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00665294();
      }
      puVar6 = operator_new(uVar5);
    }
    *(undefined8 **)(param_3 + 8) = puVar6;
    *(undefined8 **)(param_3 + 0x10) = puVar6;
    *(undefined8 **)(param_3 + 0x18) = puVar6 + ((long)uVar5 >> 3);
    puVar9 = *(undefined8 **)(param_1 + 8);
    puVar4 = *(undefined8 **)(param_1 + 0x10);
    lVar2 = (long)puVar4 - (long)puVar9;
    if (lVar2 != 0) {
      uVar7 = lVar2 - 8;
      uVar5 = (uVar7 >> 3) + 1;
      puVar8 = puVar6;
      if (uVar5 < 8) {
LAB_003c1694:
        do {
          puVar12 = puVar9 + 1;
          *puVar8 = *puVar9;
          puVar9 = puVar12;
          puVar8 = puVar8 + 1;
        } while (puVar4 != puVar12);
      }
      else {
        uVar10 = uVar7 & 0xfffffffffffffff8;
        if ((puVar6 < (undefined8 *)((long)puVar9 + 4U + uVar10) &&
             puVar9 < (undefined8 *)((long)puVar6 + 4U + uVar10)) ||
           ((long)puVar6 + 4U < (long)puVar9 + uVar10 + 8 &&
            (long)puVar9 + 4U < (long)puVar6 + uVar10 + 8)) goto LAB_003c1694;
        uVar11 = uVar5 & 0x3ffffffffffffff8;
        puVar8 = puVar9 + 4;
        puVar12 = puVar6 + 4;
        uVar10 = uVar11;
        do {
          uVar13 = puVar8[-4];
          uVar15 = puVar8[-1];
          uVar14 = puVar8[-2];
          uVar17 = puVar8[1];
          uVar16 = *puVar8;
          uVar19 = puVar8[3];
          uVar18 = puVar8[2];
          uVar10 = uVar10 - 8;
          puVar12[-3] = puVar8[-3];
          puVar12[-4] = uVar13;
          puVar12[-1] = uVar15;
          puVar12[-2] = uVar14;
          puVar12[1] = uVar17;
          *puVar12 = uVar16;
          puVar12[3] = uVar19;
          puVar12[2] = uVar18;
          puVar8 = puVar8 + 8;
          puVar12 = puVar12 + 8;
        } while (uVar10 != 0);
        puVar9 = puVar9 + uVar11;
        puVar8 = puVar6 + uVar11;
        if (uVar5 != uVar11) goto LAB_003c1694;
      }
      puVar6 = (undefined8 *)((long)puVar6 + (uVar7 & 0xfffffffffffffff8) + 8);
    }
    *(undefined8 **)(param_3 + 0x10) = puVar6;
    pPVar1 = param_1 + 0x20;
    param_1 = param_1 + 0x28;
    *(undefined2 *)(param_3 + 0x20) = *(undefined2 *)pPVar1;
    param_3 = param_3 + 0x28;
  } while( true );
}


