/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005c6280
 * Function: Caver::FontText::AlignHorizontally
 * Signature: undefined __thiscall AlignHorizontally(FontText * this, GUITextAlignment param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::FontText::AlignHorizontally(Caver::GUITextAlignment) */

void __thiscall Caver::FontText::AlignHorizontally(FontText *this,int param_2)

{
  int *piVar1;
  long lVar2;
  Rectangle *pRVar3;
  long lVar4;
  int iVar5;
  long lVar6;
  int *piVar7;
  int iVar8;
  undefined8 *puVar9;
  long lVar10;
  float local_78 [2];
  undefined8 local_70;
  undefined8 uStack_68;
  long local_58;
  
  lVar2 = tpidr_el0;
  local_58 = *(long *)(lVar2 + 0x28);
  if (1 < *(int *)(this + 0x3c)) {
    lVar10 = 0;
    do {
      local_70 = 0;
      uStack_68 = 0;
      piVar1 = (int *)(*(long *)(this + 200) + lVar10 * 8);
      piVar7 = piVar1 + 1;
      if (0 < *piVar7) {
        lVar4 = *(long *)(this + 0xb0);
        lVar6 = lVar4 + (long)*piVar1 * 0x24;
        uStack_68 = *(undefined8 *)(lVar6 + 0xc);
        local_70 = *(undefined8 *)(lVar6 + 4);
        iVar8 = *piVar7;
        iVar5 = *piVar1;
                    /* catch() { ... } // from try @ 005c60f8 with catch @ 005c6314 */
        if (0 < iVar8) {
          lVar6 = (long)iVar5;
          puVar9 = (undefined8 *)(lVar4 + lVar6 * 0x24 + 4);
          do {
                    /* try { // try from 005c6338 to 006c635f has its CatchHandler @ 005c6364 */
            if ((0x20 < *(byte *)((long)puVar9 + -4)) ||
               ((1L << ((ulong)*(byte *)((long)puVar9 + -4) & 0x3f) & 0x100000600U) == 0)) {
              uStack_68 = puVar9[1];
              local_70 = *puVar9;
                    /* try { // try from 005c6360 to 006c6573 has its CatchHandler @ 005c6014 */
                    /* catch() { ... } // from try @ 005c6338 with catch @ 005c6364 */
              iVar5 = *piVar1;
                    /* catch() { ... } // from try @ 005c619c with catch @ 005c6368 */
              iVar8 = *piVar7;
              break;
            }
            lVar6 = lVar6 + 1;
            puVar9 = (undefined8 *)((long)puVar9 + 0x24);
          } while (lVar6 < iVar8 + iVar5);
        }
                    /* catch() { ... } // from try @ 005c6090 with catch @ 005c636c */
        iVar8 = iVar8 + iVar5 + -1;
                    /* catch() { ... } // from try @ 005c607c with catch @ 005c6374 */
        if (iVar5 < iVar8) {
                    /* catch() { ... } // from try @ 005c606c with catch @ 005c637c */
          lVar6 = (long)iVar8;
          pRVar3 = (Rectangle *)(lVar4 + (long)iVar8 * 0x24 + 4);
          do {
            if ((0x20 < (byte)pRVar3[-4]) ||
               ((1L << ((ulong)(byte)pRVar3[-4] & 0x3f) & 0x100000600U) == 0)) {
              Rectangle::ExpandToincludeRectangle((Rectangle *)&local_70,pRVar3);
              break;
            }
            lVar6 = lVar6 + -1;
            pRVar3 = pRVar3 + -0x24;
          } while (iVar5 < lVar6);
        }
      }
      if (param_2 == 4) {
        local_78[0] = (float)(int)((*(float *)(this + 0x40) + *(float *)(this + 0x48) * 0.5) -
                                  (float)uStack_68 * 0.5);
      }
      else if (param_2 == 1) {
                    /* catch() { ... } // from try @ 005c6050 with catch @ 005c63ec */
        local_78[0] = (*(float *)(this + 0x40) + *(float *)(this + 0x48)) - (float)uStack_68;
                    /* catch() { ... } // from try @ 005c60a4 with catch @ 005c63f8
                       catch() { ... } // from try @ 005c6140 with catch @ 005c63f8 */
      }
      else {
        local_78[0] = (float)local_70;
        if (param_2 == 0) {
          local_78[0] = *(float *)(this + 0x40);
        }
      }
      local_78[0] = local_78[0] - (float)local_70;
      local_78[1] = 0.0;
      TranslateLine(this,(int)lVar10,(Vector2 *)local_78);
      lVar10 = lVar10 + 1;
    } while (lVar10 < *(int *)(this + 0x3c));
  }
  if (*(long *)(lVar2 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


