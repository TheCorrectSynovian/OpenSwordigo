/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000477C14
 * Mangled: Java_com_touchfoo_swordigo_Native_uniqueIdentifier
 * Demangled: Java_com_touchfoo_swordigo_Native_uniqueIdentifier
 *
 * Callers: 0
 *
 * Callees: 5
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001FA830  Caver::UniqueIdentifier(void)
 *   0x000000000056A3A4  operator delete(void *)
 *   0x00000000005818C4  sub_5818C4
 *   0x00000000006FE668  pthread_create
 *
 * Referenced strings: 33
 *   insn=0x0000000000477C20 string=0x0000000000477C24 "T"
 *   insn=0x0000000000477C38 string=0x0000000000477C3C "h"
 *   insn=0x0000000000477C38 string=0x00000000001FA830 "0'"
 *   insn=0x0000000000477C40 string=0x0000000000477C44 ""
 *   insn=0x0000000000477C54 string=0x0000000000477C58 "i"
 *   insn=0x0000000000477C58 string=0x0000000000477C5C ")"
 *   insn=0x0000000000477C64 string=0x0000000000477C68 "A"
 *   insn=0x0000000000477C68 string=0x0000000000477C90 "i"
 *   insn=0x0000000000477C90 string=0x0000000000477C94 ")=G"
 *   insn=0x0000000000477C94 string=0x0000000000477C98 "!"
 *   insn=0x0000000000477C9C string=0x0000000000477CA0 "\t"
 *   insn=0x0000000000477C9C string=0x0000000000477CB4 "\t"
 *   insn=0x0000000000477CA0 string=0x0000000000477CA4 "*"
 *   insn=0x0000000000477CA4 string=0x0000000000477CA8 "\n"
 *   insn=0x0000000000477CB0 string=0x0000000000477CC0 "?"
 *   insn=0x0000000000477CB4 string=0x0000000000477CB8 "*"
 *   insn=0x0000000000477CB8 string=0x0000000000477CBC "\n"
 *   insn=0x0000000000477CC0 string=0x0000000000477CC4 "L"
 *   insn=0x0000000000477CD4 string=0x00000000001F62D0 "0'"
 *   insn=0x0000000000477CD8 string=0x0000000000477CDC "j"
 *   insn=0x0000000000477CDC string=0x0000000000477CE0 "J"
 *   insn=0x0000000000477CE4 string=0x0000000000477CE8 "(a"
 *   insn=0x0000000000477CF0 string=0x0000000000477CF4 "j"
 *   insn=0x0000000000477CF4 string=0x0000000000477CF8 "J=G"
 *   insn=0x0000000000477CF8 string=0x0000000000477CFC ")!"
 *   insn=0x0000000000477D00 string=0x0000000000477D04 "*"
 *   insn=0x0000000000477D00 string=0x0000000000477D30 "*"
 *   insn=0x0000000000477D04 string=0x0000000000477D08 "K"
 *   insn=0x0000000000477D08 string=0x0000000000477D0C "+"
 *   insn=0x0000000000477D10 string=0x0000000000477D14 "_"
 *   insn=0x0000000000477D30 string=0x0000000000477D34 "K"
 *   insn=0x0000000000477D34 string=0x0000000000477D38 "+"
 *   insn=0x0000000000477D38 string=0x0000000000477D3C "_"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Java_com_touchfoo_swordigo_Native_uniqueIdentifier(Caver *a1)
{
  __int64 v2; // x19
  void *v3; // x0
  unsigned int *v5; // x8
  int v6; // w9
  __int64 v7[3]; // [xsp+8h] [xbp-28h] BYREF

  v7[2] = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  Caver::UniqueIdentifier(v7, a1);
  v2 = (*(__int64 (__fastcall **)(Caver *, __int64))(*(_QWORD *)a1 + 1336LL))(a1, v7[0]);
  v3 = (void *)(v7[0] - 24);
  if ( (__int64 *)(v7[0] - 24) != &qword_6FD2E0 )
  {
    v5 = (unsigned int *)(v7[0] - 8);
    if ( &pthread_create )
    {
      do
        v6 = __ldaxr(v5);
      while ( __stlxr(v6 - 1, v5) );
    }
    else
    {
      v6 = (*v5)--;
    }
    if ( v6 <= 0 )
      operator delete(v3);
  }
  return v2;
}

