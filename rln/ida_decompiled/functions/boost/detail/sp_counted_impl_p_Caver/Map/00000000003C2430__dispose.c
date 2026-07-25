/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000003C2430
 * Mangled: _ZN5boost6detail17sp_counted_impl_pIN5Caver3MapEE7disposeEv
 * Demangled: boost::detail::sp_counted_impl_p<Caver::Map>::dispose(void)
 *
 * Callers: 0
 *
 * Callees: 4
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000001F9660  Caver::Map::~Map()
 *   0x00000000003C247C  boost::detail::sp_counted_impl_p<Caver::Map>::get_deleter(std::type_info const&)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 2
 *   insn=0x00000000003C2448 string=0x00000000001F9660 "0'"
 *   insn=0x00000000003C2458 string=0x00000000001F72B0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall boost::detail::sp_counted_impl_p<Caver::Map>::dispose(__int64 a1)
{
  void *v1; // x19

  v1 = *(void **)(a1 + 24);
  if ( v1 )
  {
    Caver::Map::~Map(*(Caver::Map **)(a1 + 24));
    operator delete(v1);
  }
}

