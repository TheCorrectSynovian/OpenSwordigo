/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003c0134
 * Function: Caver::Shape::ShapeWithPolygon
 * Signature: undefined __thiscall ShapeWithPolygon(Shape * this, Polygon * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Shape::ShapeWithPolygon(Caver::Polygon const&) */

void __thiscall Caver::Shape::ShapeWithPolygon(Shape *this,Polygon *param_1)

{
  ulong uVar1;
  long lVar2;
  long *plVar3;
  Polygon *pPVar4;
  undefined8 *puVar5;
  undefined4 *in_x8;
  undefined8 *puVar6;
  long lVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  undefined8 *puVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  Polygon *local_58;
  long *local_50;
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  pPVar4 = operator_new(0x28);
  *(undefined4 *)pPVar4 = *(undefined4 *)this;
  puVar8 = *(undefined8 **)(this + 8);
  puVar6 = *(undefined8 **)(this + 0x10);
  *(undefined8 *)(pPVar4 + 8) = 0;
  *(undefined8 *)(pPVar4 + 0x10) = 0;
  *(undefined8 *)(pPVar4 + 0x18) = 0;
  uVar1 = (long)puVar6 - (long)puVar8;
  if (uVar1 == 0) {
    puVar5 = (undefined8 *)0x0;
  }
  else {
    if ((ulong)((long)uVar1 >> 3) >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00665294();
    }
    puVar5 = operator_new(uVar1);
    puVar8 = *(undefined8 **)(this + 8);
    puVar6 = *(undefined8 **)(this + 0x10);
  }
  *(undefined8 **)(pPVar4 + 8) = puVar5;
  *(undefined8 **)(pPVar4 + 0x10) = puVar5;
  *(undefined8 **)(pPVar4 + 0x18) = puVar5 + ((long)uVar1 >> 3);
  if ((long)puVar6 - (long)puVar8 == 0) goto LAB_003c01f4;
  uVar10 = (long)puVar6 + (-8 - (long)puVar8);
  uVar1 = (uVar10 >> 3) + 1;
  puVar9 = puVar5;
  if (uVar1 < 8) {
LAB_003c01d8:
    do {
      puVar13 = puVar8 + 1;
      *puVar9 = *puVar8;
      puVar8 = puVar13;
      puVar9 = puVar9 + 1;
    } while (puVar6 != puVar13);
  }
  else {
    uVar11 = ((long)puVar6 - (long)puVar8) - 8U & 0xfffffffffffffff8;
    if ((puVar5 < (undefined8 *)((long)puVar8 + uVar11 + 4) &&
         puVar8 < (undefined8 *)((long)puVar5 + uVar11 + 4)) ||
       ((long)puVar5 + 4U < (long)puVar8 + uVar11 + 8 &&
        (long)puVar8 + 4U < (long)puVar5 + uVar11 + 8)) goto LAB_003c01d8;
    uVar12 = uVar1 & 0x3ffffffffffffff8;
    puVar9 = puVar8 + 4;
    puVar13 = puVar5 + 4;
    uVar11 = uVar12;
    do {
      uVar14 = puVar9[-4];
      uVar16 = puVar9[-1];
      uVar15 = puVar9[-2];
      uVar18 = puVar9[1];
      uVar17 = *puVar9;
      uVar20 = puVar9[3];
      uVar19 = puVar9[2];
      uVar11 = uVar11 - 8;
      puVar13[-3] = puVar9[-3];
      puVar13[-4] = uVar14;
      puVar13[-1] = uVar16;
      puVar13[-2] = uVar15;
      puVar13[1] = uVar18;
      *puVar13 = uVar17;
      puVar13[3] = uVar20;
      puVar13[2] = uVar19;
      puVar9 = puVar9 + 8;
      puVar13 = puVar13 + 8;
    } while (uVar11 != 0);
    puVar8 = puVar8 + uVar12;
    puVar9 = puVar5 + uVar12;
    if (uVar1 != uVar12) goto LAB_003c01d8;
  }
  puVar5 = (undefined8 *)((long)puVar5 + (uVar10 & 0xfffffffffffffff8) + 8);
LAB_003c01f4:
  *(undefined8 **)(pPVar4 + 0x10) = puVar5;
  *(undefined2 *)(pPVar4 + 0x20) = *(undefined2 *)(this + 0x20);
  local_58 = pPVar4;
  boost::detail::shared_count::shared_count<Caver::Polygon>((shared_count *)&local_50,pPVar4);
  boost::detail::sp_enable_shared_from_this(&local_58,pPVar4,pPVar4);
  plVar3 = local_50;
  if (local_50 == (long *)0x0) {
    *in_x8 = 3;
    *(Polygon **)(in_x8 + 2) = local_58;
    *(undefined8 *)(in_x8 + 4) = 0;
  }
  else {
    lVar7 = local_50[1];
    local_50[1] = lVar7 + 1;
    *in_x8 = 3;
    *(Polygon **)(in_x8 + 2) = local_58;
    *(long **)(in_x8 + 4) = local_50;
    if (lVar7 + 1 == 0) {
      (**(code **)(*local_50 + 0x10))(local_50);
      lVar7 = plVar3[2];
      plVar3[2] = lVar7 + -1;
      if (lVar7 + -1 == 0) {
        (**(code **)(*plVar3 + 0x18))(plVar3);
      }
    }
  }
  if ((local_50 != (long *)0x0) && (lVar7 = local_50[1], local_50[1] = lVar7 + -1, lVar7 + -1 == 0))
  {
    (**(code **)(*local_50 + 0x10))(local_50);
    lVar7 = local_50[2];
    local_50[2] = lVar7 + -1;
    if (lVar7 + -1 == 0) {
      (**(code **)(*local_50 + 0x18))(local_50);
    }
  }
  if (*(long *)(lVar2 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


