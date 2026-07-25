/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004BD018
 * Mangled: _ZN5boost6detail17sp_counted_impl_pIN5Caver35ProfileManagerLoadingViewControllerEE7disposeEv
 * Demangled: boost::detail::sp_counted_impl_p<Caver::ProfileManagerLoadingViewController>::dispose(void)
 *
 * Callers: 0
 *
 * Callees: 0
 *
 * Referenced strings: 2
 *   insn=0x00000000004BD01C string=0x00000000004BD020 ""
 *   insn=0x00000000004BD024 string=0x00000000004BD028 " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall boost::detail::sp_counted_impl_p<Caver::ProfileManagerLoadingViewController>::dispose(__int64 a1)
{
  __int64 result; // x0

  result = *(_QWORD *)(a1 + 24);
  if ( result )
    return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)result + 8LL))(result);
  return result;
}

