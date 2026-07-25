/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002397B0
 * Mangled: _ZN5boost6detail17sp_counted_impl_pIN5Caver7PolygonEE7disposeEv
 * Demangled: boost::detail::sp_counted_impl_p<Caver::Polygon>::dispose(void)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000001F72B0  operator delete(void *)
 *
 * Referenced strings: 3
 *   insn=0x00000000002397C0 string=0x00000000002397C4 "`"
 *   insn=0x00000000002397C4 string=0x00000000002397C8 "@"
 *   insn=0x00000000002397CC string=0x00000000001F72B0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall boost::detail::sp_counted_impl_p<Caver::Polygon>::dispose(__int64 a1)
{
  _QWORD *v1; // x19
  void *v2; // x0

  v1 = *(_QWORD **)(a1 + 24);
  if ( v1 )
  {
    v2 = (void *)v1[1];
    if ( v2 )
      operator delete(v2);
    operator delete(v1);
  }
}

