/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00442aec
 * Function: boost::enable_shared_from_this<Caver::GUIResponder>::_internal_accept_owner<Caver::GUIBubbleView,Caver::GUIBubbleView>
 * Signature: void __thiscall _internal_accept_owner<Caver::GUIBubbleView,Caver::GUIBubbleView>(enable_shared_from_this<Caver::GUIResponder> * this, shared_ptr * param_1, GUIBubbleView * param_2)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* void 
   boost::enable_shared_from_this<Caver::GUIResponder>::_internal_accept_owner<Caver::GUIBubbleView,
   Caver::GUIBubbleView>(boost::shared_ptr<Caver::GUIBubbleView> const*, Caver::GUIBubbleView*)
   const */

void __thiscall
boost::enable_shared_from_this<Caver::GUIResponder>::
_internal_accept_owner<Caver::GUIBubbleView,Caver::GUIBubbleView>
          (enable_shared_from_this<Caver::GUIResponder> *this,shared_ptr *param_1,
          GUIBubbleView *param_2)

{
  long *plVar1;
  long lVar2;
  long *plVar3;
  
                    /* try { // try from 00442af4 to 00542b1b has its CatchHandler @ 00442b20 */
  plVar1 = *(long **)(this + 8);
  if ((plVar1 == (long *)0x0) || (plVar1[1] == 0)) {
    plVar3 = *(long **)(param_1 + 8);
    if (plVar3 != (long *)0x0) {
      plVar3[1] = plVar3[1] + 1;
    }
                    /* catch() { ... } // from try @ 00442af4 with catch @ 00442b20 */
                    /* catch() { ... } // from try @ 00442720 with catch @ 00442b24 */
    *(GUIBubbleView **)this = param_2;
                    /* catch() { ... } // from try @ 00442728 with catch @ 00442b28
                       catch() { ... } // from try @ 00442810 with catch @ 00442b28 */
    if (plVar3 != plVar1) {
                    /* catch() { ... } // from try @ 00442990 with catch @ 00442b2c */
      if (plVar3 != (long *)0x0) {
        plVar3[2] = plVar3[2] + 1;
      }
                    /* catch() { ... } // from try @ 00442904 with catch @ 00442b3c */
      if ((plVar1 != (long *)0x0) && (lVar2 = plVar1[2], plVar1[2] = lVar2 + -1, lVar2 + -1 == 0)) {
        (**(code **)(*plVar1 + 0x18))();
      }
      *(long **)(this + 8) = plVar3;
    }
                    /* try { // try from 00442b60 to 00542b87 has its CatchHandler @ 00442b8c */
    if ((plVar3 != (long *)0x0) && (lVar2 = plVar3[1], plVar3[1] = lVar2 + -1, lVar2 + -1 == 0)) {
      (**(code **)(*plVar3 + 0x10))(plVar3);
      lVar2 = plVar3[2];
                    /* catch() { ... } // from try @ 00442b60 with catch @ 00442b8c */
      plVar3[2] = lVar2 + -1;
                    /* catch() { ... } // from try @ 004428d8 with catch @ 00442b90 */
      if (lVar2 + -1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x00442bb4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                    /* try { // try from 00442bb4 to 00542bdb has its CatchHandler @ 00442c28 */
        (**(code **)(*plVar3 + 0x18))(plVar3);
        return;
      }
    }
  }
  return;
}


