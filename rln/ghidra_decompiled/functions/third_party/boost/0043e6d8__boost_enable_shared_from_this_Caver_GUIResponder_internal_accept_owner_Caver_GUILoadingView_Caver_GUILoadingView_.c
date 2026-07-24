/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0043e6d8
 * Function: boost::enable_shared_from_this<Caver::GUIResponder>::_internal_accept_owner<Caver::GUILoadingView,Caver::GUILoadingView>
 * Signature: void __thiscall _internal_accept_owner<Caver::GUILoadingView,Caver::GUILoadingView>(enable_shared_from_this<Caver::GUIResponder> * this, shared_ptr * param_1, GUILoadingView * param_2)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* void 
   boost::enable_shared_from_this<Caver::GUIResponder>::_internal_accept_owner<Caver::GUILoadingView,
   Caver::GUILoadingView>(boost::shared_ptr<Caver::GUILoadingView> const*, Caver::GUILoadingView*)
   const */

void __thiscall
boost::enable_shared_from_this<Caver::GUIResponder>::
_internal_accept_owner<Caver::GUILoadingView,Caver::GUILoadingView>
          (enable_shared_from_this<Caver::GUIResponder> *this,shared_ptr *param_1,
          GUILoadingView *param_2)

{
  long *plVar1;
  long lVar2;
  long *plVar3;
  
  plVar1 = *(long **)(this + 8);
  if ((plVar1 == (long *)0x0) || (plVar1[1] == 0)) {
    plVar3 = *(long **)(param_1 + 8);
    if (plVar3 != (long *)0x0) {
      plVar3[1] = plVar3[1] + 1;
    }
    *(GUILoadingView **)this = param_2;
    if (plVar3 != plVar1) {
      if (plVar3 != (long *)0x0) {
                    /* try { // try from 0043e71c to 0053e72f has its CatchHandler @ 0043eaac */
        plVar3[2] = plVar3[2] + 1;
      }
      if ((plVar1 != (long *)0x0) && (lVar2 = plVar1[2], plVar1[2] = lVar2 + -1, lVar2 + -1 == 0)) {
                    /* try { // try from 0043e740 to 0053e74b has its CatchHandler @ 0043ea74 */
        (**(code **)(*plVar1 + 0x18))();
      }
      *(long **)(this + 8) = plVar3;
    }
    if ((plVar3 != (long *)0x0) && (lVar2 = plVar3[1], plVar3[1] = lVar2 + -1, lVar2 + -1 == 0)) {
                    /* try { // try from 0043e76c to 0053e7a7 has its CatchHandler @ 0043ea18 */
      (**(code **)(*plVar3 + 0x10))(plVar3);
      lVar2 = plVar3[2];
      plVar3[2] = lVar2 + -1;
      if (lVar2 + -1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x0043e7a0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x18))(plVar3);
        return;
      }
    }
  }
  return;
}


