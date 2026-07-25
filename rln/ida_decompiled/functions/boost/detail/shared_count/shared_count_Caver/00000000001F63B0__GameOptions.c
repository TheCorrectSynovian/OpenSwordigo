/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F63B0
 * Mangled: ._ZN5boost6detail12shared_countC2IN5Caver11GameOptionsEEEPT_
 * Demangled: boost::detail::shared_count::shared_count<Caver::GameOptions>(Caver::GameOptions *)
 *
 * Callers: 2
 *   0x00000000003B4360  Caver::GameOptions::defaultOptions(void)
 *   0x00000000003B44A4  Caver::GameOptions::sharedOptions(void)
 *
 * Callees: 1
 *   0x00000000003B4D88  boost::detail::shared_count::shared_count<Caver::GameOptions>(Caver::GameOptions *)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F63B8 string=0x00000000001F63BC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 boost::detail::shared_count::shared_count<Caver::GameOptions>()
{
  return _ZN5boost6detail12shared_countC2IN5Caver11GameOptionsEEEPT_();
}

