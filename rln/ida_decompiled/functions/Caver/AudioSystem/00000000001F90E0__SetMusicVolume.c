/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F90E0
 * Mangled: ._ZN5Caver11AudioSystem14SetMusicVolumeEf
 * Demangled: Caver::AudioSystem::SetMusicVolume(float)
 *
 * Callers: 1
 *   0x00000000003B4B98  boost::shared_ptr<Caver::MusicPlaylist>::shared_ptr<Caver::MusicPlaylist>(Caver::MusicPlaylist *)
 *
 * Callees: 1
 *   0x000000000047F5F0  Caver::AudioSystem::SetMusicVolume(float)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F90E8 string=0x00000000001F90EC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::AudioSystem::SetMusicVolume(Caver::AudioSystem *this, float a2)
{
  return _ZN5Caver11AudioSystem14SetMusicVolumeEf(this, a2);
}

