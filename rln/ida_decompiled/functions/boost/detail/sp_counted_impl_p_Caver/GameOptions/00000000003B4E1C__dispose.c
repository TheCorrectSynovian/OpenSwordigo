/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000003B4E1C
 * Mangled: _ZN5boost6detail17sp_counted_impl_pIN5Caver11GameOptionsEE7disposeEv
 * Demangled: boost::detail::sp_counted_impl_p<Caver::GameOptions>::dispose(void)
 *
 * Callers: 0
 *
 * Callees: 4
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000001FB670  Caver::GameOptions::~GameOptions()
 *   0x00000000003B4E68  boost::detail::sp_counted_impl_p<Caver::GameOptions>::get_deleter(std::type_info const&)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 3
 *   insn=0x00000000003B4E34 string=0x00000000001FB670 "0'"
 *   insn=0x00000000003B4E40 string=0x00000000003B4E44 "\t"
 *   insn=0x00000000003B4E44 string=0x00000000001F72B0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall boost::detail::sp_counted_impl_p<Caver::GameOptions>::dispose(__int64 a1)
{
  void *v1; // x19

  v1 = *(void **)(a1 + 24);
  if ( v1 )
  {
    Caver::GameOptions::~GameOptions(*(Caver::GameOptions **)(a1 + 24));
    operator delete(v1);
  }
}

