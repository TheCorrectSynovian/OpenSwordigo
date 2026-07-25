/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000047B9FC
 * Mangled: _ZN5boost6detail17sp_counted_impl_pIN5Caver16RenderingContextEE7disposeEv
 * Demangled: boost::detail::sp_counted_impl_p<Caver::RenderingContext>::dispose(void)
 *
 * Callers: 0
 *
 * Callees: 4
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000001FB590  Caver::RenderingContext::~RenderingContext()
 *   0x000000000047BA48  boost::detail::sp_counted_impl_p<Caver::RenderingContext>::get_deleter(std::type_info const&)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 3
 *   insn=0x000000000047BA14 string=0x00000000001FB590 "0'"
 *   insn=0x000000000047BA20 string=0x000000000047BA24 "#"
 *   insn=0x000000000047BA24 string=0x00000000001F72B0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall boost::detail::sp_counted_impl_p<Caver::RenderingContext>::dispose(__int64 a1)
{
  void *v1; // x19

  v1 = *(void **)(a1 + 24);
  if ( v1 )
  {
    Caver::RenderingContext::~RenderingContext(*(Caver::RenderingContext **)(a1 + 24));
    operator delete(v1);
  }
}

