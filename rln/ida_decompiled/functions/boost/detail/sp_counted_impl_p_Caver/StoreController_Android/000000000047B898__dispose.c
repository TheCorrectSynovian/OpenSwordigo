/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000047B898
 * Mangled: _ZN5boost6detail17sp_counted_impl_pIN5Caver23StoreController_AndroidEE7disposeEv
 * Demangled: boost::detail::sp_counted_impl_p<Caver::StoreController_Android>::dispose(void)
 *
 * Callers: 0
 *
 * Callees: 0
 *
 * Referenced strings: 2
 *   insn=0x000000000047B89C string=0x000000000047B8A0 ""
 *   insn=0x000000000047B8A4 string=0x000000000047B8A8 " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall boost::detail::sp_counted_impl_p<Caver::StoreController_Android>::dispose(__int64 a1)
{
  __int64 result; // x0

  result = *(_QWORD *)(a1 + 24);
  if ( result )
    return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)result + 8LL))(result);
  return result;
}

