/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004B532C
 * Mangled: _ZN5Caver22PathForCachesDirectoryERKSsb
 * Demangled: Caver::PathForCachesDirectory(std::string const&,bool)
 *
 * Callers: 0
 *
 * Callees: 8
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001FB380  Caver::CreateDirectoryAtPath(std::string const&,bool)
 *   0x00000000001FBDF0  Caver::StringByAppendingPathComponent(std::string const&,std::string const&)
 *   0x00000000001FDDD0  Caver::FileExistsAtPath(std::string const&)
 *   0x00000000002016E0  Caver::CachesDirectoryPath(void)
 *   0x000000000056A3A4  operator delete(void *)
 *   0x00000000005818C4  sub_5818C4
 *   0x00000000006FE668  pthread_create
 *
 * Referenced strings: 45
 *   insn=0x00000000004B533C string=0x00000000004B5340 "V"
 *   insn=0x00000000004B536C string=0x00000000001FBDF0 "0'"
 *   insn=0x00000000004B5380 string=0x00000000004B5384 "!"
 *   insn=0x00000000004B5384 string=0x00000000004B53C8 "i"
 *   insn=0x00000000004B5390 string=0x00000000001FDDD0 "0'"
 *   insn=0x00000000004B53A0 string=0x00000000001FB380 "0'"
 *   insn=0x00000000004B53C8 string=0x00000000004B53CC ")=G"
 *   insn=0x00000000004B53CC string=0x00000000004B53D0 "!"
 *   insn=0x00000000004B53D4 string=0x00000000004B53D8 "\t"
 *   insn=0x00000000004B53D4 string=0x00000000004B53EC "\t"
 *   insn=0x00000000004B53D8 string=0x00000000004B53DC "*"
 *   insn=0x00000000004B53DC string=0x00000000004B53E0 "\n"
 *   insn=0x00000000004B53E8 string=0x00000000004B53F8 "?"
 *   insn=0x00000000004B53EC string=0x00000000004B53F0 "*"
 *   insn=0x00000000004B53F0 string=0x00000000004B53F4 "\n"
 *   insn=0x00000000004B53F8 string=0x00000000004B53FC "l"
 *   insn=0x00000000004B5404 string=0x00000000004B5408 "4"
 *   insn=0x00000000004B5410 string=0x00000000001F62D0 "0'"
 *   insn=0x00000000004B5418 string=0x00000000004B541C "(a"
 *   insn=0x00000000004B5424 string=0x00000000004B5428 "j"
 *   insn=0x00000000004B5428 string=0x00000000004B542C "J=G"
 *   insn=0x00000000004B542C string=0x00000000004B5430 ")!"
 *   insn=0x00000000004B5430 string=0x00000000004B5434 "*"
 *   insn=0x00000000004B5434 string=0x00000000004B5438 "*"
 *   insn=0x00000000004B5434 string=0x00000000004B5458 "*"
 *   insn=0x00000000004B5438 string=0x00000000004B543C "K"
 *   insn=0x00000000004B543C string=0x00000000004B5440 "+"
 *   insn=0x00000000004B5444 string=0x00000000004B5448 "_"
 *   insn=0x00000000004B5458 string=0x00000000004B545C "K"
 *   insn=0x00000000004B545C string=0x00000000004B5460 "+"
 *   insn=0x00000000004B5460 string=0x00000000004B5464 "_"
 *   insn=0x00000000004B5464 string=0x00000000004B5468 "M"
 *   insn=0x00000000004B5474 string=0x00000000004B5478 "J"
 *   insn=0x00000000004B547C string=0x00000000004B5480 "(a"
 *   insn=0x00000000004B5488 string=0x00000000004B548C "j"
 *   insn=0x00000000004B548C string=0x00000000004B5490 "J=G"
 *   insn=0x00000000004B5490 string=0x00000000004B5494 ")!"
 *   insn=0x00000000004B5498 string=0x00000000004B549C "*"
 *   insn=0x00000000004B5498 string=0x00000000004B54C8 "*"
 *   insn=0x00000000004B549C string=0x00000000004B54A0 "K"
 *   insn=0x00000000004B54A0 string=0x00000000004B54A4 "+"
 *   insn=0x00000000004B54A8 string=0x00000000004B54AC "_"
 *   insn=0x00000000004B54C8 string=0x00000000004B54CC "K"
 *   insn=0x00000000004B54CC string=0x00000000004B54D0 "+"
 *   insn=0x00000000004B54D0 string=0x00000000004B54D4 "_"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::PathForCachesDirectory(Caver *a1, char a2)
{
  void *v3; // x0
  unsigned int *v4; // x8
  int v5; // w9
  __int64 v6[3]; // [xsp+8h] [xbp-38h] BYREF

  v6[2] = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  Caver::CachesDirectoryPath(v6, a1);
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

