/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 004958b0
 * Function: boost::enable_shared_from_this<Caver::GUIResponder>::_internal_accept_owner<Caver::BadgeCountView,Caver::BadgeCountView>
 * Signature: void __thiscall _internal_accept_owner<Caver::BadgeCountView,Caver::BadgeCountView>(enable_shared_from_this<Caver::GUIResponder> * this, shared_ptr * param_1, BadgeCountView * param_2)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* void 
   boost::enable_shared_from_this<Caver::GUIResponder>::_internal_accept_owner<Caver::BadgeCountView,
   Caver::BadgeCountView>(boost::shared_ptr<Caver::BadgeCountView> const*, Caver::BadgeCountView*)
   const */

void __thiscall
boost::enable_shared_from_this<Caver::GUIResponder>::
_internal_accept_owner<Caver::BadgeCountView,Caver::BadgeCountView>
          (enable_shared_from_this<Caver::GUIResponder> *this,shared_ptr *param_1,
          BadgeCountView *param_2)

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
    *(BadgeCountView **)this = param_2;
    if (plVar3 != plVar1) {
      if (plVar3 != (long *)0x0) {
        plVar3[2] = plVar3[2] + 1;
      }
      if ((plVar1 != (long *)0x0) && (lVar2 = plVar1[2], plVar1[2] = lVar2 + -1, lVar2 + -1 == 0)) {
        (**(code **)(*plVar1 + 0x18))();
      }
      *(long **)(this + 8) = plVar3;
    }
                    /* try { // try from 00495924 to 00595953 has its CatchHandler @ 00495924
                       catch() { ... } // from try @ 00495924 with catch @ 00495924
                       catch() { ... } // from try @ 00495a9c with catch @ 00495924 */
    if ((plVar3 != (long *)0x0) && (lVar2 = plVar3[1], plVar3[1] = lVar2 + -1, lVar2 + -1 == 0)) {
      (**(code **)(*plVar3 + 0x10))(plVar3);
      lVar2 = plVar3[2];
      plVar3[2] = lVar2 + -1;
                    /* try { // try from 00495954 to 00595967 has its CatchHandler @ 00495d64 */
      if (lVar2 + -1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x00495978. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                    /* try { // try from 00495978 to 00595983 has its CatchHandler @ 00495cf8 */
        (**(code **)(*plVar3 + 0x18))(plVar3);
        return;
      }
    }
  }
  return;
}


