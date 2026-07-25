/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000482064
 * Mangled: _ZN5Caver11MusicPlayer9SetVolumeEf
 * Demangled: Caver::MusicPlayer::SetVolume(float)
 *
 * Callers: 1
 *   0x00000000001F56C0  Caver::MusicPlayer::SetVolume(float)
 *
 * Callees: 1
 *   0x00000000001FBE80  Caver::MusicPlayer::UpdatePlayerVolume(void)
 *
 * Referenced strings: 1
 *   insn=0x0000000000482068 string=0x00000000001FBE80 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::MusicPlayer::SetVolume(Caver::MusicPlayer *this, float a2)
{
  *((float *)this + 1) = a2;
  return Caver::MusicPlayer::UpdatePlayerVolume(this);
}

