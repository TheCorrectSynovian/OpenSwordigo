/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000045579C
 * Mangled: _ZN5Caver20SparkParticleEmitter17TitleForParameterEj
 * Demangled: Caver::SparkParticleEmitter::TitleForParameter(uint)
 *
 * Callers: 0
 *
 * Callees: 12
 *   0x00000000001F4C40  .__cxa_atexit
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F7040  .__cxa_guard_release
 *   0x00000000001FB6F0  .__cxa_guard_abort
 *   0x00000000001FD6E0  .__cxa_guard_acquire
 *   0x000000000020B58C  sub_20B58C
 *   0x0000000000455984  Caver::TrailParticleEmitter::TrailParticleEmitter(void)
 *   0x0000000000566BB8  sub_566BB8
 *   0x000000000056A3A4  operator delete(void *)
 *   0x000000000056A528  sub_56A528
 *   0x00000000005818C4  sub_5818C4
 *   0x00000000006FE668  pthread_create
 *
 * Referenced strings: 38
 *   insn=0x00000000004557AC string=0x00000000004557B0 "T"
 *   insn=0x00000000004557C0 string=0x00000000004557C4 ")%A"
 *   insn=0x00000000004557C4 string=0x00000000004557C8 ")"
 *   insn=0x00000000004557D0 string=0x00000000004557D4 ")"
 *   insn=0x00000000004557D8 string=0x00000000004557DC "!M3"
 *   insn=0x00000000004557DC string=0x00000000004557E0 "RS"
 *   insn=0x0000000000455814 string=0x00000000001FD6E0 "0'"
 *   insn=0x0000000000455828 string=0x00000000005954AF "blastSize"
 *   insn=0x0000000000455838 string=0x000000000045583C ""
 *   insn=0x0000000000455840 string=0x00000000005954B9 "blastDuration"
 *   insn=0x0000000000455858 string=0x000000000045585C ""
 *   insn=0x0000000000455860 string=0x00000000005954C7 "particleWidth"
 *   insn=0x0000000000455878 string=0x000000000045587C ""
 *   insn=0x0000000000455880 string=0x00000000005954D5 "particleHeight"
 *   insn=0x00000000004558A0 string=0x00000000004558A4 "B"
 *   insn=0x00000000004558AC string=0x00000000001F4C40 "P'"
 *   insn=0x00000000004558B8 string=0x00000000001F7040 "0'"
 *   insn=0x00000000004558C4 string=0x00000000001F62D0 "0'"
 *   insn=0x00000000004558D0 string=0x00000000004558D4 "v"
 *   insn=0x00000000004558E0 string=0x00000000004558E4 ""
 *   insn=0x00000000004558EC string=0x00000000004558F0 "*"
 *   insn=0x00000000004558F0 string=0x00000000004558F4 "@a"
 *   insn=0x00000000004558FC string=0x0000000000455900 "?"
 *   insn=0x0000000000455900 string=0x0000000000455904 "a"
 *   insn=0x000000000045590C string=0x0000000000455910 "H!"
 *   insn=0x0000000000455914 string=0x0000000000455918 "\t"
 *   insn=0x0000000000455914 string=0x000000000045592C "\t"
 *   insn=0x0000000000455918 string=0x000000000045591C "*"
 *   insn=0x000000000045591C string=0x0000000000455920 "\n"
 *   insn=0x000000000045592C string=0x0000000000455930 "*"
 *   insn=0x0000000000455930 string=0x0000000000455934 "\n"
 *   insn=0x0000000000455938 string=0x000000000045593C ""
 *   insn=0x000000000045593C string=0x0000000000455940 "?"
 *   insn=0x0000000000455954 string=0x0000000000455958 ""
 *   insn=0x000000000045595C string=0x0000000000455960 "?"
 *   insn=0x0000000000455960 string=0x0000000000455964 "a"
 *   insn=0x0000000000455974 string=0x0000000000455978 "^"
 *   insn=0x0000000000455978 string=0x00000000001FB6F0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __usercall Caver::SparkParticleEmitter::TitleForParameter@<X0>(int a1@<W1>, __int64 a2@<X8>)
{
  unsigned __int8 v4; // w9
  int v6; // w0
  __int64 v7; // [xsp+8h] [xbp-58h]

  _ReadStatusReg(TPIDR_EL0);
  v4 = atomic_load((unsigned __int8 *)&`guard variable for'Caver::SparkParticleEmitter::TitleForParameter(unsigned int)::titles);
  if ( (v4 & 1) == 0 )
  {
    v7 = a2;
    v6 = __cxa_guard_acquire((__guard *)&`guard variable for'Caver::SparkParticleEmitter::TitleForParameter(unsigned int)::titles);
    a2 = v7;
    if ( v6 )
    {
      sub_566BB8((int)Caver::SparkParticleEmitter::TitleForParameter(unsigned int)::titles, "blastSize");
      sub_566BB8((int)&qword_6E9B08, "blastDuration");
      sub_566BB8((int)&qword_6E9B10, "particleWidth");
      sub_566BB8((int)&qword_6E9B18, "particleHeight");
      __cxa_atexit((void (*)(void *))sub_20B58C, 0, &off_6E8000);
      __cxa_guard_release((__guard *)&`guard variable for'Caver::SparkParticleEmitter::TitleForParameter(unsigned int)::titles);
      a2 = v7;
    }
  }
  return sub_56A528(a2, &Caver::SparkParticleEmitter::TitleForParameter(unsigned int)::titles[a1]);
}

