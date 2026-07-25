/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F8C10
 * Mangled: ._ZN5boost6detail12shared_countC2IN5Caver4FontEEEPT_
 * Demangled: boost::detail::shared_count::shared_count<Caver::Font>(Caver::Font *)
 *
 * Callers: 1
 *   0x00000000004C3480  Caver::FontLibrary::FontWithName(std::string const&)
 *
 * Callees: 1
 *   0x00000000004C4AF0  boost::detail::shared_count::shared_count<Caver::Font>(Caver::Font *)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F8C18 string=0x00000000001F8C1C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 boost::detail::shared_count::shared_count<Caver::Font>()
{
  return _ZN5boost6detail12shared_countC2IN5Caver4FontEEEPT_();
}

