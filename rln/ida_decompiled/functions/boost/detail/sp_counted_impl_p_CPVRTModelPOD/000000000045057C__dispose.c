/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000045057C
 * Mangled: _ZN5boost6detail17sp_counted_impl_pI13CPVRTModelPODE7disposeEv
 * Demangled: boost::detail::sp_counted_impl_p<CPVRTModelPOD>::dispose(void)
 *
 * Callers: 0
 *
 * Callees: 4
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000002019C0  CPVRTModelPOD::~CPVRTModelPOD()
 *   0x00000000004505C8  boost::detail::sp_counted_impl_p<CPVRTModelPOD>::get_deleter(std::type_info const&)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 4
 *   insn=0x0000000000450590 string=0x0000000000450594 ""
 *   insn=0x00000000004505A0 string=0x00000000004505A4 "C"
 *   insn=0x00000000004505A4 string=0x00000000001F72B0 "0'"
 *   insn=0x00000000004505B8 string=0x00000000004505BC "="
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall boost::detail::sp_counted_impl_p<CPVRTModelPOD>::dispose(__int64 a1)
{
  void *v1; // x19

  v1 = *(void **)(a1 + 24);
  if ( v1 )
  {
    CPVRTModelPOD::~CPVRTModelPOD(*(CPVRTModelPOD **)(a1 + 24));
    operator delete(v1);
  }
}

