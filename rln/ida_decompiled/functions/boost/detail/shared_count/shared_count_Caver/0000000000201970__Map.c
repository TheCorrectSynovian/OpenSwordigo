/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000201970
 * Mangled: ._ZN5boost6detail12shared_countC2IN5Caver3MapEEEPT_
 * Demangled: boost::detail::shared_count::shared_count<Caver::Map>(Caver::Map *)
 *
 * Callers: 1
 *   0x00000000003BFDFC  Caver::PlayerProfile::CreateProfile(std::string const&)
 *
 * Callees: 1
 *   0x00000000003C239C  boost::detail::shared_count::shared_count<Caver::Map>(Caver::Map *)
 *
 * Referenced strings: 1
 *   insn=0x0000000000201978 string=0x000000000020197C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 boost::detail::shared_count::shared_count<Caver::Map>()
{
  return _ZN5boost6detail12shared_countC2IN5Caver3MapEEEPT_();
}

