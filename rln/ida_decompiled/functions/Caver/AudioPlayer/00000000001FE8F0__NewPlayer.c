/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FE8F0
 * Mangled: ._ZN5Caver11AudioPlayer9NewPlayerEv
 * Demangled: Caver::AudioPlayer::NewPlayer(void)
 *
 * Callers: 1
 *   0x00000000004815F0  Caver::MusicPlayer::CreatePlayerForPlaylist(boost::shared_ptr<Caver::MusicPlaylist> const&)
 *
 * Callees: 1
 *   0x00000000004D16D4  Caver::AudioPlayer::NewPlayer(void)
 *
 * Referenced strings: 1
 *   insn=0x00000000001FE8F8 string=0x00000000001FE8FC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::AudioPlayer::NewPlayer(Caver::AudioPlayer *this)
{
  return _ZN5Caver11AudioPlayer9NewPlayerEv(this);
}

