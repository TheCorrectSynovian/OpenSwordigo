/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000046256C
 * Mangled: _ZN5boost6detail17sp_counted_impl_pIN5Caver15PointLightGroupEE7disposeEv
 * Demangled: boost::detail::sp_counted_impl_p<Caver::PointLightGroup>::dispose(void)
 *
 * Callers: 0
 *
 * Callees: 2
 *   0x00000000001F4F60  operator delete[](void *)
 *   0x00000000001F72B0  operator delete(void *)
 *
 * Referenced strings: 6
 *   insn=0x000000000046257C string=0x0000000000462580 "`"
 *   insn=0x0000000000462580 string=0x0000000000462584 "@"
 *   insn=0x0000000000462584 string=0x0000000000462588 "vJ"
 *   insn=0x0000000000462588 string=0x00000000001F4F60 "P'"
 *   insn=0x0000000000462594 string=0x0000000000462598 "FS"
 *   insn=0x0000000000462598 string=0x00000000001F72B0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall boost::detail::sp_counted_impl_p<Caver::PointLightGroup>::dispose(__int64 a1)
{
  _QWORD *v1; // x19
  void *v2; // x0

  v1 = *(_QWORD **)(a1 + 24);
  if ( v1 )
  {
    v2 = (void *)v1[1];
    if ( v2 )
      operator delete[](v2);
    operator delete(v1);
  }
}

