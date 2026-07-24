/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00447734
 * Function: boost::enable_shared_from_this<Caver::GUIViewController>::_internal_accept_owner<Caver::ConfigureOverlayViewController,Caver::ConfigureOverlayViewController>
 * Signature: void __thiscall _internal_accept_owner<Caver::ConfigureOverlayViewController,Caver::ConfigureOverlayViewController>(enable_shared_from_this<Caver::GUIViewController> * this, shared_ptr * param_1, ConfigureOverlayViewController * param_2)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* void 
   boost::enable_shared_from_this<Caver::GUIViewController>::_internal_accept_owner<Caver::ConfigureOverlayViewController,
   Caver::ConfigureOverlayViewController>(boost::shared_ptr<Caver::ConfigureOverlayViewController>
   const*, Caver::ConfigureOverlayViewController*) const */

void __thiscall
boost::enable_shared_from_this<Caver::GUIViewController>::
_internal_accept_owner<Caver::ConfigureOverlayViewController,Caver::ConfigureOverlayViewController>
          (enable_shared_from_this<Caver::GUIViewController> *this,shared_ptr *param_1,
          ConfigureOverlayViewController *param_2)

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
    *(ConfigureOverlayViewController **)this = param_2;
    if (plVar3 != plVar1) {
      if (plVar3 != (long *)0x0) {
        plVar3[2] = plVar3[2] + 1;
      }
                    /* try { // try from 00447788 to 005477af has its CatchHandler @ 004477e0 */
      if ((plVar1 != (long *)0x0) && (lVar2 = plVar1[2], plVar1[2] = lVar2 + -1, lVar2 + -1 == 0)) {
        (**(code **)(*plVar1 + 0x18))();
      }
      *(long **)(this + 8) = plVar3;
    }
                    /* try { // try from 004477b0 to 00547807 has its CatchHandler @ 00447650 */
    if ((plVar3 != (long *)0x0) && (lVar2 = plVar3[1], plVar3[1] = lVar2 + -1, lVar2 + -1 == 0)) {
      (**(code **)(*plVar3 + 0x10))(plVar3);
      lVar2 = plVar3[2];
      plVar3[2] = lVar2 + -1;
      if (lVar2 + -1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x004477fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x18))(plVar3);
        return;
      }
    }
  }
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00447788 with catch @ 004477e0
                        */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 004476e0 with catch @ 004477e4
                        */
  return;
}


