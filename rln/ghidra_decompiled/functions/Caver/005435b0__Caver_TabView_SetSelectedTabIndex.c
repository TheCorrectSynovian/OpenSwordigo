/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005435b0
 * Function: Caver::TabView::SetSelectedTabIndex
 * Signature: undefined __thiscall SetSelectedTabIndex(TabView * this, int param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::TabView::SetSelectedTabIndex(int) */

void __thiscall Caver::TabView::SetSelectedTabIndex(TabView *this,int param_1)

{
  *(int *)(this + 0x208) = param_1;
  UpdateSprite(this);
  return;
}


