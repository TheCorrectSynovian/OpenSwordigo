/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FEBD0
 * Mangled: ._ZN5Caver11AudioSystem14SetSoundVolumeEf
 * Demangled: Caver::AudioSystem::SetSoundVolume(float)
 *
 * Callers: 1
 *   0x00000000003B4B98  boost::shared_ptr<Caver::MusicPlaylist>::shared_ptr<Caver::MusicPlaylist>(Caver::MusicPlaylist *)
 *
 * Callees: 1
 *   0x000000000047F600  Caver::AudioSystem::SetSoundVolume(float)
 *
 * Referenced strings: 1
 *   insn=0x00000000001FEBD8 string=0x00000000001FEBDC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::AudioSystem::SetSoundVolume(Caver::AudioSystem *this, float a2)
{
  return _ZN5Caver11AudioSystem14SetSoundVolumeEf(this, a2);
}

