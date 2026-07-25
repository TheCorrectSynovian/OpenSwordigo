/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000020BA50
 * Mangled: sub_20BA50
 * Demangled: sub_20BA50
 *
 * Callers: 1
 *   0x00000000004568D0  Caver::WhooshParticleEmitter::TitleForParameter(uint)
 *
 * Callees: 3
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x000000000056A3A4  operator delete(void *)
 *   0x00000000006FE668  pthread_create
 *
 * Referenced strings: 46
 *   insn=0x000000000020BA60 string=0x000000000020BA64 "S"
 *   insn=0x000000000020BA64 string=0x000000000020BA68 "h"
 *   insn=0x000000000020BA98 string=0x000000000020BA9C "a"
 *   insn=0x000000000020BABC string=0x000000000020BAC0 "h"
 *   insn=0x000000000020BAC8 string=0x000000000020BACC "A\t"
 *   insn=0x000000000020BAE4 string=0x000000000020BAE8 ")=G"
 *   insn=0x000000000020BAE8 string=0x000000000020BAEC "!"
 *   insn=0x000000000020BAEC string=0x000000000020BAF0 ")"
 *   insn=0x000000000020BAF0 string=0x000000000020BAF4 "\t"
 *   insn=0x000000000020BAF0 string=0x000000000020BB74 "\t"
 *   insn=0x000000000020BAF4 string=0x000000000020BAF8 "*"
 *   insn=0x000000000020BAF8 string=0x000000000020BAFC "\n"
 *   insn=0x000000000020BB04 string=0x000000000020BB80 "?"
 *   insn=0x000000000020BB08 string=0x000000000020BB0C ")=G"
 *   insn=0x000000000020BB0C string=0x000000000020BB10 "!"
 *   insn=0x000000000020BB10 string=0x000000000020BB14 "\t"
 *   insn=0x000000000020BB14 string=0x000000000020BB18 "\t"
 *   insn=0x000000000020BB14 string=0x000000000020BB94 "\t"
 *   insn=0x000000000020BB18 string=0x000000000020BB1C "*"
 *   insn=0x000000000020BB1C string=0x000000000020BB20 "\n"
 *   insn=0x000000000020BB28 string=0x000000000020BBA0 "?"
 *   insn=0x000000000020BB2C string=0x000000000020BB30 ")=G"
 *   insn=0x000000000020BB30 string=0x000000000020BB34 "!"
 *   insn=0x000000000020BB38 string=0x000000000020BB3C "\t"
 *   insn=0x000000000020BB38 string=0x000000000020BBB4 "\t"
 *   insn=0x000000000020BB3C string=0x000000000020BB40 "*"
 *   insn=0x000000000020BB40 string=0x000000000020BB44 "\n"
 *   insn=0x000000000020BB4C string=0x000000000020BBC0 "?"
 *   insn=0x000000000020BB50 string=0x000000000020BB54 ")=G"
 *   insn=0x000000000020BB54 string=0x000000000020BB58 "!"
 *   insn=0x000000000020BB5C string=0x000000000020BB60 "\t"
 *   insn=0x000000000020BB5C string=0x000000000020BBD4 "\t"
 *   insn=0x000000000020BB60 string=0x000000000020BB64 "*"
 *   insn=0x000000000020BB64 string=0x000000000020BB68 "\n"
 *   insn=0x000000000020BB70 string=0x000000000020BBE0 "?"
 *   insn=0x000000000020BB74 string=0x000000000020BB78 "*"
 *   insn=0x000000000020BB78 string=0x000000000020BB7C "\n"
 *   insn=0x000000000020BB80 string=0x000000000020BB84 "l"
 *   insn=0x000000000020BB94 string=0x000000000020BB98 "*"
 *   insn=0x000000000020BB98 string=0x000000000020BB9C "\n"
 *   insn=0x000000000020BBB4 string=0x000000000020BBB8 "*"
 *   insn=0x000000000020BBB8 string=0x000000000020BBBC "\n"
 *   insn=0x000000000020BBC0 string=0x000000000020BBC4 "l"
 *   insn=0x000000000020BBD4 string=0x000000000020BBD8 "*"
 *   insn=0x000000000020BBD8 string=0x000000000020BBDC "\n"
 *   insn=0x000000000020BBF4 string=0x00000000001F62D0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void sub_20BA50()
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
  v0 = (void *)(qword_6E9B90 - 24);
  if ( (__int64 *)(qword_6E9B90 - 24) != &qword_6FD2E0 )
  {
    v4 = (unsigned int *)(qword_6E9B90 - 8);
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
  v1 = (void *)(qword_6E9B88 - 24);
  if ( (__int64 *)(qword_6E9B88 - 24) != &qword_6FD2E0 )
  {
    v6 = (unsigned int *)(qword_6E9B88 - 8);
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
  v2 = (void *)(qword_6E9B80 - 24);
  if ( (__int64 *)(qword_6E9B80 - 24) != &qword_6FD2E0 )
  {
    v8 = (unsigned int *)(qword_6E9B80 - 8);
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
  v3 = (void *)(Caver::WhooshParticleEmitter::TitleForParameter(unsigned int)::titles - 24);
  if ( (__int64 *)(Caver::WhooshParticleEmitter::TitleForParameter(unsigned int)::titles - 24) != &qword_6FD2E0 )
  {
    v10 = (unsigned int *)(Caver::WhooshParticleEmitter::TitleForParameter(unsigned int)::titles - 8);
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

