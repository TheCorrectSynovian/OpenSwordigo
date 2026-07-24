/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 004705c4
 * Function: boost::enable_shared_from_this<Caver::GUIResponder>::_internal_accept_owner<Caver::PauseView,Caver::PauseView>
 * Signature: void __thiscall _internal_accept_owner<Caver::PauseView,Caver::PauseView>(enable_shared_from_this<Caver::GUIResponder> * this, shared_ptr * param_1, PauseView * param_2)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* void 
   boost::enable_shared_from_this<Caver::GUIResponder>::_internal_accept_owner<Caver::PauseView,
   Caver::PauseView>(boost::shared_ptr<Caver::PauseView> const*, Caver::PauseView*) const */

void __thiscall
boost::enable_shared_from_this<Caver::GUIResponder>::
_internal_accept_owner<Caver::PauseView,Caver::PauseView>
          (enable_shared_from_this<Caver::GUIResponder> *this,shared_ptr *param_1,PauseView *param_2
          )

{
  long *plVar1;
  long lVar2;
  long *plVar3;
  
                    /* catch() { ... } // from try @ 0047059c with catch @ 004705c8 */
                    /* catch() { ... } // from try @ 00470490 with catch @ 004705cc */
  plVar1 = *(long **)(this + 8);
  if ((plVar1 == (long *)0x0) || (plVar1[1] == 0)) {
    plVar3 = *(long **)(param_1 + 8);
    if (plVar3 != (long *)0x0) {
                    /* try { // try from 004705f0 to 00570617 has its CatchHandler @ 00470674 */
      plVar3[1] = plVar3[1] + 1;
    }
    *(PauseView **)this = param_2;
    if (plVar3 != plVar1) {
      if (plVar3 != (long *)0x0) {
        plVar3[2] = plVar3[2] + 1;
      }
      if ((plVar1 != (long *)0x0) && (lVar2 = plVar1[2], plVar1[2] = lVar2 + -1, lVar2 + -1 == 0)) {
        (**(code **)(*plVar1 + 0x18))();
      }
      *(long **)(this + 8) = plVar3;
    }
                    /* try { // try from 00470638 to 0057065f has its CatchHandler @ 00470668 */
    if ((plVar3 != (long *)0x0) && (lVar2 = plVar3[1], plVar3[1] = lVar2 + -1, lVar2 + -1 == 0)) {
      (**(code **)(*plVar3 + 0x10))(plVar3);
      lVar2 = plVar3[2];
                    /* try { // try from 00470660 to 00570697 has its CatchHandler @ 004703d8 */
      plVar3[2] = lVar2 + -1;
                    /* catch() { ... } // from try @ 00470638 with catch @ 00470668 */
      if (lVar2 + -1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x0047068c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x18))(plVar3);
        return;
      }
    }
  }
                    /* catch() { ... } // from try @ 004705f0 with catch @ 00470674 */
  return;
}


