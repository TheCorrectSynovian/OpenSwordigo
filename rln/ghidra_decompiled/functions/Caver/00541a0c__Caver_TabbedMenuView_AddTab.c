/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00541a0c
 * Function: Caver::TabbedMenuView::AddTab
 * Signature: undefined __thiscall AddTab(TabbedMenuView * this, string * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::TabbedMenuView::AddTab(std::string const&) */

void __thiscall Caver::TabbedMenuView::AddTab(TabbedMenuView *this,string *param_1)

{
  TabView::AddTab(*(TabView **)(this + 0x128),param_1);
  if (DAT_00683734 < *(float *)(this + 0x8c)) {
                    /* WARNING: Could not recover jumptable at 0x00541a4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)this + 0x58))(this);
    return;
  }
  return;
}


