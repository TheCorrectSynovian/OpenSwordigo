/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0046fb9c
 * Function: boost::enable_shared_from_this<Caver::GUIResponder>::_internal_accept_owner<Caver::MainMenuView,Caver::MainMenuView>
 * Signature: void __thiscall _internal_accept_owner<Caver::MainMenuView,Caver::MainMenuView>(enable_shared_from_this<Caver::GUIResponder> * this, shared_ptr * param_1, MainMenuView * param_2)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* void 
   boost::enable_shared_from_this<Caver::GUIResponder>::_internal_accept_owner<Caver::MainMenuView,
   Caver::MainMenuView>(boost::shared_ptr<Caver::MainMenuView> const*, Caver::MainMenuView*) const
    */

void __thiscall
boost::enable_shared_from_this<Caver::GUIResponder>::
_internal_accept_owner<Caver::MainMenuView,Caver::MainMenuView>
          (enable_shared_from_this<Caver::GUIResponder> *this,shared_ptr *param_1,
          MainMenuView *param_2)

{
  long *plVar1;
  long lVar2;
  long *plVar3;
  
  plVar1 = *(long **)(this + 8);
                    /* try { // try from 0046fbb0 to 0056fbb3 has its CatchHandler @ 0046fbdc */
                    /* try { // try from 0046fbb4 to 0056fbef has its CatchHandler @ 0046fb18 */
  if ((plVar1 == (long *)0x0) || (plVar1[1] == 0)) {
    plVar3 = *(long **)(param_1 + 8);
    if (plVar3 != (long *)0x0) {
      plVar3[1] = plVar3[1] + 1;
    }
    *(MainMenuView **)this = param_2;
    if (plVar3 != plVar1) {
                    /* catch() { ... } // from try @ 0046fbb0 with catch @ 0046fbdc */
      if (plVar3 != (long *)0x0) {
        plVar3[2] = plVar3[2] + 1;
      }
                    /* try { // try from 0046fbf0 to 0056fc1f has its CatchHandler @ 0046fbf0
                       catch() { ... } // from try @ 0046fbf0 with catch @ 0046fbf0
                       catch() { ... } // from try @ 0046fec4 with catch @ 0046fbf0 */
      if ((plVar1 != (long *)0x0) && (lVar2 = plVar1[2], plVar1[2] = lVar2 + -1, lVar2 + -1 == 0)) {
        (**(code **)(*plVar1 + 0x18))();
      }
      *(long **)(this + 8) = plVar3;
    }
                    /* try { // try from 0046fc20 to 0056fc33 has its CatchHandler @ 004703cc */
    if ((plVar3 != (long *)0x0) && (lVar2 = plVar3[1], plVar3[1] = lVar2 + -1, lVar2 + -1 == 0)) {
      (**(code **)(*plVar3 + 0x10))(plVar3);
      lVar2 = plVar3[2];
      plVar3[2] = lVar2 + -1;
                    /* try { // try from 0046fc40 to 0056fc4b has its CatchHandler @ 00470360 */
      if (lVar2 + -1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x0046fc64. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x18))(plVar3);
        return;
      }
    }
  }
  return;
}


