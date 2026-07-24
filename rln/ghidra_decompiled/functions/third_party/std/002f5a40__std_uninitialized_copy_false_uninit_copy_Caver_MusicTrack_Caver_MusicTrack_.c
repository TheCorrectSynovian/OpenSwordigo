/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 002f5a40
 * Function: std::__uninitialized_copy<false>::__uninit_copy<Caver::MusicTrack*,Caver::MusicTrack*>
 * Signature: MusicTrack * __cdecl __uninit_copy<Caver::MusicTrack*,Caver::MusicTrack*>(MusicTrack * param_1, MusicTrack * param_2, MusicTrack * param_3)
 * Thunk: true
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


MusicTrack *
std::__uninitialized_copy<false>::__uninit_copy<Caver::MusicTrack*,Caver::MusicTrack*>
          (MusicTrack *param_1,MusicTrack *param_2,MusicTrack *param_3)

{
  MusicTrack *pMVar1;
  
  pMVar1 = (MusicTrack *)
           (*(code *)PTR___uninit_copy<Caver::MusicTrack*,Caver::MusicTrack*>_007dd550)();
  return pMVar1;
}


