/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000045A948
 * Mangled: _ZN5Caver13ObjectLibrary43FindLibrariesDirectoryFromParentDirectoriesERKSs
 * Demangled: Caver::ObjectLibrary::FindLibrariesDirectoryFromParentDirectories(std::string const&)
 *
 * Callers: 0
 *
 * Callees: 10
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F7C40  .puts
 *   0x00000000001F8130  Caver::FindFileFromParentDirectories(std::string const&,std::string)
 *   0x00000000001FE440  .printf
 *   0x0000000000566BB8  sub_566BB8
 *   0x000000000056A3A4  operator delete(void *)
 *   0x000000000056A528  sub_56A528
 *   0x000000000056A6A8  sub_56A6A8
 *   0x00000000005818C4  sub_5818C4
 *   0x00000000006FE668  pthread_create
 *
 * Referenced strings: 94
 *   insn=0x000000000045A958 string=0x000000000045A95C "U"
 *   insn=0x000000000045A970 string=0x00000000005958F0 "Libraries"
 *   insn=0x000000000045A99C string=0x00000000001F8130 "0'"
 *   insn=0x000000000045A9A0 string=0x000000000045A9A4 "T"
 *   insn=0x000000000045A9B4 string=0x000000000045AA54 "I"
 *   insn=0x000000000045A9C4 string=0x000000000045AA78 "I"
 *   insn=0x000000000045A9C8 string=0x000000000045A9CC "("
 *   insn=0x000000000045A9D4 string=0x00000000005958FA "Libraries directory found at '%s'\n"
 *   insn=0x000000000045A9DC string=0x000000000045A9E0 "`"
 *   insn=0x000000000045A9E8 string=0x000000000045A9EC "/?"
 *   insn=0x000000000045A9F8 string=0x000000000045A9FC "\t"
 *   insn=0x000000000045AA00 string=0x0000000000595AF0 "ERROR: Could not find 'Libraries' directory"
 *   insn=0x000000000045AA08 string=0x00000000001F7C40 "0'"
 *   insn=0x000000000045AA18 string=0x000000000045AA1C "g0"
 *   insn=0x000000000045AA2C string=0x000000000045AA9C "I"
 *   insn=0x000000000045AA38 string=0x000000000045AA3C "!"
 *   insn=0x000000000045AA54 string=0x000000000045AA58 ")=G"
 *   insn=0x000000000045AA58 string=0x000000000045AA5C "!"
 *   insn=0x000000000045AA5C string=0x000000000045AA60 "\t"
 *   insn=0x000000000045AA60 string=0x000000000045AA64 "\t"
 *   insn=0x000000000045AA60 string=0x000000000045AAC0 "\t"
 *   insn=0x000000000045AA64 string=0x000000000045AA68 "*"
 *   insn=0x000000000045AA68 string=0x000000000045AA6C "\n"
 *   insn=0x000000000045AA74 string=0x000000000045AACC "?"
 *   insn=0x000000000045AA78 string=0x000000000045AA7C ")=G"
 *   insn=0x000000000045AA7C string=0x000000000045AA80 "!"
 *   insn=0x000000000045AA84 string=0x000000000045AA88 "\t"
 *   insn=0x000000000045AA84 string=0x000000000045AAE0 "\t"
 *   insn=0x000000000045AA88 string=0x000000000045AA8C "*"
 *   insn=0x000000000045AA8C string=0x000000000045AA90 "\n"
 *   insn=0x000000000045AA98 string=0x000000000045AAEC "?"
 *   insn=0x000000000045AA9C string=0x000000000045AAA0 ")=G"
 *   insn=0x000000000045AAA0 string=0x000000000045AAA4 "!"
 *   insn=0x000000000045AAA8 string=0x000000000045AAAC "\t"
 *   insn=0x000000000045AAA8 string=0x000000000045AB00 "\t"
 *   insn=0x000000000045AAAC string=0x000000000045AAB0 "*"
 *   insn=0x000000000045AAB0 string=0x000000000045AAB4 "\n"
 *   insn=0x000000000045AABC string=0x000000000045AB0C "?"
 *   insn=0x000000000045AAC0 string=0x000000000045AAC4 "*"
 *   insn=0x000000000045AAC4 string=0x000000000045AAC8 "\n"
 *   insn=0x000000000045AACC string=0x000000000045AAD0 "L"
 *   insn=0x000000000045AAD4 string=0x000000000045AAD8 "3>"
 *   insn=0x000000000045AAE0 string=0x000000000045AAE4 "*"
 *   insn=0x000000000045AAE4 string=0x000000000045AAE8 "\n"
 *   insn=0x000000000045AAF4 string=0x000000000045AAF8 "+>"
 *   insn=0x000000000045AB00 string=0x000000000045AB04 "*"
 *   insn=0x000000000045AB04 string=0x000000000045AB08 "\n"
 *   insn=0x000000000045AB14 string=0x000000000045AB18 "#>"
 *   insn=0x000000000045AB20 string=0x00000000001F62D0 "0'"
 *   insn=0x000000000045AB28 string=0x000000000045AB2C "J"
 *   insn=0x000000000045AB2C string=0x000000000045AB30 "J"
 *   insn=0x000000000045AB34 string=0x000000000045AB38 "(a"
 *   insn=0x000000000045AB40 string=0x000000000045AB44 "J"
 *   insn=0x000000000045AB44 string=0x000000000045AB48 "J=G"
 *   insn=0x000000000045AB48 string=0x000000000045AB4C ")!"
 *   insn=0x000000000045AB50 string=0x000000000045AB54 "*"
 *   insn=0x000000000045AB50 string=0x000000000045AB68 "*"
 *   insn=0x000000000045AB54 string=0x000000000045AB58 "K"
 *   insn=0x000000000045AB58 string=0x000000000045AB5C "+"
 *   insn=0x000000000045AB64 string=0x000000000045AB74 "_"
 *   insn=0x000000000045AB68 string=0x000000000045AB6C "K"
 *   insn=0x000000000045AB6C string=0x000000000045AB70 "+"
 *   insn=0x000000000045AB80 string=0x000000000045AB84 ">"
 *   insn=0x000000000045AB90 string=0x000000000045AB94 "I"
 *   insn=0x000000000045AB94 string=0x000000000045AB98 ")"
 *   insn=0x000000000045ABA4 string=0x000000000045ABA8 "I"
 *   insn=0x000000000045ABA8 string=0x000000000045ABAC ")=G"
 *   insn=0x000000000045ABAC string=0x000000000045ABB0 "!"
 *   insn=0x000000000045ABB0 string=0x000000000045ABB4 ")"
 *   insn=0x000000000045ABB4 string=0x000000000045ABB8 "\t"
 *   insn=0x000000000045ABB4 string=0x000000000045ABD8 "\t"
 *   insn=0x000000000045ABB8 string=0x000000000045ABBC "*"
 *   insn=0x000000000045ABBC string=0x000000000045ABC0 "\n"
 *   insn=0x000000000045ABC4 string=0x000000000045ABC8 "?"
 *   insn=0x000000000045ABC8 string=0x000000000045ABCC "l"
 *   insn=0x000000000045ABD8 string=0x000000000045ABDC "*"
 *   insn=0x000000000045ABDC string=0x000000000045ABE0 "\n"
 *   insn=0x000000000045ABE0 string=0x000000000045ABE4 "?"
 *   insn=0x000000000045ABE4 string=0x000000000045ABE8 "M"
 *   insn=0x000000000045AC04 string=0x000000000045AC08 "I"
 *   insn=0x000000000045AC08 string=0x000000000045AC0C ")=G"
 *   insn=0x000000000045AC0C string=0x000000000045AC10 "!"
 *   insn=0x000000000045AC10 string=0x000000000045AC14 "i"
 *   insn=0x000000000045AC14 string=0x000000000045AC18 "\t"
 *   insn=0x000000000045AC14 string=0x000000000045AC40 "\t"
 *   insn=0x000000000045AC18 string=0x000000000045AC1C "*"
 *   insn=0x000000000045AC1C string=0x000000000045AC20 "\n"
 *   insn=0x000000000045AC24 string=0x000000000045AC28 "?"
 *   insn=0x000000000045AC28 string=0x000000000045AC2C "l"
 *   insn=0x000000000045AC38 string=0x000000000045AC3C """
 *   insn=0x000000000045AC40 string=0x000000000045AC44 "*"
 *   insn=0x000000000045AC44 string=0x000000000045AC48 "\n"
 *   insn=0x000000000045AC48 string=0x000000000045AC4C "?"
 *   insn=0x000000000045AC4C string=0x000000000045AC50 ""
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __usercall Caver::ObjectLibrary::FindLibrariesDirectoryFromParentDirectories(__int64 a1@<X0>, __int64 a2@<X8>)
{
  void *v4; // x0
  void *v5; // x0
  char *v6; // x0
  unsigned int *v7; // x8
  int v8; // w9
  unsigned int *v9; // x8
  int v10; // w9
  unsigned int *v11; // x8
  int v12; // w9
  __int64 v13; // [xsp+0h] [xbp-50h] BYREF
  __int64 v14; // [xsp+10h] [xbp-40h] BYREF
  const char *v15[3]; // [xsp+18h] [xbp-38h] BYREF

  v15[2] = *(const char **)(_ReadStatusReg(TPIDR_EL0) + 40);
  sub_566BB8((int)&v14, "Libraries");
  sub_56A528(&v13, a1);
  Caver::FindFileFromParentDirectories();
  v4 = (void *)(v13 - 24);
  if ( (__int64 *)(v13 - 24) != &qword_6FD2E0 )
  {
    v7 = (unsigned int *)(v13 - 8);
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
      operator delete(v4);
  }
  v5 = (void *)(v14 - 24);
  if ( (__int64 *)(v14 - 24) != &qword_6FD2E0 )
  {
    v9 = (unsigned int *)(v14 - 8);
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
  if ( *((_QWORD *)v15[0] - 3) )
  {
    printf("Libraries directory found at '%s'\n", v15[0]);
    sub_56A6A8(&qword_6E9BB0);
    sub_56A528(a2, v15);
  }
  else
  {
    puts("ERROR: Could not find 'Libraries' directory");
    sub_566BB8(a2, "");
  }
  v6 = (char *)(v15[0] - 24);
  if ( (__int64 *)v15[0] - 3 != &qword_6FD2E0 )
  {
    v11 = (unsigned int *)(v15[0] - 8);
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
}

