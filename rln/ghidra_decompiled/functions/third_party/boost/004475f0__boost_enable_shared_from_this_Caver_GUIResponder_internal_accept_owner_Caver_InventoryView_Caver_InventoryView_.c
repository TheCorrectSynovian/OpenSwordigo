/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 004475f0
 * Function: boost::enable_shared_from_this<Caver::GUIResponder>::_internal_accept_owner<Caver::InventoryView,Caver::InventoryView>
 * Signature: void __thiscall _internal_accept_owner<Caver::InventoryView,Caver::InventoryView>(enable_shared_from_this<Caver::GUIResponder> * this, shared_ptr * param_1, InventoryView * param_2)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* void 
   boost::enable_shared_from_this<Caver::GUIResponder>::_internal_accept_owner<Caver::InventoryView,
   Caver::InventoryView>(boost::shared_ptr<Caver::InventoryView> const*, Caver::InventoryView*)
   const */

void __thiscall
boost::enable_shared_from_this<Caver::GUIResponder>::
_internal_accept_owner<Caver::InventoryView,Caver::InventoryView>
          (enable_shared_from_this<Caver::GUIResponder> *this,shared_ptr *param_1,
          InventoryView *param_2)

{
  long *plVar1;
  long lVar2;
  long *plVar3;
  
  plVar1 = *(long **)(this + 8);
  if ((plVar1 == (long *)0x0) || (plVar1[1] == 0)) {
    plVar3 = *(long **)(param_1 + 8);
    if (plVar3 != (long *)0x0) {
                    /* try { // try from 00447618 to 0054761b has its CatchHandler @ 0044761c */
                    /* catch() { ... } // from try @ 00447618 with catch @ 0044761c */
      plVar3[1] = plVar3[1] + 1;
    }
                    /* catch() { ... } // from try @ 004475ec with catch @ 00447624 */
    *(InventoryView **)this = param_2;
    if (plVar3 != plVar1) {
      if (plVar3 != (long *)0x0) {
        plVar3[2] = plVar3[2] + 1;
      }
                    /* try { // try from 00447640 to 00547643 has its CatchHandler @ 0044764c */
                    /* try { // try from 00447644 to 0054764f has its CatchHandler @ 00447548 */
                    /* catch() { ... } // from try @ 00447640 with catch @ 0044764c */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 004477b0 with catch @ 00447650
                       catch(type#1 @ 00000000) { ... } // from try @ 00447830 with catch @ 00447650
                        */
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
                    /* WARNING: Could not recover jumptable at 0x004476b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x18))(plVar3);
        return;
      }
    }
  }
  return;
}


