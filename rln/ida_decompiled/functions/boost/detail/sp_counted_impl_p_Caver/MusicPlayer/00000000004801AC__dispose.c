/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004801AC
 * Mangled: _ZN5boost6detail17sp_counted_impl_pIN5Caver11MusicPlayerEE7disposeEv
 * Demangled: boost::detail::sp_counted_impl_p<Caver::MusicPlayer>::dispose(void)
 *
 * Callers: 0
 *
 * Callees: 4
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000001FC370  Caver::MusicPlayer::~MusicPlayer()
 *   0x00000000004801F8  boost::detail::sp_counted_impl_p<Caver::MusicPlayer>::get_deleter(std::type_info const&)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 5
 *   insn=0x00000000004801C0 string=0x00000000004801C4 "k"
 *   insn=0x00000000004801C4 string=0x00000000001FC370 "0'"
 *   insn=0x00000000004801D0 string=0x00000000004801D4 "7"
 *   insn=0x00000000004801D4 string=0x00000000001F72B0 "0'"
 *   insn=0x00000000004801E8 string=0x00000000004801EC "1"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall boost::detail::sp_counted_impl_p<Caver::MusicPlayer>::dispose(__int64 a1)
{
  void *v1; // x19

  v1 = *(void **)(a1 + 24);
  if ( v1 )
  {
    Caver::MusicPlayer::~MusicPlayer(*(Caver::MusicPlayer **)(a1 + 24));
    operator delete(v1);
  }
}

