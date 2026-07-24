/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0053e2a0
 * Function: Caver::SkillPickerView::HandleKeyboardEvent
 * Signature: undefined __thiscall HandleKeyboardEvent(SkillPickerView * this, GUIKeyboardEvent * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::SkillPickerView::HandleKeyboardEvent(Caver::GUIKeyboardEvent const&) */

void __thiscall
Caver::SkillPickerView::HandleKeyboardEvent(SkillPickerView *this,GUIKeyboardEvent *param_1)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  long lVar6;
  bool bVar7;
  long *plVar8;
  undefined8 *puVar9;
  ulong uVar10;
  int iVar11;
  code *pcVar12;
  long lVar13;
  undefined8 local_58;
  long *local_50;
  long local_48;
  
  lVar6 = tpidr_el0;
                    /* try { // try from 0053e2bc to 0063e32b has its CatchHandler @ 0053e334 */
  local_48 = *(long *)(lVar6 + 0x28);
  if (*(int *)(param_1 + 0xc) == 1) {
    iVar11 = *(int *)(param_1 + 0x10);
    bVar7 = false;
    if ((iVar11 - 0x11U < 0x38) &&
       ((1L << ((ulong)(iVar11 - 0x11U) & 0x3f) & 0x81000000210401U) != 0)) {
      if (*(long *)(this + 0xf8) == 0) {
        bVar7 = false;
      }
      else {
        bVar7 = true;
        AddAnimations(SUB81(this,0));
        plVar8 = *(long **)(this + 0xf8);
        this[0xe5] = (SkillPickerView)0x0;
        if (plVar8 != (long *)0x0) {
                    /* try { // try from 0053e32c to 0063e337 has its CatchHandler @ 0053e14c */
                    /* catch() { ... } // from try @ 0053e2bc with catch @ 0053e334 */
          (**(code **)(*plVar8 + 8))(plVar8,this);
          bVar7 = true;
        }
      }
      iVar11 = *(int *)(param_1 + 0x10);
    }
    if ((iVar11 == 0xbd) || (iVar11 == 0xbb)) {
      iVar4 = *(int *)(this + 0x120);
      iVar2 = 1;
      if (iVar11 == 0xbb) {
        iVar2 = -1;
      }
      if (0 < iVar4) {
        uVar5 = *(uint *)(this + 0x140);
        uVar10 = (ulong)uVar5;
        iVar11 = 0;
        do {
          uVar1 = (int)uVar10 + iVar2;
          uVar3 = iVar4 - 1;
          if (-1 < (int)uVar1) {
            uVar3 = uVar1;
          }
          if (iVar4 <= (int)uVar3) {
            uVar3 = 0;
          }
          uVar10 = (ulong)uVar3;
          if (*(char *)(*(long *)(*(long *)(this + 0x128) +
                                 (-(ulong)(uVar3 >> 0x1f) & 0xfffffff000000000 | uVar10 << 4)) +
                       0x120) != '\0') {
            if (uVar3 != uVar5) {
              if (-1 < (int)uVar5) {
                SetSlotSelected(this,uVar5,false);
              }
              *(uint *)(this + 0x140) = uVar3;
              SetSlotSelected(this,uVar3,true);
              puVar9 = *(undefined8 **)(this + 0xf8);
              if (puVar9 != (undefined8 *)0x0) {
                lVar13 = *(long *)(*(long *)(this + 0x128) + (long)*(int *)(this + 0x140) * 0x10);
                local_58 = *(undefined8 *)(lVar13 + 0x110);
                    /* catch(type#1 @ 00000000) { ... } // from try @ 0053e4c0 with catch @ 0053e404
                       catch(type#1 @ 00000000) { ... } // from try @ 0053e530 with catch @ 0053e404
                        */
                pcVar12 = *(code **)*puVar9;
                local_50 = *(long **)(lVar13 + 0x118);
                if (local_50 != (long *)0x0) {
                  local_50[1] = local_50[1] + 1;
                }
                (*pcVar12)(puVar9,this,&local_58);
                plVar8 = local_50;
                if ((local_50 != (long *)0x0) &&
                   (lVar13 = local_50[1], local_50[1] = lVar13 + -1, lVar13 + -1 == 0)) {
                    /* try { // try from 0053e450 to 0063e477 has its CatchHandler @ 0053e4dc */
                  (**(code **)(*local_50 + 0x10))(local_50);
                  lVar13 = plVar8[2];
                  plVar8[2] = lVar13 + -1;
                  if (lVar13 + -1 == 0) {
                    (**(code **)(*plVar8 + 0x18))(plVar8);
                  }
                }
              }
            }
            break;
          }
          iVar11 = iVar11 + 1;
        } while (iVar11 < iVar4);
      }
    }
    if (bVar7) goto LAB_0053e484;
  }
  GUIResponder::HandleKeyboardEvent((GUIResponder *)this,param_1);
LAB_0053e484:
  if (*(long *)(lVar6 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
                    /* try { // try from 0053e498 to 0063e4bf has its CatchHandler @ 0053e4d4 */
  return;
}


