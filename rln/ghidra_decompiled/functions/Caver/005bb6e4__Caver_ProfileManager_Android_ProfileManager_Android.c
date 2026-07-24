/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005bb6e4
 * Function: Caver::ProfileManager_Android::ProfileManager_Android
 * Signature: undefined __thiscall ProfileManager_Android(ProfileManager_Android * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::ProfileManager_Android::ProfileManager_Android() */

void __thiscall Caver::ProfileManager_Android::ProfileManager_Android(ProfileManager_Android *this)

{
  undefined *puVar1;
  
  ProfileManager::ProfileManager((ProfileManager *)this);
  puVar1 = PTR_vtable_007e75e8;
                    /* catch() { ... } // from try @ 005bb238 with catch @ 005bb700
                       catch() { ... } // from try @ 005bb250 with catch @ 005bb700
                       catch() { ... } // from try @ 005bb3d0 with catch @ 005bb700 */
  this[0x88] = (ProfileManager_Android)0x0;
  *(undefined8 *)(this + 0x90) = 0;
  *(undefined8 *)(this + 0x98) = 0;
  *(undefined4 *)(this + 0xa0) = 0;
  *(undefined **)this = puVar1 + 0x10;
  return;
}


