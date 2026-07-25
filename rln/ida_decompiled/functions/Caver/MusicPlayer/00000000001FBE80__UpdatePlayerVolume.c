/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FBE80
 * Mangled: ._ZN5Caver11MusicPlayer18UpdatePlayerVolumeEv
 * Demangled: Caver::MusicPlayer::UpdatePlayerVolume(void)
 *
 * Callers: 3
 *   0x00000000004815F0  Caver::MusicPlayer::CreatePlayerForPlaylist(boost::shared_ptr<Caver::MusicPlaylist> const&)
 *   0x0000000000482064  Caver::MusicPlayer::SetVolume(float)
 *   0x0000000000482090  Caver::MusicPlayer::Update(float)
 *
 * Callees: 1
 *   0x0000000000481CE8  Caver::MusicPlayer::UpdatePlayerVolume(void)
 *
 * Referenced strings: 1
 *   insn=0x00000000001FBE88 string=0x00000000001FBE8C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::MusicPlayer::UpdatePlayerVolume(Caver::MusicPlayer *this)
{
  return _ZN5Caver11MusicPlayer18UpdatePlayerVolumeEv(this);
}

