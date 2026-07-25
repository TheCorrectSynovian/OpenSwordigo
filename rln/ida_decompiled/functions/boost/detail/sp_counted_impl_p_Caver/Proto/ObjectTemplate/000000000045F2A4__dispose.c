/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000045F2A4
 * Mangled: _ZN5boost6detail17sp_counted_impl_pIN5Caver5Proto14ObjectTemplateEE7disposeEv
 * Demangled: boost::detail::sp_counted_impl_p<Caver::Proto::ObjectTemplate>::dispose(void)
 *
 * Callers: 0
 *
 * Callees: 0
 *
 * Referenced strings: 2
 *   insn=0x000000000045F2A8 string=0x000000000045F2AC ""
 *   insn=0x000000000045F2B0 string=0x000000000045F2B4 " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall boost::detail::sp_counted_impl_p<Caver::Proto::ObjectTemplate>::dispose(__int64 a1)
{
  __int64 result; // x0

  result = *(_QWORD *)(a1 + 24);
  if ( result )
    return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)result + 8LL))(result);
  return result;
}

