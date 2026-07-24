/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00465070
 * Function: boost::enable_shared_from_this<Caver::GUIViewController>::_internal_accept_owner<Caver::CreditsViewController,Caver::CreditsViewController>
 * Signature: void __thiscall _internal_accept_owner<Caver::CreditsViewController,Caver::CreditsViewController>(enable_shared_from_this<Caver::GUIViewController> * this, shared_ptr * param_1, CreditsViewController * param_2)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* void 
   boost::enable_shared_from_this<Caver::GUIViewController>::_internal_accept_owner<Caver::CreditsViewController,
   Caver::CreditsViewController>(boost::shared_ptr<Caver::CreditsViewController> const*,
   Caver::CreditsViewController*) const */

void __thiscall
boost::enable_shared_from_this<Caver::GUIViewController>::
_internal_accept_owner<Caver::CreditsViewController,Caver::CreditsViewController>
          (enable_shared_from_this<Caver::GUIViewController> *this,shared_ptr *param_1,
          CreditsViewController *param_2)

{
  long *plVar1;
  long lVar2;
  long *plVar3;
  
  plVar1 = *(long **)(this + 8);
  if ((plVar1 == (long *)0x0) || (plVar1[1] == 0)) {
    plVar3 = *(long **)(param_1 + 8);
                    /* catch() { ... } // from try @ 00464450 with catch @ 00465094 */
    if (plVar3 != (long *)0x0) {
      plVar3[1] = plVar3[1] + 1;
    }
    *(CreditsViewController **)this = param_2;
    if (plVar3 != plVar1) {
      if (plVar3 != (long *)0x0) {
        plVar3[2] = plVar3[2] + 1;
      }
                    /* catch() { ... } // from try @ 0046442c with catch @ 004650cc */
                    /* catch() { ... } // from try @ 004643d0 with catch @ 004650d0 */
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
                    /* catch() { ... } // from try @ 004643a0 with catch @ 0046512c */
                    /* WARNING: Could not recover jumptable at 0x00465138. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x18))(plVar3);
        return;
      }
    }
  }
  return;
}


