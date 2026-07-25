/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000003B7EC0
 * Mangled: _ZN5Caver9GameState24AddStateForQuestWithNameERKSs
 * Demangled: Caver::GameState::AddStateForQuestWithName(std::string const&)
 *
 * Callers: 1
 *   0x00000000001F9B10  Caver::GameState::AddStateForQuestWithName(std::string const&)
 *
 * Callees: 16
 *   0x00000000001F52E0  boost::detail::shared_count::shared_count<Caver::QuestState>(Caver::QuestState *)
 *   0x00000000001F55E0  operator new(ulong)
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000001F7500  std::map<std::string,boost::shared_ptr<Caver::QuestState>,std::less<std::string>,std::allocator<std::pair<std::string const,boost::shared_ptr<Caver::QuestState>>>>::operator[](std::string const&)
 *   0x00000000001FC0B0  std::vector<Caver::QuestState *,std::allocator<Caver::QuestState *>>::_M_insert_aux(__gnu_cxx::__normal_iterator<Caver::QuestState **,std::vector<Caver::QuestState *,std::allocator<Caver::QuestState *>>>,Caver::QuestState * const&)
 *   0x0000000000200420  std::_Rb_tree<std::string,std::pair<std::string const,boost::shared_ptr<Caver::QuestState>>,std::_Select1st<std::pair<std::string const,boost::shared_ptr<Caver::QuestState>>>,std::less<std::string>,std::allocator<std::pair<std::string const,boost::shared_ptr<Caver::QuestState>>>>::find(std::string const&)
 *   0x0000000000200D50  Caver::QuestState::QuestState(void)
 *   0x0000000000202950  boost::detail::sp_enable_shared_from_this(...)
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x000000000054C6A0  sub_54C6A0
 *   0x000000000056A3A4  operator delete(void *)
 *   0x000000000056A528  sub_56A528
 *   0x000000000056A6A8  sub_56A6A8
 *   0x00000000005818C4  sub_5818C4
 *   0x00000000006FE668  pthread_create
 *
 * Referenced strings: 74
 *   insn=0x00000000003B7ED0 string=0x00000000003B7ED4 "V"
 *   insn=0x00000000003B7EEC string=0x00000000003B7EF0 "L!"
 *   insn=0x00000000003B7F0C string=0x00000000003B7F10 "!"
 *   insn=0x00000000003B7F30 string=0x00000000001F55E0 "P'"
 *   insn=0x00000000003B7F4C string=0x00000000001F52E0 "P'"
 *   insn=0x00000000003B7F58 string=0x00000000003B7F5C "}*"
 *   insn=0x00000000003B7F70 string=0x00000000003B7F74 "m"
 *   insn=0x00000000003B7F7C string=0x00000000003B7F80 "`"
 *   insn=0x00000000003B7F80 string=0x00000000001F7500 "0'"
 *   insn=0x00000000003B7F88 string=0x00000000003B7F8C "\n"
 *   insn=0x00000000003B7F8C string=0x00000000003B7F90 "J"
 *   insn=0x00000000003B7F90 string=0x00000000003B7F94 "\n"
 *   insn=0x00000000003B7F98 string=0x00000000003B7F9C "\t "
 *   insn=0x00000000003B7F9C string=0x00000000003B7FA0 "3"
 *   insn=0x00000000003B7FA0 string=0x00000000003B7FA4 "h"
 *   insn=0x00000000003B7FA4 string=0x00000000003B7FA8 ""
 *   insn=0x00000000003B7FA8 string=0x00000000003B7FAC "h"
 *   insn=0x00000000003B7FB0 string=0x00000000003B7FB4 "h"
 *   insn=0x00000000003B7FB4 string=0x00000000003B7FB8 "\t@"
 *   insn=0x00000000003B7FC0 string=0x00000000003B7FC4 "h\n@"
 *   insn=0x00000000003B7FC4 string=0x00000000003B7FC8 ""
 *   insn=0x00000000003B7FC8 string=0x00000000003B7FCC "h\n"
 *   insn=0x00000000003B7FD0 string=0x00000000003B7FD4 "h"
 *   insn=0x00000000003B7FD4 string=0x00000000003B7FD8 "@"
 *   insn=0x00000000003B7FE4 string=0x00000000003B7FE8 "i"
 *   insn=0x00000000003B7FE8 string=0x00000000003B7FEC ")"
 *   insn=0x00000000003B7FF8 string=0x00000000003B8048 "i"
 *   insn=0x00000000003B7FFC string=0x00000000003B8000 "4"
 *   insn=0x00000000003B8004 string=0x00000000003B8008 ""
 *   insn=0x00000000003B8018 string=0x00000000003B801C "\t@"
 *   insn=0x00000000003B8024 string=0x00000000003B8028 ""
 *   insn=0x00000000003B8038 string=0x00000000003B803C "@"
 *   insn=0x00000000003B8048 string=0x00000000003B804C ")=G"
 *   insn=0x00000000003B804C string=0x00000000003B8050 "!"
 *   insn=0x00000000003B8054 string=0x00000000003B8058 "\t"
 *   insn=0x00000000003B8054 string=0x00000000003B806C "\t"
 *   insn=0x00000000003B8058 string=0x00000000003B805C "*"
 *   insn=0x00000000003B805C string=0x00000000003B8060 "\n"
 *   insn=0x00000000003B8068 string=0x00000000003B8078 "?"
 *   insn=0x00000000003B806C string=0x00000000003B8070 "*"
 *   insn=0x00000000003B8070 string=0x00000000003B8074 "\n"
 *   insn=0x00000000003B8094 string=0x00000000001F62D0 "0'"
 *   insn=0x00000000003B80A4 string=0x00000000003B80A8 ","
 *   insn=0x00000000003B80B4 string=0x00000000001F72B0 "0'"
 *   insn=0x00000000003B80C0 string=0x00000000003B80C4 "j"
 *   insn=0x00000000003B80C4 string=0x00000000003B80C8 "J"
 *   insn=0x00000000003B80CC string=0x00000000003B80D0 "(a"
 *   insn=0x00000000003B80D8 string=0x00000000003B80DC "j"
 *   insn=0x00000000003B80DC string=0x00000000003B80E0 "J=G"
 *   insn=0x00000000003B80E0 string=0x00000000003B80E4 ")!"
 *   insn=0x00000000003B80E8 string=0x00000000003B80EC "*"
 *   insn=0x00000000003B80E8 string=0x00000000003B8160 "*"
 *   insn=0x00000000003B80EC string=0x00000000003B80F0 "K"
 *   insn=0x00000000003B80F0 string=0x00000000003B80F4 "+"
 *   insn=0x00000000003B80F8 string=0x00000000003B80FC "_"
 *   insn=0x00000000003B8110 string=0x00000000003B8114 "4"
 *   insn=0x00000000003B8118 string=0x00000000003B811C ""
 *   insn=0x00000000003B8128 string=0x00000000003B812C "\t@"
 *   insn=0x00000000003B8138 string=0x00000000003B813C ""
 *   insn=0x00000000003B8148 string=0x00000000003B814C "@"
 *   insn=0x00000000003B8160 string=0x00000000003B8164 "K"
 *   insn=0x00000000003B8164 string=0x00000000003B8168 "+"
 *   insn=0x00000000003B8168 string=0x00000000003B816C "_"
 *   insn=0x00000000003B818C string=0x00000000003B8190 "U"
 *   insn=0x00000000003B81B0 string=0x00000000003B81B4 "\t!@9"
 *   insn=0x00000000003B81BC string=0x00000000003B81C0 "a"
 *   insn=0x00000000003B81C0 string=0x00000000003B81C4 "?"
 *   insn=0x00000000003B81C8 string=0x00000000003B81CC "("
 *   insn=0x00000000003B81CC string=0x00000000003B81D0 "h"
 *   insn=0x00000000003B81D0 string=0x00000000003B81D4 "!"
 *   insn=0x00000000003B81D4 string=0x00000000003B81D8 "h"
 *   insn=0x00000000003B81E8 string=0x00000000001FC0B0 "0'"
 *   insn=0x00000000003B81EC string=0x00000000003B81F0 ",Q"
 *   insn=0x00000000003B820C string=0x00000000003B8224 "+"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

Caver::QuestState *__fastcall Caver::GameState::AddStateForQuestWithName(__int64 a1)
{
  __int64 v2; // x0
  Caver::QuestState *v3; // x19
  Caver::QuestState *v5; // x21
  _QWORD *v6; // x0
  _QWORD *v7; // x8
  Caver::QuestState *v8; // x9
  _QWORD *v9; // x19
  __int64 v10; // x8
  __int64 v11; // x8
  void *v12; // x0
  _QWORD *v13; // x20
  __int64 v14; // x8
  __int64 v15; // x8
  unsigned int *v16; // x8
  int v17; // w9
  __int64 v18; // [xsp+48h] [xbp-48h] BYREF
  Caver::QuestState *v19; // [xsp+50h] [xbp-40h]
  _QWORD *v20; // [xsp+58h] [xbp-38h]
  __int64 v21; // [xsp+68h] [xbp-28h]

  v21 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  v2 = std::_Rb_tree<std::string,std::pair<std::string const,boost::shared_ptr<Caver::QuestState>>,std::_Select1st<std::pair<std::string const,boost::shared_ptr<Caver::QuestState>>>,std::less<std::string>,std::allocator<std::pair<std::string const,boost::shared_ptr<Caver::QuestState>>>>::find();
  if ( a1 + 256 != v2 )
    return *(Caver::QuestState **)(v2 + 40);
  v5 = (Caver::QuestState *)operator new(0x10u);
  Caver::QuestState::QuestState(v5);
  v19 = v5;
  boost::detail::shared_count::shared_count<Caver::QuestState>();
  boost::detail::sp_enable_shared_from_this();
  sub_56A6A8(v5);
  sub_56A528(&v18, v5);
  v6 = (_QWORD *)std::map<std::string,boost::shared_ptr<Caver::QuestState>>::operator[]();
  v8 = v19;
  v7 = v20;
  if ( v20 )
    ++v20[1];
  v9 = (_QWORD *)v6[1];
  *v6 = v8;
  v6[1] = v7;
  if ( v9 )
  {
    v10 = v9[1] - 1LL;
    v9[1] = v10;
    if ( !v10 )
    {
      (*(void (__fastcall **)(_QWORD *))(*v9 + 16LL))(v9);
      v11 = v9[2] - 1LL;
      v9[2] = v11;
      if ( !v11 )
        (*(void (__fastcall **)(_QWORD *))(*v9 + 24LL))(v9);
    }
  }
  v12 = (void *)(v18 - 24);
  if ( (__int64 *)(v18 - 24) == &qword_6FD2E0 )
    goto LABEL_11;
  v16 = (unsigned int *)(v18 - 8);
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
  if ( v17 > 0 )
  {
LABEL_11:
    v3 = v19;
    v13 = v20;
    if ( !v20 )
      return v3;
  }
  else
  {
    operator delete(v12);
    v3 = v19;
    v13 = v20;
    if ( !v20 )
      return v3;
  }
  v14 = v13[1] - 1LL;
  v13[1] = v14;
  if ( !v14 )
  {
    (*(void (__fastcall **)(_QWORD *))(*v13 + 16LL))(v13);
    v15 = v13[2] - 1LL;
    v13[2] = v15;
    if ( !v15 )
      (*(void (__fastcall **)(_QWORD *))(*v13 + 24LL))(v13);
  }
  return v3;
}

