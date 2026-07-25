/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000003B1CAC
 * Mangled: _ZN5boost6detail17sp_counted_impl_pIN5Caver5SkillEE7disposeEv
 * Demangled: boost::detail::sp_counted_impl_p<Caver::Skill>::dispose(void)
 *
 * Callers: 0
 *
 * Callees: 4
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F72B0  operator delete(void *)
 *   0x000000000056A3A4  operator delete(void *)
 *   0x00000000006FE668  pthread_create
 *
 * Referenced strings: 43
 *   insn=0x00000000003B1CBC string=0x00000000003B1CC0 "T"
 *   insn=0x00000000003B1CCC string=0x00000000003B1CD0 "3"
 *   insn=0x00000000003B1CD0 string=0x00000000003B1CD4 "h\n@"
 *   insn=0x00000000003B1CE8 string=0x00000000003B1CEC "h"
 *   insn=0x00000000003B1CF4 string=0x00000000003B1CF8 "!"
 *   insn=0x00000000003B1CF8 string=0x00000000003B1CFC "h"
 *   insn=0x00000000003B1D0C string=0x00000000003B1D10 "h"
 *   insn=0x00000000003B1D10 string=0x00000000001F72B0 "0'"
 *   insn=0x00000000003B1D1C string=0x00000000003B1D20 "!"
 *   insn=0x00000000003B1D20 string=0x00000000003B1E04 "3"
 *   insn=0x00000000003B1D38 string=0x00000000003B1D3C ")=G"
 *   insn=0x00000000003B1D3C string=0x00000000003B1D40 "!"
 *   insn=0x00000000003B1D40 string=0x00000000003B1D44 "\t"
 *   insn=0x00000000003B1D44 string=0x00000000003B1D48 "\t"
 *   insn=0x00000000003B1D44 string=0x00000000003B1DA4 "\t"
 *   insn=0x00000000003B1D48 string=0x00000000003B1D4C "*"
 *   insn=0x00000000003B1D4C string=0x00000000003B1D50 "\n"
 *   insn=0x00000000003B1D58 string=0x00000000003B1DB0 "?"
 *   insn=0x00000000003B1D5C string=0x00000000003B1D60 ")=G"
 *   insn=0x00000000003B1D60 string=0x00000000003B1D64 "!"
 *   insn=0x00000000003B1D68 string=0x00000000003B1D6C "\t"
 *   insn=0x00000000003B1D68 string=0x00000000003B1DC4 "\t"
 *   insn=0x00000000003B1D6C string=0x00000000003B1D70 "*"
 *   insn=0x00000000003B1D70 string=0x00000000003B1D74 "\n"
 *   insn=0x00000000003B1D7C string=0x00000000003B1DD0 "?"
 *   insn=0x00000000003B1D80 string=0x00000000003B1D84 ")=G"
 *   insn=0x00000000003B1D84 string=0x00000000003B1D88 "!"
 *   insn=0x00000000003B1D8C string=0x00000000003B1D90 "\t"
 *   insn=0x00000000003B1D8C string=0x00000000003B1DE4 "\t"
 *   insn=0x00000000003B1D90 string=0x00000000003B1D94 "*"
 *   insn=0x00000000003B1D94 string=0x00000000003B1D98 "\n"
 *   insn=0x00000000003B1DA0 string=0x00000000003B1DF0 "?"
 *   insn=0x00000000003B1DA4 string=0x00000000003B1DA8 "*"
 *   insn=0x00000000003B1DA8 string=0x00000000003B1DAC "\n"
 *   insn=0x00000000003B1DB8 string=0x00000000003B1DBC "z"
 *   insn=0x00000000003B1DC4 string=0x00000000003B1DC8 "*"
 *   insn=0x00000000003B1DC8 string=0x00000000003B1DCC "\n"
 *   insn=0x00000000003B1DD0 string=0x00000000003B1DD4 "L"
 *   insn=0x00000000003B1DD8 string=0x00000000003B1DDC "r"
 *   insn=0x00000000003B1DE4 string=0x00000000003B1DE8 "*"
 *   insn=0x00000000003B1DE8 string=0x00000000003B1DEC "\n"
 *   insn=0x00000000003B1DF8 string=0x00000000003B1DFC "j"
 *   insn=0x00000000003B1E04 string=0x00000000001F62D0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall boost::detail::sp_counted_impl_p<Caver::Skill>::dispose(__int64 a1)
{
  _QWORD *v1; // x19
  __int64 v2; // x8
  void *v3; // x0
  __int64 v4; // x8
  void *v5; // x0
  __int64 *v6; // x0
  unsigned int *v7; // x8
  int v8; // w9
  unsigned int *v9; // x8
  int v10; // w9
  unsigned int *v11; // x8
  int v12; // w9

  _ReadStatusReg(TPIDR_EL0);
  v1 = *(_QWORD **)(a1 + 24);
  if ( v1 )
  {
    v2 = v1[2];
    v3 = (void *)(v2 - 24);
    if ( (__int64 *)(v2 - 24) != &qword_6FD2E0 )
    {
      v7 = (unsigned int *)(v2 - 8);
      if ( &pthread_create )
      {
        do
          v8 = __ldaxr(v7);
        while ( __stlxr(v8 - 1, v7) );
      }
      else
      {
        v8 = (*v7)--;
      }
      if ( v8 <= 0 )
        operator delete(v3);
    }
    v4 = v1[1];
    v5 = (void *)(v4 - 24);
    if ( (__int64 *)(v4 - 24) != &qword_6FD2E0 )
    {
      v9 = (unsigned int *)(v4 - 8);
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
        operator delete(v5);
    }
    v6 = (__int64 *)(*v1 - 24LL);
    if ( v6 != &qword_6FD2E0 )
    {
      v11 = (unsigned int *)(*v1 - 8LL);
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
        operator delete(v6);
    }
    operator delete(v1);
  }
}

