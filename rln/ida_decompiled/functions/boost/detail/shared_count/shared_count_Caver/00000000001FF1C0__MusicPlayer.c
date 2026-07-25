/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FF1C0
 * Mangled: ._ZN5boost6detail12shared_countC2IN5Caver11MusicPlayerEEEPT_
 * Demangled: boost::detail::shared_count::shared_count<Caver::MusicPlayer>(Caver::MusicPlayer *)
 *
 * Callers: 1
 *   0x000000000047F338  Caver::AudioSystem::Setup(void)
 *
 * Callees: 1
 *   0x0000000000480118  boost::detail::shared_count::shared_count<Caver::MusicPlayer>(Caver::MusicPlayer *)
 *
 * Referenced strings: 1
 *   insn=0x00000000001FF1C8 string=0x00000000001FF1CC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 boost::detail::shared_count::shared_count<Caver::MusicPlayer>()
{
  return _ZN5boost6detail12shared_countC2IN5Caver11MusicPlayerEEEPT_();
}

