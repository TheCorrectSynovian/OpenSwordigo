/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000036FFA4
 * Mangled: _ZN5boost6detail17sp_counted_impl_pIN5Caver30ProfileSelectionViewControllerEE7disposeEv
 * Demangled: boost::detail::sp_counted_impl_p<Caver::ProfileSelectionViewController>::dispose(void)
 *
 * Callers: 0
 *
 * Callees: 0
 *
 * Referenced strings: 2
 *   insn=0x000000000036FFA8 string=0x000000000036FFAC ""
 *   insn=0x000000000036FFB0 string=0x000000000036FFB4 " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall boost::detail::sp_counted_impl_p<Caver::ProfileSelectionViewController>::dispose(__int64 a1)
{
  __int64 result; // x0

  result = *(_QWORD *)(a1 + 24);
  if ( result )
    return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)result + 8LL))(result);
  return result;
}

