/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 004a5ca4
 * Function: boost::shared_ptr<Caver::ProfileManager>::~shared_ptr
 * Signature: undefined __thiscall ~shared_ptr(shared_ptr<Caver::ProfileManager> * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* boost::shared_ptr<Caver::ProfileManager>::~shared_ptr() */

void __thiscall
boost::shared_ptr<Caver::ProfileManager>::~shared_ptr(shared_ptr<Caver::ProfileManager> *this)

{
  long lVar1;
  long *plVar2;
  
  plVar2 = *(long **)(this + 8);
                    /* try { // try from 004a5cb4 to 005a5cc7 has its CatchHandler @ 004a5cec */
  if ((plVar2 != (long *)0x0) && (lVar1 = plVar2[1], plVar2[1] = lVar1 + -1, lVar1 + -1 == 0)) {
                    /* try { // try from 004a5cc8 to 005a5cef has its CatchHandler @ 004a5c98 */
    (**(code **)(*plVar2 + 0x10))(plVar2);
    lVar1 = plVar2[2];
    plVar2[2] = lVar1 + -1;
    if (lVar1 + -1 == 0) {
                    /* catch() { ... } // from try @ 004a6078 with catch @ 004a5cfc
                       catch() { ... } // from try @ 004a64f4 with catch @ 004a5cfc */
                    /* WARNING: Could not recover jumptable at 0x004a5d08. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x18))(plVar2);
      return;
    }
  }
                    /* catch() { ... } // from try @ 004a5cb4 with catch @ 004a5cec */
  return;
}


