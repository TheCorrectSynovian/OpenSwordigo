/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002126C4
 * Mangled: _ZN5boost6detail17sp_counted_impl_pIN5Caver18GameViewControllerEE7disposeEv
 * Demangled: boost::detail::sp_counted_impl_p<Caver::GameViewController>::dispose(void)
 *
 * Callers: 0
 *
 * Callees: 0
 *
 * Referenced strings: 2
 *   insn=0x00000000002126C8 string=0x00000000002126CC ""
 *   insn=0x00000000002126D0 string=0x00000000002126D4 " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall boost::detail::sp_counted_impl_p<Caver::GameViewController>::dispose(__int64 a1)
{
  __int64 result; // x0

  result = *(_QWORD *)(a1 + 24);
  if ( result )
    return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)result + 8LL))(result);
  return result;
}

