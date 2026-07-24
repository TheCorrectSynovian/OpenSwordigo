/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 004d94e4
 * Function: boost::enable_shared_from_this<Caver::GUIResponder>::_internal_accept_owner<Caver::TargetFrame,Caver::TargetFrame>
 * Signature: void __thiscall _internal_accept_owner<Caver::TargetFrame,Caver::TargetFrame>(enable_shared_from_this<Caver::GUIResponder> * this, shared_ptr * param_1, TargetFrame * param_2)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* void 
   boost::enable_shared_from_this<Caver::GUIResponder>::_internal_accept_owner<Caver::TargetFrame,
   Caver::TargetFrame>(boost::shared_ptr<Caver::TargetFrame> const*, Caver::TargetFrame*) const */

void __thiscall
boost::enable_shared_from_this<Caver::GUIResponder>::
_internal_accept_owner<Caver::TargetFrame,Caver::TargetFrame>
          (enable_shared_from_this<Caver::GUIResponder> *this,shared_ptr *param_1,
          TargetFrame *param_2)

{
  long *plVar1;
  long lVar2;
  long *plVar3;
  
                    /* catch() { ... } // from try @ 004d9434 with catch @ 004d94e4 */
                    /* try { // try from 004d94e8 to 005d94ef has its CatchHandler @ 004d94f8 */
                    /* try { // try from 004d94f0 to 005d94fb has its CatchHandler @ 004d93a8 */
  plVar1 = *(long **)(this + 8);
                    /* catch() { ... } // from try @ 004d94e8 with catch @ 004d94f8 */
  if ((plVar1 == (long *)0x0) || (plVar1[1] == 0)) {
    plVar3 = *(long **)(param_1 + 8);
    if (plVar3 != (long *)0x0) {
      plVar3[1] = plVar3[1] + 1;
    }
    *(TargetFrame **)this = param_2;
    if (plVar3 != plVar1) {
      if (plVar3 != (long *)0x0) {
        plVar3[2] = plVar3[2] + 1;
      }
      if ((plVar1 != (long *)0x0) && (lVar2 = plVar1[2], plVar1[2] = lVar2 + -1, lVar2 + -1 == 0)) {
        (**(code **)(*plVar1 + 0x18))();
      }
      *(long **)(this + 8) = plVar3;
    }
    if ((plVar3 != (long *)0x0) && (lVar2 = plVar3[1], plVar3[1] = lVar2 + -1, lVar2 + -1 == 0)) {
      (**(code **)(*plVar3 + 0x10))(plVar3);
      lVar2 = plVar3[2];
      plVar3[2] = lVar2 + -1;
      if (lVar2 + -1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x004d95ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x18))(plVar3);
        return;
      }
    }
  }
  return;
}


