/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00542974
 * Function: boost::enable_shared_from_this<Caver::GUIResponder>::_internal_accept_owner<Caver::TabView,Caver::TabView>
 * Signature: void __thiscall _internal_accept_owner<Caver::TabView,Caver::TabView>(enable_shared_from_this<Caver::GUIResponder> * this, shared_ptr * param_1, TabView * param_2)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* void boost::enable_shared_from_this<Caver::GUIResponder>::_internal_accept_owner<Caver::TabView,
   Caver::TabView>(boost::shared_ptr<Caver::TabView> const*, Caver::TabView*) const */

void __thiscall
boost::enable_shared_from_this<Caver::GUIResponder>::
_internal_accept_owner<Caver::TabView,Caver::TabView>
          (enable_shared_from_this<Caver::GUIResponder> *this,shared_ptr *param_1,TabView *param_2)

{
  long *plVar1;
  long lVar2;
  long *plVar3;
  
                    /* try { // try from 00542978 to 00642983 has its CatchHandler @ 00542864 */
                    /* catch() { ... } // from try @ 00542950 with catch @ 00542980 */
  plVar1 = *(long **)(this + 8);
  if ((plVar1 == (long *)0x0) || (plVar1[1] == 0)) {
    plVar3 = *(long **)(param_1 + 8);
    if (plVar3 != (long *)0x0) {
      plVar3[1] = plVar3[1] + 1;
    }
                    /* catch() { ... } // from try @ 00542a18 with catch @ 005429a8
                       catch() { ... } // from try @ 00542abc with catch @ 005429a8 */
    *(TabView **)this = param_2;
    if (plVar3 != plVar1) {
      if (plVar3 != (long *)0x0) {
        plVar3[2] = plVar3[2] + 1;
      }
      if ((plVar1 != (long *)0x0) && (lVar2 = plVar1[2], plVar1[2] = lVar2 + -1, lVar2 + -1 == 0)) {
        (**(code **)(*plVar1 + 0x18))();
      }
      *(long **)(this + 8) = plVar3;
    }
    if ((plVar3 != (long *)0x0) && (lVar2 = plVar3[1], plVar3[1] = lVar2 + -1, lVar2 + -1 == 0)) {
      (**(code **)(*plVar3 + 0x10))(plVar3);
      lVar2 = plVar3[2];
                    /* try { // try from 00542a14 to 00642a17 has its CatchHandler @ 00542a74 */
      plVar3[2] = lVar2 + -1;
                    /* try { // try from 00542a18 to 00642a93 has its CatchHandler @ 005429a8 */
      if (lVar2 + -1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x00542a3c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x18))(plVar3);
        return;
      }
    }
  }
  return;
}


