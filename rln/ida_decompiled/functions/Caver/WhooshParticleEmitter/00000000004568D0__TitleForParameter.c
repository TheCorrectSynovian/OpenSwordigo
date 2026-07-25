/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004568D0
 * Mangled: _ZN5Caver21WhooshParticleEmitter17TitleForParameterEj
 * Demangled: Caver::WhooshParticleEmitter::TitleForParameter(uint)
 *
 * Callers: 0
 *
 * Callees: 12
 *   0x00000000001F4C40  .__cxa_atexit
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F7040  .__cxa_guard_release
 *   0x00000000001FB6F0  .__cxa_guard_abort
 *   0x00000000001FD6E0  .__cxa_guard_acquire
 *   0x000000000020BA50  sub_20BA50
 *   0x0000000000456AB8  Caver::Camera::NormalizedScreenPointFromWorldPosition(Caver::Vector3 const&,float *)
 *   0x0000000000566BB8  sub_566BB8
 *   0x000000000056A3A4  operator delete(void *)
 *   0x000000000056A528  sub_56A528
 *   0x00000000005818C4  sub_5818C4
 *   0x00000000006FE668  pthread_create
 *
 * Referenced strings: 50
 *   insn=0x00000000004568E0 string=0x00000000004568E4 "T"
 *   insn=0x00000000004568F4 string=0x00000000004568F8 ")"
 *   insn=0x00000000004568F8 string=0x00000000004568FC ")"
 *   insn=0x0000000000456900 string=0x0000000000456904 "i"
 *   insn=0x0000000000456904 string=0x0000000000456908 ")"
 *   insn=0x000000000045690C string=0x0000000000456910 "!M3"
 *   insn=0x0000000000456924 string=0x00000000004569F8 "6~"
 *   insn=0x0000000000456944 string=0x0000000000456948 "f"
 *   insn=0x0000000000456948 string=0x00000000001FD6E0 "0'"
 *   insn=0x0000000000456950 string=0x0000000000456954 "`"
 *   insn=0x000000000045695C string=0x0000000000589558 "particleInterval"
 *   insn=0x0000000000456968 string=0x000000000045696C "h"
 *   insn=0x000000000045696C string=0x0000000000456970 ""
 *   insn=0x0000000000456974 string=0x00000000005955B9 "particleAge"
 *   insn=0x0000000000456988 string=0x000000000045698C "h"
 *   insn=0x000000000045698C string=0x0000000000456990 ""
 *   insn=0x0000000000456994 string=0x0000000000595585 "particleScale"
 *   insn=0x00000000004569A8 string=0x00000000004569AC "h"
 *   insn=0x00000000004569AC string=0x00000000004569B0 ""
 *   insn=0x00000000004569B0 string=0x00000000004569B4 "a\t"
 *   insn=0x00000000004569B4 string=0x0000000000583F89 "radius"
 *   insn=0x00000000004569C4 string=0x00000000004569C8 "|@"
 *   insn=0x00000000004569D4 string=0x00000000004569D8 "B"
 *   insn=0x00000000004569E0 string=0x00000000001F4C40 "P'"
 *   insn=0x00000000004569EC string=0x00000000001F7040 "0'"
 *   insn=0x00000000004569F8 string=0x00000000001F62D0 "0'"
 *   insn=0x00000000004569FC string=0x0000000000456A04 "t"
 *   insn=0x0000000000456A04 string=0x0000000000456A08 "v"
 *   insn=0x0000000000456A08 string=0x0000000000456A0C "h"
 *   insn=0x0000000000456A14 string=0x0000000000456A18 ""
 *   insn=0x0000000000456A20 string=0x0000000000456A24 "*"
 *   insn=0x0000000000456A24 string=0x0000000000456A28 "@a"
 *   insn=0x0000000000456A30 string=0x0000000000456A34 "?"
 *   insn=0x0000000000456A34 string=0x0000000000456A38 "a"
 *   insn=0x0000000000456A40 string=0x0000000000456A44 "H!"
 *   insn=0x0000000000456A48 string=0x0000000000456A4C "\t"
 *   insn=0x0000000000456A48 string=0x0000000000456A60 "\t"
 *   insn=0x0000000000456A4C string=0x0000000000456A50 "*"
 *   insn=0x0000000000456A50 string=0x0000000000456A54 "\n"
 *   insn=0x0000000000456A5C string=0x0000000000456A6C "h"
 *   insn=0x0000000000456A60 string=0x0000000000456A64 "*"
 *   insn=0x0000000000456A64 string=0x0000000000456A68 "\n"
 *   insn=0x0000000000456A6C string=0x0000000000456A70 ""
 *   insn=0x0000000000456A70 string=0x0000000000456A74 "?"
 *   insn=0x0000000000456A80 string=0x0000000000456A84 "HN"
 *   insn=0x0000000000456A84 string=0x0000000000456A88 "h"
 *   insn=0x0000000000456A88 string=0x0000000000456A8C ""
 *   insn=0x0000000000456A90 string=0x0000000000456A94 "?"
 *   insn=0x0000000000456A94 string=0x0000000000456A98 "a"
 *   insn=0x0000000000456AAC string=0x00000000001FB6F0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __usercall Caver::WhooshParticleEmitter::TitleForParameter@<X0>(int a1@<W1>, __int64 a2@<X8>)
{
  unsigned __int8 v4; // w9
  int v6; // w0
  __int64 v7; // [xsp+8h] [xbp-58h]

  _ReadStatusReg(TPIDR_EL0);
  v4 = atomic_load((unsigned __int8 *)&`guard variable for'Caver::WhooshParticleEmitter::TitleForParameter(unsigned int)::titles);
  if ( (v4 & 1) == 0 )
  {
    v7 = a2;
    v6 = __cxa_guard_acquire((__guard *)&`guard variable for'Caver::WhooshParticleEmitter::TitleForParameter(unsigned int)::titles);
    a2 = v7;
    if ( v6 )
    {
      sub_566BB8((int)Caver::WhooshParticleEmitter::TitleForParameter(unsigned int)::titles, "particleInterval");
      sub_566BB8((int)&qword_6E9B80, "particleAge");
      sub_566BB8((int)&qword_6E9B88, "particleScale");
      sub_566BB8((int)&qword_6E9B90, "radius");
      __cxa_atexit((void (*)(void *))sub_20BA50, 0, &off_6E8000);
      __cxa_guard_release((__guard *)&`guard variable for'Caver::WhooshParticleEmitter::TitleForParameter(unsigned int)::titles);
      a2 = v7;
    }
  }
  return sub_56A528(a2, &Caver::WhooshParticleEmitter::TitleForParameter(unsigned int)::titles[a1]);
}

