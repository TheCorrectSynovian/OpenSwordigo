/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000047B948
 * Mangled: _ZN5boost6detail17sp_counted_impl_pIN5Caver10CaverShellEE7disposeEv
 * Demangled: boost::detail::sp_counted_impl_p<Caver::CaverShell>::dispose(void)
 *
 * Callers: 0
 *
 * Callees: 0
 *
 * Referenced strings: 2
 *   insn=0x000000000047B94C string=0x000000000047B950 ""
 *   insn=0x000000000047B954 string=0x000000000047B958 " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall boost::detail::sp_counted_impl_p<Caver::CaverShell>::dispose(__int64 a1)
{
  __int64 result; // x0

  result = *(_QWORD *)(a1 + 24);
  if ( result )
    return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)result + 40LL))(result);
  return result;
}

