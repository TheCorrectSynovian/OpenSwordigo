/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F5500
 * Mangled: ._ZN5Caver9PODLoaderD2Ev
 * Demangled: Caver::PODLoader::~PODLoader()
 *
 * Callers: 2
 *   0x000000000044D0C0  boost::detail::shared_count::shared_count<Caver::PODLoader>(Caver::PODLoader *)
 *   0x000000000044D154  boost::detail::sp_counted_impl_p<Caver::PODLoader>::dispose(void)
 *
 * Callees: 1
 *   0x000000000044D1A8  Caver::PODLoader::~PODLoader()
 *
 * Referenced strings: 1
 *   insn=0x00000000001F5508 string=0x00000000001F550C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void __fastcall Caver::PODLoader::~PODLoader(Caver::PODLoader *this)
{
  _ZN5Caver9PODLoaderD2Ev(this);
}

