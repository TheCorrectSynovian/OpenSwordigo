/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0048dd48
 * Function: boost::enable_shared_from_this<Caver::GUIResponder>::_internal_accept_owner<Caver::CreditsView,Caver::CreditsView>
 * Signature: void __thiscall _internal_accept_owner<Caver::CreditsView,Caver::CreditsView>(enable_shared_from_this<Caver::GUIResponder> * this, shared_ptr * param_1, CreditsView * param_2)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* void 
   boost::enable_shared_from_this<Caver::GUIResponder>::_internal_accept_owner<Caver::CreditsView,
   Caver::CreditsView>(boost::shared_ptr<Caver::CreditsView> const*, Caver::CreditsView*) const */

void __thiscall
boost::enable_shared_from_this<Caver::GUIResponder>::
_internal_accept_owner<Caver::CreditsView,Caver::CreditsView>
          (enable_shared_from_this<Caver::GUIResponder> *this,shared_ptr *param_1,
          CreditsView *param_2)

{
  long *plVar1;
  long lVar2;
  long *plVar3;
  
  plVar1 = *(long **)(this + 8);
  if ((plVar1 == (long *)0x0) || (plVar1[1] == 0)) {
                    /* catch() { ... } // from try @ 0048dd3c with catch @ 0048dd68 */
    plVar3 = *(long **)(param_1 + 8);
    if (plVar3 != (long *)0x0) {
      plVar3[1] = plVar3[1] + 1;
    }
                    /* try { // try from 0048dd7c to 0058dda7 has its CatchHandler @ 0048dd7c
                       catch() { ... } // from try @ 0048dd7c with catch @ 0048dd7c
                       catch() { ... } // from try @ 0048def4 with catch @ 0048dd7c */
    *(CreditsView **)this = param_2;
    if (plVar3 != plVar1) {
      if (plVar3 != (long *)0x0) {
        plVar3[2] = plVar3[2] + 1;
      }
                    /* try { // try from 0048dda8 to 0058ddbb has its CatchHandler @ 0048e1b8 */
      if ((plVar1 != (long *)0x0) && (lVar2 = plVar1[2], plVar1[2] = lVar2 + -1, lVar2 + -1 == 0)) {
        (**(code **)(*plVar1 + 0x18))();
      }
      *(long **)(this + 8) = plVar3;
    }
                    /* try { // try from 0048ddcc to 0058ddd7 has its CatchHandler @ 0048e14c */
    if ((plVar3 != (long *)0x0) && (lVar2 = plVar3[1], plVar3[1] = lVar2 + -1, lVar2 + -1 == 0)) {
      (**(code **)(*plVar3 + 0x10))(plVar3);
      lVar2 = plVar3[2];
      plVar3[2] = lVar2 + -1;
      if (lVar2 + -1 == 0) {
                    /* try { // try from 0048ddfc to 0058de37 has its CatchHandler @ 0048e0e8 */
                    /* WARNING: Could not recover jumptable at 0x0048de10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x18))(plVar3);
        return;
      }
    }
  }
  return;
}


