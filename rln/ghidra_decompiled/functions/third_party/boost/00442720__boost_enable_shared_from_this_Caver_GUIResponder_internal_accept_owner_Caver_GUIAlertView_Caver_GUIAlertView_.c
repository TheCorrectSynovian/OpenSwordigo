/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00442720
 * Function: boost::enable_shared_from_this<Caver::GUIResponder>::_internal_accept_owner<Caver::GUIAlertView,Caver::GUIAlertView>
 * Signature: void __thiscall _internal_accept_owner<Caver::GUIAlertView,Caver::GUIAlertView>(enable_shared_from_this<Caver::GUIResponder> * this, shared_ptr * param_1, GUIAlertView * param_2)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* void 
   boost::enable_shared_from_this<Caver::GUIResponder>::_internal_accept_owner<Caver::GUIAlertView,
   Caver::GUIAlertView>(boost::shared_ptr<Caver::GUIAlertView> const*, Caver::GUIAlertView*) const
    */

void __thiscall
boost::enable_shared_from_this<Caver::GUIResponder>::
_internal_accept_owner<Caver::GUIAlertView,Caver::GUIAlertView>
          (enable_shared_from_this<Caver::GUIResponder> *this,shared_ptr *param_1,
          GUIAlertView *param_2)

{
  long *plVar1;
  long lVar2;
  long *plVar3;
  
                    /* try { // try from 00442720 to 00542727 has its CatchHandler @ 00442b24 */
                    /* try { // try from 00442728 to 00542733 has its CatchHandler @ 00442b28 */
  plVar1 = *(long **)(this + 8);
  if ((plVar1 == (long *)0x0) || (plVar1[1] == 0)) {
    plVar3 = *(long **)(param_1 + 8);
    if (plVar3 != (long *)0x0) {
      plVar3[1] = plVar3[1] + 1;
    }
    *(GUIAlertView **)this = param_2;
    if (plVar3 != plVar1) {
      if (plVar3 != (long *)0x0) {
        plVar3[2] = plVar3[2] + 1;
      }
      if ((plVar1 != (long *)0x0) && (lVar2 = plVar1[2], plVar1[2] = lVar2 + -1, lVar2 + -1 == 0)) {
        (**(code **)(*plVar1 + 0x18))();
      }
      *(long **)(this + 8) = plVar3;
    }
                    /* try { // try from 0044279c to 005427a7 has its CatchHandler @ 00442a38 */
    if ((plVar3 != (long *)0x0) && (lVar2 = plVar3[1], plVar3[1] = lVar2 + -1, lVar2 + -1 == 0)) {
      (**(code **)(*plVar3 + 0x10))(plVar3);
      lVar2 = plVar3[2];
      plVar3[2] = lVar2 + -1;
      if (lVar2 + -1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x004427e8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x18))(plVar3);
        return;
      }
    }
  }
                    /* try { // try from 004427c8 to 005427ef has its CatchHandler @ 004429e4 */
  return;
}


