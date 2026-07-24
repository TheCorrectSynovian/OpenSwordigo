/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003bffa8
 * Function: std::vector<Caver::Polygon,std::allocator<Caver::Polygon>>::push_back
 * Signature: undefined __thiscall push_back(vector<Caver::Polygon,std::allocator<Caver::Polygon>> * this, Polygon * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* std::vector<Caver::Polygon, std::allocator<Caver::Polygon> >::push_back(Caver::Polygon const&) */

void __thiscall
std::vector<Caver::Polygon,std::allocator<Caver::Polygon>>::push_back
          (vector<Caver::Polygon,std::allocator<Caver::Polygon>> *this,Polygon *param_1)

{
  undefined4 *puVar1;
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
  
  puVar1 = *(undefined4 **)(this + 8);
  if (puVar1 == *(undefined4 **)(this + 0x10)) {
    _M_insert_aux(this,puVar1,param_1);
    return;
  }
  *puVar1 = *(undefined4 *)param_1;
  lVar2 = *(long *)(param_1 + 8);
  lVar3 = *(long *)(param_1 + 0x10);
  *(undefined8 *)(puVar1 + 2) = 0;
  *(undefined8 *)(puVar1 + 4) = 0;
  *(undefined8 *)(puVar1 + 6) = 0;
  uVar5 = lVar3 - lVar2;
  puVar6 = (undefined8 *)0x0;
  if (uVar5 != 0) {
    if ((ulong)((long)uVar5 >> 3) >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00665294();
    }
    puVar6 = operator_new(uVar5);
  }
  *(undefined8 **)(puVar1 + 2) = puVar6;
  *(undefined8 **)(puVar1 + 4) = puVar6;
  *(undefined8 **)(puVar1 + 6) = puVar6 + ((long)uVar5 >> 3);
  puVar8 = *(undefined8 **)(param_1 + 8);
  puVar4 = *(undefined8 **)(param_1 + 0x10);
  lVar2 = (long)puVar4 - (long)puVar8;
  if (lVar2 == 0) goto LAB_003c0044;
  uVar7 = lVar2 - 8;
  uVar5 = (uVar7 >> 3) + 1;
  puVar9 = puVar6;
  if (uVar5 < 8) {
LAB_003c0028:
    do {
      puVar12 = puVar8 + 1;
      *puVar9 = *puVar8;
      puVar8 = puVar12;
      puVar9 = puVar9 + 1;
    } while (puVar4 != puVar12);
  }
  else {
    uVar10 = uVar7 & 0xfffffffffffffff8;
    if ((puVar6 < (undefined8 *)((long)puVar8 + uVar10 + 4) &&
         puVar8 < (undefined8 *)((long)puVar6 + uVar10 + 4)) ||
       ((long)puVar6 + 4U < (long)puVar8 + uVar10 + 8 &&
        (long)puVar8 + 4U < (long)puVar6 + uVar10 + 8)) goto LAB_003c0028;
    uVar11 = uVar5 & 0x3ffffffffffffff8;
    puVar9 = puVar8 + 4;
    puVar12 = puVar6 + 4;
    uVar10 = uVar11;
    do {
      uVar13 = puVar9[-4];
      uVar15 = puVar9[-1];
      uVar14 = puVar9[-2];
      uVar17 = puVar9[1];
      uVar16 = *puVar9;
      uVar19 = puVar9[3];
      uVar18 = puVar9[2];
      uVar10 = uVar10 - 8;
      puVar12[-3] = puVar9[-3];
      puVar12[-4] = uVar13;
      puVar12[-1] = uVar15;
      puVar12[-2] = uVar14;
      puVar12[1] = uVar17;
      *puVar12 = uVar16;
      puVar12[3] = uVar19;
      puVar12[2] = uVar18;
      puVar9 = puVar9 + 8;
      puVar12 = puVar12 + 8;
    } while (uVar10 != 0);
    puVar8 = puVar8 + uVar11;
    puVar9 = puVar6 + uVar11;
    if (uVar5 != uVar11) goto LAB_003c0028;
  }
  puVar6 = (undefined8 *)((long)puVar6 + (uVar7 & 0xfffffffffffffff8) + 8);
LAB_003c0044:
  *(undefined8 **)(puVar1 + 4) = puVar6;
  *(undefined2 *)(puVar1 + 8) = *(undefined2 *)(param_1 + 0x20);
  *(long *)(this + 8) = *(long *)(this + 8) + 0x28;
  return;
}


