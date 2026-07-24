/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0056de18
 * Function: Caver::SceneGridLayer::MoveObject
 * Signature: undefined __thiscall MoveObject(SceneGridLayer * this, SceneGridEntry * param_1, Rectangle * param_2)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::SceneGridLayer::MoveObject(Caver::SceneGridEntry*, Caver::Rectangle const&) */

void __thiscall
Caver::SceneGridLayer::MoveObject(SceneGridLayer *this,SceneGridEntry *param_1,Rectangle *param_2)

{
  bool bVar1;
  short sVar2;
  int iVar5;
  int iVar6;
  short sVar7;
  short sVar8;
  undefined8 uVar9;
  long lVar10;
  int iVar11;
  ulong uVar12;
  int iVar13;
  int iVar14;
  undefined8 uVar15;
  short sVar3;
  short sVar4;
  
  lVar10 = *(long *)(param_1 + 0x24);
  iVar5 = (int)(short)lVar10;
  uVar9 = GridRectForAABB(this,param_2);
  iVar6 = (int)(short)uVar9;
  iVar14 = (int)(short)((ulong)lVar10 >> 0x20);
  sVar7 = (short)((ulong)lVar10 >> 0x30);
  sVar8 = (short)((ulong)uVar9 >> 0x30);
  sVar2 = (short)((ulong)uVar9 >> 0x20);
  sVar3 = (short)((ulong)uVar9 >> 0x10);
  sVar4 = (short)((ulong)lVar10 >> 0x10);
  if (iVar14 <= sVar7) {
    uVar12 = (lVar10 << 0x10) >> 0x30 & 0xffffffff;
    do {
      iVar11 = (int)uVar12;
      iVar13 = iVar5;
      if (iVar5 <= (int)lVar10 >> 0x10) {
        do {
          if ((((sVar8 < iVar11) || (iVar11 < sVar2)) || (iVar13 < iVar6)) || (sVar3 < iVar13)) {
            SceneGridCell::RemoveEntry
                      ((SceneGridCell *)
                       (*(long *)(this + 0x30) +
                       (long)(iVar13 + iVar11 * *(int *)(this + 0x28)) * 0x10),param_1);
          }
          bVar1 = iVar13 < sVar4;
          iVar13 = iVar13 + 1;
        } while (bVar1);
      }
      uVar12 = (ulong)(iVar11 + 1);
    } while (iVar11 < sVar7);
  }
  *(undefined8 *)(param_1 + 0x24) = uVar9;
  uVar15 = *(undefined8 *)param_2;
  *(undefined8 *)(param_1 + 0x1c) = *(undefined8 *)(param_2 + 8);
  *(undefined8 *)(param_1 + 0x14) = uVar15;
  if (sVar2 <= sVar8) {
    iVar13 = (int)sVar2;
    do {
      iVar11 = iVar6;
      if (iVar6 <= (int)uVar9 >> 0x10) {
        do {
          if (((sVar7 < iVar13) || (iVar13 < iVar14)) || ((iVar11 < iVar5 || (sVar4 < iVar11)))) {
            SceneGridCell::AddEntry
                      ((SceneGridCell *)
                       (*(long *)(this + 0x30) +
                       (long)(iVar11 + iVar13 * *(int *)(this + 0x28)) * 0x10),param_1);
          }
          bVar1 = iVar11 < sVar3;
          iVar11 = iVar11 + 1;
        } while (bVar1);
      }
      bVar1 = iVar13 < sVar8;
      iVar13 = iVar13 + 1;
    } while (bVar1);
  }
  return;
}


