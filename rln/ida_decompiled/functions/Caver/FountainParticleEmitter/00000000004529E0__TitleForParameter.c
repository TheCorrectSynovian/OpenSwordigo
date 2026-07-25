/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004529E0
 * Mangled: _ZN5Caver23FountainParticleEmitter17TitleForParameterEj
 * Demangled: Caver::FountainParticleEmitter::TitleForParameter(uint)
 *
 * Callers: 0
 *
 * Callees: 12
 *   0x00000000001F4C40  .__cxa_atexit
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F7040  .__cxa_guard_release
 *   0x00000000001FB6F0  .__cxa_guard_abort
 *   0x00000000001FD6E0  .__cxa_guard_acquire
 *   0x000000000020B3D4  sub_20B3D4
 *   0x0000000000452D00  Caver::ParticleEmitter::Clone(void)
 *   0x0000000000566BB8  sub_566BB8
 *   0x000000000056A3A4  operator delete(void *)
 *   0x000000000056A528  sub_56A528
 *   0x00000000005818C4  sub_5818C4
 *   0x00000000006FE668  pthread_create
 *
 * Referenced strings: 82
 *   insn=0x00000000004529F4 string=0x00000000004529F8 "U"
 *   insn=0x0000000000452A04 string=0x0000000000452A08 ")UE"
 *   insn=0x0000000000452A08 string=0x0000000000452A0C ")"
 *   insn=0x0000000000452A0C string=0x0000000000452A10 "\t"
 *   insn=0x0000000000452A14 string=0x0000000000452A18 ")"
 *   insn=0x0000000000452A1C string=0x0000000000452A20 "!M!"
 *   insn=0x0000000000452A5C string=0x0000000000452A60 " "
 *   insn=0x0000000000452A60 string=0x00000000001FD6E0 "0'"
 *   insn=0x0000000000452A68 string=0x0000000000452A6C "@"
 *   insn=0x0000000000452A78 string=0x0000000000595512 "directionAngle"
 *   insn=0x0000000000452A84 string=0x0000000000452A88 "LP"
 *   insn=0x0000000000452A8C string=0x0000000000452A90 "`""
 *   insn=0x0000000000452A8C string=0x0000000000595521 "directionSpread"
 *   insn=0x0000000000452A90 string=0x0000000000452A94 "!"
 *   insn=0x0000000000452A9C string=0x0000000000452AA0 "FP"
 *   insn=0x0000000000452AA4 string=0x0000000000452AA8 "`B"
 *   insn=0x0000000000452AA4 string=0x0000000000595531 "positionSpreadDir"
 *   insn=0x0000000000452AA8 string=0x0000000000452AAC "!"
 *   insn=0x0000000000452AB4 string=0x0000000000452AB8 "@P"
 *   insn=0x0000000000452ABC string=0x0000000000452AC0 "`b"
 *   insn=0x0000000000452ABC string=0x0000000000595543 "positionSpreadX"
 *   insn=0x0000000000452AC0 string=0x0000000000452AC4 "!"
 *   insn=0x0000000000452ACC string=0x0000000000452AD0 ":P"
 *   insn=0x0000000000452AD4 string=0x0000000000452AD8 "`"
 *   insn=0x0000000000452AD4 string=0x0000000000595553 "positionSpreadY"
 *   insn=0x0000000000452AD8 string=0x0000000000452ADC "!L"
 *   insn=0x0000000000452AE4 string=0x0000000000452AE8 "4P"
 *   insn=0x0000000000452AEC string=0x0000000000452AF0 "`"
 *   insn=0x0000000000452AEC string=0x0000000000588B61 "speed"
 *   insn=0x0000000000452AF0 string=0x0000000000452AF4 "!"
 *   insn=0x0000000000452AFC string=0x0000000000452B00 ".P"
 *   insn=0x0000000000452B04 string=0x0000000000452B08 "`"
 *   insn=0x0000000000452B04 string=0x0000000000595563 "speedVariance"
 *   insn=0x0000000000452B08 string=0x0000000000452B0C "!"
 *   insn=0x0000000000452B14 string=0x0000000000452B18 "(P"
 *   insn=0x0000000000452B1C string=0x0000000000452B20 "`"
 *   insn=0x0000000000452B1C string=0x0000000000595571 "velocityTrackFactor"
 *   insn=0x0000000000452B20 string=0x0000000000452B24 "!"
 *   insn=0x0000000000452B2C string=0x0000000000452B30 ""P"
 *   insn=0x0000000000452B34 string=0x0000000000452B38 "`"
 *   insn=0x0000000000452B34 string=0x0000000000595585 "particleScale"
 *   insn=0x0000000000452B38 string=0x0000000000452B3C "!"
 *   insn=0x0000000000452B4C string=0x0000000000452B50 "`""
 *   insn=0x0000000000452B4C string=0x0000000000595593 "initialParticleSize"
 *   insn=0x0000000000452B50 string=0x0000000000452B54 "!L"
 *   insn=0x0000000000452B64 string=0x0000000000452B68 "`B"
 *   insn=0x0000000000452B64 string=0x00000000005955A7 "finalParticleSize"
 *   insn=0x0000000000452B68 string=0x0000000000452B6C "!"
 *   insn=0x0000000000452B7C string=0x0000000000452B80 "`b"
 *   insn=0x0000000000452B7C string=0x0000000000589558 "particleInterval"
 *   insn=0x0000000000452B80 string=0x0000000000452B84 "!`"
 *   insn=0x0000000000452B8C string=0x0000000000452B90 "\nP"
 *   insn=0x0000000000452B94 string=0x0000000000452B98 "`"
 *   insn=0x0000000000452B94 string=0x00000000005955B9 "particleAge"
 *   insn=0x0000000000452B98 string=0x0000000000452B9C "!"
 *   insn=0x0000000000452BAC string=0x0000000000452BB0 "`"
 *   insn=0x0000000000452BAC string=0x00000000005955C5 "ageVariance"
 *   insn=0x0000000000452BB0 string=0x0000000000452BB4 "!"
 *   insn=0x0000000000452BC4 string=0x0000000000452BC8 "`"
 *   insn=0x0000000000452BC4 string=0x00000000005955D1 "scaleVariance"
 *   insn=0x0000000000452BC8 string=0x0000000000452BCC "!D"
 *   insn=0x0000000000452BE4 string=0x0000000000452BE8 "B"
 *   insn=0x0000000000452BF0 string=0x00000000001F4C40 "P'"
 *   insn=0x0000000000452BFC string=0x00000000001F7040 "0'"
 *   insn=0x0000000000452C0C string=0x00000000001F62D0 "0'"
 *   insn=0x0000000000452C44 string=0x0000000000452C48 " "
 *   insn=0x0000000000452C50 string=0x0000000000452C54 ""
 *   insn=0x0000000000452C60 string=0x0000000000452C64 "K"
 *   insn=0x0000000000452C64 string=0x0000000000452C68 "`a"
 *   insn=0x0000000000452C70 string=0x0000000000452C74 "_"
 *   insn=0x0000000000452C74 string=0x0000000000452C78 "a"
 *   insn=0x0000000000452C80 string=0x0000000000452C84 "i!"
 *   insn=0x0000000000452C88 string=0x0000000000452C8C "*"
 *   insn=0x0000000000452C88 string=0x0000000000452CA0 "*"
 *   insn=0x0000000000452C8C string=0x0000000000452C90 "K"
 *   insn=0x0000000000452C90 string=0x0000000000452C94 "+"
 *   insn=0x0000000000452C9C string=0x0000000000452CAC "_"
 *   insn=0x0000000000452CA0 string=0x0000000000452CA4 "K"
 *   insn=0x0000000000452CA4 string=0x0000000000452CA8 "+"
 *   insn=0x0000000000452CD0 string=0x0000000000452CD4 "_"
 *   insn=0x0000000000452CD4 string=0x0000000000452CD8 "a"
 *   insn=0x0000000000452CF4 string=0x00000000001FB6F0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __usercall Caver::FountainParticleEmitter::TitleForParameter@<X0>(unsigned int a1@<W1>, __int64 a2@<X8>)
{
  unsigned __int8 v3; // w9
  int v5; // w0
  __int64 v6; // [xsp+0h] [xbp-C0h]
  unsigned int v7; // [xsp+Ch] [xbp-B4h]

  _ReadStatusReg(TPIDR_EL0);
  v3 = atomic_load((unsigned __int8 *)&`guard variable for'Caver::FountainParticleEmitter::TitleForParameter(unsigned int)::titles);
  if ( (v3 & 1) == 0 )
  {
    v7 = a1;
    v6 = a2;
    v5 = __cxa_guard_acquire((__guard *)&`guard variable for'Caver::FountainParticleEmitter::TitleForParameter(unsigned int)::titles);
    a2 = v6;
    a1 = v7;
    if ( v5 )
    {
      sub_566BB8((int)&Caver::FountainParticleEmitter::TitleForParameter(unsigned int)::titles, "directionAngle");
      sub_566BB8((int)&unk_6E9A80, "directionSpread");
      sub_566BB8((int)&unk_6E9A88, "positionSpreadDir");
      sub_566BB8((int)&unk_6E9A90, "positionSpreadX");
      sub_566BB8((int)&unk_6E9A98, "positionSpreadY");
      sub_566BB8((int)&unk_6E9AA0, "speed");
      sub_566BB8((int)&unk_6E9AA8, "speedVariance");
      sub_566BB8((int)&unk_6E9AB0, "velocityTrackFactor");
      sub_566BB8((int)&unk_6E9AB8, "particleScale");
      sub_566BB8((int)&unk_6E9AC0, "initialParticleSize");
      sub_566BB8((int)&unk_6E9AC8, "finalParticleSize");
      sub_566BB8((int)&unk_6E9AD0, "particleInterval");
      sub_566BB8((int)&unk_6E9AD8, "particleAge");
      sub_566BB8((int)&unk_6E9AE0, "ageVariance");
      sub_566BB8((int)&unk_6E9AE8, "scaleVariance");
      __cxa_atexit((void (*)(void *))sub_20B3D4, 0, &off_6E8000);
      __cxa_guard_release((__guard *)&`guard variable for'Caver::FountainParticleEmitter::TitleForParameter(unsigned int)::titles);
      a1 = v7;
      a2 = v6;
    }
  }
  return sub_56A528(a2, (char *)&Caver::FountainParticleEmitter::TitleForParameter(unsigned int)::titles + 8 * a1);
}

