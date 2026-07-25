/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000023DDE8
 * Mangled: _ZN5boost6detail17sp_counted_impl_pIN5Caver13GUITextBubbleEE7disposeEv
 * Demangled: boost::detail::sp_counted_impl_p<Caver::GUITextBubble>::dispose(void)
 *
 * Callers: 0
 *
 * Callees: 4
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000001FA260  Caver::GUITextBubble::~GUITextBubble()
 *   0x000000000023DE34  boost::detail::sp_counted_impl_p<Caver::GUITextBubble>::get_deleter(std::type_info const&)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 4
 *   insn=0x000000000023DE00 string=0x00000000001FA260 "0'"
 *   insn=0x000000000023DE0C string=0x000000000023DE10 "("
 *   insn=0x000000000023DE10 string=0x00000000001F72B0 "0'"
 *   insn=0x000000000023DE24 string=0x000000000023DE28 """
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall boost::detail::sp_counted_impl_p<Caver::GUITextBubble>::dispose(__int64 a1)
{
  void *v1; // x19

  v1 = *(void **)(a1 + 24);
  if ( v1 )
  {
    Caver::GUITextBubble::~GUITextBubble(*(Caver::GUITextBubble **)(a1 + 24));
    operator delete(v1);
  }
}

