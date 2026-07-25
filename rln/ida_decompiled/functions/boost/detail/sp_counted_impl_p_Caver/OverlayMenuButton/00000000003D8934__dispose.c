/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000003D8934
 * Mangled: _ZN5boost6detail17sp_counted_impl_pIN5Caver17OverlayMenuButtonEE7disposeEv
 * Demangled: boost::detail::sp_counted_impl_p<Caver::OverlayMenuButton>::dispose(void)
 *
 * Callers: 0
 *
 * Callees: 0
 *
 * Referenced strings: 2
 *   insn=0x00000000003D8938 string=0x00000000003D893C ""
 *   insn=0x00000000003D8940 string=0x00000000003D8944 " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall boost::detail::sp_counted_impl_p<Caver::OverlayMenuButton>::dispose(__int64 a1)
{
  __int64 result; // x0

  result = *(_QWORD *)(a1 + 24);
  if ( result )
    return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)result + 64LL))(result);
  return result;
}

