/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005bb720
 * Function: Caver::ProfileManager_Android::~ProfileManager_Android
 * Signature: undefined __thiscall ~ProfileManager_Android(ProfileManager_Android * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::ProfileManager_Android::~ProfileManager_Android() */

void __thiscall Caver::ProfileManager_Android::~ProfileManager_Android(ProfileManager_Android *this)

{
  long lVar1;
  long *plVar2;
  
  plVar2 = *(long **)(this + 0x98);
  *(undefined **)this = PTR_vtable_007e75e8 + 0x10;
                    /* try { // try from 005bb74c to 006bb757 has its CatchHandler @ 005bad18 */
                    /* catch() { ... } // from try @ 005bb494 with catch @ 005bb754
                       catch() { ... } // from try @ 005bb6cc with catch @ 005bb754 */
  if ((plVar2 != (long *)0x0) && (lVar1 = plVar2[1], plVar2[1] = lVar1 + -1, lVar1 + -1 == 0)) {
                    /* catch() { ... } // from try @ 005bb93c with catch @ 005bb758
                       catch() { ... } // from try @ 005bbac0 with catch @ 005bb758 */
    (**(code **)(*plVar2 + 0x10))(plVar2);
    lVar1 = plVar2[2];
    plVar2[2] = lVar1 + -1;
    if (lVar1 + -1 == 0) {
      (**(code **)(*plVar2 + 0x18))(plVar2);
    }
  }
  ProfileManager::~ProfileManager((ProfileManager *)this);
  return;
}


