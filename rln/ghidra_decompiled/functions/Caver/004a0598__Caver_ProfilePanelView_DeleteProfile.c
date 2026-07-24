/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 004a0598
 * Function: Caver::ProfilePanelView::DeleteProfile
 * Signature: undefined __thiscall DeleteProfile(ProfilePanelView * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::ProfilePanelView::DeleteProfile() */

void __thiscall Caver::ProfilePanelView::DeleteProfile(ProfilePanelView *this)

{
  long *plVar1;
  
  plVar1 = *(long **)(this + 0x160);
  if (plVar1 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x004a05b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 8))(plVar1,this);
    return;
  }
  return;
}


