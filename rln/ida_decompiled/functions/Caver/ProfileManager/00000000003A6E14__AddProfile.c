/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000003A6E14
 * Mangled: _ZN5Caver14ProfileManager10AddProfileERKN5boost10shared_ptrINS_13PlayerProfileEEE
 * Demangled: Caver::ProfileManager::AddProfile(boost::shared_ptr<Caver::PlayerProfile> const&)
 *
 * Callers: 1
 *   0x00000000001FCD30  Caver::ProfileManager::AddProfile(boost::shared_ptr<Caver::PlayerProfile> const&)
 *
 * Callees: 6
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001FD410  std::map<std::string,boost::shared_ptr<Caver::PlayerProfile>,std::less<std::string>,std::allocator<std::pair<std::string const,boost::shared_ptr<Caver::PlayerProfile>>>>::operator[](std::string const&)
 *   0x000000000056A3A4  operator delete(void *)
 *   0x000000000056A528  sub_56A528
 *   0x00000000005818C4  sub_5818C4
 *   0x00000000006FE668  pthread_create
 *
 * Referenced strings: 76
 *   insn=0x00000000003A6E28 string=0x00000000003A6E2C "V"
 *   insn=0x00000000003A6E44 string=0x00000000003A6E48 "u""
 *   insn=0x00000000003A6E58 string=0x00000000003A6E5C "mY"
 *   insn=0x00000000003A6E5C string=0x00000000001FD410 "0'"
 *   insn=0x00000000003A6E94 string=0x00000000003A6E98 "^Y"
 *   insn=0x00000000003A6E98 string=0x00000000003A6E9C ""
 *   insn=0x00000000003A6EAC string=0x00000000003A6EB0 "A"
 *   insn=0x00000000003A6EC8 string=0x00000000003A6ECC "QY"
 *   insn=0x00000000003A6ED4 string=0x00000000003A6ED8 "\n"
 *   insn=0x00000000003A6ED8 string=0x00000000003A6EDC "J"
 *   insn=0x00000000003A6EDC string=0x00000000003A6EE0 "\n"
 *   insn=0x00000000003A6EE4 string=0x00000000003A6EE8 "\t "
 *   insn=0x00000000003A6EE8 string=0x00000000003A6EEC "5"
 *   insn=0x00000000003A6EF0 string=0x00000000003A6EF4 ""
 *   insn=0x00000000003A6F00 string=0x00000000003A6F04 "\t@"
 *   insn=0x00000000003A6F10 string=0x00000000003A6F14 ""
 *   insn=0x00000000003A6F20 string=0x00000000003A6F24 "@"
 *   insn=0x00000000003A6F50 string=0x00000000003A6F54 "a"
 *   insn=0x00000000003A6F70 string=0x00000000003A6F74 ")=G"
 *   insn=0x00000000003A6F74 string=0x00000000003A6F78 "!"
 *   insn=0x00000000003A6F78 string=0x00000000003A6F7C "\t"
 *   insn=0x00000000003A6F7C string=0x00000000003A6F80 "\t"
 *   insn=0x00000000003A6F7C string=0x00000000003A6FDC "\t"
 *   insn=0x00000000003A6F80 string=0x00000000003A6F84 "*"
 *   insn=0x00000000003A6F84 string=0x00000000003A6F88 "\n"
 *   insn=0x00000000003A6F90 string=0x00000000003A6FE8 "?"
 *   insn=0x00000000003A6F94 string=0x00000000003A6F98 ")=G"
 *   insn=0x00000000003A6F98 string=0x00000000003A6F9C "!"
 *   insn=0x00000000003A6F9C string=0x00000000003A6FA0 "\t"
 *   insn=0x00000000003A6FA0 string=0x00000000003A6FA4 "\t"
 *   insn=0x00000000003A6FA0 string=0x00000000003A7000 "\t"
 *   insn=0x00000000003A6FA4 string=0x00000000003A6FA8 "*"
 *   insn=0x00000000003A6FA8 string=0x00000000003A6FAC "\n"
 *   insn=0x00000000003A6FB4 string=0x00000000003A700C "?"
 *   insn=0x00000000003A6FB8 string=0x00000000003A6FBC ")=G"
 *   insn=0x00000000003A6FBC string=0x00000000003A6FC0 "!"
 *   insn=0x00000000003A6FC4 string=0x00000000003A6FC8 "\t"
 *   insn=0x00000000003A6FC4 string=0x00000000003A7020 "\t"
 *   insn=0x00000000003A6FC8 string=0x00000000003A6FCC "*"
 *   insn=0x00000000003A6FCC string=0x00000000003A6FD0 "\n"
 *   insn=0x00000000003A6FD8 string=0x00000000003A702C "?"
 *   insn=0x00000000003A6FDC string=0x00000000003A6FE0 "*"
 *   insn=0x00000000003A6FE0 string=0x00000000003A6FE4 "\n"
 *   insn=0x00000000003A6FF4 string=0x00000000003A6FF8 "X"
 *   insn=0x00000000003A7000 string=0x00000000003A7004 "*"
 *   insn=0x00000000003A7004 string=0x00000000003A7008 "\n"
 *   insn=0x00000000003A7020 string=0x00000000003A7024 "*"
 *   insn=0x00000000003A7024 string=0x00000000003A7028 "\n"
 *   insn=0x00000000003A702C string=0x00000000003A7030 ","
 *   insn=0x00000000003A7040 string=0x00000000001F62D0 "0'"
 *   insn=0x00000000003A7048 string=0x00000000003A704C "(a"
 *   insn=0x00000000003A7058 string=0x00000000003A705C "J=G"
 *   insn=0x00000000003A705C string=0x00000000003A7060 ")!"
 *   insn=0x00000000003A7060 string=0x00000000003A7064 "J"
 *   insn=0x00000000003A7064 string=0x00000000003A7068 "*"
 *   insn=0x00000000003A7064 string=0x00000000003A710C "*"
 *   insn=0x00000000003A7068 string=0x00000000003A706C "K"
 *   insn=0x00000000003A706C string=0x00000000003A7070 "+"
 *   insn=0x00000000003A7078 string=0x00000000003A70F0 "_"
 *   insn=0x00000000003A7080 string=0x00000000003A7084 "J"
 *   insn=0x00000000003A7088 string=0x00000000003A708C "(a"
 *   insn=0x00000000003A7098 string=0x00000000003A709C "J=G"
 *   insn=0x00000000003A709C string=0x00000000003A70A0 ")!"
 *   insn=0x00000000003A70A0 string=0x00000000003A70A4 "J"
 *   insn=0x00000000003A70A4 string=0x00000000003A70A8 "*"
 *   insn=0x00000000003A70A8 string=0x00000000003A70AC "K"
 *   insn=0x00000000003A70AC string=0x00000000003A70B0 "+"
 *   insn=0x00000000003A70C0 string=0x00000000003A70C4 "(a"
 *   insn=0x00000000003A70D0 string=0x00000000003A70D4 "J=G"
 *   insn=0x00000000003A70D4 string=0x00000000003A70D8 ")!"
 *   insn=0x00000000003A70DC string=0x00000000003A70E0 "*"
 *   insn=0x00000000003A70E0 string=0x00000000003A70E4 "K"
 *   insn=0x00000000003A70E4 string=0x00000000003A70E8 "+"
 *   insn=0x00000000003A710C string=0x00000000003A7110 "K"
 *   insn=0x00000000003A7110 string=0x00000000003A7114 "+"
 *   insn=0x00000000003A7114 string=0x00000000003A7118 "_"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::ProfileManager::AddProfile(__int64 a1, _QWORD *a2)
{
  __int64 v4; // x24
  void *v5; // x0
  void *v6; // x0
  _QWORD *v7; // x0
  __int64 v8; // x8
  _QWORD *v9; // x9
  _QWORD *v10; // x21
  __int64 v11; // x8
  __int64 v12; // x8
  void *v13; // x0
  unsigned int *v14; // x8
  int v15; // w9
  unsigned int *v16; // x8
  int v17; // w9
  unsigned int *v18; // x8
  int v19; // w9
  _QWORD v20[3]; // [xsp+8h] [xbp-48h] BYREF

  v20[2] = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  sub_56A528(v20, *a2 + 24LL);
  v4 = *(_QWORD *)std::map<std::string,boost::shared_ptr<Caver::PlayerProfile>>::operator[]();
  v5 = (void *)(v20[0] - 24LL);
  if ( (__int64 *)(v20[0] - 24LL) == &qword_6FD2E0 )
    goto LABEL_2;
  v14 = (unsigned int *)(v20[0] - 8LL);
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
  if ( v15 > 0 )
  {
LABEL_2:
    if ( !v4 )
      goto LABEL_4;
  }
  else
  {
    operator delete(v5);
    if ( !v4 )
      goto LABEL_4;
  }
  sub_56A528(v20, *a2 + 24LL);
  **(_QWORD **)std::map<std::string,boost::shared_ptr<Caver::PlayerProfile>>::operator[]() = 0;
  v6 = (void *)(v20[0] - 24LL);
  if ( (__int64 *)(v20[0] - 24LL) != &qword_6FD2E0 )
  {
    v18 = (unsigned int *)(v20[0] - 8LL);
    if ( &pthread_create )
    {
      do
        v19 = __ldaxr(v18);
      while ( __stlxr(v19 - 1, v18) );
    }
    else
    {
      v19 = (*v18)--;
    }
    if ( v19 <= 0 )
      operator delete(v6);
  }
LABEL_4:
  sub_56A528(v20, *a2 + 24LL);
  v7 = (_QWORD *)std::map<std::string,boost::shared_ptr<Caver::PlayerProfile>>::operator[]();
  v9 = (_QWORD *)*a2;
  v8 = a2[1];
  if ( v8 )
    ++*(_QWORD *)(v8 + 8);
  v10 = (_QWORD *)v7[1];
  *v7 = v9;
  v7[1] = v8;
  if ( v10 )
  {
    v11 = v10[1] - 1LL;
    v10[1] = v11;
    if ( !v11 )
    {
      (*(void (__fastcall **)(_QWORD *))(*v10 + 16LL))(v10);
      v12 = v10[2] - 1LL;
      v10[2] = v12;
      if ( !v12 )
        (*(void (__fastcall **)(_QWORD *))(*v10 + 24LL))(v10);
    }
  }
  v13 = (void *)(v20[0] - 24LL);
  if ( (__int64 *)(v20[0] - 24LL) != &qword_6FD2E0 )
  {
    v16 = (unsigned int *)(v20[0] - 8LL);
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
      operator delete(v13);
  }
  *(_QWORD *)*a2 = a1;
}

