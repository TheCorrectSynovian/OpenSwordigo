/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000003BBB9C
 * Mangled: _ZNSt3mapISsN5boost10shared_ptrIN5Caver7MapNodeEEESt4lessISsESaISt4pairIKSsS4_EEEixERS8_
 * Demangled: std::map<std::string,boost::shared_ptr<Caver::MapNode>,std::less<std::string>,std::allocator<std::pair<std::string const,boost::shared_ptr<Caver::MapNode>>>>::operator[](std::string const&)
 *
 * Callers: 1
 *   0x0000000000200310  std::map<std::string,boost::shared_ptr<Caver::MapNode>,std::less<std::string>,std::allocator<std::pair<std::string const,boost::shared_ptr<Caver::MapNode>>>>::operator[](std::string const&)
 *
 * Callees: 10
 *   0x00000000001F48B0  std::_Rb_tree<std::string,std::pair<std::string const,boost::shared_ptr<Caver::MapNode>>,std::_Select1st<std::pair<std::string const,boost::shared_ptr<Caver::MapNode>>>,std::less<std::string>,std::allocator<std::pair<std::string const,boost::shared_ptr<Caver::MapNode>>>>::_M_get_insert_hint_unique_pos(std::_Rb_tree_const_iterator<std::pair<std::string const,boost::shared_ptr<Caver::MapNode>>>,std::string const&)
 *   0x00000000001F5190  .memcmp
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001FA730  std::_Rb_tree<std::string,std::pair<std::string const,boost::shared_ptr<Caver::MapNode>>,std::_Select1st<std::pair<std::string const,boost::shared_ptr<Caver::MapNode>>>,std::less<std::string>,std::allocator<std::pair<std::string const,boost::shared_ptr<Caver::MapNode>>>>::_M_create_node(std::pair<std::string const,boost::shared_ptr<Caver::MapNode>> const&)
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x000000000054C8A0  sub_54C8A0
 *   0x000000000056A3A4  operator delete(void *)
 *   0x000000000056A528  sub_56A528
 *   0x00000000005818C4  sub_5818C4
 *   0x00000000006FE668  pthread_create
 *
 * Referenced strings: 105
 *   insn=0x00000000003BBBB8 string=0x00000000003BBBBC "H"
 *   insn=0x00000000003BBBC0 string=0x00000000003BBBC4 ""
 *   insn=0x00000000003BBBD8 string=0x00000000003BBBDC "7"
 *   insn=0x00000000003BBBFC string=0x00000000003BBC00 ""
 *   insn=0x00000000003BBC04 string=0x00000000003BBC08 """
 *   insn=0x00000000003BBC08 string=0x00000000003BBC0C "a"
 *   insn=0x00000000003BBC0C string=0x00000000001F5190 "P'"
 *   insn=0x00000000003BBC10 string=0x00000000003BBC14 "@"
 *   insn=0x00000000003BBC20 string=0x00000000003BBC24 ""
 *   insn=0x00000000003BBC60 string=0x00000000003BBC64 "@"
 *   insn=0x00000000003BBC68 string=0x00000000003BBC6C "a"
 *   insn=0x00000000003BBC6C string=0x00000000003BBC70 ""
 *   insn=0x00000000003BBC70 string=0x00000000003BBC74 ")"
 *   insn=0x00000000003BBC78 string=0x00000000003BBC7C """
 *   insn=0x00000000003BBC7C string=0x00000000003BBC80 "D"
 *   insn=0x00000000003BBC80 string=0x00000000003BBC84 "`\n"
 *   insn=0x00000000003BBC90 string=0x00000000003BBC94 "%"
 *   insn=0x00000000003BBCA8 string=0x00000000001F48B0 "P'"
 *   insn=0x00000000003BBCB0 string=0x00000000003BBCB4 "6"
 *   insn=0x00000000003BBCB8 string=0x00000000003BBCBC "s"
 *   insn=0x00000000003BBCC0 string=0x00000000003BBCC4 " "
 *   insn=0x00000000003BBCCC string=0x00000000003BBCD0 ""
 *   insn=0x00000000003BBCD0 string=0x00000000003BBCD4 ")"
 *   insn=0x00000000003BBCD8 string=0x00000000003BBCDC """
 *   insn=0x00000000003BBCDC string=0x00000000003BBCE0 ","
 *   insn=0x00000000003BBCFC string=0x00000000003BBD00 "`"
 *   insn=0x00000000003BBD10 string=0x00000000001FA730 "0'"
 *   insn=0x00000000003BBD2C string=0x00000000003BBD30 ""
 *   insn=0x00000000003BBD38 string=0x00000000003BBD3C "4"
 *   insn=0x00000000003BBD40 string=0x00000000003BBD44 ""
 *   insn=0x00000000003BBD50 string=0x00000000003BBD54 "\t@"
 *   insn=0x00000000003BBD60 string=0x00000000003BBD64 ""
 *   insn=0x00000000003BBD70 string=0x00000000003BBD74 "@"
 *   insn=0x00000000003BBD80 string=0x00000000003BBD84 "I"
 *   insn=0x00000000003BBD84 string=0x00000000003BBD88 ")"
 *   insn=0x00000000003BBD94 string=0x00000000003BBDF4 "I"
 *   insn=0x00000000003BBD98 string=0x00000000003BBD9C ""
 *   insn=0x00000000003BBDA8 string=0x00000000003BBDAC "`"
 *   insn=0x00000000003BBDA8 string=0x00000000003BBE38 "&"
 *   insn=0x00000000003BBDE8 string=0x00000000003BBDEC "`"
 *   insn=0x00000000003BBDF4 string=0x00000000003BBDF8 ")=G"
 *   insn=0x00000000003BBDF8 string=0x00000000003BBDFC "!"
 *   insn=0x00000000003BBE00 string=0x00000000003BBE04 "\t"
 *   insn=0x00000000003BBE00 string=0x00000000003BBE18 "\t"
 *   insn=0x00000000003BBE04 string=0x00000000003BBE08 "*"
 *   insn=0x00000000003BBE08 string=0x00000000003BBE0C "\n"
 *   insn=0x00000000003BBE14 string=0x00000000003BBE24 "?"
 *   insn=0x00000000003BBE18 string=0x00000000003BBE1C "*"
 *   insn=0x00000000003BBE1C string=0x00000000003BBE20 "\n"
 *   insn=0x00000000003BBE2C string=0x00000000003BBE30 "]"
 *   insn=0x00000000003BBE38 string=0x00000000001F62D0 "0'"
 *   insn=0x00000000003BBE3C string=0x00000000003BBE40 "J"
 *   insn=0x00000000003BBE40 string=0x00000000003BBE44 "J"
 *   insn=0x00000000003BBE48 string=0x00000000003BBE4C "(a"
 *   insn=0x00000000003BBE54 string=0x00000000003BBE58 "J"
 *   insn=0x00000000003BBE58 string=0x00000000003BBE5C "J=G"
 *   insn=0x00000000003BBE5C string=0x00000000003BBE60 ")!"
 *   insn=0x00000000003BBE64 string=0x00000000003BBE68 "*"
 *   insn=0x00000000003BBE64 string=0x00000000003BBE94 "*"
 *   insn=0x00000000003BBE68 string=0x00000000003BBE6C "K"
 *   insn=0x00000000003BBE6C string=0x00000000003BBE70 "+"
 *   insn=0x00000000003BBE74 string=0x00000000003BBE78 "_"
 *   insn=0x00000000003BBE78 string=0x00000000003BBE7C "l"
 *   insn=0x00000000003BBE84 string=0x00000000003BBE88 "G"
 *   insn=0x00000000003BBE94 string=0x00000000003BBE98 "K"
 *   insn=0x00000000003BBE98 string=0x00000000003BBE9C "+"
 *   insn=0x00000000003BBE9C string=0x00000000003BBEA0 "_"
 *   insn=0x00000000003BBEA4 string=0x00000000003BBEA8 "0"
 *   insn=0x00000000003BBEBC string=0x00000000003BBEC0 "4"
 *   insn=0x00000000003BBEC4 string=0x00000000003BBEC8 ""
 *   insn=0x00000000003BBED4 string=0x00000000003BBED8 "\t@"
 *   insn=0x00000000003BBEE4 string=0x00000000003BBEE8 ""
 *   insn=0x00000000003BBEF4 string=0x00000000003BBEF8 "@"
 *   insn=0x00000000003BBF04 string=0x00000000003BBF08 "I"
 *   insn=0x00000000003BBF08 string=0x00000000003BBF0C ")"
 *   insn=0x00000000003BBF18 string=0x00000000003BBF1C "I"
 *   insn=0x00000000003BBF1C string=0x00000000003BBF20 ")=G"
 *   insn=0x00000000003BBF20 string=0x00000000003BBF24 "!"
 *   insn=0x00000000003BBF24 string=0x00000000003BBF28 "i"
 *   insn=0x00000000003BBF28 string=0x00000000003BBF2C "\t"
 *   insn=0x00000000003BBF28 string=0x00000000003BBF54 "\t"
 *   insn=0x00000000003BBF2C string=0x00000000003BBF30 "*"
 *   insn=0x00000000003BBF30 string=0x00000000003BBF34 "\n"
 *   insn=0x00000000003BBF38 string=0x00000000003BBF3C "?"
 *   insn=0x00000000003BBF3C string=0x00000000003BBF40 "L"
 *   insn=0x00000000003BBF4C string=0x00000000003BBF50 "]"
 *   insn=0x00000000003BBF54 string=0x00000000003BBF58 "*"
 *   insn=0x00000000003BBF58 string=0x00000000003BBF5C "\n"
 *   insn=0x00000000003BBF5C string=0x00000000003BBF60 "?"
 *   insn=0x00000000003BBF60 string=0x00000000003BBF64 ""
 *   insn=0x00000000003BBF68 string=0x00000000003BBF6C "V"
 *   insn=0x00000000003BBF70 string=0x00000000003BBF74 "J"
 *   insn=0x00000000003BBF74 string=0x00000000003BBF78 "J"
 *   insn=0x00000000003BBF7C string=0x00000000003BBF80 "(a"
 *   insn=0x00000000003BBF88 string=0x00000000003BBF8C "J"
 *   insn=0x00000000003BBF8C string=0x00000000003BBF90 "J=G"
 *   insn=0x00000000003BBF90 string=0x00000000003BBF94 ")!"
 *   insn=0x00000000003BBF98 string=0x00000000003BBF9C "*"
 *   insn=0x00000000003BBF98 string=0x00000000003BBFC8 "*"
 *   insn=0x00000000003BBF9C string=0x00000000003BBFA0 "K"
 *   insn=0x00000000003BBFA0 string=0x00000000003BBFA4 "+"
 *   insn=0x00000000003BBFA8 string=0x00000000003BBFAC "_"
 *   insn=0x00000000003BBFC8 string=0x00000000003BBFCC "K"
 *   insn=0x00000000003BBFCC string=0x00000000003BBFD0 "+"
 *   insn=0x00000000003BBFD0 string=0x00000000003BBFD4 "_"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall std::map<std::string,boost::shared_ptr<Caver::MapNode>>::operator[](__int64 a1, const void **a2)
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
  insert_hint_unique_pos = std::_Rb_tree<std::string,std::pair<std::string const,boost::shared_ptr<Caver::MapNode>>,std::_Select1st<std::pair<std::string const,boost::shared_ptr<Caver::MapNode>>>,std::less<std::string>,std::allocator<std::pair<std::string const,boost::shared_ptr<Caver::MapNode>>>>::_M_get_insert_hint_unique_pos();
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
    node = std::_Rb_tree<std::string,std::pair<std::string const,boost::shared_ptr<Caver::MapNode>>,std::_Select1st<std::pair<std::string const,boost::shared_ptr<Caver::MapNode>>>,std::less<std::string>,std::allocator<std::pair<std::string const,boost::shared_ptr<Caver::MapNode>>>>::_M_create_node();
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

