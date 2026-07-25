/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F8830
 * Mangled: ._ZN5Caver11AudioSystem15SetSoundEnabledEb
 * Demangled: Caver::AudioSystem::SetSoundEnabled(bool)
 *
 * Callers: 1
 *   0x00000000003B4B98  boost::shared_ptr<Caver::MusicPlaylist>::shared_ptr<Caver::MusicPlaylist>(Caver::MusicPlaylist *)
 *
 * Callees: 1
 *   0x000000000047F5E4  Caver::AudioSystem::SetSoundEnabled(bool)
 *
 * Referenced strings: 2
 *   insn=0x00000000001F8834 string=0x000000000047F5E4 "("
 *   insn=0x00000000001F8838 string=0x00000000001F883C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::AudioSystem::SetSoundEnabled(Caver::AudioSystem *this, bool a2)
{
  return _ZN5Caver11AudioSystem15SetSoundEnabledEb(this, a2);
}

