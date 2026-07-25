/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004560A4
 * Mangled: _ZN5Caver20TrailParticleEmitter17TitleForParameterEj
 * Demangled: Caver::TrailParticleEmitter::TitleForParameter(uint)
 *
 * Callers: 0
 *
 * Callees: 12
 *   0x00000000001F4C40  .__cxa_atexit
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F7040  .__cxa_guard_release
 *   0x00000000001FB6F0  .__cxa_guard_abort
 *   0x00000000001FD6E0  .__cxa_guard_acquire
 *   0x000000000020B770  sub_20B770
 *   0x0000000000456308  Caver::WhooshParticleEmitter::WhooshParticleEmitter(void)
 *   0x0000000000566BB8  sub_566BB8
 *   0x000000000056A3A4  operator delete(void *)
 *   0x000000000056A528  sub_56A528
 *   0x00000000005818C4  sub_5818C4
 *   0x00000000006FE668  pthread_create
 *
 * Referenced strings: 64
 *   insn=0x00000000004560B4 string=0x00000000004560B8 "T"
 *   insn=0x00000000004560C4 string=0x00000000004560C8 ")"
 *   insn=0x00000000004560C8 string=0x00000000004560CC ")"
 *   insn=0x00000000004560D0 string=0x00000000004560D4 "i"
 *   insn=0x00000000004560D4 string=0x00000000004560D8 ")5G"
 *   insn=0x00000000004560DC string=0x00000000004560E0 "!M!"
 *   insn=0x00000000004560F4 string=0x0000000000456234 "'"
 *   insn=0x0000000000456118 string=0x000000000045611C "q"
 *   insn=0x000000000045611C string=0x00000000001FD6E0 "0'"
 *   insn=0x0000000000456124 string=0x0000000000456128 "`"
 *   insn=0x0000000000456128 string=0x000000000045612C "`"
 *   insn=0x0000000000456134 string=0x0000000000589558 "particleInterval"
 *   insn=0x0000000000456140 string=0x0000000000456144 "h"
 *   insn=0x0000000000456144 string=0x0000000000456148 "5G"
 *   insn=0x000000000045614C string=0x00000000005955B9 "particleAge"
 *   insn=0x0000000000456160 string=0x0000000000456164 "h"
 *   insn=0x0000000000456164 string=0x0000000000456168 "5G"
 *   insn=0x000000000045616C string=0x0000000000595585 "particleScale"
 *   insn=0x0000000000456180 string=0x0000000000456184 "h"
 *   insn=0x0000000000456184 string=0x0000000000456188 "5G"
 *   insn=0x0000000000456188 string=0x000000000045618C "a\t"
 *   insn=0x000000000045618C string=0x0000000000583F89 "radius"
 *   insn=0x00000000004561A0 string=0x00000000004561A4 "h"
 *   insn=0x00000000004561A4 string=0x00000000004561A8 "5G"
 *   insn=0x00000000004561AC string=0x0000000000595571 "velocityTrackFactor"
 *   insn=0x00000000004561BC string=0x00000000004561C0 "~B"
 *   insn=0x00000000004561C0 string=0x00000000004561C4 "h"
 *   insn=0x00000000004561C4 string=0x00000000004561C8 "5G"
 *   insn=0x00000000004561CC string=0x000000000059579F "initialSize"
 *   insn=0x00000000004561DC string=0x00000000004561E0 "vB"
 *   insn=0x00000000004561E0 string=0x00000000004561E4 "h"
 *   insn=0x00000000004561E4 string=0x00000000004561E8 "5G"
 *   insn=0x00000000004561EC string=0x00000000005957AB "finalSize"
 *   insn=0x00000000004561FC string=0x0000000000456200 "nB"
 *   insn=0x000000000045620C string=0x0000000000456210 "B"
 *   insn=0x0000000000456218 string=0x00000000001F4C40 "P'"
 *   insn=0x0000000000456224 string=0x00000000001F7040 "0'"
 *   insn=0x0000000000456234 string=0x00000000001F62D0 "0'"
 *   insn=0x0000000000456238 string=0x000000000045624C "h"
 *   insn=0x000000000045624C string=0x0000000000456250 "u"
 *   insn=0x0000000000456250 string=0x0000000000456254 "i"
 *   insn=0x0000000000456254 string=0x0000000000456258 ""
 *   insn=0x000000000045625C string=0x0000000000456260 ")5G"
 *   insn=0x0000000000456268 string=0x000000000045626C "K"
 *   insn=0x000000000045626C string=0x0000000000456270 "`a"
 *   insn=0x0000000000456278 string=0x000000000045627C "_"
 *   insn=0x000000000045627C string=0x0000000000456280 "a"
 *   insn=0x0000000000456288 string=0x000000000045628C "i!"
 *   insn=0x0000000000456290 string=0x0000000000456294 "*"
 *   insn=0x0000000000456290 string=0x00000000004562A8 "*"
 *   insn=0x0000000000456294 string=0x0000000000456298 "K"
 *   insn=0x0000000000456298 string=0x000000000045629C "+"
 *   insn=0x00000000004562A4 string=0x00000000004562B4 "i"
 *   insn=0x00000000004562A8 string=0x00000000004562AC "K"
 *   insn=0x00000000004562AC string=0x00000000004562B0 "+"
 *   insn=0x00000000004562B4 string=0x00000000004562B8 ")5G"
 *   insn=0x00000000004562B8 string=0x00000000004562BC "_"
 *   insn=0x00000000004562CC string=0x00000000004562D0 "5P"
 *   insn=0x00000000004562D0 string=0x00000000004562D4 "i"
 *   insn=0x00000000004562D4 string=0x00000000004562D8 ")5G"
 *   insn=0x00000000004562E0 string=0x00000000004562E4 "_"
 *   insn=0x00000000004562E4 string=0x00000000004562E8 "!"
 *   insn=0x00000000004562FC string=0x00000000001FB6F0 "0'"
 *   insn=0x0000000000456300 string=0x0000000000456304 "p"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __usercall Caver::TrailParticleEmitter::TitleForParameter@<X0>(int a1@<W1>, __int64 a2@<X8>)
{
  unsigned __int8 v3; // w9
  int v5; // w0
  __int64 v6; // [xsp+0h] [xbp-70h]
  int v7; // [xsp+Ch] [xbp-64h]

  _ReadStatusReg(TPIDR_EL0);
  v3 = atomic_load((unsigned __int8 *)&`guard variable for'Caver::TrailParticleEmitter::TitleForParameter(unsigned int)::titles);
  if ( (v3 & 1) == 0 )
  {
    v7 = a1;
    v6 = a2;
    v5 = __cxa_guard_acquire((__guard *)&`guard variable for'Caver::TrailParticleEmitter::TitleForParameter(unsigned int)::titles);
    a2 = v6;
    a1 = v7;
    if ( v5 )
    {
      sub_566BB8((int)Caver::TrailParticleEmitter::TitleForParameter(unsigned int)::titles, "particleInterval");
      sub_566BB8((int)&qword_6E9B38, "particleAge");
      sub_566BB8((int)&qword_6E9B40, "particleScale");
      sub_566BB8((int)&qword_6E9B48, "radius");
      sub_566BB8((int)&qword_6E9B50, "velocityTrackFactor");
      sub_566BB8((int)&qword_6E9B58, "initialSize");
      sub_566BB8((int)&qword_6E9B60, "finalSize");
      __cxa_atexit((void (*)(void *))sub_20B770, 0, &off_6E8000);
      __cxa_guard_release((__guard *)&`guard variable for'Caver::TrailParticleEmitter::TitleForParameter(unsigned int)::titles);
      a1 = v7;
      a2 = v6;
    }
  }
  return sub_56A528(a2, &Caver::TrailParticleEmitter::TitleForParameter(unsigned int)::titles[a1]);
}

