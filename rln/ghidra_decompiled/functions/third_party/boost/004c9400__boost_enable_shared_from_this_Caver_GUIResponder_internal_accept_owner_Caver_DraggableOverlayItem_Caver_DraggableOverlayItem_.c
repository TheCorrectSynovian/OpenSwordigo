/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 004c9400
 * Function: boost::enable_shared_from_this<Caver::GUIResponder>::_internal_accept_owner<Caver::DraggableOverlayItem,Caver::DraggableOverlayItem>
 * Signature: void __thiscall _internal_accept_owner<Caver::DraggableOverlayItem,Caver::DraggableOverlayItem>(enable_shared_from_this<Caver::GUIResponder> * this, shared_ptr * param_1, DraggableOverlayItem * param_2)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* void 
   boost::enable_shared_from_this<Caver::GUIResponder>::_internal_accept_owner<Caver::DraggableOverlayItem,
   Caver::DraggableOverlayItem>(boost::shared_ptr<Caver::DraggableOverlayItem> const*,
   Caver::DraggableOverlayItem*) const */

void __thiscall
boost::enable_shared_from_this<Caver::GUIResponder>::
_internal_accept_owner<Caver::DraggableOverlayItem,Caver::DraggableOverlayItem>
          (enable_shared_from_this<Caver::GUIResponder> *this,shared_ptr *param_1,
          DraggableOverlayItem *param_2)

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
    *(DraggableOverlayItem **)this = param_2;
    if (plVar3 != plVar1) {
      if (plVar3 != (long *)0x0) {
        plVar3[2] = plVar3[2] + 1;
      }
      if ((plVar1 != (long *)0x0) && (lVar2 = plVar1[2], plVar1[2] = lVar2 + -1, lVar2 + -1 == 0)) {
                    /* catch() { ... } // from try @ 004c9498 with catch @ 004c9468 */
        (**(code **)(*plVar1 + 0x18))();
      }
      *(long **)(this + 8) = plVar3;
    }
                    /* try { // try from 004c9484 to 005c9497 has its CatchHandler @ 004c94bc */
    if ((plVar3 != (long *)0x0) && (lVar2 = plVar3[1], plVar3[1] = lVar2 + -1, lVar2 + -1 == 0)) {
      (**(code **)(*plVar3 + 0x10))(plVar3);
                    /* try { // try from 004c9498 to 005c94bf has its CatchHandler @ 004c9468 */
      lVar2 = plVar3[2];
      plVar3[2] = lVar2 + -1;
      if (lVar2 + -1 == 0) {
                    /* catch() { ... } // from try @ 004c9484 with catch @ 004c94bc */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 004c9594 with catch @ 004c94c0
                       catch(type#1 @ 00000000) { ... } // from try @ 004c96b0 with catch @ 004c94c0
                        */
                    /* WARNING: Could not recover jumptable at 0x004c94c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x18))(plVar3);
        return;
      }
    }
  }
  return;
}


