/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000277E9C
 * Mangled: _ZN5Caver17ItemDropComponent19PerformBindedActionEi
 * Demangled: Caver::ItemDropComponent::PerformBindedAction(int)
 *
 * Callers: 1
 *   0x00000000001F8AD0  Caver::ItemDropComponent::PerformBindedAction(int)
 *
 * Callees: 6
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x0000000000200660  Caver::FastVector<Caver::ItemDropComponent::ItemDropEntry>::Resize(int)
 *   0x000000000056A3A4  operator delete(void *)
 *   0x000000000056A6A8  sub_56A6A8
 *   0x00000000005818C4  sub_5818C4
 *   0x00000000006FE668  pthread_create
 *
 * Referenced strings: 71
 *   insn=0x0000000000277EB4 string=0x0000000000277EB8 "U"
 *   insn=0x0000000000277EC0 string=0x0000000000277EC4 "?"
 *   insn=0x0000000000277ECC string=0x0000000000277ED0 "?"
 *   insn=0x0000000000277ED0 string=0x0000000000277ED4 "A"
 *   insn=0x0000000000277ED4 string=0x0000000000277ED8 "v#"
 *   insn=0x0000000000277EE4 string=0x0000000000277EE8 """
 *   insn=0x0000000000277EF4 string=0x0000000000277EF8 "h"
 *   insn=0x0000000000277F04 string=0x0000000000277F08 " "
 *   insn=0x0000000000277F0C string=0x0000000000277F10 "i"
 *   insn=0x0000000000277F14 string=0x0000000000277F18 ""
 *   insn=0x0000000000277F18 string=0x0000000000277F1C "(y"
 *   insn=0x0000000000277F20 string=0x0000000000277F24 "I"
 *   insn=0x0000000000277F30 string=0x0000000000277F34 "h"
 *   insn=0x0000000000277F54 string=0x0000000000277F58 "!"
 *   insn=0x0000000000277F60 string=0x0000000000277F64 "A"
 *   insn=0x0000000000277F64 string=0x0000000000277F68 "\t\t@"
 *   insn=0x0000000000277F6C string=0x0000000000277F70 "I"
 *   insn=0x0000000000277F70 string=0x0000000000277F74 ""
 *   insn=0x0000000000277F74 string=0x0000000000277F78 "H\t"
 *   insn=0x0000000000277F78 string=0x0000000000277F7C "h"
 *   insn=0x0000000000277F7C string=0x0000000000277F80 ""
 *   insn=0x0000000000277F80 string=0x0000000000277F84 "h"
 *   insn=0x0000000000277F94 string=0x0000000000278008 "i#"
 *   insn=0x0000000000277FA4 string=0x0000000000277FA8 "i#"
 *   insn=0x0000000000277FA8 string=0x0000000000277FAC ")=G"
 *   insn=0x0000000000277FAC string=0x0000000000277FB0 "!"
 *   insn=0x0000000000277FB4 string=0x0000000000277FB8 "\t"
 *   insn=0x0000000000277FB4 string=0x000000000027802C "\t"
 *   insn=0x0000000000277FB8 string=0x0000000000277FBC "*"
 *   insn=0x0000000000277FBC string=0x0000000000277FC0 "\n"
 *   insn=0x0000000000277FC8 string=0x0000000000278038 "?"
 *   insn=0x0000000000277FCC string=0x0000000000277FD0 ""
 *   insn=0x0000000000277FD0 string=0x0000000000277FD4 "K"
 *   insn=0x0000000000277FE4 string=0x0000000000277FE8 "!"
 *   insn=0x0000000000278008 string=0x000000000027800C ")=G"
 *   insn=0x000000000027800C string=0x0000000000278010 "!"
 *   insn=0x0000000000278014 string=0x0000000000278018 "\t"
 *   insn=0x0000000000278014 string=0x000000000027804C "\t"
 *   insn=0x0000000000278018 string=0x000000000027801C "*"
 *   insn=0x000000000027801C string=0x0000000000278020 "\n"
 *   insn=0x0000000000278028 string=0x0000000000278058 "?"
 *   insn=0x000000000027802C string=0x0000000000278030 "*"
 *   insn=0x0000000000278030 string=0x0000000000278034 "\n"
 *   insn=0x000000000027804C string=0x0000000000278050 "*"
 *   insn=0x0000000000278050 string=0x0000000000278054 "\n"
 *   insn=0x000000000027806C string=0x00000000001F62D0 "0'"
 *   insn=0x0000000000278074 string=0x0000000000278078 "(a"
 *   insn=0x000000000027807C string=0x0000000000278080 "a"
 *   insn=0x0000000000278080 string=0x00000000002780CC "j#"
 *   insn=0x0000000000278090 string=0x0000000000278094 "i#"
 *   insn=0x0000000000278094 string=0x0000000000278098 ")=G"
 *   insn=0x0000000000278098 string=0x000000000027809C "!"
 *   insn=0x00000000002780A0 string=0x00000000002780A4 "\t"
 *   insn=0x00000000002780A0 string=0x0000000000278114 "\t"
 *   insn=0x00000000002780A4 string=0x00000000002780A8 "*"
 *   insn=0x00000000002780A8 string=0x00000000002780AC "\n"
 *   insn=0x00000000002780B0 string=0x00000000002780B4 "?"
 *   insn=0x00000000002780B4 string=0x00000000002780B8 "l"
 *   insn=0x00000000002780CC string=0x00000000002780D0 "J=G"
 *   insn=0x00000000002780D0 string=0x00000000002780D4 ")!"
 *   insn=0x00000000002780D8 string=0x00000000002780DC "*"
 *   insn=0x00000000002780D8 string=0x00000000002780F0 "*"
 *   insn=0x00000000002780DC string=0x00000000002780E0 "K"
 *   insn=0x00000000002780E0 string=0x00000000002780E4 "+"
 *   insn=0x00000000002780EC string=0x00000000002780FC "_"
 *   insn=0x00000000002780F0 string=0x00000000002780F4 "K"
 *   insn=0x00000000002780F4 string=0x00000000002780F8 "+"
 *   insn=0x00000000002780FC string=0x0000000000278100 ","
 *   insn=0x0000000000278114 string=0x0000000000278118 "*"
 *   insn=0x0000000000278118 string=0x000000000027811C "\n"
 *   insn=0x000000000027811C string=0x0000000000278120 "?"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::ItemDropComponent::PerformBindedAction(Caver::ItemDropComponent *this, int a2)
{
  int v3; // w8
  int *v4; // x19
  float v5; // s0
  __int64 v6; // x23
  __int64 v7; // x24
  __int64 v8; // x20
  __int64 v9; // x10
  unsigned int *v10; // x8
  int v11; // w9
  int v12; // w8
  bool v13; // vf
  int v14; // w8
  unsigned int *v15; // x8
  int v16; // w9
  int64x2_t v17; // [xsp+10h] [xbp-70h]
  __int64 v18; // [xsp+20h] [xbp-60h]

  _ReadStatusReg(TPIDR_EL0);
  if ( a2 == 3 )
  {
    v12 = *((_DWORD *)this + 34);
    v13 = __OFSUB__(v12, 1);
    v14 = v12 - 1;
    if ( v14 < 0 == v13 )
      *((_DWORD *)this + 34) = v14;
  }
  else if ( a2 == 2 )
  {
    v17 = vdupq_n_s64((unsigned __int64)&byte_6FD2F8);
    v4 = (int *)((char *)this + 136);
    v3 = *((_DWORD *)this + 34);
    v5 = 0.0;
    HIDWORD(v18) = 1;
    if ( !v3 )
      v5 = 1.0;
    *(float *)&v18 = v5;
    if ( v3 >= *((_DWORD *)this + 35) )
    {
      Caver::FastVector<Caver::ItemDropComponent::ItemDropEntry>::Resize();
      v3 = *v4;
    }
    v6 = *((_QWORD *)this + 18);
    v7 = v3;
    v8 = v6 + 32LL * v3;
    sub_56A6A8(v8);
    sub_56A6A8(v8 + 8);
    v9 = v6 + 32 * v7;
    *(_DWORD *)(v9 + 24) = 1;
    *(_QWORD *)(v9 + 16) = v18;
    ++*v4;
    if ( (__int64 *)(v17.n128_u64[1] - 24) != &qword_6FD2E0 )
    {
      v15 = (unsigned int *)(v17.n128_u64[1] - 8);
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
        operator delete((void *)(v17.n128_u64[1] - 24));
    }
    if ( (__int64 *)(v17.n128_u64[0] - 24) != &qword_6FD2E0 )
    {
      v10 = (unsigned int *)(v17.n128_u64[0] - 8);
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
        operator delete((void *)(v17.n128_u64[0] - 24));
    }
  }
}

