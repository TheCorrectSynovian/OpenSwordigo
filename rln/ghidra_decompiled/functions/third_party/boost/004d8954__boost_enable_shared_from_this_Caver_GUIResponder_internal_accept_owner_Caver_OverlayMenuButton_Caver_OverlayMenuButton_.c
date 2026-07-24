/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 004d8954
 * Function: boost::enable_shared_from_this<Caver::GUIResponder>::_internal_accept_owner<Caver::OverlayMenuButton,Caver::OverlayMenuButton>
 * Signature: void __thiscall _internal_accept_owner<Caver::OverlayMenuButton,Caver::OverlayMenuButton>(enable_shared_from_this<Caver::GUIResponder> * this, shared_ptr * param_1, OverlayMenuButton * param_2)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* void 
   boost::enable_shared_from_this<Caver::GUIResponder>::_internal_accept_owner<Caver::OverlayMenuButton,
   Caver::OverlayMenuButton>(boost::shared_ptr<Caver::OverlayMenuButton> const*,
   Caver::OverlayMenuButton*) const */

void __thiscall
boost::enable_shared_from_this<Caver::GUIResponder>::
_internal_accept_owner<Caver::OverlayMenuButton,Caver::OverlayMenuButton>
          (enable_shared_from_this<Caver::GUIResponder> *this,shared_ptr *param_1,
          OverlayMenuButton *param_2)

{
  long *plVar1;
  long lVar2;
  long *plVar3;
  
  plVar1 = *(long **)(this + 8);
                    /* try { // try from 004d896c to 005d896f has its CatchHandler @ 004d897c */
  if ((plVar1 == (long *)0x0) || (plVar1[1] == 0)) {
    plVar3 = *(long **)(param_1 + 8);
    if (plVar3 != (long *)0x0) {
                    /* catch() { ... } // from try @ 004d896c with catch @ 004d897c */
                    /* try { // try from 004d8980 to 005d8987 has its CatchHandler @ 004d8990 */
      plVar3[1] = plVar3[1] + 1;
    }
                    /* try { // try from 004d8988 to 005d8993 has its CatchHandler @ 004d8938 */
    *(OverlayMenuButton **)this = param_2;
                    /* catch() { ... } // from try @ 004d8980 with catch @ 004d8990 */
    if (plVar3 != plVar1) {
                    /* try { // try from 004d8994 to 005d89db has its CatchHandler @ 004d8994
                       catch(type#1 @ 00000000) { ... } // from try @ 004d8994 with catch @ 004d8994
                       catch(type#1 @ 00000000) { ... } // from try @ 004d89f8 with catch @ 004d8994
                       catch(type#1 @ 00000000) { ... } // from try @ 004d8aa0 with catch @ 004d8994
                        */
      if (plVar3 != (long *)0x0) {
        plVar3[2] = plVar3[2] + 1;
      }
      if ((plVar1 != (long *)0x0) && (lVar2 = plVar1[2], plVar1[2] = lVar2 + -1, lVar2 + -1 == 0)) {
        (**(code **)(*plVar1 + 0x18))();
      }
      *(long **)(this + 8) = plVar3;
    }
    if ((plVar3 != (long *)0x0) && (lVar2 = plVar3[1], plVar3[1] = lVar2 + -1, lVar2 + -1 == 0)) {
                    /* try { // try from 004d89dc to 005d89f7 has its CatchHandler @ 004d8a94 */
      (**(code **)(*plVar3 + 0x10))(plVar3);
      lVar2 = plVar3[2];
      plVar3[2] = lVar2 + -1;
                    /* try { // try from 004d89f8 to 005d8a97 has its CatchHandler @ 004d8994 */
      if (lVar2 + -1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x004d8a1c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x18))(plVar3);
        return;
      }
    }
  }
  return;
}


