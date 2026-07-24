/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00485710
 * Function: Caver::OfflineAchievementsViewController::~OfflineAchievementsViewController
 * Signature: undefined __thiscall ~OfflineAchievementsViewController(OfflineAchievementsViewController * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::OfflineAchievementsViewController::~OfflineAchievementsViewController() */

void __thiscall
Caver::OfflineAchievementsViewController::~OfflineAchievementsViewController
          (OfflineAchievementsViewController *this)

{
  ~OfflineAchievementsViewController(this);
                    /* try { // try from 00485728 to 0058572b has its CatchHandler @ 00485778 */
                    /* try { // try from 0048572c to 0058578b has its CatchHandler @ 0048570c */
  operator_delete(this);
  return;
}


