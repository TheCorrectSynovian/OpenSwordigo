/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00464308
 * Function: boost::enable_shared_from_this<Caver::GUIResponder>::_internal_accept_owner<Caver::SceneLoadingView,Caver::SceneLoadingView>
 * Signature: void __thiscall _internal_accept_owner<Caver::SceneLoadingView,Caver::SceneLoadingView>(enable_shared_from_this<Caver::GUIResponder> * this, shared_ptr * param_1, SceneLoadingView * param_2)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* void 
   boost::enable_shared_from_this<Caver::GUIResponder>::_internal_accept_owner<Caver::SceneLoadingView,
   Caver::SceneLoadingView>(boost::shared_ptr<Caver::SceneLoadingView> const*,
   Caver::SceneLoadingView*) const */

void __thiscall
boost::enable_shared_from_this<Caver::GUIResponder>::
_internal_accept_owner<Caver::SceneLoadingView,Caver::SceneLoadingView>
          (enable_shared_from_this<Caver::GUIResponder> *this,shared_ptr *param_1,
          SceneLoadingView *param_2)

{
  long *plVar1;
  long lVar2;
  long *plVar3;
  
  plVar1 = *(long **)(this + 8);
                    /* try { // try from 00464320 to 0056435b has its CatchHandler @ 00465168 */
  if ((plVar1 == (long *)0x0) || (plVar1[1] == 0)) {
    plVar3 = *(long **)(param_1 + 8);
    if (plVar3 != (long *)0x0) {
      plVar3[1] = plVar3[1] + 1;
    }
    *(SceneLoadingView **)this = param_2;
    if (plVar3 != plVar1) {
      if (plVar3 != (long *)0x0) {
        plVar3[2] = plVar3[2] + 1;
      }
      if ((plVar1 != (long *)0x0) && (lVar2 = plVar1[2], plVar1[2] = lVar2 + -1, lVar2 + -1 == 0)) {
        (**(code **)(*plVar1 + 0x18))();
      }
      *(long **)(this + 8) = plVar3;
    }
                    /* try { // try from 0046437c to 0056438f has its CatchHandler @ 00465164 */
    if ((plVar3 != (long *)0x0) && (lVar2 = plVar3[1], plVar3[1] = lVar2 + -1, lVar2 + -1 == 0)) {
      (**(code **)(*plVar3 + 0x10))(plVar3);
                    /* try { // try from 004643a0 to 005643ab has its CatchHandler @ 0046512c */
      lVar2 = plVar3[2];
      plVar3[2] = lVar2 + -1;
      if (lVar2 + -1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x004643d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                    /* try { // try from 004643d0 to 0056440b has its CatchHandler @ 004650d0 */
        (**(code **)(*plVar3 + 0x18))(plVar3);
        return;
      }
    }
  }
  return;
}


