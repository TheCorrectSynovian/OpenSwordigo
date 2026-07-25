/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000003A69D0
 * Mangled: _ZNSt3mapISsN5boost10shared_ptrIN5Caver13PlayerProfileEEESt4lessISsESaISt4pairIKSsS4_EEEixERS8_
 * Demangled: std::map<std::string,boost::shared_ptr<Caver::PlayerProfile>,std::less<std::string>,std::allocator<std::pair<std::string const,boost::shared_ptr<Caver::PlayerProfile>>>>::operator[](std::string const&)
 *
 * Callers: 2
 *   0x00000000001FD410  std::map<std::string,boost::shared_ptr<Caver::PlayerProfile>,std::less<std::string>,std::allocator<std::pair<std::string const,boost::shared_ptr<Caver::PlayerProfile>>>>::operator[](std::string const&)
 *   0x00000000003A5F0C  Caver::ProfileManager::~ProfileManager()
 *
 * Callees: 10
 *   0x00000000001F5190  .memcmp
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F88F0  std::_Rb_tree<std::string,std::pair<std::string const,boost::shared_ptr<Caver::PlayerProfile>>,std::_Select1st<std::pair<std::string const,boost::shared_ptr<Caver::PlayerProfile>>>,std::less<std::string>,std::allocator<std::pair<std::string const,boost::shared_ptr<Caver::PlayerProfile>>>>::_M_get_insert_hint_unique_pos(std::_Rb_tree_const_iterator<std::pair<std::string const,boost::shared_ptr<Caver::PlayerProfile>>>,std::string const&)
 *   0x00000000001F9670  std::_Rb_tree<std::string,std::pair<std::string const,boost::shared_ptr<Caver::PlayerProfile>>,std::_Select1st<std::pair<std::string const,boost::shared_ptr<Caver::PlayerProfile>>>,std::less<std::string>,std::allocator<std::pair<std::string const,boost::shared_ptr<Caver::PlayerProfile>>>>::_M_create_node(std::pair<std::string const,boost::shared_ptr<Caver::PlayerProfile>> const&)
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x000000000054C8A0  sub_54C8A0
 *   0x000000000056A3A4  operator delete(void *)
 *   0x000000000056A528  sub_56A528
 *   0x00000000005818C4  sub_5818C4
 *   0x00000000006FE668  pthread_create
 *
 * Referenced strings: 91
 *   insn=0x00000000003A69EC string=0x00000000003A69F0 "H"
 *   insn=0x00000000003A69F4 string=0x00000000003A69F8 ""
 *   insn=0x00000000003A6A0C string=0x00000000003A6A10 "7"
 *   insn=0x00000000003A6A30 string=0x00000000003A6A34 ""
 *   insn=0x00000000003A6A38 string=0x00000000003A6A3C """
 *   insn=0x00000000003A6A40 string=0x00000000001F5190 "P'"
 *   insn=0x00000000003A6A44 string=0x00000000003A6A48 "@"
 *   insn=0x00000000003A6A54 string=0x00000000003A6A58 ""
 *   insn=0x00000000003A6A94 string=0x00000000003A6A98 "@"
 *   insn=0x00000000003A6A9C string=0x00000000003A6AA0 "a"
 *   insn=0x00000000003A6AA0 string=0x00000000003A6AA4 ""
 *   insn=0x00000000003A6AA4 string=0x00000000003A6AA8 ")"
 *   insn=0x00000000003A6AAC string=0x00000000003A6AB0 """
 *   insn=0x00000000003A6AB4 string=0x00000000003A6AB8 "`\n"
 *   insn=0x00000000003A6ADC string=0x00000000001F88F0 "0'"
 *   insn=0x00000000003A6AE4 string=0x00000000003A6AE8 "6"
 *   insn=0x00000000003A6AEC string=0x00000000003A6AF0 "s"
 *   insn=0x00000000003A6AF4 string=0x00000000003A6AF8 " "
 *   insn=0x00000000003A6B00 string=0x00000000003A6B04 ""
 *   insn=0x00000000003A6B04 string=0x00000000003A6B08 ")"
 *   insn=0x00000000003A6B0C string=0x00000000003A6B10 """
 *   insn=0x00000000003A6B30 string=0x00000000003A6B34 "`"
 *   insn=0x00000000003A6B44 string=0x00000000001F9670 "0'"
 *   insn=0x00000000003A6B58 string=0x00000000003A6B5C "Q"
 *   insn=0x00000000003A6B60 string=0x00000000003A6B64 ""
 *   insn=0x00000000003A6B6C string=0x00000000003A6B70 "4"
 *   insn=0x00000000003A6B74 string=0x00000000003A6B78 ""
 *   insn=0x00000000003A6B84 string=0x00000000003A6B88 "\t@"
 *   insn=0x00000000003A6B94 string=0x00000000003A6B98 ""
 *   insn=0x00000000003A6BA4 string=0x00000000003A6BA8 "@"
 *   insn=0x00000000003A6BB8 string=0x00000000003A6BBC ")"
 *   insn=0x00000000003A6BCC string=0x00000000003A6BD0 ""
 *   insn=0x00000000003A6BDC string=0x00000000003A6BE0 "`"
 *   insn=0x00000000003A6C1C string=0x00000000003A6C20 "`"
 *   insn=0x00000000003A6C28 string=0x00000000003A6C2C ")=G"
 *   insn=0x00000000003A6C2C string=0x00000000003A6C30 "!"
 *   insn=0x00000000003A6C34 string=0x00000000003A6C38 "\t"
 *   insn=0x00000000003A6C34 string=0x00000000003A6C4C "\t"
 *   insn=0x00000000003A6C38 string=0x00000000003A6C3C "*"
 *   insn=0x00000000003A6C3C string=0x00000000003A6C40 "\n"
 *   insn=0x00000000003A6C48 string=0x00000000003A6C58 "?"
 *   insn=0x00000000003A6C4C string=0x00000000003A6C50 "*"
 *   insn=0x00000000003A6C50 string=0x00000000003A6C54 "\n"
 *   insn=0x00000000003A6C6C string=0x00000000001F62D0 "0'"
 *   insn=0x00000000003A6C74 string=0x00000000003A6C78 "J"
 *   insn=0x00000000003A6C7C string=0x00000000003A6C80 "(a"
 *   insn=0x00000000003A6C8C string=0x00000000003A6C90 "J=G"
 *   insn=0x00000000003A6C90 string=0x00000000003A6C94 ")!"
 *   insn=0x00000000003A6C98 string=0x00000000003A6C9C "*"
 *   insn=0x00000000003A6C98 string=0x00000000003A6CC8 "*"
 *   insn=0x00000000003A6C9C string=0x00000000003A6CA0 "K"
 *   insn=0x00000000003A6CA0 string=0x00000000003A6CA4 "+"
 *   insn=0x00000000003A6CA8 string=0x00000000003A6CAC "_"
 *   insn=0x00000000003A6CAC string=0x00000000003A6CB0 "l"
 *   insn=0x00000000003A6CC8 string=0x00000000003A6CCC "K"
 *   insn=0x00000000003A6CCC string=0x00000000003A6CD0 "+"
 *   insn=0x00000000003A6CD0 string=0x00000000003A6CD4 "_"
 *   insn=0x00000000003A6CD8 string=0x00000000003A6CDC "0"
 *   insn=0x00000000003A6CF0 string=0x00000000003A6CF4 "4"
 *   insn=0x00000000003A6CF8 string=0x00000000003A6CFC ""
 *   insn=0x00000000003A6D08 string=0x00000000003A6D0C "\t@"
 *   insn=0x00000000003A6D18 string=0x00000000003A6D1C ""
 *   insn=0x00000000003A6D28 string=0x00000000003A6D2C "@"
 *   insn=0x00000000003A6D3C string=0x00000000003A6D40 ")"
 *   insn=0x00000000003A6D50 string=0x00000000003A6D54 ")=G"
 *   insn=0x00000000003A6D54 string=0x00000000003A6D58 "!"
 *   insn=0x00000000003A6D58 string=0x00000000003A6D5C "i"
 *   insn=0x00000000003A6D5C string=0x00000000003A6D60 "\t"
 *   insn=0x00000000003A6D5C string=0x00000000003A6D88 "\t"
 *   insn=0x00000000003A6D60 string=0x00000000003A6D64 "*"
 *   insn=0x00000000003A6D64 string=0x00000000003A6D68 "\n"
 *   insn=0x00000000003A6D6C string=0x00000000003A6D70 "?"
 *   insn=0x00000000003A6D70 string=0x00000000003A6D74 "L"
 *   insn=0x00000000003A6D88 string=0x00000000003A6D8C "*"
 *   insn=0x00000000003A6D8C string=0x00000000003A6D90 "\n"
 *   insn=0x00000000003A6D90 string=0x00000000003A6D94 "?"
 *   insn=0x00000000003A6D94 string=0x00000000003A6D98 ""
 *   insn=0x00000000003A6DA8 string=0x00000000003A6DAC "J"
 *   insn=0x00000000003A6DB0 string=0x00000000003A6DB4 "(a"
 *   insn=0x00000000003A6DC0 string=0x00000000003A6DC4 "J=G"
 *   insn=0x00000000003A6DC4 string=0x00000000003A6DC8 ")!"
 *   insn=0x00000000003A6DCC string=0x00000000003A6DD0 "*"
 *   insn=0x00000000003A6DCC string=0x00000000003A6DFC "*"
 *   insn=0x00000000003A6DD0 string=0x00000000003A6DD4 "K"
 *   insn=0x00000000003A6DD4 string=0x00000000003A6DD8 "+"
 *   insn=0x00000000003A6DDC string=0x00000000003A6DE0 "_"
 *   insn=0x00000000003A6DEC string=0x00000000003A6DF0 "m"
 *   insn=0x00000000003A6DF4 string=0x00000000003A6DF8 "U"
 *   insn=0x00000000003A6DFC string=0x00000000003A6E00 "K"
 *   insn=0x00000000003A6E00 string=0x00000000003A6E04 "+"
 *   insn=0x00000000003A6E04 string=0x00000000003A6E08 "_"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall std::map<std::string,boost::shared_ptr<Caver::PlayerProfile>>::operator[](
        __int64 a1,
        const void **a2)
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
  insert_hint_unique_pos = std::_Rb_tree<std::string,std::pair<std::string const,boost::shared_ptr<Caver::PlayerProfile>>,std::_Select1st<std::pair<std::string const,boost::shared_ptr<Caver::PlayerProfile>>>,std::less<std::string>,std::allocator<std::pair<std::string const,boost::shared_ptr<Caver::PlayerProfile>>>>::_M_get_insert_hint_unique_pos();
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
    node = std::_Rb_tree<std::string,std::pair<std::string const,boost::shared_ptr<Caver::PlayerProfile>>,std::_Select1st<std::pair<std::string const,boost::shared_ptr<Caver::PlayerProfile>>>,std::less<std::string>,std::allocator<std::pair<std::string const,boost::shared_ptr<Caver::PlayerProfile>>>>::_M_create_node();
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

