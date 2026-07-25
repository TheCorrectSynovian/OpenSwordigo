/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F5A40
 * Mangled: ._ZNSt20__uninitialized_copyILb0EE13__uninit_copyIPN5Caver10MusicTrackES4_EET0_T_S6_S5_
 * Demangled: std::__uninitialized_copy<false>::__uninit_copy<Caver::MusicTrack *,Caver::MusicTrack *>(Caver::MusicTrack *,Caver::MusicTrack *,Caver::MusicTrack *)
 *
 * Callers: 1
 *   0x00000000004821C8  Caver::MusicPlayer::RegisterProgramLibrary(Caver::ProgramState *)
 *
 * Callees: 1
 *   0x0000000000482D24  std::__uninitialized_copy<false>::__uninit_copy<Caver::MusicTrack *,Caver::MusicTrack *>(Caver::MusicTrack *,Caver::MusicTrack *,Caver::MusicTrack *)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F5A48 string=0x00000000001F5A4C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 std::__uninitialized_copy<false>::__uninit_copy<Caver::MusicTrack *,Caver::MusicTrack *>()
{
  return _ZNSt20__uninitialized_copyILb0EE13__uninit_copyIPN5Caver10MusicTrackES4_EET0_T_S6_S5_();
}

