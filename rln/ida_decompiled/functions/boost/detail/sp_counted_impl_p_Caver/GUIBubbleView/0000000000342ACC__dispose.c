/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000342ACC
 * Mangled: _ZN5boost6detail17sp_counted_impl_pIN5Caver13GUIBubbleViewEE7disposeEv
 * Demangled: boost::detail::sp_counted_impl_p<Caver::GUIBubbleView>::dispose(void)
 *
 * Callers: 0
 *
 * Callees: 0
 *
 * Referenced strings: 2
 *   insn=0x0000000000342AD0 string=0x0000000000342AD4 ""
 *   insn=0x0000000000342AD8 string=0x0000000000342ADC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall boost::detail::sp_counted_impl_p<Caver::GUIBubbleView>::dispose(__int64 a1)
{
  __int64 result; // x0

  result = *(_QWORD *)(a1 + 24);
  if ( result )
    return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)result + 64LL))(result);
  return result;
}

