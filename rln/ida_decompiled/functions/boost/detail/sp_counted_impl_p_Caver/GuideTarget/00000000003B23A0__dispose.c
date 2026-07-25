/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000003B23A0
 * Mangled: _ZN5boost6detail17sp_counted_impl_pIN5Caver11GuideTargetEE7disposeEv
 * Demangled: boost::detail::sp_counted_impl_p<Caver::GuideTarget>::dispose(void)
 *
 * Callers: 0
 *
 * Callees: 4
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000001F8260  Caver::GuideTarget::~GuideTarget()
 *   0x00000000003B23EC  boost::detail::sp_counted_impl_p<Caver::GuideTarget>::get_deleter(std::type_info const&)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 3
 *   insn=0x00000000003B23B8 string=0x00000000001F8260 "0'"
 *   insn=0x00000000003B23C8 string=0x00000000001F72B0 "0'"
 *   insn=0x00000000003B23E4 string=0x00000000003B23E8 "7="
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall boost::detail::sp_counted_impl_p<Caver::GuideTarget>::dispose(__int64 a1)
{
  void *v1; // x19

  v1 = *(void **)(a1 + 24);
  if ( v1 )
  {
    Caver::GuideTarget::~GuideTarget(*(Caver::GuideTarget **)(a1 + 24));
    operator delete(v1);
  }
}

