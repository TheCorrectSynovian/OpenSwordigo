/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 004474ac
 * Function: boost::enable_shared_from_this<Caver::GUIResponder>::_internal_accept_owner<Caver::CharacterView,Caver::CharacterView>
 * Signature: void __thiscall _internal_accept_owner<Caver::CharacterView,Caver::CharacterView>(enable_shared_from_this<Caver::GUIResponder> * this, shared_ptr * param_1, CharacterView * param_2)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* void 
   boost::enable_shared_from_this<Caver::GUIResponder>::_internal_accept_owner<Caver::CharacterView,
   Caver::CharacterView>(boost::shared_ptr<Caver::CharacterView> const*, Caver::CharacterView*)
   const */

void __thiscall
boost::enable_shared_from_this<Caver::GUIResponder>::
_internal_accept_owner<Caver::CharacterView,Caver::CharacterView>
          (enable_shared_from_this<Caver::GUIResponder> *this,shared_ptr *param_1,
          CharacterView *param_2)

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
    *(CharacterView **)this = param_2;
    if (plVar3 != plVar1) {
      if (plVar3 != (long *)0x0) {
                    /* catch(type#1 @ 00000000) { ... } // from try @ 004473b4 with catch @ 004474f0
                        */
        plVar3[2] = plVar3[2] + 1;
      }
      if ((plVar1 != (long *)0x0) && (lVar2 = plVar1[2], plVar1[2] = lVar2 + -1, lVar2 + -1 == 0)) {
                    /* try { // try from 00447514 to 0054753b has its CatchHandler @ 00447544 */
        (**(code **)(*plVar1 + 0x18))();
      }
      *(long **)(this + 8) = plVar3;
    }
    if ((plVar3 != (long *)0x0) && (lVar2 = plVar3[1], plVar3[1] = lVar2 + -1, lVar2 + -1 == 0)) {
                    /* try { // try from 0044753c to 00547547 has its CatchHandler @ 0044731c */
      (**(code **)(*plVar3 + 0x10))(plVar3);
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00447514 with catch @ 00447544
                        */
      lVar2 = plVar3[2];
                    /* catch() { ... } // from try @ 0044756c with catch @ 00447548
                       catch() { ... } // from try @ 00447644 with catch @ 00447548 */
      plVar3[2] = lVar2 + -1;
      if (lVar2 + -1 == 0) {
                    /* try { // try from 00447564 to 0054756b has its CatchHandler @ 004475ac */
                    /* try { // try from 0044756c to 005475eb has its CatchHandler @ 00447548 */
                    /* WARNING: Could not recover jumptable at 0x00447574. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x18))(plVar3);
        return;
      }
    }
  }
  return;
}


