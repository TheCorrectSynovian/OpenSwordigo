/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000350E70
 * Mangled: _ZN5boost6detail17sp_counted_impl_pIN5Caver12GUIAnimationEE7disposeEv
 * Demangled: boost::detail::sp_counted_impl_p<Caver::GUIAnimation>::dispose(void)
 *
 * Callers: 0
 *
 * Callees: 4
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000001F8B20  Caver::GUIAnimation::~GUIAnimation()
 *   0x0000000000350EBC  boost::detail::sp_counted_impl_p<Caver::GUIAnimation>::get_deleter(std::type_info const&)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 3
 *   insn=0x0000000000350E84 string=0x0000000000350E88 "&"
 *   insn=0x0000000000350E88 string=0x00000000001F8B20 "0'"
 *   insn=0x0000000000350E98 string=0x00000000001F72B0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall boost::detail::sp_counted_impl_p<Caver::GUIAnimation>::dispose(__int64 a1)
{
  void *v1; // x19

  v1 = *(void **)(a1 + 24);
  if ( v1 )
  {
    Caver::GUIAnimation::~GUIAnimation(*(Caver::GUIAnimation **)(a1 + 24));
    operator delete(v1);
  }
}

