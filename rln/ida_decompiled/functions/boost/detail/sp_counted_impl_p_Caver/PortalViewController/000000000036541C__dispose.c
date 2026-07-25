/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000036541C
 * Mangled: _ZN5boost6detail17sp_counted_impl_pIN5Caver20PortalViewControllerEE7disposeEv
 * Demangled: boost::detail::sp_counted_impl_p<Caver::PortalViewController>::dispose(void)
 *
 * Callers: 0
 *
 * Callees: 0
 *
 * Referenced strings: 2
 *   insn=0x0000000000365420 string=0x0000000000365424 ""
 *   insn=0x0000000000365428 string=0x000000000036542C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall boost::detail::sp_counted_impl_p<Caver::PortalViewController>::dispose(__int64 a1)
{
  __int64 result; // x0

  result = *(_QWORD *)(a1 + 24);
  if ( result )
    return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)result + 8LL))(result);
  return result;
}

