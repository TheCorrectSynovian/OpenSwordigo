/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0051f700
 * Function: Caver::MapMenuPage::ScrollNodeToVisible
 * Signature: undefined __thiscall ScrollNodeToVisible(MapMenuPage * this, MapViewNode * param_1, bool param_2)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::MapMenuPage::ScrollNodeToVisible(Caver::MapViewNode*, bool) */

void __thiscall
Caver::MapMenuPage::ScrollNodeToVisible(MapMenuPage *this,MapViewNode *param_1,bool param_2)

{
  long lVar1;
  Rectangle *this_00;
  Vector2 aVStack_68 [16];
  Rectangle aRStack_58 [16];
  float local_48;
  undefined4 local_44;
  undefined8 local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  local_44 = *(undefined4 *)(*(long *)param_1 + 0xc);
  local_40 = DAT_006946f0;
                    /* try { // try from 0051f74c to 0061f753 has its CatchHandler @ 0051f7d0 */
  local_48 = *(float *)(*(long *)param_1 + 8) + DAT_00688018;
                    /* try { // try from 0051f754 to 0061f7e3 has its CatchHandler @ 0051f6e8 */
  this_00 = *(Rectangle **)(this + 0x1b8);
  GUIView::ConvertRectFromView(this_00,(GUIView *)&local_48);
  Rectangle::TranslatedRectangle(aVStack_68);
  GUIScrollView::ScrollRectToVisible((GUIScrollView *)this_00,aRStack_58,param_2);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


