/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000003B71CC
 * Mangled: _ZNSt3mapISsN5boost10shared_ptrIN5Caver10QuestStateEEESt4lessISsESaISt4pairIKSsS4_EEEixERS8_
 * Demangled: std::map<std::string,boost::shared_ptr<Caver::QuestState>,std::less<std::string>,std::allocator<std::pair<std::string const,boost::shared_ptr<Caver::QuestState>>>>::operator[](std::string const&)
 *
 * Callers: 1
 *   0x00000000001F7500  std::map<std::string,boost::shared_ptr<Caver::QuestState>,std::less<std::string>,std::allocator<std::pair<std::string const,boost::shared_ptr<Caver::QuestState>>>>::operator[](std::string const&)
 *
 * Callees: 10
 *   0x00000000001F5190  .memcmp
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F7890  std::_Rb_tree<std::string,std::pair<std::string const,boost::shared_ptr<Caver::QuestState>>,std::_Select1st<std::pair<std::string const,boost::shared_ptr<Caver::QuestState>>>,std::less<std::string>,std::allocator<std::pair<std::string const,boost::shared_ptr<Caver::QuestState>>>>::_M_get_insert_hint_unique_pos(std::_Rb_tree_const_iterator<std::pair<std::string const,boost::shared_ptr<Caver::QuestState>>>,std::string const&)
 *   0x00000000001F7DB0  std::_Rb_tree<std::string,std::pair<std::string const,boost::shared_ptr<Caver::QuestState>>,std::_Select1st<std::pair<std::string const,boost::shared_ptr<Caver::QuestState>>>,std::less<std::string>,std::allocator<std::pair<std::string const,boost::shared_ptr<Caver::QuestState>>>>::_M_create_node(std::pair<std::string const,boost::shared_ptr<Caver::QuestState>> const&)
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x000000000054C8A0  sub_54C8A0
 *   0x000000000056A3A4  operator delete(void *)
 *   0x000000000056A528  sub_56A528
 *   0x00000000005818C4  sub_5818C4
 *   0x00000000006FE668  pthread_create
 *
 * Referenced strings: 100
 *   insn=0x00000000003B71E8 string=0x00000000003B71EC "H"
 *   insn=0x00000000003B71F0 string=0x00000000003B71F4 ""
 *   insn=0x00000000003B7208 string=0x00000000003B720C "7"
 *   insn=0x00000000003B722C string=0x00000000003B7230 ""
 *   insn=0x00000000003B7234 string=0x00000000003B7238 """
 *   insn=0x00000000003B723C string=0x00000000001F5190 "P'"
 *   insn=0x00000000003B7240 string=0x00000000003B7244 "@"
 *   insn=0x00000000003B7250 string=0x00000000003B7254 ""
 *   insn=0x00000000003B7290 string=0x00000000003B7294 "@"
 *   insn=0x00000000003B7298 string=0x00000000003B729C "a"
 *   insn=0x00000000003B729C string=0x00000000003B72A0 ""
 *   insn=0x00000000003B72A0 string=0x00000000003B72A4 ")"
 *   insn=0x00000000003B72A8 string=0x00000000003B72AC """
 *   insn=0x00000000003B72B0 string=0x00000000003B72B4 "`\n"
 *   insn=0x00000000003B72D4 string=0x00000000003B72D8 "n"
 *   insn=0x00000000003B72D8 string=0x00000000001F7890 "0'"
 *   insn=0x00000000003B72E0 string=0x00000000003B72E4 "6"
 *   insn=0x00000000003B72E8 string=0x00000000003B72EC "s"
 *   insn=0x00000000003B72F0 string=0x00000000003B72F4 " "
 *   insn=0x00000000003B72FC string=0x00000000003B7300 ""
 *   insn=0x00000000003B7300 string=0x00000000003B7304 ")"
 *   insn=0x00000000003B7308 string=0x00000000003B730C """
 *   insn=0x00000000003B732C string=0x00000000003B7330 "`"
 *   insn=0x00000000003B7340 string=0x00000000001F7DB0 "0'"
 *   insn=0x00000000003B7354 string=0x00000000003B7358 "RU"
 *   insn=0x00000000003B735C string=0x00000000003B7360 ""
 *   insn=0x00000000003B7368 string=0x00000000003B736C "4"
 *   insn=0x00000000003B7370 string=0x00000000003B7374 ""
 *   insn=0x00000000003B7380 string=0x00000000003B7384 "\t@"
 *   insn=0x00000000003B7390 string=0x00000000003B7394 ""
 *   insn=0x00000000003B73A0 string=0x00000000003B73A4 "@"
 *   insn=0x00000000003B73B0 string=0x00000000003B73B4 "i"
 *   insn=0x00000000003B73B4 string=0x00000000003B73B8 ")"
 *   insn=0x00000000003B73C4 string=0x00000000003B7424 "i"
 *   insn=0x00000000003B73C8 string=0x00000000003B73CC ""
 *   insn=0x00000000003B73D8 string=0x00000000003B73DC "`"
 *   insn=0x00000000003B7418 string=0x00000000003B741C "`"
 *   insn=0x00000000003B7424 string=0x00000000003B7428 ")=G"
 *   insn=0x00000000003B7428 string=0x00000000003B742C "!"
 *   insn=0x00000000003B7430 string=0x00000000003B7434 "\t"
 *   insn=0x00000000003B7430 string=0x00000000003B7448 "\t"
 *   insn=0x00000000003B7434 string=0x00000000003B7438 "*"
 *   insn=0x00000000003B7438 string=0x00000000003B743C "\n"
 *   insn=0x00000000003B7444 string=0x00000000003B7454 "?"
 *   insn=0x00000000003B7448 string=0x00000000003B744C "*"
 *   insn=0x00000000003B744C string=0x00000000003B7450 "\n"
 *   insn=0x00000000003B7468 string=0x00000000001F62D0 "0'"
 *   insn=0x00000000003B746C string=0x00000000003B7470 "j"
 *   insn=0x00000000003B7470 string=0x00000000003B7474 "J"
 *   insn=0x00000000003B7478 string=0x00000000003B747C "(a"
 *   insn=0x00000000003B7484 string=0x00000000003B7488 "j"
 *   insn=0x00000000003B7488 string=0x00000000003B748C "J=G"
 *   insn=0x00000000003B748C string=0x00000000003B7490 ")!"
 *   insn=0x00000000003B7494 string=0x00000000003B7498 "*"
 *   insn=0x00000000003B7494 string=0x00000000003B74C4 "*"
 *   insn=0x00000000003B7498 string=0x00000000003B749C "K"
 *   insn=0x00000000003B749C string=0x00000000003B74A0 "+"
 *   insn=0x00000000003B74A4 string=0x00000000003B74A8 "_"
 *   insn=0x00000000003B74A8 string=0x00000000003B74AC "l"
 *   insn=0x00000000003B74C4 string=0x00000000003B74C8 "K"
 *   insn=0x00000000003B74C8 string=0x00000000003B74CC "+"
 *   insn=0x00000000003B74CC string=0x00000000003B74D0 "_"
 *   insn=0x00000000003B74D4 string=0x00000000003B74D8 "0"
 *   insn=0x00000000003B74EC string=0x00000000003B74F0 "4"
 *   insn=0x00000000003B74F4 string=0x00000000003B74F8 ""
 *   insn=0x00000000003B7504 string=0x00000000003B7508 "\t@"
 *   insn=0x00000000003B7514 string=0x00000000003B7518 ""
 *   insn=0x00000000003B7524 string=0x00000000003B7528 "@"
 *   insn=0x00000000003B7534 string=0x00000000003B7538 "i"
 *   insn=0x00000000003B7538 string=0x00000000003B753C ")"
 *   insn=0x00000000003B7548 string=0x00000000003B754C "i"
 *   insn=0x00000000003B754C string=0x00000000003B7550 ")=G"
 *   insn=0x00000000003B7550 string=0x00000000003B7554 "!"
 *   insn=0x00000000003B7554 string=0x00000000003B7558 "i"
 *   insn=0x00000000003B7558 string=0x00000000003B755C "\t"
 *   insn=0x00000000003B7558 string=0x00000000003B7584 "\t"
 *   insn=0x00000000003B755C string=0x00000000003B7560 "*"
 *   insn=0x00000000003B7560 string=0x00000000003B7564 "\n"
 *   insn=0x00000000003B7568 string=0x00000000003B756C "?"
 *   insn=0x00000000003B756C string=0x00000000003B7570 "L"
 *   insn=0x00000000003B7584 string=0x00000000003B7588 "*"
 *   insn=0x00000000003B7588 string=0x00000000003B758C "\n"
 *   insn=0x00000000003B758C string=0x00000000003B7590 "?"
 *   insn=0x00000000003B7590 string=0x00000000003B7594 ""
 *   insn=0x00000000003B75A0 string=0x00000000003B75A4 "j"
 *   insn=0x00000000003B75A4 string=0x00000000003B75A8 "J"
 *   insn=0x00000000003B75AC string=0x00000000003B75B0 "(a"
 *   insn=0x00000000003B75B8 string=0x00000000003B75BC "j"
 *   insn=0x00000000003B75BC string=0x00000000003B75C0 "J=G"
 *   insn=0x00000000003B75C0 string=0x00000000003B75C4 ")!"
 *   insn=0x00000000003B75C8 string=0x00000000003B75CC "*"
 *   insn=0x00000000003B75C8 string=0x00000000003B75F8 "*"
 *   insn=0x00000000003B75CC string=0x00000000003B75D0 "K"
 *   insn=0x00000000003B75D0 string=0x00000000003B75D4 "+"
 *   insn=0x00000000003B75D8 string=0x00000000003B75DC "_"
 *   insn=0x00000000003B75E8 string=0x00000000003B75EC "n"
 *   insn=0x00000000003B75F0 string=0x00000000003B75F4 "V["
 *   insn=0x00000000003B75F8 string=0x00000000003B75FC "K"
 *   insn=0x00000000003B75FC string=0x00000000003B7600 "+"
 *   insn=0x00000000003B7600 string=0x00000000003B7604 "_"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall std::map<std::string,boost::shared_ptr<Caver::QuestState>>::operator[](__int64 a1, const void **a2)
{
  __int64 node; // x19
  _QWORD *v3; // x28
  const void *v4; // x23
  const void **v5; // x22
  unsigned __int64 v6; // x25
  __int64 v7; // x20
  _QWORD *v8; // x0
  unsigned __int64 v9; // x8
  __int64 v10; // x21
  size_t v11; // x2
  int v12; // w0
  int v13; // w0
  _QWORD *v14; // x1
  unsigned __int64 v15; // x8
  unsigned __int64 v16; // x9
  __int64 v17; // x23
  size_t v18; // x2
  int v19; // w0
  __int64 insert_hint_unique_pos; // x0
  __int64 v21; // x1
  __int64 v22; // x22
  unsigned int v23; // w23
  _QWORD *v24; // x1
  unsigned __int64 v25; // x8
  unsigned __int64 v26; // x9
  __int64 v27; // x19
  size_t v28; // x2
  unsigned int v29; // w0
  _QWORD *v30; // x20
  __int64 v31; // x8
  __int64 v32; // x8
  char *v33; // x0
  int v35; // w0
  unsigned int *v36; // x8
  int v37; // w9
  void *v39[2]; // [xsp+18h] [xbp-78h] BYREF
  _QWORD *v40; // [xsp+28h] [xbp-68h]
  __int64 v41; // [xsp+38h] [xbp-58h]

  node = a1 + 8;
  v41 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  v3 = *(_QWORD **)(a1 + 16);
  if ( v3 )
  {
    v4 = *a2;
    v5 = a2;
    v6 = *((_QWORD *)*a2 - 3);
    v7 = a1 + 8;
    while ( 1 )
    {
      while ( 1 )
      {
        v8 = (_QWORD *)v3[4];
        v9 = *(v8 - 3);
        v10 = v9 - v6;
        v11 = v9 <= v6 ? *(v8 - 3) : v6;
        v12 = memcmp(v8, v4, v11);
        if ( v12 )
          break;
        if ( v10 <= 0x7FFFFFFF )
        {
          v13 = v10 <= (__int64)0xFFFFFFFF80000000LL ? 0x80000000 : v10;
          if ( v13 < 0 )
            goto LABEL_8;
        }
LABEL_15:
        node = (__int64)v3;
        v3 = (_QWORD *)v3[2];
        if ( !v3 )
          goto LABEL_18;
      }
      if ( (v12 & 0x80000000) == 0 )
        goto LABEL_15;
LABEL_8:
      v3 = (_QWORD *)v3[3];
      if ( !v3 )
        goto LABEL_18;
    }
  }
  v5 = a2;
  v7 = a1 + 8;
LABEL_18:
  if ( node != v7 )
  {
    v14 = *(_QWORD **)(node + 32);
    v15 = *((_QWORD *)*v5 - 3);
    v16 = *(v14 - 3);
    v17 = v15 - v16;
    if ( v15 <= v16 )
      v18 = *((_QWORD *)*v5 - 3);
    else
      v18 = *(v14 - 3);
    v19 = memcmp(*v5, v14, v18);
    if ( v19 )
    {
      if ( (v19 & 0x80000000) == 0 )
        return node + 40;
    }
    else
    {
      if ( v17 > 0x7FFFFFFF )
        return node + 40;
      v35 = v17 <= (__int64)0xFFFFFFFF80000000LL ? 0x80000000 : v17;
      if ( (v35 & 0x80000000) == 0 )
        return node + 40;
    }
  }
  sub_56A528(v39, v5);
  v39[1] = 0;
  v40 = 0;
  insert_hint_unique_pos = std::_Rb_tree<std::string,std::pair<std::string const,boost::shared_ptr<Caver::QuestState>>,std::_Select1st<std::pair<std::string const,boost::shared_ptr<Caver::QuestState>>>,std::less<std::string>,std::allocator<std::pair<std::string const,boost::shared_ptr<Caver::QuestState>>>>::_M_get_insert_hint_unique_pos();
  node = insert_hint_unique_pos;
  v22 = v21;
  if ( v21 )
  {
    v23 = 1;
    if ( !insert_hint_unique_pos && v7 != v21 )
    {
      v24 = *(_QWORD **)(v21 + 32);
      v25 = *((_QWORD *)v39[0] - 3);
      v26 = *(v24 - 3);
      v27 = v25 - v26;
      if ( v25 <= v26 )
        v28 = *((_QWORD *)v39[0] - 3);
      else
        v28 = *(v24 - 3);
      v29 = memcmp(v39[0], v24, v28);
      if ( !v29 )
      {
        v29 = 0x7FFFFFFF;
        if ( v27 <= 0x7FFFFFFF )
        {
          if ( v27 <= (__int64)0xFFFFFFFF80000000LL )
            v29 = 0x80000000;
          else
            v29 = v27;
        }
      }
      v23 = v29 >> 31;
    }
    node = std::_Rb_tree<std::string,std::pair<std::string const,boost::shared_ptr<Caver::QuestState>>,std::_Select1st<std::pair<std::string const,boost::shared_ptr<Caver::QuestState>>>,std::less<std::string>,std::allocator<std::pair<std::string const,boost::shared_ptr<Caver::QuestState>>>>::_M_create_node();
    sub_54C8A0(v23, node, v22, v7);
    ++*(_QWORD *)(a1 + 40);
  }
  v30 = v40;
  if ( v40 )
  {
    v31 = v40[1] - 1LL;
    v40[1] = v31;
    if ( !v31 )
    {
      (*(void (__fastcall **)(_QWORD *))(*v30 + 16LL))(v30);
      v32 = v30[2] - 1LL;
      v30[2] = v32;
      if ( !v32 )
        (*(void (__fastcall **)(_QWORD *))(*v30 + 24LL))(v30);
    }
  }
  v33 = (char *)v39[0] - 24;
  if ( (char *)v39[0] - 24 != (char *)&qword_6FD2E0 )
  {
    v36 = (unsigned int *)((char *)v39[0] - 8);
    if ( &pthread_create )
    {
      do
        v37 = __ldaxr(v36);
      while ( __stlxr(v37 - 1, v36) );
    }
    else
    {
      v37 = (*v36)--;
    }
    if ( v37 <= 0 )
      operator delete(v33);
  }
  return node + 40;
}

