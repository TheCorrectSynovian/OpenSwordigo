/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005c647c
 * Function: Caver::FontText::BoundsForLine
 * Signature: undefined __cdecl BoundsForLine(int param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::FontText::BoundsForLine(int) */

void Caver::FontText::BoundsForLine(int param_1)

{
  int *piVar1;
  int in_w1;
  Rectangle *pRVar2;
  Rectangle *in_x8;
  long lVar3;
  int iVar4;
  long lVar5;
  int *piVar6;
  int iVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  
  *(undefined8 *)in_x8 = 0;
  *(undefined8 *)(in_x8 + 8) = 0;
  lVar3 = *(long *)((ulong)(uint)param_1 + 200);
  piVar6 = (int *)(lVar3 + (long)in_w1 * 8 + 4);
  if (0 < *piVar6) {
    piVar1 = (int *)(lVar3 + (long)in_w1 * 8);
    lVar3 = *(long *)((ulong)(uint)param_1 + 0xb0);
    lVar5 = lVar3 + (long)*piVar1 * 0x24;
    uVar9 = *(undefined8 *)(lVar5 + 4);
    *(undefined8 *)(in_x8 + 8) = *(undefined8 *)(lVar5 + 0xc);
    *(undefined8 *)in_x8 = uVar9;
    iVar7 = *piVar6;
    iVar4 = *piVar1;
    if (0 < iVar7) {
      lVar5 = (long)iVar4;
      puVar8 = (undefined8 *)(lVar3 + lVar5 * 0x24 + 4);
      do {
        if ((0x20 < *(byte *)((long)puVar8 + -4)) ||
           ((1L << ((ulong)*(byte *)((long)puVar8 + -4) & 0x3f) & 0x100000600U) == 0)) {
          uVar9 = *puVar8;
          *(undefined8 *)(in_x8 + 8) = puVar8[1];
          *(undefined8 *)in_x8 = uVar9;
          iVar4 = *piVar1;
          iVar7 = *piVar6;
          break;
        }
        lVar5 = lVar5 + 1;
        puVar8 = (undefined8 *)((long)puVar8 + 0x24);
      } while (lVar5 < iVar7 + iVar4);
    }
    iVar7 = iVar7 + iVar4 + -1;
    if (iVar4 < iVar7) {
      pRVar2 = (Rectangle *)(lVar3 + (long)iVar7 * 0x24 + 4);
      lVar3 = (long)iVar7;
      do {
        if ((0x20 < (byte)pRVar2[-4]) ||
           ((1L << ((ulong)(byte)pRVar2[-4] & 0x3f) & 0x100000600U) == 0)) {
          Rectangle::ExpandToincludeRectangle(in_x8,pRVar2);
          return;
        }
        lVar3 = lVar3 + -1;
                    /* try { // try from 005c6574 to 006c65b7 has its CatchHandler @ 005c6574
                       catch() { ... } // from try @ 005c6574 with catch @ 005c6574
                       catch() { ... } // from try @ 005c65bc with catch @ 005c6574
                       catch() { ... } // from try @ 005c673c with catch @ 005c6574
                       catch() { ... } // from try @ 005c67c0 with catch @ 005c6574
                       catch() { ... } // from try @ 005c68ec with catch @ 005c6574
                       catch() { ... } // from try @ 005c6f78 with catch @ 005c6574
                       catch() { ... } // from try @ 005c7020 with catch @ 005c6574
                       catch() { ... } // from try @ 005c7180 with catch @ 005c6574
                       catch() { ... } // from try @ 005c71d4 with catch @ 005c6574
                       catch() { ... } // from try @ 005c74d4 with catch @ 005c6574
                       catch() { ... } // from try @ 005c7630 with catch @ 005c6574 */
        pRVar2 = pRVar2 + -0x24;
      } while (iVar4 < lVar3);
    }
  }
  return;
}


