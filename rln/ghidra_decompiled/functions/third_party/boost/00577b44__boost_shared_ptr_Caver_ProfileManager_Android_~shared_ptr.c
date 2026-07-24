/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00577b44
 * Function: boost::shared_ptr<Caver::ProfileManager_Android>::~shared_ptr
 * Signature: undefined __thiscall ~shared_ptr(shared_ptr<Caver::ProfileManager_Android> * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* boost::shared_ptr<Caver::ProfileManager_Android>::~shared_ptr() */

void __thiscall
boost::shared_ptr<Caver::ProfileManager_Android>::~shared_ptr
          (shared_ptr<Caver::ProfileManager_Android> *this)

{
  long lVar1;
  long *plVar2;
  
  plVar2 = *(long **)(this + 8);
  if ((plVar2 != (long *)0x0) && (lVar1 = plVar2[1], plVar2[1] = lVar1 + -1, lVar1 + -1 == 0)) {
    (**(code **)(*plVar2 + 0x10))(plVar2);
    lVar1 = plVar2[2];
    plVar2[2] = lVar1 + -1;
    if (lVar1 + -1 == 0) {
                    /* try { // try from 00577b98 to 0067a547 has its CatchHandler @ 00575f94 */
                    /* WARNING: Could not recover jumptable at 0x00577ba8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x18))(plVar2);
      return;
    }
  }
  return;
}


