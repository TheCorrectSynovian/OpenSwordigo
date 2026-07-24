/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00500394
 * Function: boost::enable_shared_from_this<Caver::GUIResponder>::_internal_accept_owner<Caver::MenuItemSlot,Caver::MenuItemSlot>
 * Signature: void __thiscall _internal_accept_owner<Caver::MenuItemSlot,Caver::MenuItemSlot>(enable_shared_from_this<Caver::GUIResponder> * this, shared_ptr * param_1, MenuItemSlot * param_2)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* void 
   boost::enable_shared_from_this<Caver::GUIResponder>::_internal_accept_owner<Caver::MenuItemSlot,
   Caver::MenuItemSlot>(boost::shared_ptr<Caver::MenuItemSlot> const*, Caver::MenuItemSlot*) const
    */

void __thiscall
boost::enable_shared_from_this<Caver::GUIResponder>::
_internal_accept_owner<Caver::MenuItemSlot,Caver::MenuItemSlot>
          (enable_shared_from_this<Caver::GUIResponder> *this,shared_ptr *param_1,
          MenuItemSlot *param_2)

{
  long *plVar1;
  long lVar2;
  long *plVar3;
  
  plVar1 = *(long **)(this + 8);
  if ((plVar1 == (long *)0x0) || (plVar1[1] == 0)) {
                    /* try { // try from 005003b4 to 006003bb has its CatchHandler @ 005003c4 */
    plVar3 = *(long **)(param_1 + 8);
    if (plVar3 != (long *)0x0) {
                    /* try { // try from 005003bc to 006003cb has its CatchHandler @ 00500304 */
                    /* catch() { ... } // from try @ 005003b4 with catch @ 005003c4 */
      plVar3[1] = plVar3[1] + 1;
    }
                    /* catch() { ... } // from try @ 00500388 with catch @ 005003c8 */
                    /* try { // try from 005003cc to 00600413 has its CatchHandler @ 005003cc
                       catch() { ... } // from try @ 005003cc with catch @ 005003cc
                       catch() { ... } // from try @ 00500430 with catch @ 005003cc
                       catch() { ... } // from try @ 0050052c with catch @ 005003cc
                       catch() { ... } // from try @ 0050059c with catch @ 005003cc */
    *(MenuItemSlot **)this = param_2;
    if (plVar3 != plVar1) {
      if (plVar3 != (long *)0x0) {
        plVar3[2] = plVar3[2] + 1;
      }
      if ((plVar1 != (long *)0x0) && (lVar2 = plVar1[2], plVar1[2] = lVar2 + -1, lVar2 + -1 == 0)) {
        (**(code **)(*plVar1 + 0x18))();
      }
      *(long **)(this + 8) = plVar3;
    }
                    /* try { // try from 00500414 to 0060042f has its CatchHandler @ 00500590 */
    if ((plVar3 != (long *)0x0) && (lVar2 = plVar3[1], plVar3[1] = lVar2 + -1, lVar2 + -1 == 0)) {
      (**(code **)(*plVar3 + 0x10))(plVar3);
      lVar2 = plVar3[2];
                    /* try { // try from 00500430 to 00600527 has its CatchHandler @ 005003cc */
      plVar3[2] = lVar2 + -1;
      if (lVar2 + -1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x0050045c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x18))(plVar3);
        return;
      }
    }
  }
  return;
}


