/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00582d24
 * Function: std::__uninitialized_copy<false>::__uninit_copy<Caver::MusicTrack*,Caver::MusicTrack*>
 * Signature: MusicTrack * __cdecl __uninit_copy<Caver::MusicTrack*,Caver::MusicTrack*>(MusicTrack * param_1, MusicTrack * param_2, MusicTrack * param_3)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::MusicTrack* std::__uninitialized_copy<false>::__uninit_copy<Caver::MusicTrack*,
   Caver::MusicTrack*>(Caver::MusicTrack*, Caver::MusicTrack*, Caver::MusicTrack*) */

MusicTrack *
std::__uninitialized_copy<false>::__uninit_copy<Caver::MusicTrack*,Caver::MusicTrack*>
          (MusicTrack *param_1,MusicTrack *param_2,MusicTrack *param_3)

{
  long lVar1;
  long lVar2;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
                    /* catch() { ... } // from try @ 0058177c with catch @ 00582d48 */
                    /* catch() { ... } // from try @ 00581774 with catch @ 00582d4c */
                    /* catch() { ... } // from try @ 00581578 with catch @ 00582d50 */
  for (; param_1 != param_2; param_1 = param_1 + 0x10) {
    FUN_0066a528(param_3,param_1);
    *(undefined4 *)(param_3 + 8) = *(undefined4 *)(param_1 + 8);
    param_3 = param_3 + 0x10;
  }
  if (*(long *)(lVar1 + 0x28) == lVar2) {
                    /* catch() { ... } // from try @ 0058156c with catch @ 00582dac */
    return param_3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


