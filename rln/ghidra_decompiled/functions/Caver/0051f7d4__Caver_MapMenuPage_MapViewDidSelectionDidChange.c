/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0051f7d4
 * Function: Caver::MapMenuPage::MapViewDidSelectionDidChange
 * Signature: undefined __thiscall MapViewDidSelectionDidChange(MapMenuPage * this, MapView * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::MapMenuPage::MapViewDidSelectionDidChange(Caver::MapView*) */

void __thiscall Caver::MapMenuPage::MapViewDidSelectionDidChange(MapMenuPage *this,MapView *param_1)

{
  long lVar1;
  long lVar2;
  Rectangle *this_00;
  Vector2 aVStack_68 [16];
  Rectangle aRStack_58 [16];
  float local_48;
  undefined4 local_44;
  undefined8 local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  if (param_1[0x3f8] != (MapView)0x0) {
    lVar2 = **(long **)(*(long *)(*(long *)(this + 0x1c8) + 0x118) +
                       *(long *)(*(long *)(this + 0x1c8) + 0x400) * 0x10);
    local_44 = *(undefined4 *)(lVar2 + 0xc);
    local_40 = DAT_006946f0;
    local_48 = *(float *)(lVar2 + 8) + DAT_00688018;
    this_00 = *(Rectangle **)(this + 0x1b8);
    GUIView::ConvertRectFromView(this_00,(GUIView *)&local_48);
    Rectangle::TranslatedRectangle(aVStack_68);
    GUIScrollView::ScrollRectToVisible((GUIScrollView *)this_00,aRStack_58,true);
  }
  UpdateTitle(this);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


