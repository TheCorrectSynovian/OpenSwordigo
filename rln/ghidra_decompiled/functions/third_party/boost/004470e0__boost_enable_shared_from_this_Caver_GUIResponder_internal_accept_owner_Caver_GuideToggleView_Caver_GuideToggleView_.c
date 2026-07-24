/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 004470e0
 * Function: boost::enable_shared_from_this<Caver::GUIResponder>::_internal_accept_owner<Caver::GuideToggleView,Caver::GuideToggleView>
 * Signature: void __thiscall _internal_accept_owner<Caver::GuideToggleView,Caver::GuideToggleView>(enable_shared_from_this<Caver::GUIResponder> * this, shared_ptr * param_1, GuideToggleView * param_2)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* void 
   boost::enable_shared_from_this<Caver::GUIResponder>::_internal_accept_owner<Caver::GuideToggleView,
   Caver::GuideToggleView>(boost::shared_ptr<Caver::GuideToggleView> const*,
   Caver::GuideToggleView*) const */

void __thiscall
boost::enable_shared_from_this<Caver::GUIResponder>::
_internal_accept_owner<Caver::GuideToggleView,Caver::GuideToggleView>
          (enable_shared_from_this<Caver::GUIResponder> *this,shared_ptr *param_1,
          GuideToggleView *param_2)

{
  long *plVar1;
  long lVar2;
  long *plVar3;
  
  plVar1 = *(long **)(this + 8);
  if ((plVar1 == (long *)0x0) || (plVar1[1] == 0)) {
    plVar3 = *(long **)(param_1 + 8);
    if (plVar3 != (long *)0x0) {
                    /* try { // try from 0044710c to 0054710f has its CatchHandler @ 0044714c */
                    /* try { // try from 00447110 to 00547173 has its CatchHandler @ 004470ac */
      plVar3[1] = plVar3[1] + 1;
    }
    *(GuideToggleView **)this = param_2;
    if (plVar3 != plVar1) {
      if (plVar3 != (long *)0x0) {
        plVar3[2] = plVar3[2] + 1;
      }
      if ((plVar1 != (long *)0x0) && (lVar2 = plVar1[2], plVar1[2] = lVar2 + -1, lVar2 + -1 == 0)) {
                    /* catch() { ... } // from try @ 0044710c with catch @ 0044714c */
        (**(code **)(*plVar1 + 0x18))();
      }
      *(long **)(this + 8) = plVar3;
    }
                    /* catch() { ... } // from try @ 004470d4 with catch @ 00447160 */
    if ((plVar3 != (long *)0x0) && (lVar2 = plVar3[1], plVar3[1] = lVar2 + -1, lVar2 + -1 == 0)) {
      (**(code **)(*plVar3 + 0x10))(plVar3);
      lVar2 = plVar3[2];
      plVar3[2] = lVar2 + -1;
      if (lVar2 + -1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x004471a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x18))(plVar3);
        return;
      }
    }
  }
  return;
}


