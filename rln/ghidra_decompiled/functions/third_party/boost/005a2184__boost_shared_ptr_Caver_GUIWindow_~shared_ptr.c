/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005a2184
 * Function: boost::shared_ptr<Caver::GUIWindow>::~shared_ptr
 * Signature: undefined __thiscall ~shared_ptr(shared_ptr<Caver::GUIWindow> * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* boost::shared_ptr<Caver::GUIWindow>::~shared_ptr() */

void __thiscall boost::shared_ptr<Caver::GUIWindow>::~shared_ptr(shared_ptr<Caver::GUIWindow> *this)

{
  long lVar1;
  long *plVar2;
  
  plVar2 = *(long **)(this + 8);
  if ((plVar2 != (long *)0x0) && (lVar1 = plVar2[1], plVar2[1] = lVar1 + -1, lVar1 + -1 == 0)) {
                    /* try { // try from 005a21a8 to 006a21fb has its CatchHandler @ 005a1684 */
                    /* catch() { ... } // from try @ 005a16d8 with catch @ 005a21ac */
    (**(code **)(*plVar2 + 0x10))(plVar2);
    lVar1 = plVar2[2];
                    /* catch() { ... } // from try @ 005a188c with catch @ 005a21c0
                       catch() { ... } // from try @ 005a18ac with catch @ 005a21c0
                       catch() { ... } // from try @ 005a1e80 with catch @ 005a21c0 */
    plVar2[2] = lVar1 + -1;
    if (lVar1 + -1 == 0) {
                    /* catch() { ... } // from try @ 005a1ad8 with catch @ 005a21d4 */
                    /* catch() { ... } // from try @ 005a1ab0 with catch @ 005a21d8 */
                    /* WARNING: Could not recover jumptable at 0x005a21e8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x18))(plVar2);
      return;
    }
  }
                    /* catch() { ... } // from try @ 005a192c with catch @ 005a21c8
                       catch() { ... } // from try @ 005a1998 with catch @ 005a21c8
                       catch() { ... } // from try @ 005a1b10 with catch @ 005a21c8
                       catch() { ... } // from try @ 005a1b24 with catch @ 005a21c8 */
                    /* catch() { ... } // from try @ 005a17e4 with catch @ 005a21cc
                       catch() { ... } // from try @ 005a1878 with catch @ 005a21cc */
  return;
}


