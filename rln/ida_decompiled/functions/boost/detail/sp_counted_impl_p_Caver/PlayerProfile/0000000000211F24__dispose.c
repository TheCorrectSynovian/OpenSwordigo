/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000211F24
 * Mangled: _ZN5boost6detail17sp_counted_impl_pIN5Caver13PlayerProfileEE7disposeEv
 * Demangled: boost::detail::sp_counted_impl_p<Caver::PlayerProfile>::dispose(void)
 *
 * Callers: 0
 *
 * Callees: 4
 *   0x00000000001F72B0  operator delete(void *)
 *   0x0000000000200020  Caver::PlayerProfile::~PlayerProfile()
 *   0x0000000000211F70  boost::detail::sp_counted_impl_p<Caver::PlayerProfile>::get_deleter(std::type_info const&)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 3
 *   insn=0x0000000000211F38 string=0x0000000000211F3C "9"
 *   insn=0x0000000000211F4C string=0x00000000001F72B0 "0'"
 *   insn=0x0000000000211F68 string=0x0000000000211F6C "V"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall boost::detail::sp_counted_impl_p<Caver::PlayerProfile>::dispose(__int64 a1)
{
  void *v1; // x19

  v1 = *(void **)(a1 + 24);
  if ( v1 )
  {
    Caver::PlayerProfile::~PlayerProfile(*(Caver::PlayerProfile **)(a1 + 24));
    operator delete(v1);
  }
}

