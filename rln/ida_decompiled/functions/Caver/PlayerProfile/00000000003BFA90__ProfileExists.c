/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000003BFA90
 * Mangled: _ZN5Caver13PlayerProfile13ProfileExistsEv
 * Demangled: Caver::PlayerProfile::ProfileExists(void)
 *
 * Callers: 1
 *   0x00000000002036B0  Caver::PlayerProfile::ProfileExists(void)
 *
 * Callees: 6
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001FDDD0  Caver::FileExistsAtPath(std::string const&)
 *   0x00000000001FDF50  Caver::PlayerProfile::LocalFilePath(void)
 *   0x000000000056A3A4  operator delete(void *)
 *   0x00000000005818C4  sub_5818C4
 *   0x00000000006FE668  pthread_create
 *
 * Referenced strings: 36
 *   insn=0x00000000003BFA9C string=0x00000000003BFAA0 "T"
 *   insn=0x00000000003BFAAC string=0x00000000003BFAB0 "("
 *   insn=0x00000000003BFAB0 string=0x00000000001FDF50 "0'"
 *   insn=0x00000000003BFAB8 string=0x00000000001FDDD0 "0'"
 *   insn=0x00000000003BFAC0 string=0x00000000003BFAC4 ")"
 *   insn=0x00000000003BFAC4 string=0x00000000003BFAC8 ")"
 *   insn=0x00000000003BFAD0 string=0x00000000003BFAD4 "A"
 *   insn=0x00000000003BFAD4 string=0x00000000003BFAFC ")"
 *   insn=0x00000000003BFAE4 string=0x00000000003BFAE8 "`"
 *   insn=0x00000000003BFAFC string=0x00000000003BFB00 ")=G"
 *   insn=0x00000000003BFB00 string=0x00000000003BFB04 "!"
 *   insn=0x00000000003BFB08 string=0x00000000003BFB0C "\t"
 *   insn=0x00000000003BFB08 string=0x00000000003BFB20 "\t"
 *   insn=0x00000000003BFB0C string=0x00000000003BFB10 "*"
 *   insn=0x00000000003BFB10 string=0x00000000003BFB14 "\n"
 *   insn=0x00000000003BFB1C string=0x00000000003BFB2C "?"
 *   insn=0x00000000003BFB20 string=0x00000000003BFB24 "*"
 *   insn=0x00000000003BFB24 string=0x00000000003BFB28 "\n"
 *   insn=0x00000000003BFB2C string=0x00000000003BFB30 "L"
 *   insn=0x00000000003BFB34 string=0x00000000003BFB38 ""
 *   insn=0x00000000003BFB40 string=0x00000000001F62D0 "0'"
 *   insn=0x00000000003BFB44 string=0x00000000003BFB48 "*"
 *   insn=0x00000000003BFB48 string=0x00000000003BFB4C "J"
 *   insn=0x00000000003BFB50 string=0x00000000003BFB54 "(a"
 *   insn=0x00000000003BFB5C string=0x00000000003BFB60 "*"
 *   insn=0x00000000003BFB60 string=0x00000000003BFB64 "J=G"
 *   insn=0x00000000003BFB64 string=0x00000000003BFB68 ")!"
 *   insn=0x00000000003BFB6C string=0x00000000003BFB70 "*"
 *   insn=0x00000000003BFB6C string=0x00000000003BFB9C "*"
 *   insn=0x00000000003BFB70 string=0x00000000003BFB74 "K"
 *   insn=0x00000000003BFB74 string=0x00000000003BFB78 "+"
 *   insn=0x00000000003BFB7C string=0x00000000003BFB80 "_"
 *   insn=0x00000000003BFB94 string=0x00000000003BFB98 "K"
 *   insn=0x00000000003BFB9C string=0x00000000003BFBA0 "K"
 *   insn=0x00000000003BFBA0 string=0x00000000003BFBA4 "+"
 *   insn=0x00000000003BFBA4 string=0x00000000003BFBA8 "_"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::PlayerProfile::ProfileExists(Caver::PlayerProfile *this)
{
  char v1; // w19
  void *v2; // x0
  unsigned int *v4; // x8
  int v5; // w9
  __int64 v6[3]; // [xsp+8h] [xbp-28h] BYREF

  v6[2] = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  Caver::PlayerProfile::LocalFilePath(v6, this);
  v1 = Caver::FileExistsAtPath();
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

