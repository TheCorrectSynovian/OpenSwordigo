/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000021BE74
 * Mangled: _ZN5boost6detail17sp_counted_impl_pIbE7disposeEv
 * Demangled: boost::detail::sp_counted_impl_p<bool>::dispose(void)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000001F72B0  operator delete(void *)
 *
 * Referenced strings: 3
 *   insn=0x000000000021BE74 string=0x000000000021BE78 "@"
 *   insn=0x000000000021BE78 string=0x000000000021BE7C "m"
 *   insn=0x000000000021BE7C string=0x00000000001F72B0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall boost::detail::sp_counted_impl_p<bool>::dispose(__int64 a1)
{
  void *v1; // x0

  v1 = *(void **)(a1 + 24);
  if ( v1 )
    operator delete(v1);
}

