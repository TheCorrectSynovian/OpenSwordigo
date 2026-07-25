/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000003BFBB4
 * Mangled: _ZN5Caver13PlayerProfile13LocalFilePathEv
 * Demangled: Caver::PlayerProfile::LocalFilePath(void)
 *
 * Callers: 1
 *   0x00000000001FDF50  Caver::PlayerProfile::LocalFilePath(void)
 *
 * Callees: 8
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F7740  Caver::DocumentsDirectoryPath(void)
 *   0x00000000001FBDF0  Caver::StringByAppendingPathComponent(std::string const&,std::string const&)
 *   0x00000000005677D4  sub_5677D4
 *   0x000000000056A3A4  operator delete(void *)
 *   0x000000000056A528  sub_56A528
 *   0x00000000005818C4  sub_5818C4
 *   0x00000000006FE668  pthread_create
 *
 * Referenced strings: 72
 *   insn=0x00000000003BFBC4 string=0x00000000003BFBC8 "U"
 *   insn=0x00000000003BFBE0 string=0x00000000001F7740 "0'"
 *   insn=0x00000000003BFBE8 string=0x00000000003BFBEC "O"
 *   insn=0x00000000003BFBF0 string=0x0000000000591F73 ".gplayer"
 *   insn=0x00000000003BFC0C string=0x00000000003BFC10 "x"
 *   insn=0x00000000003BFC10 string=0x00000000001FBDF0 "0'"
 *   insn=0x00000000003BFC14 string=0x00000000003BFC18 "3"
 *   insn=0x00000000003BFC18 string=0x00000000003BFC1C "s"
 *   insn=0x00000000003BFC28 string=0x00000000003BFC60 ")"
 *   insn=0x00000000003BFC34 string=0x00000000003BFC38 "a"
 *   insn=0x00000000003BFC38 string=0x00000000003BFC84 ")"
 *   insn=0x00000000003BFC48 string=0x00000000003BFCE8 "z"
 *   insn=0x00000000003BFC60 string=0x00000000003BFC64 ")=G"
 *   insn=0x00000000003BFC64 string=0x00000000003BFC68 "!"
 *   insn=0x00000000003BFC6C string=0x00000000003BFC70 "\t"
 *   insn=0x00000000003BFC6C string=0x00000000003BFCA8 "\t"
 *   insn=0x00000000003BFC70 string=0x00000000003BFC74 "*"
 *   insn=0x00000000003BFC74 string=0x00000000003BFC78 "\n"
 *   insn=0x00000000003BFC7C string=0x00000000003BFC80 ""
 *   insn=0x00000000003BFC80 string=0x00000000003BFCB4 "?"
 *   insn=0x00000000003BFC84 string=0x00000000003BFC88 ")=G"
 *   insn=0x00000000003BFC88 string=0x00000000003BFC8C "!"
 *   insn=0x00000000003BFC90 string=0x00000000003BFC94 "\t"
 *   insn=0x00000000003BFC90 string=0x00000000003BFCC8 "\t"
 *   insn=0x00000000003BFC94 string=0x00000000003BFC98 "*"
 *   insn=0x00000000003BFC98 string=0x00000000003BFC9C "\n"
 *   insn=0x00000000003BFCA4 string=0x00000000003BFCD4 "?"
 *   insn=0x00000000003BFCA8 string=0x00000000003BFCAC "*"
 *   insn=0x00000000003BFCAC string=0x00000000003BFCB0 "\n"
 *   insn=0x00000000003BFCC8 string=0x00000000003BFCCC "*"
 *   insn=0x00000000003BFCCC string=0x00000000003BFCD0 "\n"
 *   insn=0x00000000003BFCD4 string=0x00000000003BFCD8 ","
 *   insn=0x00000000003BFCE8 string=0x00000000001F62D0 "0'"
 *   insn=0x00000000003BFCEC string=0x00000000003BFCF0 "*"
 *   insn=0x00000000003BFCF0 string=0x00000000003BFCF4 "J"
 *   insn=0x00000000003BFCF8 string=0x00000000003BFCFC "(a"
 *   insn=0x00000000003BFD04 string=0x00000000003BFD08 "*"
 *   insn=0x00000000003BFD08 string=0x00000000003BFD0C "J=G"
 *   insn=0x00000000003BFD0C string=0x00000000003BFD10 ")!"
 *   insn=0x00000000003BFD14 string=0x00000000003BFD18 "*"
 *   insn=0x00000000003BFD14 string=0x00000000003BFD6C "*"
 *   insn=0x00000000003BFD18 string=0x00000000003BFD1C "K"
 *   insn=0x00000000003BFD1C string=0x00000000003BFD20 "+"
 *   insn=0x00000000003BFD28 string=0x00000000003BFD78 "_"
 *   insn=0x00000000003BFD2C string=0x00000000003BFD30 "*"
 *   insn=0x00000000003BFD30 string=0x00000000003BFD34 "J"
 *   insn=0x00000000003BFD38 string=0x00000000003BFD3C "(a"
 *   insn=0x00000000003BFD44 string=0x00000000003BFD48 "*"
 *   insn=0x00000000003BFD48 string=0x00000000003BFD4C "J=G"
 *   insn=0x00000000003BFD4C string=0x00000000003BFD50 ")!"
 *   insn=0x00000000003BFD54 string=0x00000000003BFD58 "*"
 *   insn=0x00000000003BFD58 string=0x00000000003BFD5C "K"
 *   insn=0x00000000003BFD5C string=0x00000000003BFD60 "+"
 *   insn=0x00000000003BFD6C string=0x00000000003BFD70 "K"
 *   insn=0x00000000003BFD70 string=0x00000000003BFD74 "+"
 *   insn=0x00000000003BFD94 string=0x00000000003BFD98 ")"
 *   insn=0x00000000003BFD98 string=0x00000000003BFD9C ")"
 *   insn=0x00000000003BFDA8 string=0x00000000003BFDAC ")"
 *   insn=0x00000000003BFDAC string=0x00000000003BFDB0 ")=G"
 *   insn=0x00000000003BFDB0 string=0x00000000003BFDB4 "!"
 *   insn=0x00000000003BFDB4 string=0x00000000003BFDB8 "i"
 *   insn=0x00000000003BFDB8 string=0x00000000003BFDBC "\t"
 *   insn=0x00000000003BFDB8 string=0x00000000003BFDE4 "\t"
 *   insn=0x00000000003BFDBC string=0x00000000003BFDC0 "*"
 *   insn=0x00000000003BFDC0 string=0x00000000003BFDC4 "\n"
 *   insn=0x00000000003BFDC8 string=0x00000000003BFDCC "?"
 *   insn=0x00000000003BFDCC string=0x00000000003BFDD0 "l"
 *   insn=0x00000000003BFDD4 string=0x00000000003BFDD8 "s"
 *   insn=0x00000000003BFDE4 string=0x00000000003BFDE8 "*"
 *   insn=0x00000000003BFDE8 string=0x00000000003BFDEC "\n"
 *   insn=0x00000000003BFDEC string=0x00000000003BFDF0 "?"
 *   insn=0x00000000003BFDF0 string=0x00000000003BFDF4 ""
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::PlayerProfile::LocalFilePath(Caver::PlayerProfile *this)
{
  void *v2; // x0
  void *v3; // x0
  unsigned int *v4; // x8
  int v5; // w9
  unsigned int *v6; // x8
  int v7; // w9
  __int64 v8; // [xsp+0h] [xbp-40h] BYREF
  __int64 v9[3]; // [xsp+8h] [xbp-38h] BYREF

  v9[2] = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  Caver::DocumentsDirectoryPath(v9, this);
  sub_56A528(&v8, (char *)this + 24);
  sub_5677D4(&v8, ".gplayer", 8);
  Caver::StringByAppendingPathComponent();
  v2 = (void *)(v8 - 24);
  if ( (__int64 *)(v8 - 24) != &qword_6FD2E0 )
  {
    v4 = (unsigned int *)(v8 - 8);
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
  v3 = (void *)(v9[0] - 24);
  if ( (__int64 *)(v9[0] - 24) != &qword_6FD2E0 )
  {
    v6 = (unsigned int *)(v9[0] - 8);
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
      operator delete(v3);
  }
}

