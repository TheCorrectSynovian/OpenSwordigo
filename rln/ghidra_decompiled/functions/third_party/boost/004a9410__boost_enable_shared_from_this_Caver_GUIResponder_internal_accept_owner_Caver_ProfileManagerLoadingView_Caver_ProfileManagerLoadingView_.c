/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 004a9410
 * Function: boost::enable_shared_from_this<Caver::GUIResponder>::_internal_accept_owner<Caver::ProfileManagerLoadingView,Caver::ProfileManagerLoadingView>
 * Signature: void __thiscall _internal_accept_owner<Caver::ProfileManagerLoadingView,Caver::ProfileManagerLoadingView>(enable_shared_from_this<Caver::GUIResponder> * this, shared_ptr * param_1, ProfileManagerLoadingView * param_2)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* void 
   boost::enable_shared_from_this<Caver::GUIResponder>::_internal_accept_owner<Caver::ProfileManagerLoadingView,
   Caver::ProfileManagerLoadingView>(boost::shared_ptr<Caver::ProfileManagerLoadingView> const*,
   Caver::ProfileManagerLoadingView*) const */

void __thiscall
boost::enable_shared_from_this<Caver::GUIResponder>::
_internal_accept_owner<Caver::ProfileManagerLoadingView,Caver::ProfileManagerLoadingView>
          (enable_shared_from_this<Caver::GUIResponder> *this,shared_ptr *param_1,
          ProfileManagerLoadingView *param_2)

{
  long *plVar1;
  long lVar2;
  long *plVar3;
  
  plVar1 = *(long **)(this + 8);
                    /* catch() { ... } // from try @ 004a9500 with catch @ 004a942c */
  if ((plVar1 == (long *)0x0) || (plVar1[1] == 0)) {
    plVar3 = *(long **)(param_1 + 8);
    if (plVar3 != (long *)0x0) {
      plVar3[1] = plVar3[1] + 1;
    }
    *(ProfileManagerLoadingView **)this = param_2;
    if (plVar3 != plVar1) {
      if (plVar3 != (long *)0x0) {
                    /* try { // try from 004a9458 to 005a946f has its CatchHandler @ 004a99d0 */
        plVar3[2] = plVar3[2] + 1;
      }
      if ((plVar1 != (long *)0x0) && (lVar2 = plVar1[2], plVar1[2] = lVar2 + -1, lVar2 + -1 == 0)) {
                    /* try { // try from 004a9474 to 005a9487 has its CatchHandler @ 004a9950 */
        (**(code **)(*plVar1 + 0x18))();
      }
      *(long **)(this + 8) = plVar3;
    }
                    /* try { // try from 004a9490 to 005a94a3 has its CatchHandler @ 004a994c */
    if ((plVar3 != (long *)0x0) && (lVar2 = plVar3[1], plVar3[1] = lVar2 + -1, lVar2 + -1 == 0)) {
      (**(code **)(*plVar3 + 0x10))(plVar3);
                    /* try { // try from 004a94a8 to 005a94bb has its CatchHandler @ 004a9948 */
      lVar2 = plVar3[2];
      plVar3[2] = lVar2 + -1;
      if (lVar2 + -1 == 0) {
                    /* try { // try from 004a94c4 to 005a94d7 has its CatchHandler @ 004a9944 */
                    /* WARNING: Could not recover jumptable at 0x004a94d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x18))(plVar3);
        return;
      }
    }
  }
  return;
}


