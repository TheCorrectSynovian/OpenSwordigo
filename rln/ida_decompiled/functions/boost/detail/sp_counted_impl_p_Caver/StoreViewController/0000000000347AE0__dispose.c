/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000347AE0
 * Mangled: _ZN5boost6detail17sp_counted_impl_pIN5Caver19StoreViewControllerEE7disposeEv
 * Demangled: boost::detail::sp_counted_impl_p<Caver::StoreViewController>::dispose(void)
 *
 * Callers: 0
 *
 * Callees: 0
 *
 * Referenced strings: 2
 *   insn=0x0000000000347AE4 string=0x0000000000347AE8 ""
 *   insn=0x0000000000347AEC string=0x0000000000347AF0 " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall boost::detail::sp_counted_impl_p<Caver::StoreViewController>::dispose(__int64 a1)
{
  __int64 result; // x0

  result = *(_QWORD *)(a1 + 24);
  if ( result )
    return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)result + 8LL))(result);
  return result;
}

