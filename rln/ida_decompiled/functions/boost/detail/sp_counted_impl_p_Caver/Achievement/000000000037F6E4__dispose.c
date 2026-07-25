/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000037F6E4
 * Mangled: _ZN5boost6detail17sp_counted_impl_pIN5Caver11AchievementEE7disposeEv
 * Demangled: boost::detail::sp_counted_impl_p<Caver::Achievement>::dispose(void)
 *
 * Callers: 0
 *
 * Callees: 4
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000001F8B40  Caver::Achievement::~Achievement()
 *   0x000000000037F730  boost::detail::sp_counted_impl_p<Caver::Achievement>::get_deleter(std::type_info const&)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 3
 *   insn=0x000000000037F6FC string=0x00000000001F8B40 "0'"
 *   insn=0x000000000037F70C string=0x00000000001F72B0 "0'"
 *   insn=0x000000000037F728 string=0x000000000037F72C "f"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall boost::detail::sp_counted_impl_p<Caver::Achievement>::dispose(__int64 a1)
{
  void *v1; // x19

  v1 = *(void **)(a1 + 24);
  if ( v1 )
  {
    Caver::Achievement::~Achievement(*(Caver::Achievement **)(a1 + 24));
    operator delete(v1);
  }
}

