/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0050ebec
 * Function: boost::enable_shared_from_this<Caver::GUIResponder>::_internal_accept_owner<Caver::DraggableMenuItem,Caver::DraggableMenuItem>
 * Signature: void __thiscall _internal_accept_owner<Caver::DraggableMenuItem,Caver::DraggableMenuItem>(enable_shared_from_this<Caver::GUIResponder> * this, shared_ptr * param_1, DraggableMenuItem * param_2)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* void 
   boost::enable_shared_from_this<Caver::GUIResponder>::_internal_accept_owner<Caver::DraggableMenuItem,
   Caver::DraggableMenuItem>(boost::shared_ptr<Caver::DraggableMenuItem> const*,
   Caver::DraggableMenuItem*) const */

void __thiscall
boost::enable_shared_from_this<Caver::GUIResponder>::
_internal_accept_owner<Caver::DraggableMenuItem,Caver::DraggableMenuItem>
          (enable_shared_from_this<Caver::GUIResponder> *this,shared_ptr *param_1,
          DraggableMenuItem *param_2)

{
  long *plVar1;
  long lVar2;
  long *plVar3;
  
                    /* try { // try from 0050ebf4 to 0060ebf7 has its CatchHandler @ 0050eca0 */
                    /* try { // try from 0050ebf8 to 0060ec47 has its CatchHandler @ 0050ea48 */
  plVar1 = *(long **)(this + 8);
  if ((plVar1 == (long *)0x0) || (plVar1[1] == 0)) {
    plVar3 = *(long **)(param_1 + 8);
    if (plVar3 != (long *)0x0) {
      plVar3[1] = plVar3[1] + 1;
    }
    *(DraggableMenuItem **)this = param_2;
    if (plVar3 != plVar1) {
      if (plVar3 != (long *)0x0) {
        plVar3[2] = plVar3[2] + 1;
      }
                    /* try { // try from 0050ec48 to 0060ec4b has its CatchHandler @ 0050ec9c */
                    /* try { // try from 0050ec4c to 0060ecbb has its CatchHandler @ 0050ea48 */
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
                    /* catch() { ... } // from try @ 0050ebf4 with catch @ 0050eca0 */
                    /* catch() { ... } // from try @ 0050eba0 with catch @ 0050eca4 */
                    /* WARNING: Could not recover jumptable at 0x0050ecb4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x18))(plVar3);
        return;
      }
    }
  }
                    /* catch() { ... } // from try @ 0050ec48 with catch @ 0050ec9c */
  return;
}


