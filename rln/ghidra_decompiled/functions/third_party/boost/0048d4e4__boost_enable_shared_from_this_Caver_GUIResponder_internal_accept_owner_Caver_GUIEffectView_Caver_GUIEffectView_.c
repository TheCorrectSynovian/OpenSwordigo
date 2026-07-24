/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0048d4e4
 * Function: boost::enable_shared_from_this<Caver::GUIResponder>::_internal_accept_owner<Caver::GUIEffectView,Caver::GUIEffectView>
 * Signature: void __thiscall _internal_accept_owner<Caver::GUIEffectView,Caver::GUIEffectView>(enable_shared_from_this<Caver::GUIResponder> * this, shared_ptr * param_1, GUIEffectView * param_2)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* void 
   boost::enable_shared_from_this<Caver::GUIResponder>::_internal_accept_owner<Caver::GUIEffectView,
   Caver::GUIEffectView>(boost::shared_ptr<Caver::GUIEffectView> const*, Caver::GUIEffectView*)
   const */

void __thiscall
boost::enable_shared_from_this<Caver::GUIResponder>::
_internal_accept_owner<Caver::GUIEffectView,Caver::GUIEffectView>
          (enable_shared_from_this<Caver::GUIResponder> *this,shared_ptr *param_1,
          GUIEffectView *param_2)

{
  long *plVar1;
  long lVar2;
  long *plVar3;
  
                    /* catch() { ... } // from try @ 0048d358 with catch @ 0048d4ec */
  plVar1 = *(long **)(this + 8);
  if ((plVar1 == (long *)0x0) || (plVar1[1] == 0)) {
    plVar3 = *(long **)(param_1 + 8);
    if (plVar3 != (long *)0x0) {
                    /* try { // try from 0048d50c to 0058d543 has its CatchHandler @ 0048d584 */
      plVar3[1] = plVar3[1] + 1;
    }
                    /* catch() { ... } // from try @ 0048d470 with catch @ 0048d518 */
    *(GUIEffectView **)this = param_2;
    if (plVar3 != plVar1) {
      if (plVar3 != (long *)0x0) {
        plVar3[2] = plVar3[2] + 1;
      }
                    /* try { // try from 0048d544 to 0058d577 has its CatchHandler @ 0048d098 */
      if ((plVar1 != (long *)0x0) && (lVar2 = plVar1[2], plVar1[2] = lVar2 + -1, lVar2 + -1 == 0)) {
                    /* catch() { ... } // from try @ 0048d21c with catch @ 0048d548 */
        (**(code **)(*plVar1 + 0x18))();
      }
                    /* catch() { ... } // from try @ 0048d240 with catch @ 0048d554 */
      *(long **)(this + 8) = plVar3;
    }
    if ((plVar3 != (long *)0x0) && (lVar2 = plVar3[1], plVar3[1] = lVar2 + -1, lVar2 + -1 == 0)) {
                    /* try { // try from 0048d578 to 0058d57f has its CatchHandler @ 0048d584 */
      (**(code **)(*plVar3 + 0x10))(plVar3);
      lVar2 = plVar3[2];
                    /* try { // try from 0048d580 to 0058d5f7 has its CatchHandler @ 0048d098 */
                    /* catch() { ... } // from try @ 0048d50c with catch @ 0048d584
                       catch() { ... } // from try @ 0048d578 with catch @ 0048d584 */
      plVar3[2] = lVar2 + -1;
                    /* catch() { ... } // from try @ 0048d230 with catch @ 0048d588
                       catch() { ... } // from try @ 0048d298 with catch @ 0048d588 */
      if (lVar2 + -1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x0048d5ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x18))(plVar3);
        return;
      }
    }
  }
  return;
}


