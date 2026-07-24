/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 004a05b8
 * Function: Caver::ProfilePanelView::AlertViewClickedButtonAtIndex
 * Signature: undefined __thiscall AlertViewClickedButtonAtIndex(ProfilePanelView * this, GUIAlertView * param_1, int param_2)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::ProfilePanelView::AlertViewClickedButtonAtIndex(Caver::GUIAlertView*, int) */

undefined8 __thiscall
Caver::ProfilePanelView::AlertViewClickedButtonAtIndex
          (ProfilePanelView *this,GUIAlertView *param_1,int param_2)

{
  undefined8 uVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  
                    /* try { // try from 004a05c4 to 005a05ef has its CatchHandler @ 004a0644 */
  if (*(GUIAlertView **)(this + 0x120) == param_1) {
    if ((param_2 == 0) && (plVar2 = *(long **)(this + 0x160), plVar2 != (long *)0x0)) {
      (**(code **)(*plVar2 + 8))(plVar2,this);
    }
  }
  else if ((param_2 == 0) && (*(GUIAlertView **)(this + 0x150) == param_1)) {
    lVar4 = *(long *)(*(long *)(this + 0x168) + 0x80);
    plVar2 = *(long **)(*(long *)(this + 0x168) + 0x88);
    if ((plVar2 != (long *)0x0) && (plVar2[1] == 0)) {
      (**(code **)(*plVar2 + 0x10))(plVar2);
                    /* try { // try from 004a0618 to 005a0623 has its CatchHandler @ 004a0648 */
      lVar3 = plVar2[2];
      plVar2[2] = lVar3 + -1;
                    /* try { // try from 004a0624 to 005a064b has its CatchHandler @ 004a00dc */
      if (lVar3 + -1 == 0) {
        (**(code **)(*plVar2 + 0x18))(plVar2);
      }
    }
    if (lVar4 == 0) {
      PlayerProfile::LoadGameState(*(PlayerProfile **)(this + 0x168));
    }
                    /* catch() { ... } // from try @ 004a05c4 with catch @ 004a0644 */
                    /* catch() { ... } // from try @ 004a0618 with catch @ 004a0648 */
    lVar4 = *(long *)(this + 0x168);
    uVar1 = (**(code **)(*(long *)**(undefined8 **)(param_1 + 0x140) + 0x158))();
    FUN_0066a6a8(lVar4 + 0x20,uVar1);
    PlayerProfile::Save(*(PlayerProfile **)(this + 0x168),true);
    InitWithProfile(this,(shared_ptr *)(this + 0x168));
  }
  return 1;
}


