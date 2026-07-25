/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004C4B84
 * Mangled: _ZN5boost6detail17sp_counted_impl_pIN5Caver4FontEE7disposeEv
 * Demangled: boost::detail::sp_counted_impl_p<Caver::Font>::dispose(void)
 *
 * Callers: 0
 *
 * Callees: 4
 *   0x00000000001F6330  Caver::Font::~Font()
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000004C4BD0  boost::detail::sp_counted_impl_p<Caver::Font>::get_deleter(std::type_info const&)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 3
 *   insn=0x00000000004C4B9C string=0x00000000001F6330 "0'"
 *   insn=0x00000000004C4BAC string=0x00000000001F72B0 "0'"
 *   insn=0x00000000004C4BC8 string=0x00000000004C4BCC ">"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall boost::detail::sp_counted_impl_p<Caver::Font>::dispose(__int64 a1)
{
  void *v1; // x19

  v1 = *(void **)(a1 + 24);
  if ( v1 )
  {
    Caver::Font::~Font(*(Caver::Font **)(a1 + 24));
    operator delete(v1);
  }
}

