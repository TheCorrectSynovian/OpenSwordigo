/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000496D14
 * Mangled: _ZN5boost6detail17sp_counted_impl_pIN5Caver8GUIEventEE7disposeEv
 * Demangled: boost::detail::sp_counted_impl_p<Caver::GUIEvent>::dispose(void)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000001F72B0  operator delete(void *)
 *
 * Referenced strings: 3
 *   insn=0x0000000000496D14 string=0x0000000000496D18 "@"
 *   insn=0x0000000000496D18 string=0x0000000000496D1C "e"
 *   insn=0x0000000000496D1C string=0x00000000001F72B0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall boost::detail::sp_counted_impl_p<Caver::GUIEvent>::dispose(__int64 a1)
{
  void *v1; // x0

  v1 = *(void **)(a1 + 24);
  if ( v1 )
    operator delete(v1);
}

