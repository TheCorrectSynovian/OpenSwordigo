/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 004cfa50
 * Function: Caver::ExperienceBar::InitWithGameState
 * Signature: undefined __thiscall InitWithGameState(ExperienceBar * this, shared_ptr * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::ExperienceBar::InitWithGameState(boost::shared_ptr<Caver::GameState> const&) */

void __thiscall Caver::ExperienceBar::InitWithGameState(ExperienceBar *this,shared_ptr *param_1)

{
  undefined8 uVar1;
  long lVar2;
  long *plVar3;
  
                    /* catch() { ... } // from try @ 004cfa1c with catch @ 004cfa54 */
  uVar1 = *(undefined8 *)param_1;
  lVar2 = *(long *)(param_1 + 8);
  if (lVar2 != 0) {
    *(long *)(lVar2 + 8) = *(long *)(lVar2 + 8) + 1;
  }
  plVar3 = *(long **)(this + 0x108);
  *(undefined8 *)(this + 0x100) = uVar1;
  *(long *)(this + 0x108) = lVar2;
                    /* catch() { ... } // from try @ 004cfac4 with catch @ 004cfa80 */
  if ((plVar3 != (long *)0x0) && (lVar2 = plVar3[1], plVar3[1] = lVar2 + -1, lVar2 + -1 == 0)) {
    (**(code **)(*plVar3 + 0x10))(plVar3);
    lVar2 = plVar3[2];
                    /* try { // try from 004cfaa8 to 005cfaab has its CatchHandler @ 004cfab8 */
    plVar3[2] = lVar2 + -1;
    if (lVar2 + -1 == 0) {
                    /* catch() { ... } // from try @ 004cfaa8 with catch @ 004cfab8 */
                    /* try { // try from 004cfabc to 005cfac3 has its CatchHandler @ 004cfacc */
      (**(code **)(*plVar3 + 0x18))(plVar3);
    }
  }
                    /* try { // try from 004cfac4 to 005cfacf has its CatchHandler @ 004cfa80 */
  UpdateExperience(this);
                    /* catch() { ... } // from try @ 004cfabc with catch @ 004cfacc */
  if (this[0x3f8] != (ExperienceBar)0x0) {
                    /* try { // try from 004cfad0 to 005cfb17 has its CatchHandler @ 004cfad0
                       catch(type#1 @ 00000000) { ... } // from try @ 004cfad0 with catch @ 004cfad0
                       catch(type#1 @ 00000000) { ... } // from try @ 004cfb34 with catch @ 004cfad0
                       catch(type#1 @ 00000000) { ... } // from try @ 004cfbe8 with catch @ 004cfad0
                        */
    this[0xe4] = (ExperienceBar)0x1;
  }
  return;
}


