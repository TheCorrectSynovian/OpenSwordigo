/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 004a8df8
 * Function: Caver::ProfileManagerLoadingViewController::ProfileManagerLoadingViewController
 * Signature: undefined __thiscall ProfileManagerLoadingViewController(ProfileManagerLoadingViewController * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::ProfileManagerLoadingViewController::ProfileManagerLoadingViewController() */

void __thiscall
Caver::ProfileManagerLoadingViewController::ProfileManagerLoadingViewController
          (ProfileManagerLoadingViewController *this)

{
  undefined *puVar1;
  
                    /* catch() { ... } // from try @ 004a7ffc with catch @ 004a8e04 */
  GUIViewController::GUIViewController((GUIViewController *)this);
  puVar1 = PTR_vtable_007e6328;
  this[0x48] = (ProfileManagerLoadingViewController)0x0;
  *(undefined8 *)(this + 0x54) = 0;
  *(undefined8 *)(this + 0x4c) = 0;
  *(undefined **)this = puVar1 + 0x10;
  *(undefined4 *)(this + 0x5c) = 0;
  return;
}


