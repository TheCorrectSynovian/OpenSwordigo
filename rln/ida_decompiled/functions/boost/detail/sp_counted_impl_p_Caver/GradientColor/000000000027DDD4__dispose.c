/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000027DDD4
 * Mangled: _ZN5boost6detail17sp_counted_impl_pIN5Caver13GradientColorEE7disposeEv
 * Demangled: boost::detail::sp_counted_impl_p<Caver::GradientColor>::dispose(void)
 *
 * Callers: 0
 *
 * Callees: 2
 *   0x00000000001F4F60  operator delete[](void *)
 *   0x00000000001F72B0  operator delete(void *)
 *
 * Referenced strings: 10
 *   insn=0x000000000027DDE0 string=0x000000000027DDE4 "s"
 *   insn=0x000000000027DDE4 string=0x000000000027DDE8 "`\n@"
 *   insn=0x000000000027DDE8 string=0x000000000027DDEC "@"
 *   insn=0x000000000027DDEC string=0x000000000027DDF0 "\"
 *   insn=0x000000000027DDEC string=0x000000000027DDF4 "`"
 *   insn=0x000000000027DDF0 string=0x00000000001F4F60 "P'"
 *   insn=0x000000000027DDF4 string=0x000000000027DDF8 "@"
 *   insn=0x000000000027DDF8 string=0x000000000027DDFC "Y"
 *   insn=0x000000000027DE08 string=0x000000000027DE0C ")"
 *   insn=0x000000000027DE0C string=0x00000000001F72B0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall boost::detail::sp_counted_impl_p<Caver::GradientColor>::dispose(__int64 a1)
{
  _QWORD *v1; // x19
  void *v2; // x0
  void *v3; // x0

  v1 = *(_QWORD **)(a1 + 24);
  if ( v1 )
  {
    v2 = (void *)v1[2];
    if ( v2 )
      operator delete[](v2);
    v3 = (void *)v1[1];
    if ( v3 )
      operator delete[](v3);
    operator delete(v1);
  }
}

