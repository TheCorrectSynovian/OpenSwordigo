/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000005050BC
 * Mangled: _ZN13CPVRTModelPOD11DestroyImplEv
 * Demangled: CPVRTModelPOD::DestroyImpl(void)
 *
 * Callers: 0
 *
 * Callees: 2
 *   0x00000000001F4F60  operator delete[](void *)
 *   0x00000000001F72B0  operator delete(void *)
 *
 * Referenced strings: 12
 *   insn=0x00000000005050C8 string=0x00000000005050CC "`B@"
 *   insn=0x00000000005050CC string=0x00000000005050D0 "`"
 *   insn=0x00000000005050D0 string=0x00000000005050D4 "@"
 *   insn=0x00000000005050D8 string=0x00000000005050E8 ""
 *   insn=0x00000000005050E0 string=0x00000000005050E4 "`B@"
 *   insn=0x00000000005050E0 string=0x00000000001F4F60 "P'"
 *   insn=0x00000000005050EC string=0x00000000005050FC ""
 *   insn=0x00000000005050F4 string=0x00000000005050F8 "`B@"
 *   insn=0x0000000000505100 string=0x0000000000505110 "@"
 *   insn=0x0000000000505108 string=0x000000000050510C "`B@"
 *   insn=0x0000000000505110 string=0x0000000000505114 "g"
 *   insn=0x0000000000505114 string=0x00000000001F72B0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall CPVRTModelPOD::DestroyImpl(CPVRTModelPOD *this)
{
  void **v2; // x0

  v2 = (void **)*((_QWORD *)this + 16);
  if ( v2 )
  {
    if ( v2[2] )
    {
      operator delete[](v2[2]);
      v2 = (void **)*((_QWORD *)this + 16);
    }
    if ( v2[3] )
    {
      operator delete[](v2[3]);
      v2 = (void **)*((_QWORD *)this + 16);
    }
    if ( v2[4] )
    {
      operator delete[](v2[4]);
      v2 = (void **)*((_QWORD *)this + 16);
    }
    if ( v2 )
      operator delete(v2);
    *((_QWORD *)this + 16) = 0;
  }
}

