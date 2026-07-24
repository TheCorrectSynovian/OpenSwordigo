/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00494128
 * Function: Caver::MainMenuView::SetPrivacyButtonTitle
 * Signature: undefined __thiscall SetPrivacyButtonTitle(MainMenuView * this, string * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::MainMenuView::SetPrivacyButtonTitle(std::string const&) */

void __thiscall Caver::MainMenuView::SetPrivacyButtonTitle(MainMenuView *this,string *param_1)

{
  GUIView *pGVar1;
  long lVar2;
  int iVar3;
  long lVar4;
  size_t __n;
  GUIButton *this_00;
  float local_58;
  float fStack_54;
  float local_50;
  undefined8 local_48;
  undefined8 uStack_40;
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  lVar4 = GUIButton::titleLabel(*(GUIButton **)(this + 0x168));
  __n = *(size_t *)((long)*(void **)param_1 + -0x18);
  if (__n == *(size_t *)((long)*(void **)(lVar4 + 0x100) + -0x18)) {
    iVar3 = memcmp(*(void **)param_1,*(void **)(lVar4 + 0x100),__n);
    if (iVar3 == 0) goto LAB_0049421c;
  }
  GUIButton::SetTitle(*(GUIButton **)(this + 0x168),param_1);
  this_00 = *(GUIButton **)(this + 0x168);
  GUIButton::titleLabel(this_00);
  GUILabel::TextSize();
  local_48 = *(undefined8 *)(this_00 + 0x74);
  uStack_40 = CONCAT44(fStack_54,local_58);
  GUIView::SetFrame((GUIView *)this_00,(Rectangle *)&local_48);
  lVar4 = *(long *)(this + 0x168);
  Rectangle::RectangleByOutsetting((Rectangle *)(lVar4 + 0x84),5.0);
  *(undefined8 *)(lVar4 + 0x9c) = uStack_40;
  *(undefined8 *)(lVar4 + 0x94) = local_48;
  GUIView::safeBounds();
  pGVar1 = *(GUIView **)(this + 0x168) + 0x7c;
  uStack_40 = *(undefined8 *)pGVar1;
  local_48 = CONCAT44(fStack_54 + 9.0,(local_58 + local_50 + -10.0) - *(float *)pGVar1);
  GUIView::SetFrame(*(GUIView **)(this + 0x168),(Rectangle *)&local_48);
LAB_0049421c:
  if (*(long *)(lVar2 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


