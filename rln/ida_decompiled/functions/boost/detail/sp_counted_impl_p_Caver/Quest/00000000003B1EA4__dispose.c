/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000003B1EA4
 * Mangled: _ZN5boost6detail17sp_counted_impl_pIN5Caver5QuestEE7disposeEv
 * Demangled: boost::detail::sp_counted_impl_p<Caver::Quest>::dispose(void)
 *
 * Callers: 0
 *
 * Callees: 4
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000001FECD0  Caver::Quest::~Quest()
 *   0x00000000003B1EF0  boost::detail::sp_counted_impl_p<Caver::Quest>::get_deleter(std::type_info const&)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 2
 *   insn=0x00000000003B1ECC string=0x00000000001F72B0 "0'"
 *   insn=0x00000000003B1EE8 string=0x00000000003B1EEC "v>"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall boost::detail::sp_counted_impl_p<Caver::Quest>::dispose(__int64 a1)
{
  void *v1; // x19

  v1 = *(void **)(a1 + 24);
  if ( v1 )
  {
    Caver::Quest::~Quest(*(Caver::Quest **)(a1 + 24));
    operator delete(v1);
  }
}

