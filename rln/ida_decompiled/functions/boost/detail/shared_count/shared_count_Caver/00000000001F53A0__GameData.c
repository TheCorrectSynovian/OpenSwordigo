/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F53A0
 * Mangled: ._ZN5boost6detail12shared_countC2IN5Caver8GameDataEEEPT_
 * Demangled: boost::detail::shared_count::shared_count<Caver::GameData>(Caver::GameData *)
 *
 * Callers: 1
 *   0x00000000003BFDFC  Caver::PlayerProfile::CreateProfile(std::string const&)
 *
 * Callees: 1
 *   0x00000000003C29F8  boost::detail::shared_count::shared_count<Caver::GameData>(Caver::GameData *)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F53A8 string=0x00000000001F53AC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 boost::detail::shared_count::shared_count<Caver::GameData>()
{
  return _ZN5boost6detail12shared_countC2IN5Caver8GameDataEEEPT_();
}

