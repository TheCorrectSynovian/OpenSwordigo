/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000020B58C
 * Mangled: sub_20B58C
 * Demangled: sub_20B58C
 *
 * Callers: 1
 *   0x000000000045579C  Caver::SparkParticleEmitter::TitleForParameter(uint)
 *
 * Callees: 3
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x000000000056A3A4  operator delete(void *)
 *   0x00000000006FE668  pthread_create
 *
 * Referenced strings: 49
 *   insn=0x000000000020B59C string=0x000000000020B5A0 "S"
 *   insn=0x000000000020B5A0 string=0x000000000020B5A4 "h"
 *   insn=0x000000000020B5D4 string=0x000000000020B5D8 "a"
 *   insn=0x000000000020B5F8 string=0x000000000020B5FC "h"
 *   insn=0x000000000020B604 string=0x000000000020B608 "A\t"
 *   insn=0x000000000020B620 string=0x000000000020B624 ")=G"
 *   insn=0x000000000020B624 string=0x000000000020B628 "!"
 *   insn=0x000000000020B628 string=0x000000000020B62C ")"
 *   insn=0x000000000020B62C string=0x000000000020B630 "\t"
 *   insn=0x000000000020B62C string=0x000000000020B6B0 "\t"
 *   insn=0x000000000020B630 string=0x000000000020B634 "*"
 *   insn=0x000000000020B634 string=0x000000000020B638 "\n"
 *   insn=0x000000000020B640 string=0x000000000020B6BC "?"
 *   insn=0x000000000020B644 string=0x000000000020B648 ")=G"
 *   insn=0x000000000020B648 string=0x000000000020B64C "!"
 *   insn=0x000000000020B64C string=0x000000000020B650 "\t"
 *   insn=0x000000000020B650 string=0x000000000020B654 "\t"
 *   insn=0x000000000020B650 string=0x000000000020B6D0 "\t"
 *   insn=0x000000000020B654 string=0x000000000020B658 "*"
 *   insn=0x000000000020B658 string=0x000000000020B65C "\n"
 *   insn=0x000000000020B664 string=0x000000000020B6DC "?"
 *   insn=0x000000000020B668 string=0x000000000020B66C ")=G"
 *   insn=0x000000000020B66C string=0x000000000020B670 "!"
 *   insn=0x000000000020B674 string=0x000000000020B678 "\t"
 *   insn=0x000000000020B674 string=0x000000000020B6F0 "\t"
 *   insn=0x000000000020B678 string=0x000000000020B67C "*"
 *   insn=0x000000000020B67C string=0x000000000020B680 "\n"
 *   insn=0x000000000020B688 string=0x000000000020B6FC "?"
 *   insn=0x000000000020B68C string=0x000000000020B690 ")=G"
 *   insn=0x000000000020B690 string=0x000000000020B694 "!"
 *   insn=0x000000000020B698 string=0x000000000020B69C "\t"
 *   insn=0x000000000020B698 string=0x000000000020B710 "\t"
 *   insn=0x000000000020B69C string=0x000000000020B6A0 "*"
 *   insn=0x000000000020B6A0 string=0x000000000020B6A4 "\n"
 *   insn=0x000000000020B6AC string=0x000000000020B71C "?"
 *   insn=0x000000000020B6B0 string=0x000000000020B6B4 "*"
 *   insn=0x000000000020B6B4 string=0x000000000020B6B8 "\n"
 *   insn=0x000000000020B6BC string=0x000000000020B6C0 "l"
 *   insn=0x000000000020B6C4 string=0x000000000020B6C8 "7{"
 *   insn=0x000000000020B6D0 string=0x000000000020B6D4 "*"
 *   insn=0x000000000020B6D4 string=0x000000000020B6D8 "\n"
 *   insn=0x000000000020B6E4 string=0x000000000020B6E8 "/{"
 *   insn=0x000000000020B6F0 string=0x000000000020B6F4 "*"
 *   insn=0x000000000020B6F4 string=0x000000000020B6F8 "\n"
 *   insn=0x000000000020B6FC string=0x000000000020B700 "l"
 *   insn=0x000000000020B704 string=0x000000000020B708 "'{"
 *   insn=0x000000000020B710 string=0x000000000020B714 "*"
 *   insn=0x000000000020B714 string=0x000000000020B718 "\n"
 *   insn=0x000000000020B730 string=0x00000000001F62D0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void sub_20B58C()
{
  void *v0; // x0
  void *v1; // x0
  void *v2; // x0
  void *v3; // x0
  unsigned int *v4; // x8
  int v5; // w9
  unsigned int *v6; // x8
  int v7; // w9
  unsigned int *v8; // x8
  int v9; // w9
  unsigned int *v10; // x8
  int v11; // w9

  _ReadStatusReg(TPIDR_EL0);
  v0 = (void *)(qword_6E9B18 - 24);
  if ( (__int64 *)(qword_6E9B18 - 24) != &qword_6FD2E0 )
  {
    v4 = (unsigned int *)(qword_6E9B18 - 8);
    if ( &pthread_create )
    {
      do
        v5 = __ldaxr(v4);
      while ( __stlxr(v5 - 1, v4) );
    }
    else
    {
      v5 = (*v4)--;
    }
    if ( v5 <= 0 )
      operator delete(v0);
  }
  v1 = (void *)(qword_6E9B10 - 24);
  if ( (__int64 *)(qword_6E9B10 - 24) != &qword_6FD2E0 )
  {
    v6 = (unsigned int *)(qword_6E9B10 - 8);
    if ( &pthread_create )
    {
      do
        v7 = __ldaxr(v6);
      while ( __stlxr(v7 - 1, v6) );
    }
    else
    {
      v7 = (*v6)--;
    }
    if ( v7 <= 0 )
      operator delete(v1);
  }
  v2 = (void *)(qword_6E9B08 - 24);
  if ( (__int64 *)(qword_6E9B08 - 24) != &qword_6FD2E0 )
  {
    v8 = (unsigned int *)(qword_6E9B08 - 8);
    if ( &pthread_create )
    {
      do
        v9 = __ldaxr(v8);
      while ( __stlxr(v9 - 1, v8) );
    }
    else
    {
      v9 = (*v8)--;
    }
    if ( v9 <= 0 )
      operator delete(v2);
  }
  v3 = (void *)(Caver::SparkParticleEmitter::TitleForParameter(unsigned int)::titles - 24);
  if ( (__int64 *)(Caver::SparkParticleEmitter::TitleForParameter(unsigned int)::titles - 24) != &qword_6FD2E0 )
  {
    v10 = (unsigned int *)(Caver::SparkParticleEmitter::TitleForParameter(unsigned int)::titles - 8);
    if ( &pthread_create )
    {
      do
        v11 = __ldaxr(v10);
      while ( __stlxr(v11 - 1, v10) );
    }
    else
    {
      v11 = (*v10)--;
    }
    if ( v11 <= 0 )
      operator delete(v3);
  }
}

