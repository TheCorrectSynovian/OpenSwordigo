/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000037D04C
 * Mangled: _ZN5Caver11AchievementD2Ev
 * Demangled: Caver::Achievement::~Achievement()
 *
 * Callers: 1
 *   0x00000000001F8B40  Caver::Achievement::~Achievement()
 *
 * Callees: 3
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x000000000056A3A4  operator delete(void *)
 *   0x00000000006FE668  pthread_create
 *
 * Referenced strings: 56
 *   insn=0x000000000037D05C string=0x000000000037D060 "T"
 *   insn=0x000000000037D068 string=0x000000000037D06C "U"
 *   insn=0x000000000037D070 string=0x000000000037D074 "h"
 *   insn=0x000000000037D084 string=0x000000000037D088 "h\n@"
 *   insn=0x000000000037D084 string=0x000000000037D0DC ")"
 *   insn=0x000000000037D090 string=0x000000000037D094 "a"
 *   insn=0x000000000037D094 string=0x000000000037D098 "h"
 *   insn=0x000000000037D094 string=0x000000000037D100 ")"
 *   insn=0x000000000037D0A4 string=0x000000000037D0A8 "h"
 *   insn=0x000000000037D0A4 string=0x000000000037D124 ")"
 *   insn=0x000000000037D0B4 string=0x000000000037D148 ")"
 *   insn=0x000000000037D0C0 string=0x000000000037D0C4 "A\t"
 *   insn=0x000000000037D0C4 string=0x000000000037D1EC "9"
 *   insn=0x000000000037D0DC string=0x000000000037D0E0 ")=G"
 *   insn=0x000000000037D0E0 string=0x000000000037D0E4 "!"
 *   insn=0x000000000037D0E4 string=0x000000000037D0E8 ")"
 *   insn=0x000000000037D0E8 string=0x000000000037D0EC "\t"
 *   insn=0x000000000037D0E8 string=0x000000000037D16C "\t"
 *   insn=0x000000000037D0EC string=0x000000000037D0F0 "*"
 *   insn=0x000000000037D0F0 string=0x000000000037D0F4 "\n"
 *   insn=0x000000000037D0FC string=0x000000000037D178 "?"
 *   insn=0x000000000037D100 string=0x000000000037D104 ")=G"
 *   insn=0x000000000037D104 string=0x000000000037D108 "!"
 *   insn=0x000000000037D108 string=0x000000000037D10C "\t"
 *   insn=0x000000000037D10C string=0x000000000037D110 "\t"
 *   insn=0x000000000037D10C string=0x000000000037D18C "\t"
 *   insn=0x000000000037D110 string=0x000000000037D114 "*"
 *   insn=0x000000000037D114 string=0x000000000037D118 "\n"
 *   insn=0x000000000037D120 string=0x000000000037D198 "?"
 *   insn=0x000000000037D124 string=0x000000000037D128 ")=G"
 *   insn=0x000000000037D128 string=0x000000000037D12C "!"
 *   insn=0x000000000037D130 string=0x000000000037D134 "\t"
 *   insn=0x000000000037D130 string=0x000000000037D1AC "\t"
 *   insn=0x000000000037D134 string=0x000000000037D138 "*"
 *   insn=0x000000000037D138 string=0x000000000037D13C "\n"
 *   insn=0x000000000037D144 string=0x000000000037D1B8 "?"
 *   insn=0x000000000037D148 string=0x000000000037D14C ")=G"
 *   insn=0x000000000037D14C string=0x000000000037D150 "!"
 *   insn=0x000000000037D154 string=0x000000000037D158 "\t"
 *   insn=0x000000000037D154 string=0x000000000037D1CC "\t"
 *   insn=0x000000000037D158 string=0x000000000037D15C "*"
 *   insn=0x000000000037D15C string=0x000000000037D160 "\n"
 *   insn=0x000000000037D168 string=0x000000000037D1D8 "?"
 *   insn=0x000000000037D16C string=0x000000000037D170 "*"
 *   insn=0x000000000037D170 string=0x000000000037D174 "\n"
 *   insn=0x000000000037D178 string=0x000000000037D17C "l"
 *   insn=0x000000000037D18C string=0x000000000037D190 "*"
 *   insn=0x000000000037D190 string=0x000000000037D194 "\n"
 *   insn=0x000000000037D1AC string=0x000000000037D1B0 "*"
 *   insn=0x000000000037D1B0 string=0x000000000037D1B4 "\n"
 *   insn=0x000000000037D1B8 string=0x000000000037D1BC "l"
 *   insn=0x000000000037D1C0 string=0x000000000037D1C4 "x"
 *   insn=0x000000000037D1CC string=0x000000000037D1D0 "*"
 *   insn=0x000000000037D1D0 string=0x000000000037D1D4 "\n"
 *   insn=0x000000000037D1E0 string=0x000000000037D1E4 "p"
 *   insn=0x000000000037D1EC string=0x00000000001F62D0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::Achievement::~Achievement(Caver::Achievement *this)
{
  __int64 v2; // x8
  void *v3; // x0
  __int64 v4; // x8
  void *v5; // x0
  __int64 v6; // x8
  void *v7; // x0
  __int64 *v8; // x0
  unsigned int *v9; // x8
  int v10; // w9
  unsigned int *v11; // x8
  int v12; // w9
  unsigned int *v13; // x8
  int v14; // w9
  unsigned int *v15; // x8
  int v16; // w9

  _ReadStatusReg(TPIDR_EL0);
  v2 = *((_QWORD *)this + 4);
  v3 = (void *)(v2 - 24);
  if ( (__int64 *)(v2 - 24) != &qword_6FD2E0 )
  {
    v9 = (unsigned int *)(v2 - 8);
    if ( &pthread_create )
    {
      do
        v10 = __ldaxr(v9);
      while ( __stlxr(v10 - 1, v9) );
    }
    else
    {
      v10 = (*v9)--;
    }
    if ( v10 <= 0 )
      operator delete(v3);
  }
  v4 = *((_QWORD *)this + 2);
  v5 = (void *)(v4 - 24);
  if ( (__int64 *)(v4 - 24) != &qword_6FD2E0 )
  {
    v11 = (unsigned int *)(v4 - 8);
    if ( &pthread_create )
    {
      do
        v12 = __ldaxr(v11);
      while ( __stlxr(v12 - 1, v11) );
    }
    else
    {
      v12 = (*v11)--;
    }
    if ( v12 <= 0 )
      operator delete(v5);
  }
  v6 = *((_QWORD *)this + 1);
  v7 = (void *)(v6 - 24);
  if ( (__int64 *)(v6 - 24) != &qword_6FD2E0 )
  {
    v13 = (unsigned int *)(v6 - 8);
    if ( &pthread_create )
    {
      do
        v14 = __ldaxr(v13);
      while ( __stlxr(v14 - 1, v13) );
    }
    else
    {
      v14 = (*v13)--;
    }
    if ( v14 <= 0 )
      operator delete(v7);
  }
  v8 = (__int64 *)(*(_QWORD *)this - 24LL);
  if ( v8 != &qword_6FD2E0 )
  {
    v15 = (unsigned int *)(*(_QWORD *)this - 8LL);
    if ( &pthread_create )
    {
      do
        v16 = __ldaxr(v15);
      while ( __stlxr(v16 - 1, v15) );
    }
    else
    {
      v16 = (*v15)--;
    }
    if ( v16 <= 0 )
      operator delete(v8);
  }
}

