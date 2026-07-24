/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 004d908c
 * Function: boost::enable_shared_from_this<Caver::GUIResponder>::_internal_accept_owner<Caver::HealthBar,Caver::HealthBar>
 * Signature: void __thiscall _internal_accept_owner<Caver::HealthBar,Caver::HealthBar>(enable_shared_from_this<Caver::GUIResponder> * this, shared_ptr * param_1, HealthBar * param_2)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* void 
   boost::enable_shared_from_this<Caver::GUIResponder>::_internal_accept_owner<Caver::HealthBar,
   Caver::HealthBar>(boost::shared_ptr<Caver::HealthBar> const*, Caver::HealthBar*) const */

void __thiscall
boost::enable_shared_from_this<Caver::GUIResponder>::
_internal_accept_owner<Caver::HealthBar,Caver::HealthBar>
          (enable_shared_from_this<Caver::GUIResponder> *this,shared_ptr *param_1,HealthBar *param_2
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
    *(HealthBar **)this = param_2;
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
      plVar3[2] = lVar2 + -1;
                    /* catch() { ... } // from try @ 004d9160 with catch @ 004d9130 */
      if (lVar2 + -1 == 0) {
                    /* try { // try from 004d914c to 005d915f has its CatchHandler @ 004d9184 */
                    /* WARNING: Could not recover jumptable at 0x004d9154. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x18))(plVar3);
        return;
      }
    }
  }
  return;
}


