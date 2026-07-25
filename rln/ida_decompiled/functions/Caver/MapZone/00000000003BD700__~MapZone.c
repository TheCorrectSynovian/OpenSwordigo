/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000003BD700
 * Mangled: _ZN5Caver7MapZoneD2Ev
 * Demangled: Caver::MapZone::~MapZone()
 *
 * Callers: 1
 *   0x00000000001FDEC0  Caver::MapZone::~MapZone()
 *
 * Callees: 5
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F72B0  operator delete(void *)
 *   0x000000000056A3A4  operator delete(void *)
 *   0x00000000005818C4  sub_5818C4
 *   0x00000000006FE668  pthread_create
 *
 * Referenced strings: 77
 *   insn=0x00000000003BD714 string=0x00000000003BD718 "W"
 *   insn=0x00000000003BD720 string=0x00000000003BD724 "V"
 *   insn=0x00000000003BD728 string=0x00000000003BD72C "h"
 *   insn=0x00000000003BD73C string=0x00000000003BD740 "tbA"
 *   insn=0x00000000003BD73C string=0x00000000003BD7F8 ")"
 *   insn=0x00000000003BD748 string=0x00000000003BD7A4 "t"
 *   insn=0x00000000003BD74C string=0x00000000003BD750 "5"
 *   insn=0x00000000003BD754 string=0x00000000003BD758 ""
 *   insn=0x00000000003BD764 string=0x00000000003BD768 "\t@"
 *   insn=0x00000000003BD774 string=0x00000000003BD778 ""
 *   insn=0x00000000003BD784 string=0x00000000003BD788 "@"
 *   insn=0x00000000003BD79C string=0x00000000003BD7A0 "t\n@"
 *   insn=0x00000000003BD7A4 string=0x00000000003BD7B0 "h"
 *   insn=0x00000000003BD7AC string=0x00000000001F72B0 "0'"
 *   insn=0x00000000003BD7BC string=0x00000000003BD7C0 "h"
 *   insn=0x00000000003BD7BC string=0x00000000003BD81C ")"
 *   insn=0x00000000003BD7CC string=0x00000000003BD840 ")"
 *   insn=0x00000000003BD7D8 string=0x00000000003BD7DC "A"
 *   insn=0x00000000003BD7F8 string=0x00000000003BD7FC ")=G"
 *   insn=0x00000000003BD7FC string=0x00000000003BD800 "!"
 *   insn=0x00000000003BD800 string=0x00000000003BD804 "\t"
 *   insn=0x00000000003BD804 string=0x00000000003BD808 "\t"
 *   insn=0x00000000003BD804 string=0x00000000003BD864 "\t"
 *   insn=0x00000000003BD808 string=0x00000000003BD80C "*"
 *   insn=0x00000000003BD80C string=0x00000000003BD810 "\n"
 *   insn=0x00000000003BD818 string=0x00000000003BD870 "?"
 *   insn=0x00000000003BD81C string=0x00000000003BD820 ")=G"
 *   insn=0x00000000003BD820 string=0x00000000003BD824 "!"
 *   insn=0x00000000003BD828 string=0x00000000003BD82C "\t"
 *   insn=0x00000000003BD828 string=0x00000000003BD884 "\t"
 *   insn=0x00000000003BD82C string=0x00000000003BD830 "*"
 *   insn=0x00000000003BD830 string=0x00000000003BD834 "\n"
 *   insn=0x00000000003BD83C string=0x00000000003BD890 "?"
 *   insn=0x00000000003BD840 string=0x00000000003BD844 ")=G"
 *   insn=0x00000000003BD844 string=0x00000000003BD848 "!"
 *   insn=0x00000000003BD84C string=0x00000000003BD850 "\t"
 *   insn=0x00000000003BD84C string=0x00000000003BD8A4 "\t"
 *   insn=0x00000000003BD850 string=0x00000000003BD854 "*"
 *   insn=0x00000000003BD854 string=0x00000000003BD858 "\n"
 *   insn=0x00000000003BD860 string=0x00000000003BD8B0 "?"
 *   insn=0x00000000003BD864 string=0x00000000003BD868 "*"
 *   insn=0x00000000003BD868 string=0x00000000003BD86C "\n"
 *   insn=0x00000000003BD870 string=0x00000000003BD874 "l"
 *   insn=0x00000000003BD884 string=0x00000000003BD888 "*"
 *   insn=0x00000000003BD888 string=0x00000000003BD88C "\n"
 *   insn=0x00000000003BD890 string=0x00000000003BD894 "l"
 *   insn=0x00000000003BD8A4 string=0x00000000003BD8A8 "*"
 *   insn=0x00000000003BD8A8 string=0x00000000003BD8AC "\n"
 *   insn=0x00000000003BD8C4 string=0x00000000001F62D0 "0'"
 *   insn=0x00000000003BD8CC string=0x00000000003BD8D0 "h"
 *   insn=0x00000000003BD8D0 string=0x00000000003BD8DC "h"
 *   insn=0x00000000003BD8D4 string=0x00000000003BD8D8 "v"
 *   insn=0x00000000003BD8E4 string=0x00000000003BD8E8 "a"
 *   insn=0x00000000003BD8E8 string=0x00000000003BD8EC "h"
 *   insn=0x00000000003BD8E8 string=0x00000000003BD934 ")"
 *   insn=0x00000000003BD8F8 string=0x00000000003BD8FC ")"
 *   insn=0x00000000003BD8FC string=0x00000000003BD900 ")=G"
 *   insn=0x00000000003BD900 string=0x00000000003BD904 "!"
 *   insn=0x00000000003BD908 string=0x00000000003BD90C "\t"
 *   insn=0x00000000003BD908 string=0x00000000003BD978 "\t"
 *   insn=0x00000000003BD90C string=0x00000000003BD910 "*"
 *   insn=0x00000000003BD910 string=0x00000000003BD914 "\n"
 *   insn=0x00000000003BD918 string=0x00000000003BD91C "?"
 *   insn=0x00000000003BD91C string=0x00000000003BD920 "l"
 *   insn=0x00000000003BD934 string=0x00000000003BD938 ")=G"
 *   insn=0x00000000003BD938 string=0x00000000003BD93C "!"
 *   insn=0x00000000003BD940 string=0x00000000003BD944 "\t"
 *   insn=0x00000000003BD940 string=0x00000000003BD958 "\t"
 *   insn=0x00000000003BD944 string=0x00000000003BD948 "*"
 *   insn=0x00000000003BD948 string=0x00000000003BD94C "\n"
 *   insn=0x00000000003BD954 string=0x00000000003BD964 "?"
 *   insn=0x00000000003BD958 string=0x00000000003BD95C "*"
 *   insn=0x00000000003BD95C string=0x00000000003BD960 "\n"
 *   insn=0x00000000003BD964 string=0x00000000003BD968 ","
 *   insn=0x00000000003BD978 string=0x00000000003BD97C "*"
 *   insn=0x00000000003BD97C string=0x00000000003BD980 "\n"
 *   insn=0x00000000003BD980 string=0x00000000003BD984 "?"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::MapZone::~MapZone(Caver::MapZone *this)
{
  __int64 v2; // x8
  void *v3; // x0
  _QWORD *v4; // x20
  _QWORD *v5; // x24
  _QWORD *v6; // x21
  __int64 v7; // x8
  __int64 v8; // x8
  __int64 v9; // x8
  void *v10; // x0
  __int64 *v11; // x0
  unsigned int *v12; // x8
  int v13; // w9
  unsigned int *v14; // x8
  int v15; // w9
  unsigned int *v16; // x8
  int v17; // w9

  _ReadStatusReg(TPIDR_EL0);
  v2 = *((_QWORD *)this + 6);
  v3 = (void *)(v2 - 24);
  if ( (__int64 *)(v2 - 24) != &qword_6FD2E0 )
  {
    v12 = (unsigned int *)(v2 - 8);
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
      operator delete(v3);
  }
  v4 = (_QWORD *)*((_QWORD *)this + 2);
  v5 = (_QWORD *)*((_QWORD *)this + 3);
  if ( v4 != v5 )
  {
    do
    {
      v6 = (_QWORD *)v4[1];
      if ( v6 )
      {
        v7 = v6[1] - 1LL;
        v6[1] = v7;
        if ( !v7 )
        {
          (*(void (__fastcall **)(_QWORD *))(*v6 + 16LL))(v6);
          v8 = v6[2] - 1LL;
          v6[2] = v8;
          if ( !v8 )
            (*(void (__fastcall **)(_QWORD *))(*v6 + 24LL))(v6);
        }
      }
      v4 += 2;
    }
    while ( v5 != v4 );
    v4 = (_QWORD *)*((_QWORD *)this + 2);
  }
  if ( v4 )
    operator delete(v4);
  v9 = *((_QWORD *)this + 1);
  v10 = (void *)(v9 - 24);
  if ( (__int64 *)(v9 - 24) != &qword_6FD2E0 )
  {
    v14 = (unsigned int *)(v9 - 8);
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
      operator delete(v10);
  }
  v11 = (__int64 *)(*(_QWORD *)this - 24LL);
  if ( v11 != &qword_6FD2E0 )
  {
    v16 = (unsigned int *)(*(_QWORD *)this - 8LL);
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
      operator delete(v11);
  }
}

