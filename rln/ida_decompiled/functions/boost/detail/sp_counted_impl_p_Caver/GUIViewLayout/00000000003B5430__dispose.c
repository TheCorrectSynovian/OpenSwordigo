/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000003B5430
 * Mangled: _ZN5boost6detail17sp_counted_impl_pIN5Caver13GUIViewLayoutEE7disposeEv
 * Demangled: boost::detail::sp_counted_impl_p<Caver::GUIViewLayout>::dispose(void)
 *
 * Callers: 0
 *
 * Callees: 4
 *   0x00000000001F6130  Caver::GUIViewLayout::~GUIViewLayout()
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000003B547C  boost::detail::sp_counted_impl_p<Caver::GUIViewLayout>::get_deleter(std::type_info const&)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 3
 *   insn=0x00000000003B5444 string=0x00000000003B5448 ":"
 *   insn=0x00000000003B5448 string=0x00000000001F6130 "0'"
 *   insn=0x00000000003B5458 string=0x00000000001F72B0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall boost::detail::sp_counted_impl_p<Caver::GUIViewLayout>::dispose(__int64 a1)
{
  void *v1; // x19

  v1 = *(void **)(a1 + 24);
  if ( v1 )
  {
    Caver::GUIViewLayout::~GUIViewLayout(*(Caver::GUIViewLayout **)(a1 + 24));
    operator delete(v1);
  }
}

