/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000003B0084
 * Mangled: _ZN5Caver8GameData8AddQuestERKN5boost10shared_ptrINS_5QuestEEE
 * Demangled: Caver::GameData::AddQuest(boost::shared_ptr<Caver::Quest> const&)
 *
 * Callers: 1
 *   0x00000000001F4620  Caver::GameData::AddQuest(boost::shared_ptr<Caver::Quest> const&)
 *
 * Callees: 7
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001FEB50  std::map<std::string,boost::shared_ptr<Caver::Quest>,std::less<std::string>,std::allocator<std::pair<std::string const,boost::shared_ptr<Caver::Quest>>>>::operator[](std::string const&)
 *   0x0000000000201E20  std::vector<boost::shared_ptr<Caver::Quest>,std::allocator<boost::shared_ptr<Caver::Quest>>>::_M_insert_aux(__gnu_cxx::__normal_iterator<boost::shared_ptr<Caver::Quest>*,std::vector<boost::shared_ptr<Caver::Quest>,std::allocator<boost::shared_ptr<Caver::Quest>>>>,boost::shared_ptr<Caver::Quest> const&)
 *   0x000000000056A3A4  operator delete(void *)
 *   0x000000000056A528  sub_56A528
 *   0x00000000005818C4  sub_5818C4
 *   0x00000000006FE668  pthread_create
 *
 * Referenced strings: 53
 *   insn=0x00000000003B0094 string=0x00000000003B0098 "V"
 *   insn=0x00000000003B00B0 string=0x00000000003B00B4 "ub"
 *   insn=0x00000000003B00B8 string=0x00000000003B00BC ""
 *   insn=0x00000000003B00D0 string=0x00000000003B00D4 "\n"
 *   insn=0x00000000003B00D4 string=0x00000000003B00D8 "J"
 *   insn=0x00000000003B00D8 string=0x00000000003B00DC "\n"
 *   insn=0x00000000003B00E0 string=0x00000000003B00E4 "\t "
 *   insn=0x00000000003B00E4 string=0x00000000003B00E8 "5"
 *   insn=0x00000000003B00EC string=0x00000000003B00F0 ""
 *   insn=0x00000000003B00FC string=0x00000000003B0100 "\t@"
 *   insn=0x00000000003B010C string=0x00000000003B0110 ""
 *   insn=0x00000000003B011C string=0x00000000003B0120 "@"
 *   insn=0x00000000003B0130 string=0x00000000003B0134 ")"
 *   insn=0x00000000003B0148 string=0x00000000003B014C "\t"
 *   insn=0x00000000003B0150 string=0x00000000003B0154 ")"
 *   insn=0x00000000003B0154 string=0x00000000003B0158 ")"
 *   insn=0x00000000003B0158 string=0x00000000003B015C "\t"
 *   insn=0x00000000003B015C string=0x00000000003B0160 "\t@"
 *   insn=0x00000000003B0160 string=0x00000000003B0164 "?"
 *   insn=0x00000000003B0164 string=0x00000000003B0168 "`"
 *   insn=0x00000000003B0168 string=0x00000000003B016C "("
 *   insn=0x00000000003B0170 string=0x00000000003B0174 "("
 *   insn=0x00000000003B0178 string=0x00000000003B017C "\t"
 *   insn=0x00000000003B0178 string=0x00000000003B0188 "(@"
 *   insn=0x00000000003B017C string=0x00000000003B0180 ")"
 *   insn=0x00000000003B0180 string=0x00000000003B0184 "\t"
 *   insn=0x00000000003B0188 string=0x00000000003B018C "hJ"
 *   insn=0x00000000003B0194 string=0x00000000003B0198 ""G"
 *   insn=0x00000000003B01A8 string=0x00000000003B0204 "3"
 *   insn=0x00000000003B01C0 string=0x00000000003B01C4 ")=G"
 *   insn=0x00000000003B01C4 string=0x00000000003B01C8 "!"
 *   insn=0x00000000003B01CC string=0x00000000003B01D0 "\t"
 *   insn=0x00000000003B01CC string=0x00000000003B01E4 "\t"
 *   insn=0x00000000003B01D0 string=0x00000000003B01D4 "*"
 *   insn=0x00000000003B01D4 string=0x00000000003B01D8 "\n"
 *   insn=0x00000000003B01E0 string=0x00000000003B01F0 "?"
 *   insn=0x00000000003B01E4 string=0x00000000003B01E8 "*"
 *   insn=0x00000000003B01E8 string=0x00000000003B01EC "\n"
 *   insn=0x00000000003B01F8 string=0x00000000003B01FC "j"
 *   insn=0x00000000003B0204 string=0x00000000001F62D0 "0'"
 *   insn=0x00000000003B020C string=0x00000000003B0210 "J"
 *   insn=0x00000000003B0214 string=0x00000000003B0218 "(a"
 *   insn=0x00000000003B0224 string=0x00000000003B0228 "J=G"
 *   insn=0x00000000003B0228 string=0x00000000003B022C ")!"
 *   insn=0x00000000003B0230 string=0x00000000003B0234 "*"
 *   insn=0x00000000003B0230 string=0x00000000003B0260 "*"
 *   insn=0x00000000003B0234 string=0x00000000003B0238 "K"
 *   insn=0x00000000003B0238 string=0x00000000003B023C "+"
 *   insn=0x00000000003B0240 string=0x00000000003B0244 "_"
 *   insn=0x00000000003B0250 string=0x00000000003B0254 "T"
 *   insn=0x00000000003B0260 string=0x00000000003B0264 "K"
 *   insn=0x00000000003B0264 string=0x00000000003B0268 "+"
 *   insn=0x00000000003B0268 string=0x00000000003B026C "_"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::GameData::AddQuest(_QWORD *a1, _QWORD *a2)
{
  _QWORD *v4; // x0
  __int64 v5; // x8
  _DWORD *v6; // x9
  _QWORD *v7; // x21
  __int64 v8; // x8
  __int64 v9; // x8
  void *v10; // x0
  _DWORD *v11; // x8
  _QWORD *v12; // x1
  __int64 v13; // x8
  unsigned int *v14; // x8
  int v15; // w9
  _QWORD v16[3]; // [xsp+8h] [xbp-38h] BYREF

  v16[2] = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  sub_56A528(v16, *a2 + 8LL);
  v4 = (_QWORD *)std::map<std::string,boost::shared_ptr<Caver::Quest>>::operator[]();
  v6 = (_DWORD *)*a2;
  v5 = a2[1];
  if ( v5 )
    ++*(_QWORD *)(v5 + 8);
  v7 = (_QWORD *)v4[1];
  *v4 = v6;
  v4[1] = v5;
  if ( v7 )
  {
    v8 = v7[1] - 1LL;
    v7[1] = v8;
    if ( !v8 )
    {
      (*(void (__fastcall **)(_QWORD *))(*v7 + 16LL))(v7);
      v9 = v7[2] - 1LL;
      v7[2] = v9;
      if ( !v9 )
        (*(void (__fastcall **)(_QWORD *))(*v7 + 24LL))(v7);
    }
  }
  v10 = (void *)(v16[0] - 24LL);
  if ( (__int64 *)(v16[0] - 24LL) != &qword_6FD2E0 )
  {
    v14 = (unsigned int *)(v16[0] - 8LL);
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
    if ( v15 <= 0 )
      operator delete(v10);
  }
  v11 = (_DWORD *)*a2;
  v12 = (_QWORD *)a1[18];
  *(_DWORD *)*a2 = ((unsigned __int64)v12 - a1[17]) >> 4;
  if ( (_QWORD *)a1[19] == v12 )
  {
    std::vector<boost::shared_ptr<Caver::Quest>>::_M_insert_aux();
  }
  else
  {
    *v12 = v11;
    v13 = a2[1];
    v12[1] = v13;
    if ( v13 )
      ++*(_QWORD *)(v13 + 8);
    a1[18] = v12 + 2;
  }
}

