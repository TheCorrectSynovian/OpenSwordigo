/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00488e7c
 * Function: boost::enable_shared_from_this<Caver::GUIResponder>::_internal_accept_owner<Caver::GUIView,Caver::GUIView>
 * Signature: void __thiscall _internal_accept_owner<Caver::GUIView,Caver::GUIView>(enable_shared_from_this<Caver::GUIResponder> * this, shared_ptr * param_1, GUIView * param_2)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* void boost::enable_shared_from_this<Caver::GUIResponder>::_internal_accept_owner<Caver::GUIView,
   Caver::GUIView>(boost::shared_ptr<Caver::GUIView> const*, Caver::GUIView*) const */

void __thiscall
boost::enable_shared_from_this<Caver::GUIResponder>::
_internal_accept_owner<Caver::GUIView,Caver::GUIView>
          (enable_shared_from_this<Caver::GUIResponder> *this,shared_ptr *param_1,GUIView *param_2)

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
    *(GUIView **)this = param_2;
    if (plVar3 != plVar1) {
      if (plVar3 != (long *)0x0) {
        plVar3[2] = plVar3[2] + 1;
      }
      if ((plVar1 != (long *)0x0) && (lVar2 = plVar1[2], plVar1[2] = lVar2 + -1, lVar2 + -1 == 0)) {
                    /* try { // try from 00488ee0 to 00588ef3 has its CatchHandler @ 00489238 */
        (**(code **)(*plVar1 + 0x18))();
      }
      *(long **)(this + 8) = plVar3;
    }
                    /* try { // try from 00488ef4 to 00588f0b has its CatchHandler @ 004891cc */
    if ((plVar3 != (long *)0x0) && (lVar2 = plVar3[1], plVar3[1] = lVar2 + -1, lVar2 + -1 == 0)) {
      (**(code **)(*plVar3 + 0x10))(plVar3);
      lVar2 = plVar3[2];
      plVar3[2] = lVar2 + -1;
      if (lVar2 + -1 == 0) {
                    /* try { // try from 00488f38 to 00588f4f has its CatchHandler @ 00489190 */
                    /* WARNING: Could not recover jumptable at 0x00488f44. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x18))(plVar3);
        return;
      }
    }
  }
                    /* try { // try from 00488f24 to 00588f37 has its CatchHandler @ 004891c8 */
  return;
}


