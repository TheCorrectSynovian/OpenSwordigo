/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000003DC7C0
 * Mangled: _ZN5boost6detail17sp_counted_impl_pIN5Caver7Vector2EE7disposeEv
 * Demangled: boost::detail::sp_counted_impl_p<Caver::Vector2>::dispose(void)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000001F72B0  operator delete(void *)
 *
 * Referenced strings: 2
 *   insn=0x00000000003DC7C0 string=0x00000000003DC7C4 "@"
 *   insn=0x00000000003DC7C8 string=0x00000000001F72B0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall boost::detail::sp_counted_impl_p<Caver::Vector2>::dispose(__int64 a1)
{
  void *v1; // x0

  v1 = *(void **)(a1 + 24);
  if ( v1 )
    operator delete(v1);
}

