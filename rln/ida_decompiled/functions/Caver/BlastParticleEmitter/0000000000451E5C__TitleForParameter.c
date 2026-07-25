/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000451E5C
 * Mangled: _ZN5Caver20BlastParticleEmitter17TitleForParameterEj
 * Demangled: Caver::BlastParticleEmitter::TitleForParameter(uint)
 *
 * Callers: 0
 *
 * Callees: 12
 *   0x00000000001F4C40  .__cxa_atexit
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F7040  .__cxa_guard_release
 *   0x00000000001FB6F0  .__cxa_guard_abort
 *   0x00000000001FD6E0  .__cxa_guard_acquire
 *   0x000000000020B1F0  sub_20B1F0
 *   0x0000000000452044  Caver::FountainParticleEmitter::FountainParticleEmitter(void)
 *   0x0000000000566BB8  sub_566BB8
 *   0x000000000056A3A4  operator delete(void *)
 *   0x000000000056A528  sub_56A528
 *   0x00000000005818C4  sub_5818C4
 *   0x00000000006FE668  pthread_create
 *
 * Referenced strings: 45
 *   insn=0x0000000000451E6C string=0x0000000000451E70 "T"
 *   insn=0x0000000000451E80 string=0x0000000000451E84 ")AE"
 *   insn=0x0000000000451E84 string=0x0000000000451E88 ")"
 *   insn=0x0000000000451E90 string=0x0000000000451E94 ")9D"
 *   insn=0x0000000000451E98 string=0x0000000000451E9C "!M3"
 *   insn=0x0000000000451ED4 string=0x00000000001FD6E0 "0'"
 *   insn=0x0000000000451EE4 string=0x0000000000451EE8 "!\n"
 *   insn=0x0000000000451EE8 string=0x00000000005954AF "blastSize"
 *   insn=0x0000000000451EF0 string=0x0000000000451EF4 "1S"
 *   insn=0x0000000000451EF8 string=0x0000000000451EFC "9D"
 *   insn=0x0000000000451EFC string=0x0000000000451F00 "!\n"
 *   insn=0x0000000000451F00 string=0x00000000005954B9 "blastDuration"
 *   insn=0x0000000000451F10 string=0x0000000000451F14 ")S"
 *   insn=0x0000000000451F18 string=0x0000000000451F1C "9D"
 *   insn=0x0000000000451F1C string=0x0000000000451F20 "!\n"
 *   insn=0x0000000000451F20 string=0x00000000005954C7 "particleWidth"
 *   insn=0x0000000000451F30 string=0x0000000000451F34 "!S"
 *   insn=0x0000000000451F38 string=0x0000000000451F3C "9D"
 *   insn=0x0000000000451F3C string=0x0000000000451F40 "!\n"
 *   insn=0x0000000000451F40 string=0x00000000005954D5 "particleHeight"
 *   insn=0x0000000000451F60 string=0x0000000000451F64 "B"
 *   insn=0x0000000000451F68 string=0x0000000000451F6C "5"
 *   insn=0x0000000000451F6C string=0x00000000001F4C40 "P'"
 *   insn=0x0000000000451F74 string=0x0000000000451F78 "2"
 *   insn=0x0000000000451F78 string=0x00000000001F7040 "0'"
 *   insn=0x0000000000451F84 string=0x00000000001F62D0 "0'"
 *   insn=0x0000000000451FA0 string=0x0000000000451FA4 "9D"
 *   insn=0x0000000000451FAC string=0x0000000000451FB0 "*"
 *   insn=0x0000000000451FB0 string=0x0000000000451FB4 "@a"
 *   insn=0x0000000000451FBC string=0x0000000000451FC0 "?"
 *   insn=0x0000000000451FC0 string=0x0000000000451FC4 "a"
 *   insn=0x0000000000451FCC string=0x0000000000451FD0 "H!"
 *   insn=0x0000000000451FD4 string=0x0000000000451FD8 "\t"
 *   insn=0x0000000000451FD4 string=0x0000000000451FEC "\t"
 *   insn=0x0000000000451FD8 string=0x0000000000451FDC "*"
 *   insn=0x0000000000451FDC string=0x0000000000451FE0 "\n"
 *   insn=0x0000000000451FEC string=0x0000000000451FF0 "*"
 *   insn=0x0000000000451FF0 string=0x0000000000451FF4 "\n"
 *   insn=0x0000000000451FF8 string=0x0000000000451FFC "9D"
 *   insn=0x0000000000451FFC string=0x0000000000452000 "?"
 *   insn=0x0000000000452014 string=0x0000000000452018 "9D"
 *   insn=0x000000000045201C string=0x0000000000452020 "?"
 *   insn=0x0000000000452020 string=0x0000000000452024 "a"
 *   insn=0x0000000000452038 string=0x00000000001FB6F0 "0'"
 *   insn=0x000000000045203C string=0x0000000000452040 "!"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __usercall Caver::BlastParticleEmitter::TitleForParameter@<X0>(int a1@<W1>, __int64 a2@<X8>)
{
  unsigned __int8 v4; // w9
  int v6; // w0
  __int64 v7; // [xsp+8h] [xbp-58h]

  _ReadStatusReg(TPIDR_EL0);
  v4 = atomic_load((unsigned __int8 *)&`guard variable for'Caver::BlastParticleEmitter::TitleForParameter(unsigned int)::titles);
  if ( (v4 & 1) == 0 )
  {
    v7 = a2;
    v6 = __cxa_guard_acquire((__guard *)&`guard variable for'Caver::BlastParticleEmitter::TitleForParameter(unsigned int)::titles);
    a2 = v7;
    if ( v6 )
    {
      sub_566BB8((int)Caver::BlastParticleEmitter::TitleForParameter(unsigned int)::titles, "blastSize");
      sub_566BB8((int)&qword_6E9A50, "blastDuration");
      sub_566BB8((int)&qword_6E9A58, "particleWidth");
      sub_566BB8((int)&qword_6E9A60, "particleHeight");
      __cxa_atexit((void (*)(void *))sub_20B1F0, 0, &off_6E8000);
      __cxa_guard_release((__guard *)&`guard variable for'Caver::BlastParticleEmitter::TitleForParameter(unsigned int)::titles);
      a2 = v7;
    }
  }
  return sub_56A528(a2, &Caver::BlastParticleEmitter::TitleForParameter(unsigned int)::titles[a1]);
}

