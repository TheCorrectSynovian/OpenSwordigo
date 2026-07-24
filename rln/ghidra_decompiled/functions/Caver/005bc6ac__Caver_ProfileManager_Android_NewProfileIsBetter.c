/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005bc6ac
 * Function: Caver::ProfileManager_Android::NewProfileIsBetter
 * Signature: undefined __thiscall NewProfileIsBetter(ProfileManager_Android * this, ProfileStats * param_1, ProfileStats * param_2)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::ProfileManager_Android::NewProfileIsBetter(Caver::ProfileStats const&, Caver::ProfileStats
   const&) */

undefined4 __thiscall
Caver::ProfileManager_Android::NewProfileIsBetter
          (ProfileManager_Android *this,ProfileStats *param_1,ProfileStats *param_2)

{
  int iVar1;
  size_t __n;
  
  if (*param_2 != (ProfileStats)0x0) {
    if (*(float *)(param_1 + 4) <= *(float *)(param_2 + 4) + DAT_00683734) {
      if (*(float *)(param_1 + 4) <= *(float *)(param_2 + 4) + DAT_006837a4) {
        return 0;
      }
                    /* try { // try from 005bc6ec to 006bc703 has its CatchHandler @ 005bce30 */
      if (*(double *)(param_1 + 8) <= *(double *)(param_2 + 8) + DAT_00690348) {
        __n = *(size_t *)((long)*(void **)(param_1 + 0x10) + -0x18);
        if ((__n == *(size_t *)((long)*(void **)(param_2 + 0x10) + -0x18)) &&
           (iVar1 = memcmp(*(void **)(param_1 + 0x10),*(void **)(param_2 + 0x10),__n), iVar1 == 0))
        {
          return 0;
        }
      }
    }
  }
  return 1;
}


