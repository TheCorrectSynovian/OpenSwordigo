/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00464de8
 * Function: boost::enable_shared_from_this<Caver::GUIViewController>::_internal_accept_owner<Caver::PauseViewController,Caver::PauseViewController>
 * Signature: void __thiscall _internal_accept_owner<Caver::PauseViewController,Caver::PauseViewController>(enable_shared_from_this<Caver::GUIViewController> * this, shared_ptr * param_1, PauseViewController * param_2)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* void 
   boost::enable_shared_from_this<Caver::GUIViewController>::_internal_accept_owner<Caver::PauseViewController,
   Caver::PauseViewController>(boost::shared_ptr<Caver::PauseViewController> const*,
   Caver::PauseViewController*) const */

void __thiscall
boost::enable_shared_from_this<Caver::GUIViewController>::
_internal_accept_owner<Caver::PauseViewController,Caver::PauseViewController>
          (enable_shared_from_this<Caver::GUIViewController> *this,shared_ptr *param_1,
          PauseViewController *param_2)

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
    *(PauseViewController **)this = param_2;
    if (plVar3 != plVar1) {
      if (plVar3 != (long *)0x0) {
                    /* catch() { ... } // from try @ 00464714 with catch @ 00464e34 */
        plVar3[2] = plVar3[2] + 1;
      }
      if ((plVar1 != (long *)0x0) && (lVar2 = plVar1[2], plVar1[2] = lVar2 + -1, lVar2 + -1 == 0)) {
        (**(code **)(*plVar1 + 0x18))();
      }
      *(long **)(this + 8) = plVar3;
    }
                    /* catch() { ... } // from try @ 004646f0 with catch @ 00464e6c */
    if ((plVar3 != (long *)0x0) && (lVar2 = plVar3[1], plVar3[1] = lVar2 + -1, lVar2 + -1 == 0)) {
                    /* catch() { ... } // from try @ 00464694 with catch @ 00464e70 */
      (**(code **)(*plVar3 + 0x10))(plVar3);
      lVar2 = plVar3[2];
      plVar3[2] = lVar2 + -1;
      if (lVar2 + -1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x00464eb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x18))(plVar3);
        return;
      }
    }
  }
  return;
}


