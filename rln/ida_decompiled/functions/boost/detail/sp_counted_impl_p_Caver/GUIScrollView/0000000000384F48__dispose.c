/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000384F48
 * Mangled: _ZN5boost6detail17sp_counted_impl_pIN5Caver13GUIScrollViewEE7disposeEv
 * Demangled: boost::detail::sp_counted_impl_p<Caver::GUIScrollView>::dispose(void)
 *
 * Callers: 0
 *
 * Callees: 0
 *
 * Referenced strings: 2
 *   insn=0x0000000000384F4C string=0x0000000000384F50 ""
 *   insn=0x0000000000384F54 string=0x0000000000384F58 " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall boost::detail::sp_counted_impl_p<Caver::GUIScrollView>::dispose(__int64 a1)
{
  __int64 result; // x0

  result = *(_QWORD *)(a1 + 24);
  if ( result )
    return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)result + 64LL))(result);
  return result;
}

