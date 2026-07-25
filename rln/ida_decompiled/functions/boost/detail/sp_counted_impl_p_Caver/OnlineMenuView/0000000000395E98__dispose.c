/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000395E98
 * Mangled: _ZN5boost6detail17sp_counted_impl_pIN5Caver14OnlineMenuViewEE7disposeEv
 * Demangled: boost::detail::sp_counted_impl_p<Caver::OnlineMenuView>::dispose(void)
 *
 * Callers: 0
 *
 * Callees: 0
 *
 * Referenced strings: 2
 *   insn=0x0000000000395E9C string=0x0000000000395EA0 ""
 *   insn=0x0000000000395EA4 string=0x0000000000395EA8 " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall boost::detail::sp_counted_impl_p<Caver::OnlineMenuView>::dispose(__int64 a1)
{
  __int64 result; // x0

  result = *(_QWORD *)(a1 + 24);
  if ( result )
    return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)result + 64LL))(result);
  return result;
}

