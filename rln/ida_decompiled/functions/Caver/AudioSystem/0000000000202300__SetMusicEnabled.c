/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000202300
 * Mangled: ._ZN5Caver11AudioSystem15SetMusicEnabledEb
 * Demangled: Caver::AudioSystem::SetMusicEnabled(bool)
 *
 * Callers: 1
 *   0x00000000003B4B98  boost::shared_ptr<Caver::MusicPlaylist>::shared_ptr<Caver::MusicPlaylist>(Caver::MusicPlaylist *)
 *
 * Callees: 1
 *   0x000000000047F338  Caver::AudioSystem::Setup(void)
 *
 * Referenced strings: 1
 *   insn=0x0000000000202308 string=0x000000000020230C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void __fastcall Caver::AudioSystem::SetMusicEnabled(Caver::AudioSystem *this)
{
  JUMPOUT(0x47F5D0);
}

