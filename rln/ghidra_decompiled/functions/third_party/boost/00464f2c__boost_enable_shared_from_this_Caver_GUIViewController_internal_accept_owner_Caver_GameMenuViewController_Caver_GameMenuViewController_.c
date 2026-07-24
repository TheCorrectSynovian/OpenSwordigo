/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00464f2c
 * Function: boost::enable_shared_from_this<Caver::GUIViewController>::_internal_accept_owner<Caver::GameMenuViewController,Caver::GameMenuViewController>
 * Signature: void __thiscall _internal_accept_owner<Caver::GameMenuViewController,Caver::GameMenuViewController>(enable_shared_from_this<Caver::GUIViewController> * this, shared_ptr * param_1, GameMenuViewController * param_2)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* void 
   boost::enable_shared_from_this<Caver::GUIViewController>::_internal_accept_owner<Caver::GameMenuViewController,
   Caver::GameMenuViewController>(boost::shared_ptr<Caver::GameMenuViewController> const*,
   Caver::GameMenuViewController*) const */

void __thiscall
boost::enable_shared_from_this<Caver::GUIViewController>::
_internal_accept_owner<Caver::GameMenuViewController,Caver::GameMenuViewController>
          (enable_shared_from_this<Caver::GUIViewController> *this,shared_ptr *param_1,
          GameMenuViewController *param_2)

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
                    /* catch() { ... } // from try @ 004645b4 with catch @ 00464f64 */
    *(GameMenuViewController **)this = param_2;
    if (plVar3 != plVar1) {
      if (plVar3 != (long *)0x0) {
        plVar3[2] = plVar3[2] + 1;
      }
      if ((plVar1 != (long *)0x0) && (lVar2 = plVar1[2], plVar1[2] = lVar2 + -1, lVar2 + -1 == 0)) {
        (**(code **)(*plVar1 + 0x18))();
      }
                    /* catch() { ... } // from try @ 00464590 with catch @ 00464f9c */
      *(long **)(this + 8) = plVar3;
    }
                    /* catch() { ... } // from try @ 00464534 with catch @ 00464fa0 */
    if ((plVar3 != (long *)0x0) && (lVar2 = plVar3[1], plVar3[1] = lVar2 + -1, lVar2 + -1 == 0)) {
      (**(code **)(*plVar3 + 0x10))(plVar3);
      lVar2 = plVar3[2];
      plVar3[2] = lVar2 + -1;
      if (lVar2 + -1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x00464ff4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x18))(plVar3);
        return;
      }
    }
  }
  return;
}


