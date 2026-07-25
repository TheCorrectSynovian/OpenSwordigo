/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002008A0
 * Mangled: ._ZN5boost6detail12shared_countC2IN5Caver9GameStateEEEPT_
 * Demangled: boost::detail::shared_count::shared_count<Caver::GameState>(Caver::GameState *)
 *
 * Callers: 1
 *   0x00000000003BFDFC  Caver::PlayerProfile::CreateProfile(std::string const&)
 *
 * Callees: 1
 *   0x00000000003C2EB0  boost::detail::shared_count::shared_count<Caver::GameState>(Caver::GameState *)
 *
 * Referenced strings: 1
 *   insn=0x00000000002008A8 string=0x00000000002008AC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 boost::detail::shared_count::shared_count<Caver::GameState>()
{
  return _ZN5boost6detail12shared_countC2IN5Caver9GameStateEEEPT_();
}

