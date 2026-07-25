/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004BC740
 * Mangled: _ZN5Caver12ProfileStatsC2EPNS_13PlayerProfileE
 * Demangled: Caver::ProfileStats::ProfileStats(Caver::PlayerProfile *)
 *
 * Callers: 1
 *   0x0000000000201F00  Caver::ProfileStats::ProfileStats(Caver::PlayerProfile *)
 *
 * Callees: 8
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001FFE50  Caver::GameState::PercentCompleted(void)
 *   0x000000000056918C  sub_56918C
 *   0x000000000056A3A4  operator delete(void *)
 *   0x000000000056A528  sub_56A528
 *   0x000000000056A6A8  sub_56A6A8
 *   0x00000000005818C4  sub_5818C4
 *   0x00000000006FE668  pthread_create
 *
 * Referenced strings: 44
 *   insn=0x00000000004BC754 string=0x00000000004BC758 "W"
 *   insn=0x00000000004BC758 string=0x00000000004BC75C "V"
 *   insn=0x00000000004BC778 string=0x00000000004BC77C "i"
 *   insn=0x00000000004BC798 string=0x00000000004BC79C "|"
 *   insn=0x00000000004BC7D4 string=0x00000000004BC7D8 "T"
 *   insn=0x00000000004BC7F0 string=0x00000000004BC7F4 "a"
 *   insn=0x00000000004BC7F4 string=0x00000000004BC820 "I"
 *   insn=0x00000000004BC820 string=0x00000000004BC824 ")=G"
 *   insn=0x00000000004BC824 string=0x00000000004BC828 "!"
 *   insn=0x00000000004BC82C string=0x00000000004BC830 "\t"
 *   insn=0x00000000004BC82C string=0x00000000004BC844 "\t"
 *   insn=0x00000000004BC830 string=0x00000000004BC834 "*"
 *   insn=0x00000000004BC834 string=0x00000000004BC838 "\n"
 *   insn=0x00000000004BC840 string=0x00000000004BC850 "?"
 *   insn=0x00000000004BC844 string=0x00000000004BC848 "*"
 *   insn=0x00000000004BC848 string=0x00000000004BC84C "\n"
 *   insn=0x00000000004BC850 string=0x00000000004BC854 ","
 *   insn=0x00000000004BC864 string=0x00000000001F62D0 "0'"
 *   insn=0x00000000004BC86C string=0x00000000004BC870 "(a"
 *   insn=0x00000000004BC878 string=0x00000000004BC87C "J"
 *   insn=0x00000000004BC878 string=0x00000000004BC8CC "h"
 *   insn=0x00000000004BC87C string=0x00000000004BC880 "J=G"
 *   insn=0x00000000004BC880 string=0x00000000004BC884 ")!"
 *   insn=0x00000000004BC888 string=0x00000000004BC88C "*"
 *   insn=0x00000000004BC888 string=0x00000000004BC8A0 "*"
 *   insn=0x00000000004BC88C string=0x00000000004BC890 "K"
 *   insn=0x00000000004BC890 string=0x00000000004BC894 "+"
 *   insn=0x00000000004BC89C string=0x00000000004BC8AC "_"
 *   insn=0x00000000004BC8A0 string=0x00000000004BC8A4 "K"
 *   insn=0x00000000004BC8A4 string=0x00000000004BC8A8 "+"
 *   insn=0x00000000004BC8D8 string=0x00000000004BC8DC "I"
 *   insn=0x00000000004BC8DC string=0x00000000004BC8E0 ")=G"
 *   insn=0x00000000004BC8E0 string=0x00000000004BC8E4 "!"
 *   insn=0x00000000004BC8E4 string=0x00000000004BC8E8 "i"
 *   insn=0x00000000004BC8E8 string=0x00000000004BC8EC "\t"
 *   insn=0x00000000004BC8E8 string=0x00000000004BC914 "\t"
 *   insn=0x00000000004BC8EC string=0x00000000004BC8F0 "*"
 *   insn=0x00000000004BC8F0 string=0x00000000004BC8F4 "\n"
 *   insn=0x00000000004BC8F8 string=0x00000000004BC8FC "?"
 *   insn=0x00000000004BC8FC string=0x00000000004BC900 "l"
 *   insn=0x00000000004BC914 string=0x00000000004BC918 "*"
 *   insn=0x00000000004BC918 string=0x00000000004BC91C "\n"
 *   insn=0x00000000004BC91C string=0x00000000004BC920 "?"
 *   insn=0x00000000004BC920 string=0x00000000004BC924 ""
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::ProfileStats::ProfileStats(Caver::ProfileStats *this, Caver::PlayerProfile *a2)
{
  char *v4; // x19
  Caver::GameState *v5; // x0
  int v6; // s0
  void *v7; // x0
  unsigned int *v8; // x8
  int v9; // w9
  _QWORD v10[3]; // [xsp+8h] [xbp-48h] BYREF

  v10[2] = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  *((_QWORD *)this + 2) = &byte_6FD2F8;
  v4 = (char *)this + 16;
  *(_BYTE *)this = 0;
  *((_DWORD *)this + 1) = 0;
  *((_QWORD *)this + 1) = 0;
  sub_56918C((char *)this + 16, "", 0);
  if ( a2 )
  {
    *(_BYTE *)this = 1;
    v5 = (Caver::GameState *)*((_QWORD *)a2 + 16);
    if ( v5 )
    {
      Caver::GameState::PercentCompleted(v5);
      *((_DWORD *)a2 + 15) = v6;
    }
    else
    {
      v6 = *((_DWORD *)a2 + 15);
    }
    *((_DWORD *)this + 1) = v6;
    *((_QWORD *)this + 1) = *((_QWORD *)a2 + 8);
    sub_56A528(v10, (char *)a2 + 32);
    sub_56A6A8(v4);
    v7 = (void *)(v10[0] - 24LL);
    if ( (__int64 *)(v10[0] - 24LL) != &qword_6FD2E0 )
    {
      v8 = (unsigned int *)(v10[0] - 8LL);
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
        operator delete(v7);
    }
  }
}

