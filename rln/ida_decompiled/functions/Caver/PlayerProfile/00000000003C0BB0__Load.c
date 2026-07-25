/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000003C0BB0
 * Mangled: _ZN5Caver13PlayerProfile4LoadEv
 * Demangled: Caver::PlayerProfile::Load(void)
 *
 * Callers: 1
 *   0x00000000001FD830  Caver::PlayerProfile::Load(void)
 *
 * Callees: 6
 *   0x00000000001F4C80  Caver::PlayerProfile::LoadFromPath(std::string const&,bool)
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001FDF50  Caver::PlayerProfile::LocalFilePath(void)
 *   0x000000000056A3A4  operator delete(void *)
 *   0x00000000005818C4  sub_5818C4
 *   0x00000000006FE668  pthread_create
 *
 * Referenced strings: 34
 *   insn=0x00000000003C0BBC string=0x00000000003C0BC0 "T"
 *   insn=0x00000000003C0BD4 string=0x00000000001FDF50 "0'"
 *   insn=0x00000000003C0BE0 string=0x00000000003C0BE4 "'"
 *   insn=0x00000000003C0BE4 string=0x00000000001F4C80 "P'"
 *   insn=0x00000000003C0BEC string=0x00000000003C0BF0 ")"
 *   insn=0x00000000003C0BF0 string=0x00000000003C0BF4 ")"
 *   insn=0x00000000003C0BFC string=0x00000000003C0C00 "A"
 *   insn=0x00000000003C0C00 string=0x00000000003C0C28 ")"
 *   insn=0x00000000003C0C10 string=0x00000000003C0C14 "`"
 *   insn=0x00000000003C0C28 string=0x00000000003C0C2C ")=G"
 *   insn=0x00000000003C0C2C string=0x00000000003C0C30 "!"
 *   insn=0x00000000003C0C34 string=0x00000000003C0C38 "\t"
 *   insn=0x00000000003C0C34 string=0x00000000003C0C4C "\t"
 *   insn=0x00000000003C0C38 string=0x00000000003C0C3C "*"
 *   insn=0x00000000003C0C3C string=0x00000000003C0C40 "\n"
 *   insn=0x00000000003C0C48 string=0x00000000003C0C58 "?"
 *   insn=0x00000000003C0C4C string=0x00000000003C0C50 "*"
 *   insn=0x00000000003C0C50 string=0x00000000003C0C54 "\n"
 *   insn=0x00000000003C0C58 string=0x00000000003C0C5C "L"
 *   insn=0x00000000003C0C6C string=0x00000000001F62D0 "0'"
 *   insn=0x00000000003C0C70 string=0x00000000003C0C74 "*"
 *   insn=0x00000000003C0C74 string=0x00000000003C0C78 "J"
 *   insn=0x00000000003C0C7C string=0x00000000003C0C80 "(a"
 *   insn=0x00000000003C0C88 string=0x00000000003C0C8C "*"
 *   insn=0x00000000003C0C8C string=0x00000000003C0C90 "J=G"
 *   insn=0x00000000003C0C90 string=0x00000000003C0C94 ")!"
 *   insn=0x00000000003C0C98 string=0x00000000003C0C9C "*"
 *   insn=0x00000000003C0C98 string=0x00000000003C0CC8 "*"
 *   insn=0x00000000003C0C9C string=0x00000000003C0CA0 "K"
 *   insn=0x00000000003C0CA0 string=0x00000000003C0CA4 "+"
 *   insn=0x00000000003C0CA8 string=0x00000000003C0CAC "_"
 *   insn=0x00000000003C0CC8 string=0x00000000003C0CCC "K"
 *   insn=0x00000000003C0CCC string=0x00000000003C0CD0 "+"
 *   insn=0x00000000003C0CD0 string=0x00000000003C0CD4 "_"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::PlayerProfile::Load(Caver::PlayerProfile *this)
{
  char v1; // w19
  void *v2; // x0
  unsigned int *v4; // x8
  int v5; // w9
  __int64 v6[3]; // [xsp+8h] [xbp-28h] BYREF

  v6[2] = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  Caver::PlayerProfile::LocalFilePath(v6, this);
  v1 = Caver::PlayerProfile::LoadFromPath();
  v2 = (void *)(v6[0] - 24);
  if ( (__int64 *)(v6[0] - 24) != &qword_6FD2E0 )
  {
    v4 = (unsigned int *)(v6[0] - 8);
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
      operator delete(v2);
  }
  return v1 & 1;
}

