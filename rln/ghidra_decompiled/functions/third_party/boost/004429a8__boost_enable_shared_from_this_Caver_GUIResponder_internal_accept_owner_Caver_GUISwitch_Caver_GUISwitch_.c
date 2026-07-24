/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 004429a8
 * Function: boost::enable_shared_from_this<Caver::GUIResponder>::_internal_accept_owner<Caver::GUISwitch,Caver::GUISwitch>
 * Signature: void __thiscall _internal_accept_owner<Caver::GUISwitch,Caver::GUISwitch>(enable_shared_from_this<Caver::GUIResponder> * this, shared_ptr * param_1, GUISwitch * param_2)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* void 
   boost::enable_shared_from_this<Caver::GUIResponder>::_internal_accept_owner<Caver::GUISwitch,
   Caver::GUISwitch>(boost::shared_ptr<Caver::GUISwitch> const*, Caver::GUISwitch*) const */

void __thiscall
boost::enable_shared_from_this<Caver::GUIResponder>::
_internal_accept_owner<Caver::GUISwitch,Caver::GUISwitch>
          (enable_shared_from_this<Caver::GUIResponder> *this,shared_ptr *param_1,GUISwitch *param_2
          )

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
    *(GUISwitch **)this = param_2;
                    /* catch() { ... } // from try @ 004427c8 with catch @ 004429e4 */
    if (plVar3 != plVar1) {
      if (plVar3 != (long *)0x0) {
        plVar3[2] = plVar3[2] + 1;
      }
                    /* try { // try from 00442a08 to 00542a2f has its CatchHandler @ 00442a34 */
      if ((plVar1 != (long *)0x0) && (lVar2 = plVar1[2], plVar1[2] = lVar2 + -1, lVar2 + -1 == 0)) {
        (**(code **)(*plVar1 + 0x18))();
      }
      *(long **)(this + 8) = plVar3;
    }
    if ((plVar3 != (long *)0x0) && (lVar2 = plVar3[1], plVar3[1] = lVar2 + -1, lVar2 + -1 == 0)) {
                    /* catch() { ... } // from try @ 00442a08 with catch @ 00442a34 */
                    /* catch() { ... } // from try @ 0044279c with catch @ 00442a38 */
      (**(code **)(*plVar3 + 0x10))(plVar3);
      lVar2 = plVar3[2];
      plVar3[2] = lVar2 + -1;
      if (lVar2 + -1 == 0) {
                    /* try { // try from 00442a5c to 00542a83 has its CatchHandler @ 00442ad0 */
                    /* WARNING: Could not recover jumptable at 0x00442a70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x18))(plVar3);
        return;
      }
    }
  }
  return;
}


