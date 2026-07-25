/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000371BDC
 * Mangled: _ZN5boost6detail17sp_counted_impl_pIN5Caver10PortalViewEE7disposeEv
 * Demangled: boost::detail::sp_counted_impl_p<Caver::PortalView>::dispose(void)
 *
 * Callers: 0
 *
 * Callees: 0
 *
 * Referenced strings: 2
 *   insn=0x0000000000371BE0 string=0x0000000000371BE4 ""
 *   insn=0x0000000000371BE8 string=0x0000000000371BEC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall boost::detail::sp_counted_impl_p<Caver::PortalView>::dispose(__int64 a1)
{
  __int64 result; // x0

  result = *(_QWORD *)(a1 + 24);
  if ( result )
    return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)result + 64LL))(result);
  return result;
}

