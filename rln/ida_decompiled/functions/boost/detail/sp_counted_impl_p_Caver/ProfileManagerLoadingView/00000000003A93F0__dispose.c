/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000003A93F0
 * Mangled: _ZN5boost6detail17sp_counted_impl_pIN5Caver25ProfileManagerLoadingViewEE7disposeEv
 * Demangled: boost::detail::sp_counted_impl_p<Caver::ProfileManagerLoadingView>::dispose(void)
 *
 * Callers: 0
 *
 * Callees: 0
 *
 * Referenced strings: 2
 *   insn=0x00000000003A93F4 string=0x00000000003A93F8 ""
 *   insn=0x00000000003A93FC string=0x00000000003A9400 " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall boost::detail::sp_counted_impl_p<Caver::ProfileManagerLoadingView>::dispose(__int64 a1)
{
  __int64 result; // x0

  result = *(_QWORD *)(a1 + 24);
  if ( result )
    return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)result + 64LL))(result);
  return result;
}

