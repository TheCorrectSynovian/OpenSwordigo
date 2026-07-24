/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0048b894
 * Function: Caver::ChooseAgeView::LayoutSubviews
 * Signature: undefined __thiscall LayoutSubviews(ChooseAgeView * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Caver::ChooseAgeView::LayoutSubviews() */

void __thiscall Caver::ChooseAgeView::LayoutSubviews(ChooseAgeView *this)

{
  long lVar1;
  long lVar2;
  float local_90;
  int iStack_8c;
  float fStack_88;
  float fStack_84;
  float local_80;
  float local_7c;
  float local_78;
  float local_74;
  float local_70;
  float local_6c;
  float local_68;
  float local_64;
  undefined8 local_60;
  undefined8 uStack_58;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  GUIView::LayoutSubviews((GUIView *)this);
  uStack_58 = *(undefined8 *)(this + 0x8c);
  local_60 = *(undefined8 *)(this + 0x84);
  GUIView::SetFrame(*(GUIView **)(this + 0xf8),(Rectangle *)&local_60);
  Rectangle::RectangleByInsetting((Rectangle *)(this + 0x84),0.0);
  local_80 = local_70 + 10.0;
  local_78 = (local_80 + ((local_70 + local_68) - local_80) + -10.0) - local_80;
  local_64 = (local_6c + local_64 + -10.0) - local_6c;
  local_7c = local_6c + _DAT_00690d1c;
  local_74 = (local_6c + local_64) - local_7c;
  local_70 = local_80;
  local_68 = local_78;
  GUIView::SetFrame(*(GUIView **)(this + 0x108),(Rectangle *)&local_80);
  GUIView::SetFrame(*(GUIView **)(this + 0x118),(Rectangle *)&local_80);
  local_90 = local_70 + 10.0;
  fStack_84 = *(float *)(*(GUIView **)(this + 0x128) + 0x80);
  fStack_88 = (local_90 + ((local_70 + local_68) - local_90) + -10.0) - local_90;
  iStack_8c = (int)((local_6c + (local_7c - local_6c) * 0.5) - fStack_84 * 0.5);
  GUIView::SetFrame(*(GUIView **)(this + 0x128),(Rectangle *)&local_90);
  Rectangle::RectangleByOutsetting((Rectangle *)(*(long *)(this + 0x128) + 0x84),20.0);
  lVar2 = *(long *)(this + 0x128);
  *(ulong *)(lVar2 + 0x9c) = CONCAT44(fStack_84,fStack_88);
  *(ulong *)(lVar2 + 0x94) = CONCAT44(iStack_8c,local_90);
  UpdateArrowFrames(this);
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


