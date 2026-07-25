/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FC370
 * Mangled: ._ZN5Caver11MusicPlayerD2Ev
 * Demangled: Caver::MusicPlayer::~MusicPlayer()
 *
 * Callers: 2
 *   0x0000000000480118  boost::detail::shared_count::shared_count<Caver::MusicPlayer>(Caver::MusicPlayer *)
 *   0x00000000004801AC  boost::detail::sp_counted_impl_p<Caver::MusicPlayer>::dispose(void)
 *
 * Callees: 1
 *   0x0000000000480200  Caver::MusicPlayer::~MusicPlayer()
 *
 * Referenced strings: 1
 *   insn=0x00000000001FC378 string=0x00000000001FC37C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void __fastcall Caver::MusicPlayer::~MusicPlayer(Caver::MusicPlayer *this)
{
  _ZN5Caver11MusicPlayerD2Ev(this);
}

