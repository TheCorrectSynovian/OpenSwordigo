/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FC140
 * Mangled: ._ZNSt6vectorIN5Caver10MusicTrackESaIS1_EE13_M_insert_auxEN9__gnu_cxx17__normal_iteratorIPS1_S3_EERKS1_
 * Demangled: std::vector<Caver::MusicTrack,std::allocator<Caver::MusicTrack>>::_M_insert_aux(__gnu_cxx::__normal_iterator<Caver::MusicTrack*,std::vector<Caver::MusicTrack,std::allocator<Caver::MusicTrack>>>,Caver::MusicTrack const&)
 *
 * Callers: 2
 *   0x0000000000480F14  Caver::MusicPlayer::PlaylistForName(std::string const&)
 *   0x000000000048331C  Caver::MusicPlaylist::LoadFromProtobufMessage(Caver::Proto::MusicPlaylist const&)
 *
 * Callees: 1
 *   0x00000000004821C8  Caver::MusicPlayer::RegisterProgramLibrary(Caver::ProgramState *)
 *
 * Referenced strings: 1
 *   insn=0x00000000001FC148 string=0x00000000001FC14C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void std::vector<Caver::MusicTrack>::_M_insert_aux()
{
  JUMPOUT(0x48290C);
}

