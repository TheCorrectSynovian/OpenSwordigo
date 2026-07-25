/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000044D154
 * Mangled: _ZN5boost6detail17sp_counted_impl_pIN5Caver9PODLoaderEE7disposeEv
 * Demangled: boost::detail::sp_counted_impl_p<Caver::PODLoader>::dispose(void)
 *
 * Callers: 0
 *
 * Callees: 4
 *   0x00000000001F5500  Caver::PODLoader::~PODLoader()
 *   0x00000000001F72B0  operator delete(void *)
 *   0x000000000044D1A0  boost::detail::sp_counted_impl_p<Caver::PODLoader>::get_deleter(std::type_info const&)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 4
 *   insn=0x000000000044D16C string=0x00000000001F5500 "P'"
 *   insn=0x000000000044D178 string=0x000000000044D17C "M"
 *   insn=0x000000000044D17C string=0x00000000001F72B0 "0'"
 *   insn=0x000000000044D190 string=0x000000000044D194 "G"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall boost::detail::sp_counted_impl_p<Caver::PODLoader>::dispose(__int64 a1)
{
  void *v1; // x19

  v1 = *(void **)(a1 + 24);
  if ( v1 )
  {
    Caver::PODLoader::~PODLoader(*(Caver::PODLoader **)(a1 + 24));
    operator delete(v1);
  }
}

