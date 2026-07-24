/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0051ef8c
 * Function: Caver::MapMenuPage::CenterAtNode
 * Signature: undefined __thiscall CenterAtNode(MapMenuPage * this, MapViewNode * param_1, bool param_2)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::MapMenuPage::CenterAtNode(Caver::MapViewNode*, bool) */

void __thiscall
Caver::MapMenuPage::CenterAtNode(MapMenuPage *this,MapViewNode *param_1,bool param_2)

{
  long lVar1;
  Rectangle *this_00;
  Vector2 aVStack_70 [16];
  undefined8 local_60 [2];
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  local_40 = *(undefined8 *)(*(long *)(this + 0x1b8) + 0x7c);
  local_50 = CONCAT44((float)((ulong)*(undefined8 *)(*(long *)param_1 + 8) >> 0x20) -
                      (float)((ulong)local_40 >> 0x20) * 0.5,
                      (float)*(undefined8 *)(*(long *)param_1 + 8) - (float)local_40 * 0.5);
  Vector2::Rounded();
  local_48 = local_60[0];
  this_00 = *(Rectangle **)(this + 0x1b8);
  GUIView::ConvertRectFromView(this_00,(GUIView *)&local_48);
  Rectangle::TranslatedRectangle(aVStack_70);
  GUIScrollView::ScrollRectToVisible((GUIScrollView *)this_00,(Rectangle *)local_60,param_2);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


