/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 004a5e3c
 * Function: Caver::ProfileManager::SetSharedManager
 * Signature: undefined __cdecl SetSharedManager(shared_ptr * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::ProfileManager::SetSharedManager(boost::shared_ptr<Caver::ProfileManager> const&) */

void Caver::ProfileManager::SetSharedManager(shared_ptr *param_1)

{
  long *plVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  
                    /* try { // try from 004a5e40 to 005a5e57 has its CatchHandler @ 004a61e8 */
  DAT_007e9950 = *(undefined8 *)param_1;
  lVar2 = *(long *)(param_1 + 8);
  if (lVar2 != 0) {
    *(long *)(lVar2 + 8) = *(long *)(lVar2 + 8) + 1;
  }
                    /* try { // try from 004a5e5c to 005a5e6f has its CatchHandler @ 004a618c */
  plVar3 = DAT_007e9958;
  if ((DAT_007e9958 != (long *)0x0) &&
     (lVar4 = DAT_007e9958[1], plVar1 = DAT_007e9958 + 1, DAT_007e9958 = (long *)lVar2,
     *plVar1 = lVar4 + -1, lVar2 = (long)DAT_007e9958, lVar4 + -1 == 0)) {
                    /* try { // try from 004a5e80 to 005a5e93 has its CatchHandler @ 004a6188 */
    (**(code **)(*plVar3 + 0x10))(plVar3);
    lVar4 = plVar3[2];
                    /* try { // try from 004a5e94 to 005a5eab has its CatchHandler @ 004a6150 */
    plVar3[2] = lVar4 + -1;
    lVar2 = (long)DAT_007e9958;
    if (lVar4 + -1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x004a5ec0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar3 + 0x18))(plVar3);
      return;
    }
  }
  DAT_007e9958 = (long *)lVar2;
  return;
}


