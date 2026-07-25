/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000038DD28
 * Mangled: _ZN5boost6detail17sp_counted_impl_pIN5Caver11CreditsViewEE7disposeEv
 * Demangled: boost::detail::sp_counted_impl_p<Caver::CreditsView>::dispose(void)
 *
 * Callers: 0
 *
 * Callees: 0
 *
 * Referenced strings: 2
 *   insn=0x000000000038DD2C string=0x000000000038DD30 ""
 *   insn=0x000000000038DD34 string=0x000000000038DD38 " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall boost::detail::sp_counted_impl_p<Caver::CreditsView>::dispose(__int64 a1)
{
  __int64 result; // x0

  result = *(_QWORD *)(a1 + 24);
  if ( result )
    return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)result + 64LL))(result);
  return result;
}

