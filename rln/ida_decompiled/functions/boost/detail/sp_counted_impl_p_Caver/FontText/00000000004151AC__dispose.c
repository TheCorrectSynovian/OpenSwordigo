/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004151AC
 * Mangled: _ZN5boost6detail17sp_counted_impl_pIN5Caver8FontTextEE7disposeEv
 * Demangled: boost::detail::sp_counted_impl_p<Caver::FontText>::dispose(void)
 *
 * Callers: 0
 *
 * Callees: 4
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000001F8990  Caver::FontText::~FontText()
 *   0x00000000004151F8  boost::detail::sp_counted_impl_p<Caver::FontText>::get_deleter(std::type_info const&)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 4
 *   insn=0x00000000004151C4 string=0x00000000001F8990 "0'"
 *   insn=0x00000000004151D0 string=0x00000000004151D4 "7"
 *   insn=0x00000000004151D4 string=0x00000000001F72B0 "0'"
 *   insn=0x00000000004151E8 string=0x00000000004151EC "1"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall boost::detail::sp_counted_impl_p<Caver::FontText>::dispose(__int64 a1)
{
  void *v1; // x19

  v1 = *(void **)(a1 + 24);
  if ( v1 )
  {
    Caver::FontText::~FontText(*(Caver::FontText **)(a1 + 24));
    operator delete(v1);
  }
}

