/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FC3D0
 * Mangled: ._ZN5Caver11MusicPlayerC2Ev
 * Demangled: Caver::MusicPlayer::MusicPlayer(void)
 *
 * Callers: 1
 *   0x000000000047F338  Caver::AudioSystem::Setup(void)
 *
 * Callees: 1
 *   0x00000000004805FC  std::vector<boost::intrusive_ptr<Caver::SoundEffectSource>,std::allocator<boost::intrusive_ptr<Caver::SoundEffectSource>>>::_M_insert_aux(__gnu_cxx::__normal_iterator<boost::intrusive_ptr<Caver::SoundEffectSource>*,std::vector<boost::intrusive_ptr<Caver::SoundEffectSource>,std::allocator<boost::intrusive_ptr<Caver::SoundEffectSource>>>>,boost::intrusive_ptr<Caver::SoundEffectSource> const&)
 *
 * Referenced strings: 1
 *   insn=0x00000000001FC3D8 string=0x00000000001FC3DC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void __fastcall Caver::MusicPlayer::MusicPlayer(Caver::MusicPlayer *this)
{
  JUMPOUT(0x4808F4);
}

