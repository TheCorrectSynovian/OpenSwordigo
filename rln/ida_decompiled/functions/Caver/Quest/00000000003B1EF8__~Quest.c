/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000003B1EF8
 * Mangled: _ZN5Caver5QuestD2Ev
 * Demangled: Caver::Quest::~Quest()
 *
 * Callers: 1
 *   0x00000000001FECD0  Caver::Quest::~Quest()
 *
 * Callees: 3
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x000000000056A3A4  operator delete(void *)
 *   0x00000000006FE668  pthread_create
 *
 * Referenced strings: 48
 *   insn=0x00000000003B1F08 string=0x00000000003B1F0C "T"
 *   insn=0x00000000003B1F1C string=0x00000000003B1F20 "h"
 *   insn=0x00000000003B1F30 string=0x00000000003B1F34 "h"
 *   insn=0x00000000003B1F3C string=0x00000000003B1F40 "a"
 *   insn=0x00000000003B1F40 string=0x00000000003B1F44 "h\n@"
 *   insn=0x00000000003B1F50 string=0x00000000003B1F54 "h"
 *   insn=0x00000000003B1F6C string=0x00000000003B1F70 "A\t"
 *   insn=0x00000000003B1F88 string=0x00000000003B1F8C ")=G"
 *   insn=0x00000000003B1F8C string=0x00000000003B1F90 "!"
 *   insn=0x00000000003B1F90 string=0x00000000003B1F94 ")"
 *   insn=0x00000000003B1F94 string=0x00000000003B1F98 "\t"
 *   insn=0x00000000003B1F94 string=0x00000000003B2018 "\t"
 *   insn=0x00000000003B1F98 string=0x00000000003B1F9C "*"
 *   insn=0x00000000003B1F9C string=0x00000000003B1FA0 "\n"
 *   insn=0x00000000003B1FA8 string=0x00000000003B2024 "?"
 *   insn=0x00000000003B1FAC string=0x00000000003B1FB0 ")=G"
 *   insn=0x00000000003B1FB0 string=0x00000000003B1FB4 "!"
 *   insn=0x00000000003B1FB4 string=0x00000000003B1FB8 "\t"
 *   insn=0x00000000003B1FB8 string=0x00000000003B1FBC "\t"
 *   insn=0x00000000003B1FB8 string=0x00000000003B2038 "\t"
 *   insn=0x00000000003B1FBC string=0x00000000003B1FC0 "*"
 *   insn=0x00000000003B1FC0 string=0x00000000003B1FC4 "\n"
 *   insn=0x00000000003B1FCC string=0x00000000003B2044 "?"
 *   insn=0x00000000003B1FD0 string=0x00000000003B1FD4 ")=G"
 *   insn=0x00000000003B1FD4 string=0x00000000003B1FD8 "!"
 *   insn=0x00000000003B1FDC string=0x00000000003B1FE0 "\t"
 *   insn=0x00000000003B1FDC string=0x00000000003B2058 "\t"
 *   insn=0x00000000003B1FE0 string=0x00000000003B1FE4 "*"
 *   insn=0x00000000003B1FE4 string=0x00000000003B1FE8 "\n"
 *   insn=0x00000000003B1FF0 string=0x00000000003B2064 "?"
 *   insn=0x00000000003B1FF4 string=0x00000000003B1FF8 ")=G"
 *   insn=0x00000000003B1FF8 string=0x00000000003B1FFC "!"
 *   insn=0x00000000003B2000 string=0x00000000003B2004 "\t"
 *   insn=0x00000000003B2000 string=0x00000000003B2078 "\t"
 *   insn=0x00000000003B2004 string=0x00000000003B2008 "*"
 *   insn=0x00000000003B2008 string=0x00000000003B200C "\n"
 *   insn=0x00000000003B2014 string=0x00000000003B2084 "?"
 *   insn=0x00000000003B2018 string=0x00000000003B201C "*"
 *   insn=0x00000000003B201C string=0x00000000003B2020 "\n"
 *   insn=0x00000000003B2024 string=0x00000000003B2028 "l"
 *   insn=0x00000000003B2038 string=0x00000000003B203C "*"
 *   insn=0x00000000003B203C string=0x00000000003B2040 "\n"
 *   insn=0x00000000003B2058 string=0x00000000003B205C "*"
 *   insn=0x00000000003B205C string=0x00000000003B2060 "\n"
 *   insn=0x00000000003B2064 string=0x00000000003B2068 "l"
 *   insn=0x00000000003B2078 string=0x00000000003B207C "*"
 *   insn=0x00000000003B207C string=0x00000000003B2080 "\n"
 *   insn=0x00000000003B2098 string=0x00000000001F62D0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::Quest::~Quest(Caver::Quest *this)
{
  __int64 v2; // x8
  void *v3; // x0
  __int64 v4; // x8
  void *v5; // x0
  __int64 v6; // x8
  void *v7; // x0
  __int64 v8; // x8
  void *v9; // x0
  unsigned int *v10; // x8
  int v11; // w9
  unsigned int *v12; // x8
  int v13; // w9
  unsigned int *v14; // x8
  int v15; // w9
  unsigned int *v16; // x8
  int v17; // w9

  _ReadStatusReg(TPIDR_EL0);
  v2 = *((_QWORD *)this + 4);
  v3 = (void *)(v2 - 24);
  if ( (__int64 *)(v2 - 24) != &qword_6FD2E0 )
  {
    v10 = (unsigned int *)(v2 - 8);
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
  v4 = *((_QWORD *)this + 3);
  v5 = (void *)(v4 - 24);
  if ( (__int64 *)(v4 - 24) != &qword_6FD2E0 )
  {
    v12 = (unsigned int *)(v4 - 8);
    if ( &pthread_create )
    {
      do
        v13 = __ldaxr(v12);
      while ( __stlxr(v13 - 1, v12) );
    }
    else
    {
      v13 = (*v12)--;
    }
    if ( v13 <= 0 )
      operator delete(v5);
  }
  v6 = *((_QWORD *)this + 2);
  v7 = (void *)(v6 - 24);
  if ( (__int64 *)(v6 - 24) != &qword_6FD2E0 )
  {
    v14 = (unsigned int *)(v6 - 8);
    if ( &pthread_create )
    {
      do
        v15 = __ldaxr(v14);
      while ( __stlxr(v15 - 1, v14) );
    }
    else
    {
      v15 = (*v14)--;
    }
    if ( v15 <= 0 )
      operator delete(v7);
  }
  v8 = *((_QWORD *)this + 1);
  v9 = (void *)(v8 - 24);
  if ( (__int64 *)(v8 - 24) != &qword_6FD2E0 )
  {
    v16 = (unsigned int *)(v8 - 8);
    if ( &pthread_create )
    {
      do
        v17 = __ldaxr(v16);
      while ( __stlxr(v17 - 1, v16) );
    }
    else
    {
      v17 = (*v16)--;
    }
    if ( v17 <= 0 )
      operator delete(v9);
  }
}

