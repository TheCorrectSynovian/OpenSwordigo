/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 004509ac
 * Function: boost::enable_shared_from_this<Caver::GUIResponder>::_internal_accept_owner<Caver::GameOverlayView,Caver::GameOverlayView>
 * Signature: void __thiscall _internal_accept_owner<Caver::GameOverlayView,Caver::GameOverlayView>(enable_shared_from_this<Caver::GUIResponder> * this, shared_ptr * param_1, GameOverlayView * param_2)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* void 
   boost::enable_shared_from_this<Caver::GUIResponder>::_internal_accept_owner<Caver::GameOverlayView,
   Caver::GameOverlayView>(boost::shared_ptr<Caver::GameOverlayView> const*,
   Caver::GameOverlayView*) const */

void __thiscall
boost::enable_shared_from_this<Caver::GUIResponder>::
_internal_accept_owner<Caver::GameOverlayView,Caver::GameOverlayView>
          (enable_shared_from_this<Caver::GUIResponder> *this,shared_ptr *param_1,
          GameOverlayView *param_2)

{
  long *plVar1;
  long lVar2;
  long *plVar3;
  
                    /* try { // try from 004509b8 to 005509cf has its CatchHandler @ 004509b8
                       catch() { ... } // from try @ 004509b8 with catch @ 004509b8
                       catch() { ... } // from try @ 004509d4 with catch @ 004509b8 */
  plVar1 = *(long **)(this + 8);
  if ((plVar1 == (long *)0x0) || (plVar1[1] == 0)) {
    plVar3 = *(long **)(param_1 + 8);
                    /* try { // try from 004509d0 to 005509d3 has its CatchHandler @ 004509e4 */
    if (plVar3 != (long *)0x0) {
                    /* try { // try from 004509d4 to 005509f7 has its CatchHandler @ 004509b8 */
      plVar3[1] = plVar3[1] + 1;
    }
                    /* catch() { ... } // from try @ 004509d0 with catch @ 004509e4 */
    *(GameOverlayView **)this = param_2;
    if (plVar3 != plVar1) {
      if (plVar3 != (long *)0x0) {
                    /* try { // try from 004509f8 to 00550a0f has its CatchHandler @ 004509f8
                       catch() { ... } // from try @ 004509f8 with catch @ 004509f8
                       catch() { ... } // from try @ 00450a14 with catch @ 004509f8 */
        plVar3[2] = plVar3[2] + 1;
      }
      if ((plVar1 != (long *)0x0) && (lVar2 = plVar1[2], plVar1[2] = lVar2 + -1, lVar2 + -1 == 0)) {
                    /* try { // try from 00450a10 to 00550a13 has its CatchHandler @ 00450a24 */
                    /* try { // try from 00450a14 to 00550a37 has its CatchHandler @ 004509f8 */
        (**(code **)(*plVar1 + 0x18))();
      }
      *(long **)(this + 8) = plVar3;
    }
                    /* catch() { ... } // from try @ 00450a10 with catch @ 00450a24 */
    if ((plVar3 != (long *)0x0) && (lVar2 = plVar3[1], plVar3[1] = lVar2 + -1, lVar2 + -1 == 0)) {
                    /* try { // try from 00450a38 to 00550a4f has its CatchHandler @ 00450a38
                       catch() { ... } // from try @ 00450a38 with catch @ 00450a38
                       catch() { ... } // from try @ 00450a54 with catch @ 00450a38 */
      (**(code **)(*plVar3 + 0x10))(plVar3);
      lVar2 = plVar3[2];
      plVar3[2] = lVar2 + -1;
                    /* try { // try from 00450a50 to 00550a53 has its CatchHandler @ 00450a64 */
      if (lVar2 + -1 == 0) {
                    /* catch() { ... } // from try @ 00450a50 with catch @ 00450a64 */
                    /* WARNING: Could not recover jumptable at 0x00450a74. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x18))(plVar3);
        return;
      }
    }
  }
                    /* try { // try from 00450a54 to 00550a77 has its CatchHandler @ 00450a38 */
  return;
}


