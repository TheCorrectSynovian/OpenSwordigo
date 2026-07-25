/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000021BE90
 * Mangled: _ZN5boost6detail17sp_counted_impl_pIfE7disposeEv
 * Demangled: boost::detail::sp_counted_impl_p<float>::dispose(void)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000001F72B0  operator delete(void *)
 *
 * Referenced strings: 2
 *   insn=0x000000000021BE90 string=0x000000000021BE94 "@"
 *   insn=0x000000000021BE98 string=0x00000000001F72B0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall boost::detail::sp_counted_impl_p<float>::dispose(__int64 a1)
{
  void *v1; // x0

  v1 = *(void **)(a1 + 24);
  if ( v1 )
    operator delete(v1);
}

