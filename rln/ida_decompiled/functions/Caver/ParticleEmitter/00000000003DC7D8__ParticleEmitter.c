/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000003DC7D8
 * Mangled: _ZN5Caver15ParticleEmitterC2Ev
 * Demangled: Caver::ParticleEmitter::ParticleEmitter(void)
 *
 * Callers: 1
 *   0x00000000001F67F0  Caver::ParticleEmitter::ParticleEmitter(void)
 *
 * Callees: 6
 *   0x00000000001F3BC0  Caver::FloatColor::GetHSLComponents(float *)
 *   0x00000000001F4F60  operator delete[](void *)
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F72B0  operator delete(void *)
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 51
 *   insn=0x00000000003DC7E8 string=0x00000000003DC7EC "T"
 *   insn=0x00000000003DC7EC string=0x00000000003DC7F0 "I"
 *   insn=0x00000000003DC7F4 string=0x00000000003DC7F8 ")"
 *   insn=0x00000000003DC7F8 string=0x00000000003DC7FC "j"
 *   insn=0x00000000003DC7FC string=0x00000000003DC800 "@"
 *   insn=0x00000000003DC808 string=0x00000000003DC80C ")A"
 *   insn=0x00000000003DC814 string=0x00000000003DC818 "i~"
 *   insn=0x00000000003DC818 string=0x00000000003DC81C "a"
 *   insn=0x00000000003DC838 string=0x00000000003DC83C "hb"
 *   insn=0x00000000003DC858 string=0x00000000001F3BC0 "P'"
 *   insn=0x00000000003DC85C string=0x00000000003DC860 "h"
 *   insn=0x00000000003DC888 string=0x00000000001F62D0 "0'"
 *   insn=0x00000000003DC89C string=0x00000000003DC8A0 "s\n@"
 *   insn=0x00000000003DC89C string=0x00000000003DC8BC "}j"
 *   insn=0x00000000003DC8A0 string=0x00000000003DC8A4 "3"
 *   insn=0x00000000003DC8A4 string=0x00000000003DC8C8 "h"
 *   insn=0x00000000003DC8B0 string=0x00000000001F4F60 "P'"
 *   insn=0x00000000003DC8B4 string=0x00000000003DC8B8 "@"
 *   insn=0x00000000003DC8BC string=0x00000000003DC8C0 "s\n@"
 *   insn=0x00000000003DC8BC string=0x00000000001F72B0 "0'"
 *   insn=0x00000000003DC8C0 string=0x00000000003DC8C4 "3"
 *   insn=0x00000000003DC8C8 string=0x00000000003DC8CC ""
 *   insn=0x00000000003DC8CC string=0x00000000003DC8D0 "h"
 *   insn=0x00000000003DC8D4 string=0x00000000003DC8D8 "h"
 *   insn=0x00000000003DC8D8 string=0x00000000003DC8DC "\t@"
 *   insn=0x00000000003DC8E4 string=0x00000000003DC8E8 "h\n@"
 *   insn=0x00000000003DC8E8 string=0x00000000003DC8EC ""
 *   insn=0x00000000003DC8EC string=0x00000000003DC8F0 "h\n"
 *   insn=0x00000000003DC8F4 string=0x00000000003DC8F8 "h"
 *   insn=0x00000000003DC8F8 string=0x00000000003DC8FC "@"
 *   insn=0x00000000003DC920 string=0x00000000003DC924 "H"
 *   insn=0x00000000003DC924 string=0x00000000003DC928 "`f@"
 *   insn=0x00000000003DC928 string=0x00000000003DC92C ""
 *   insn=0x00000000003DC92C string=0x00000000003DC930 "A"
 *   insn=0x00000000003DC930 string=0x00000000003DC934 "h"
 *   insn=0x00000000003DC934 string=0x00000000003DC938 "@"
 *   insn=0x00000000003DC938 string=0x00000000003DC940 "`"
 *   insn=0x00000000003DC940 string=0x00000000003DC944 "@"
 *   insn=0x00000000003DC944 string=0x00000000003DC948 "Zj"
 *   insn=0x00000000003DC944 string=0x00000000003DC94C "s\n@"
 *   insn=0x00000000003DC950 string=0x00000000003DC954 "h"
 *   insn=0x00000000003DC954 string=0x00000000003DC958 ""
 *   insn=0x00000000003DC958 string=0x00000000003DC95C "h"
 *   insn=0x00000000003DC95C string=0x00000000003DC960 "!"
 *   insn=0x00000000003DC960 string=0x00000000003DC964 "h"
 *   insn=0x00000000003DC968 string=0x00000000003DC96C "\t@"
 *   insn=0x00000000003DC970 string=0x00000000003DC974 "h\n@"
 *   insn=0x00000000003DC974 string=0x00000000003DC978 ""
 *   insn=0x00000000003DC978 string=0x00000000003DC97C "h\n"
 *   insn=0x00000000003DC980 string=0x00000000003DC990 "h"
 *   insn=0x00000000003DC9A0 string=0x00000000003DC9A4 " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::ParticleEmitter::ParticleEmitter(Caver::ParticleEmitter *this)
{
  __int64 result; // x0
  __int128 v3; // [xsp+20h] [xbp-40h] BYREF
  __int64 v4; // [xsp+38h] [xbp-28h]

  v4 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  *(_QWORD *)this = off_6D0138;
  *((_QWORD *)this + 1) = 0;
  *((_QWORD *)this + 4) = 0;
  *((_QWORD *)this + 2) = 0;
  *((_BYTE *)this + 24) = 0;
  *((_QWORD *)this + 10) = 0;
  *((_QWORD *)this + 11) = 0;
  *((_QWORD *)this + 8) = 0;
  *((_QWORD *)this + 9) = 0;
  *((_QWORD *)this + 6) = 0;
  *((_QWORD *)this + 7) = 0;
  *((_QWORD *)this + 5) = 0;
  *((_DWORD *)this + 24) = 1065353216;
  *((_WORD *)this + 50) = 0;
  *((_QWORD *)this + 24) = 0;
  *((_QWORD *)this + 25) = 0;
  *((_QWORD *)this + 23) = 0;
  *((_DWORD *)this + 52) = 0;
  *((_DWORD *)this + 53) = 1065353216;
  v3 = xmmword_589600;
  result = Caver::FloatColor::GetHSLComponents((Caver::FloatColor *)&v3, (float *)this + 42);
  *((_DWORD *)this + 45) = HIDWORD(v3);
  return result;
}

