/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000020B1F0
 * Mangled: sub_20B1F0
 * Demangled: sub_20B1F0
 *
 * Callers: 1
 *   0x0000000000451E5C  Caver::BlastParticleEmitter::TitleForParameter(uint)
 *
 * Callees: 3
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x000000000056A3A4  operator delete(void *)
 *   0x00000000006FE668  pthread_create
 *
 * Referenced strings: 46
 *   insn=0x000000000020B200 string=0x000000000020B204 "S"
 *   insn=0x000000000020B204 string=0x000000000020B208 "h"
 *   insn=0x000000000020B238 string=0x000000000020B23C "a"
 *   insn=0x000000000020B25C string=0x000000000020B260 "h"
 *   insn=0x000000000020B268 string=0x000000000020B26C "A\t"
 *   insn=0x000000000020B284 string=0x000000000020B288 ")=G"
 *   insn=0x000000000020B288 string=0x000000000020B28C "!"
 *   insn=0x000000000020B28C string=0x000000000020B290 ")"
 *   insn=0x000000000020B290 string=0x000000000020B294 "\t"
 *   insn=0x000000000020B290 string=0x000000000020B314 "\t"
 *   insn=0x000000000020B294 string=0x000000000020B298 "*"
 *   insn=0x000000000020B298 string=0x000000000020B29C "\n"
 *   insn=0x000000000020B2A4 string=0x000000000020B320 "?"
 *   insn=0x000000000020B2A8 string=0x000000000020B2AC ")=G"
 *   insn=0x000000000020B2AC string=0x000000000020B2B0 "!"
 *   insn=0x000000000020B2B0 string=0x000000000020B2B4 "\t"
 *   insn=0x000000000020B2B4 string=0x000000000020B2B8 "\t"
 *   insn=0x000000000020B2B4 string=0x000000000020B334 "\t"
 *   insn=0x000000000020B2B8 string=0x000000000020B2BC "*"
 *   insn=0x000000000020B2BC string=0x000000000020B2C0 "\n"
 *   insn=0x000000000020B2C8 string=0x000000000020B340 "?"
 *   insn=0x000000000020B2CC string=0x000000000020B2D0 ")=G"
 *   insn=0x000000000020B2D0 string=0x000000000020B2D4 "!"
 *   insn=0x000000000020B2D8 string=0x000000000020B2DC "\t"
 *   insn=0x000000000020B2D8 string=0x000000000020B354 "\t"
 *   insn=0x000000000020B2DC string=0x000000000020B2E0 "*"
 *   insn=0x000000000020B2E0 string=0x000000000020B2E4 "\n"
 *   insn=0x000000000020B2EC string=0x000000000020B360 "?"
 *   insn=0x000000000020B2F0 string=0x000000000020B2F4 ")=G"
 *   insn=0x000000000020B2F4 string=0x000000000020B2F8 "!"
 *   insn=0x000000000020B2FC string=0x000000000020B300 "\t"
 *   insn=0x000000000020B2FC string=0x000000000020B374 "\t"
 *   insn=0x000000000020B300 string=0x000000000020B304 "*"
 *   insn=0x000000000020B304 string=0x000000000020B308 "\n"
 *   insn=0x000000000020B310 string=0x000000000020B380 "?"
 *   insn=0x000000000020B314 string=0x000000000020B318 "*"
 *   insn=0x000000000020B318 string=0x000000000020B31C "\n"
 *   insn=0x000000000020B320 string=0x000000000020B324 "l"
 *   insn=0x000000000020B334 string=0x000000000020B338 "*"
 *   insn=0x000000000020B338 string=0x000000000020B33C "\n"
 *   insn=0x000000000020B354 string=0x000000000020B358 "*"
 *   insn=0x000000000020B358 string=0x000000000020B35C "\n"
 *   insn=0x000000000020B360 string=0x000000000020B364 "l"
 *   insn=0x000000000020B374 string=0x000000000020B378 "*"
 *   insn=0x000000000020B378 string=0x000000000020B37C "\n"
 *   insn=0x000000000020B394 string=0x00000000001F62D0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void sub_20B1F0()
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
  v0 = (void *)(qword_6E9A60 - 24);
  if ( (__int64 *)(qword_6E9A60 - 24) != &qword_6FD2E0 )
  {
    v4 = (unsigned int *)(qword_6E9A60 - 8);
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
  v1 = (void *)(qword_6E9A58 - 24);
  if ( (__int64 *)(qword_6E9A58 - 24) != &qword_6FD2E0 )
  {
    v6 = (unsigned int *)(qword_6E9A58 - 8);
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
  v2 = (void *)(qword_6E9A50 - 24);
  if ( (__int64 *)(qword_6E9A50 - 24) != &qword_6FD2E0 )
  {
    v8 = (unsigned int *)(qword_6E9A50 - 8);
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
  v3 = (void *)(Caver::BlastParticleEmitter::TitleForParameter(unsigned int)::titles - 24);
  if ( (__int64 *)(Caver::BlastParticleEmitter::TitleForParameter(unsigned int)::titles - 24) != &qword_6FD2E0 )
  {
    v10 = (unsigned int *)(Caver::BlastParticleEmitter::TitleForParameter(unsigned int)::titles - 8);
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

