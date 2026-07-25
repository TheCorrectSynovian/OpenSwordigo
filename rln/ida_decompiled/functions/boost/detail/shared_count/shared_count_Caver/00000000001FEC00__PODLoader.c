/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FEC00
 * Mangled: ._ZN5boost6detail12shared_countC2IN5Caver9PODLoaderEEEPT_
 * Demangled: boost::detail::shared_count::shared_count<Caver::PODLoader>(Caver::PODLoader *)
 *
 * Callers: 1
 *   0x000000000044B5C4  Caver::ModelLibrary::ModelForName(std::string const&)
 *
 * Callees: 1
 *   0x000000000044D0C0  boost::detail::shared_count::shared_count<Caver::PODLoader>(Caver::PODLoader *)
 *
 * Referenced strings: 1
 *   insn=0x00000000001FEC08 string=0x00000000001FEC0C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 boost::detail::shared_count::shared_count<Caver::PODLoader>()
{
  return _ZN5boost6detail12shared_countC2IN5Caver9PODLoaderEEEPT_();
}

