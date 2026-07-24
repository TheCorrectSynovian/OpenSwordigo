/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 004b42f8
 * Function: boost::shared_ptr<Caver::GameOptions>::~shared_ptr
 * Signature: undefined __thiscall ~shared_ptr(shared_ptr<Caver::GameOptions> * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* boost::shared_ptr<Caver::GameOptions>::~shared_ptr() */

void __thiscall
boost::shared_ptr<Caver::GameOptions>::~shared_ptr(shared_ptr<Caver::GameOptions> *this)

{
  long lVar1;
  long *plVar2;
  
  plVar2 = *(long **)(this + 8);
                    /* catch() { ... } // from try @ 004b4364 with catch @ 004b4318 */
  if ((plVar2 != (long *)0x0) && (lVar1 = plVar2[1], plVar2[1] = lVar1 + -1, lVar1 + -1 == 0)) {
    (**(code **)(*plVar2 + 0x10))(plVar2);
    lVar1 = plVar2[2];
    plVar2[2] = lVar1 + -1;
    if (lVar1 + -1 == 0) {
                    /* try { // try from 004b4354 to 005b4363 has its CatchHandler @ 004b43e4 */
                    /* WARNING: Could not recover jumptable at 0x004b435c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x18))(plVar2);
      return;
    }
  }
                    /* try { // try from 004b433c to 005b434f has its CatchHandler @ 004b4454 */
  return;
}


