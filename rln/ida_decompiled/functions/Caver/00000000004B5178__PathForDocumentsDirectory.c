/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004B5178
 * Mangled: _ZN5Caver25PathForDocumentsDirectoryERKSsb
 * Demangled: Caver::PathForDocumentsDirectory(std::string const&,bool)
 *
 * Callers: 0
 *
 * Callees: 8
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F7740  Caver::DocumentsDirectoryPath(void)
 *   0x00000000001FB380  Caver::CreateDirectoryAtPath(std::string const&,bool)
 *   0x00000000001FBDF0  Caver::StringByAppendingPathComponent(std::string const&,std::string const&)
 *   0x00000000001FDDD0  Caver::FileExistsAtPath(std::string const&)
 *   0x000000000056A3A4  operator delete(void *)
 *   0x00000000005818C4  sub_5818C4
 *   0x00000000006FE668  pthread_create
 *
 * Referenced strings: 51
 *   insn=0x00000000004B5188 string=0x00000000004B518C "V"
 *   insn=0x00000000004B51A4 string=0x00000000004B51A8 "f\t"
 *   insn=0x00000000004B51A8 string=0x00000000001F7740 "0'"
 *   insn=0x00000000004B51B8 string=0x00000000001FBDF0 "0'"
 *   insn=0x00000000004B51CC string=0x00000000004B51D0 "!"
 *   insn=0x00000000004B51D0 string=0x00000000004B5214 "i"
 *   insn=0x00000000004B51DC string=0x00000000001FDDD0 "0'"
 *   insn=0x00000000004B51E8 string=0x00000000004B51EC "e"
 *   insn=0x00000000004B51EC string=0x00000000001FB380 "0'"
 *   insn=0x00000000004B5214 string=0x00000000004B5218 ")=G"
 *   insn=0x00000000004B5218 string=0x00000000004B521C "!"
 *   insn=0x00000000004B5220 string=0x00000000004B5224 "\t"
 *   insn=0x00000000004B5220 string=0x00000000004B5238 "\t"
 *   insn=0x00000000004B5224 string=0x00000000004B5228 "*"
 *   insn=0x00000000004B5228 string=0x00000000004B522C "\n"
 *   insn=0x00000000004B5234 string=0x00000000004B5244 "?"
 *   insn=0x00000000004B5238 string=0x00000000004B523C "*"
 *   insn=0x00000000004B523C string=0x00000000004B5240 "\n"
 *   insn=0x00000000004B5244 string=0x00000000004B5248 "l"
 *   insn=0x00000000004B524C string=0x00000000004B5250 "U"
 *   insn=0x00000000004B5250 string=0x00000000004B5254 "4"
 *   insn=0x00000000004B525C string=0x00000000001F62D0 "0'"
 *   insn=0x00000000004B5264 string=0x00000000004B5268 "(a"
 *   insn=0x00000000004B5270 string=0x00000000004B5274 "j"
 *   insn=0x00000000004B5274 string=0x00000000004B5278 "J=G"
 *   insn=0x00000000004B5278 string=0x00000000004B527C ")!"
 *   insn=0x00000000004B527C string=0x00000000004B5280 "*"
 *   insn=0x00000000004B5280 string=0x00000000004B5284 "*"
 *   insn=0x00000000004B5280 string=0x00000000004B52A4 "*"
 *   insn=0x00000000004B5284 string=0x00000000004B5288 "K"
 *   insn=0x00000000004B5288 string=0x00000000004B528C "+"
 *   insn=0x00000000004B5290 string=0x00000000004B5294 "_"
 *   insn=0x00000000004B52A4 string=0x00000000004B52A8 "K"
 *   insn=0x00000000004B52A8 string=0x00000000004B52AC "+"
 *   insn=0x00000000004B52AC string=0x00000000004B52B0 "_"
 *   insn=0x00000000004B52B0 string=0x00000000004B52B4 "M"
 *   insn=0x00000000004B52C0 string=0x00000000004B52C4 "J"
 *   insn=0x00000000004B52C8 string=0x00000000004B52CC "(a"
 *   insn=0x00000000004B52D4 string=0x00000000004B52D8 "j"
 *   insn=0x00000000004B52D8 string=0x00000000004B52DC "J=G"
 *   insn=0x00000000004B52DC string=0x00000000004B52E0 ")!"
 *   insn=0x00000000004B52E4 string=0x00000000004B52E8 "*"
 *   insn=0x00000000004B52E4 string=0x00000000004B5314 "*"
 *   insn=0x00000000004B52E8 string=0x00000000004B52EC "K"
 *   insn=0x00000000004B52EC string=0x00000000004B52F0 "+"
 *   insn=0x00000000004B52F4 string=0x00000000004B52F8 "_"
 *   insn=0x00000000004B5304 string=0x00000000004B5308 "'"
 *   insn=0x00000000004B530C string=0x00000000004B5310 "m1"
 *   insn=0x00000000004B5314 string=0x00000000004B5318 "K"
 *   insn=0x00000000004B5318 string=0x00000000004B531C "+"
 *   insn=0x00000000004B531C string=0x00000000004B5320 "_"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::PathForDocumentsDirectory(Caver *a1, char a2)
{
  void *v3; // x0
  unsigned int *v4; // x8
  int v5; // w9
  __int64 v6[3]; // [xsp+8h] [xbp-38h] BYREF

  v6[2] = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  Caver::DocumentsDirectoryPath(v6, a1);
  Caver::StringByAppendingPathComponent();
  v3 = (void *)(v6[0] - 24);
  if ( (__int64 *)(v6[0] - 24) == &qword_6FD2E0 )
    goto LABEL_2;
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
  if ( v5 > 0 )
  {
LABEL_2:
    if ( (a2 & 1) == 0 )
      return;
  }
  else
  {
    operator delete(v3);
    if ( (a2 & 1) == 0 )
      return;
  }
  if ( (Caver::FileExistsAtPath() & 1) == 0 )
    Caver::CreateDirectoryAtPath();
}

