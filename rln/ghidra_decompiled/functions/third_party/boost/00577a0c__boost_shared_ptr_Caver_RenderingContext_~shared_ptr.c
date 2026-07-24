/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00577a0c
 * Function: boost::shared_ptr<Caver::RenderingContext>::~shared_ptr
 * Signature: undefined __thiscall ~shared_ptr(shared_ptr<Caver::RenderingContext> * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* boost::shared_ptr<Caver::RenderingContext>::~shared_ptr() */

void __thiscall
boost::shared_ptr<Caver::RenderingContext>::~shared_ptr(shared_ptr<Caver::RenderingContext> *this)

{
  long lVar1;
  long *plVar2;
  
                    /* try { // try from 00577a18 to 00677b97 has its CatchHandler @ 0057c658 */
  plVar2 = *(long **)(this + 8);
  if ((plVar2 != (long *)0x0) && (lVar1 = plVar2[1], plVar2[1] = lVar1 + -1, lVar1 + -1 == 0)) {
    (**(code **)(*plVar2 + 0x10))(plVar2);
    lVar1 = plVar2[2];
    plVar2[2] = lVar1 + -1;
    if (lVar1 + -1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x00577a70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x18))(plVar2);
      return;
    }
  }
  return;
}


