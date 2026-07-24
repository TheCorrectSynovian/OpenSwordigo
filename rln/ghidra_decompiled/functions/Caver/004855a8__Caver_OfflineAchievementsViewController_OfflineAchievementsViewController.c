/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 004855a8
 * Function: Caver::OfflineAchievementsViewController::OfflineAchievementsViewController
 * Signature: undefined __thiscall OfflineAchievementsViewController(OfflineAchievementsViewController * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::OfflineAchievementsViewController::OfflineAchievementsViewController() */

void __thiscall
Caver::OfflineAchievementsViewController::OfflineAchievementsViewController
          (OfflineAchievementsViewController *this)

{
  undefined *puVar1;
  
                    /* try { // try from 004855b0 to 005855e7 has its CatchHandler @ 00485688 */
  GUIViewController::GUIViewController((GUIViewController *)this);
  puVar1 = PTR_vtable_007e6af8;
  *(undefined8 *)(this + 0x58) = 0;
  *(undefined8 *)(this + 0x60) = 0;
  *(undefined8 *)(this + 0x48) = 0;
  *(undefined8 *)(this + 0x50) = 0;
  *(undefined **)this = puVar1 + 0x10;
  return;
}


