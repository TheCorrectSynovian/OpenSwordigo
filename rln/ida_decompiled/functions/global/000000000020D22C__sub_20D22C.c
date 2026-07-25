/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000020D22C
 * Mangled: sub_20D22C
 * Demangled: sub_20D22C
 *
 * Callers: 1
 *   0x000000000020D720  sub_20D720
 *
 * Callees: 3
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x000000000056A3A4  operator delete(void *)
 *   0x00000000006FE668  pthread_create
 *
 * Referenced strings: 47
 *   insn=0x000000000020D23C string=0x000000000020D240 "S"
 *   insn=0x000000000020D240 string=0x000000000020D244 "h"
 *   insn=0x000000000020D274 string=0x000000000020D278 "a"
 *   insn=0x000000000020D298 string=0x000000000020D29C "h"
 *   insn=0x000000000020D2A4 string=0x000000000020D2A8 "A\t"
 *   insn=0x000000000020D2C0 string=0x000000000020D2C4 ")=G"
 *   insn=0x000000000020D2C4 string=0x000000000020D2C8 "!"
 *   insn=0x000000000020D2C8 string=0x000000000020D2CC ")"
 *   insn=0x000000000020D2CC string=0x000000000020D2D0 "\t"
 *   insn=0x000000000020D2CC string=0x000000000020D350 "\t"
 *   insn=0x000000000020D2D0 string=0x000000000020D2D4 "*"
 *   insn=0x000000000020D2D4 string=0x000000000020D2D8 "\n"
 *   insn=0x000000000020D2E0 string=0x000000000020D35C "?"
 *   insn=0x000000000020D2E4 string=0x000000000020D2E8 ")=G"
 *   insn=0x000000000020D2E8 string=0x000000000020D2EC "!"
 *   insn=0x000000000020D2EC string=0x000000000020D2F0 "\t"
 *   insn=0x000000000020D2F0 string=0x000000000020D2F4 "\t"
 *   insn=0x000000000020D2F0 string=0x000000000020D370 "\t"
 *   insn=0x000000000020D2F4 string=0x000000000020D2F8 "*"
 *   insn=0x000000000020D2F8 string=0x000000000020D2FC "\n"
 *   insn=0x000000000020D304 string=0x000000000020D37C "?"
 *   insn=0x000000000020D308 string=0x000000000020D30C ")=G"
 *   insn=0x000000000020D30C string=0x000000000020D310 "!"
 *   insn=0x000000000020D314 string=0x000000000020D318 "\t"
 *   insn=0x000000000020D314 string=0x000000000020D390 "\t"
 *   insn=0x000000000020D318 string=0x000000000020D31C "*"
 *   insn=0x000000000020D31C string=0x000000000020D320 "\n"
 *   insn=0x000000000020D328 string=0x000000000020D39C "?"
 *   insn=0x000000000020D32C string=0x000000000020D330 ")=G"
 *   insn=0x000000000020D330 string=0x000000000020D334 "!"
 *   insn=0x000000000020D338 string=0x000000000020D33C "\t"
 *   insn=0x000000000020D338 string=0x000000000020D3B0 "\t"
 *   insn=0x000000000020D33C string=0x000000000020D340 "*"
 *   insn=0x000000000020D340 string=0x000000000020D344 "\n"
 *   insn=0x000000000020D34C string=0x000000000020D3BC "?"
 *   insn=0x000000000020D350 string=0x000000000020D354 "*"
 *   insn=0x000000000020D354 string=0x000000000020D358 "\n"
 *   insn=0x000000000020D35C string=0x000000000020D360 "l"
 *   insn=0x000000000020D370 string=0x000000000020D374 "*"
 *   insn=0x000000000020D374 string=0x000000000020D378 "\n"
 *   insn=0x000000000020D384 string=0x000000000020D388 "t"
 *   insn=0x000000000020D390 string=0x000000000020D394 "*"
 *   insn=0x000000000020D394 string=0x000000000020D398 "\n"
 *   insn=0x000000000020D39C string=0x000000000020D3A0 "l"
 *   insn=0x000000000020D3B0 string=0x000000000020D3B4 "*"
 *   insn=0x000000000020D3B4 string=0x000000000020D3B8 "\n"
 *   insn=0x000000000020D3D0 string=0x00000000001F62D0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void sub_20D22C()
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
  v0 = (void *)(qword_6E9FD8 - 24);
  if ( (__int64 *)(qword_6E9FD8 - 24) != &qword_6FD2E0 )
  {
    v4 = (unsigned int *)(qword_6E9FD8 - 8);
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
  v1 = (void *)(qword_6E9FD0 - 24);
  if ( (__int64 *)(qword_6E9FD0 - 24) != &qword_6FD2E0 )
  {
    v6 = (unsigned int *)(qword_6E9FD0 - 8);
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
  v2 = (void *)(qword_6E9FC8 - 24);
  if ( (__int64 *)(qword_6E9FC8 - 24) != &qword_6FD2E0 )
  {
    v8 = (unsigned int *)(qword_6E9FC8 - 8);
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
  v3 = (void *)(Caver::imageTypeStrings - 24);
  if ( (__int64 *)(Caver::imageTypeStrings - 24) != &qword_6FD2E0 )
  {
    v10 = (unsigned int *)(Caver::imageTypeStrings - 8);
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

