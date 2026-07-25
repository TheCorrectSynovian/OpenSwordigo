/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000480AD0
 * Mangled: _ZNSt3mapISsN5boost10shared_ptrIN5Caver13MusicPlaylistEEESt4lessISsESaISt4pairIKSsS4_EEEixERS8_
 * Demangled: std::map<std::string,boost::shared_ptr<Caver::MusicPlaylist>,std::less<std::string>,std::allocator<std::pair<std::string const,boost::shared_ptr<Caver::MusicPlaylist>>>>::operator[](std::string const&)
 *
 * Callers: 1
 *   0x00000000001FE850  std::map<std::string,boost::shared_ptr<Caver::MusicPlaylist>,std::less<std::string>,std::allocator<std::pair<std::string const,boost::shared_ptr<Caver::MusicPlaylist>>>>::operator[](std::string const&)
 *
 * Callees: 10
 *   0x00000000001F5190  .memcmp
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F6F00  std::_Rb_tree<std::string,std::pair<std::string const,boost::shared_ptr<Caver::MusicPlaylist>>,std::_Select1st<std::pair<std::string const,boost::shared_ptr<Caver::MusicPlaylist>>>,std::less<std::string>,std::allocator<std::pair<std::string const,boost::shared_ptr<Caver::MusicPlaylist>>>>::_M_create_node(std::pair<std::string const,boost::shared_ptr<Caver::MusicPlaylist>> const&)
 *   0x00000000001FE5A0  std::_Rb_tree<std::string,std::pair<std::string const,boost::shared_ptr<Caver::MusicPlaylist>>,std::_Select1st<std::pair<std::string const,boost::shared_ptr<Caver::MusicPlaylist>>>,std::less<std::string>,std::allocator<std::pair<std::string const,boost::shared_ptr<Caver::MusicPlaylist>>>>::_M_get_insert_hint_unique_pos(std::_Rb_tree_const_iterator<std::pair<std::string const,boost::shared_ptr<Caver::MusicPlaylist>>>,std::string const&)
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x000000000054C8A0  sub_54C8A0
 *   0x000000000056A3A4  operator delete(void *)
 *   0x000000000056A528  sub_56A528
 *   0x00000000005818C4  sub_5818C4
 *   0x00000000006FE668  pthread_create
 *
 * Referenced strings: 103
 *   insn=0x0000000000480AEC string=0x0000000000480AF0 "H"
 *   insn=0x0000000000480AF4 string=0x0000000000480AF8 ""
 *   insn=0x0000000000480B0C string=0x0000000000480B10 "7"
 *   insn=0x0000000000480B30 string=0x0000000000480B34 ""
 *   insn=0x0000000000480B38 string=0x0000000000480B3C """
 *   insn=0x0000000000480B40 string=0x00000000001F5190 "P'"
 *   insn=0x0000000000480B44 string=0x0000000000480B48 "@"
 *   insn=0x0000000000480B54 string=0x0000000000480B58 ""
 *   insn=0x0000000000480B94 string=0x0000000000480B98 "@"
 *   insn=0x0000000000480B9C string=0x0000000000480BA0 "a"
 *   insn=0x0000000000480BA0 string=0x0000000000480BA4 ""
 *   insn=0x0000000000480BA4 string=0x0000000000480BA8 ")"
 *   insn=0x0000000000480BAC string=0x0000000000480BB0 """
 *   insn=0x0000000000480BB0 string=0x0000000000480BB4 "w"
 *   insn=0x0000000000480BB4 string=0x0000000000480BB8 "`\n"
 *   insn=0x0000000000480BC4 string=0x0000000000480BC8 "X"
 *   insn=0x0000000000480BD8 string=0x0000000000480BDC "q"
 *   insn=0x0000000000480BE4 string=0x0000000000480BE8 "6"
 *   insn=0x0000000000480BEC string=0x0000000000480BF0 "s"
 *   insn=0x0000000000480BF4 string=0x0000000000480BF8 " "
 *   insn=0x0000000000480C00 string=0x0000000000480C04 ""
 *   insn=0x0000000000480C04 string=0x0000000000480C08 ")"
 *   insn=0x0000000000480C0C string=0x0000000000480C10 """
 *   insn=0x0000000000480C10 string=0x0000000000480C14 "_"
 *   insn=0x0000000000480C30 string=0x0000000000480C34 "`"
 *   insn=0x0000000000480C44 string=0x00000000001F6F00 "0'"
 *   insn=0x0000000000480C60 string=0x0000000000480C64 ""
 *   insn=0x0000000000480C6C string=0x0000000000480C70 "4"
 *   insn=0x0000000000480C74 string=0x0000000000480C78 ""
 *   insn=0x0000000000480C84 string=0x0000000000480C88 "\t@"
 *   insn=0x0000000000480C94 string=0x0000000000480C98 ""
 *   insn=0x0000000000480CA4 string=0x0000000000480CA8 "@"
 *   insn=0x0000000000480CB4 string=0x0000000000480CB8 ")"
 *   insn=0x0000000000480CB8 string=0x0000000000480CBC ")"
 *   insn=0x0000000000480CC8 string=0x0000000000480D28 ")"
 *   insn=0x0000000000480CCC string=0x0000000000480CD0 ""
 *   insn=0x0000000000480CDC string=0x0000000000480CE0 "`"
 *   insn=0x0000000000480CDC string=0x0000000000480D6C "Y"
 *   insn=0x0000000000480D1C string=0x0000000000480D20 "`"
 *   insn=0x0000000000480D28 string=0x0000000000480D2C ")=G"
 *   insn=0x0000000000480D2C string=0x0000000000480D30 "!"
 *   insn=0x0000000000480D34 string=0x0000000000480D38 "\t"
 *   insn=0x0000000000480D34 string=0x0000000000480D4C "\t"
 *   insn=0x0000000000480D38 string=0x0000000000480D3C "*"
 *   insn=0x0000000000480D3C string=0x0000000000480D40 "\n"
 *   insn=0x0000000000480D48 string=0x0000000000480D58 "?"
 *   insn=0x0000000000480D4C string=0x0000000000480D50 "*"
 *   insn=0x0000000000480D50 string=0x0000000000480D54 "\n"
 *   insn=0x0000000000480D6C string=0x00000000001F62D0 "0'"
 *   insn=0x0000000000480D70 string=0x0000000000480D74 "*"
 *   insn=0x0000000000480D74 string=0x0000000000480D78 "J"
 *   insn=0x0000000000480D7C string=0x0000000000480D80 "(a"
 *   insn=0x0000000000480D88 string=0x0000000000480D8C "*"
 *   insn=0x0000000000480D8C string=0x0000000000480D90 "J=G"
 *   insn=0x0000000000480D90 string=0x0000000000480D94 ")!"
 *   insn=0x0000000000480D98 string=0x0000000000480D9C "*"
 *   insn=0x0000000000480D98 string=0x0000000000480DC8 "*"
 *   insn=0x0000000000480D9C string=0x0000000000480DA0 "K"
 *   insn=0x0000000000480DA0 string=0x0000000000480DA4 "+"
 *   insn=0x0000000000480DA8 string=0x0000000000480DAC "_"
 *   insn=0x0000000000480DAC string=0x0000000000480DB0 "l"
 *   insn=0x0000000000480DB8 string=0x0000000000480DBC "z"
 *   insn=0x0000000000480DC8 string=0x0000000000480DCC "K"
 *   insn=0x0000000000480DCC string=0x0000000000480DD0 "+"
 *   insn=0x0000000000480DD0 string=0x0000000000480DD4 "_"
 *   insn=0x0000000000480DD8 string=0x0000000000480DDC "0"
 *   insn=0x0000000000480DF0 string=0x0000000000480DF4 "4"
 *   insn=0x0000000000480DF8 string=0x0000000000480DFC ""
 *   insn=0x0000000000480E08 string=0x0000000000480E0C "\t@"
 *   insn=0x0000000000480E18 string=0x0000000000480E1C ""
 *   insn=0x0000000000480E28 string=0x0000000000480E2C "@"
 *   insn=0x0000000000480E38 string=0x0000000000480E3C ")"
 *   insn=0x0000000000480E3C string=0x0000000000480E40 ")"
 *   insn=0x0000000000480E4C string=0x0000000000480E50 ")"
 *   insn=0x0000000000480E50 string=0x0000000000480E54 ")=G"
 *   insn=0x0000000000480E54 string=0x0000000000480E58 "!"
 *   insn=0x0000000000480E58 string=0x0000000000480E5C "i"
 *   insn=0x0000000000480E5C string=0x0000000000480E60 "\t"
 *   insn=0x0000000000480E5C string=0x0000000000480E88 "\t"
 *   insn=0x0000000000480E60 string=0x0000000000480E64 "*"
 *   insn=0x0000000000480E64 string=0x0000000000480E68 "\n"
 *   insn=0x0000000000480E6C string=0x0000000000480E70 "?"
 *   insn=0x0000000000480E70 string=0x0000000000480E74 "L"
 *   insn=0x0000000000480E78 string=0x0000000000480E7C "J"
 *   insn=0x0000000000480E88 string=0x0000000000480E8C "*"
 *   insn=0x0000000000480E8C string=0x0000000000480E90 "\n"
 *   insn=0x0000000000480E90 string=0x0000000000480E94 "?"
 *   insn=0x0000000000480E94 string=0x0000000000480E98 ""
 *   insn=0x0000000000480EA4 string=0x0000000000480EA8 "*"
 *   insn=0x0000000000480EA8 string=0x0000000000480EAC "J"
 *   insn=0x0000000000480EB0 string=0x0000000000480EB4 "(a"
 *   insn=0x0000000000480EBC string=0x0000000000480EC0 "*"
 *   insn=0x0000000000480EC0 string=0x0000000000480EC4 "J=G"
 *   insn=0x0000000000480EC4 string=0x0000000000480EC8 ")!"
 *   insn=0x0000000000480ECC string=0x0000000000480ED0 "*"
 *   insn=0x0000000000480ECC string=0x0000000000480EFC "*"
 *   insn=0x0000000000480ED0 string=0x0000000000480ED4 "K"
 *   insn=0x0000000000480ED4 string=0x0000000000480ED8 "+"
 *   insn=0x0000000000480EDC string=0x0000000000480EE0 "_"
 *   insn=0x0000000000480EEC string=0x0000000000480EF0 "-"
 *   insn=0x0000000000480EFC string=0x0000000000480F00 "K"
 *   insn=0x0000000000480F00 string=0x0000000000480F04 "+"
 *   insn=0x0000000000480F04 string=0x0000000000480F08 "_"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall std::map<std::string,boost::shared_ptr<Caver::MusicPlaylist>>::operator[](
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
  __int64 v20; // x0
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
  std::_Rb_tree<std::string,std::pair<std::string const,boost::shared_ptr<Caver::MusicPlaylist>>,std::_Select1st<std::pair<std::string const,boost::shared_ptr<Caver::MusicPlaylist>>>,std::less<std::string>,std::allocator<std::pair<std::string const,boost::shared_ptr<Caver::MusicPlaylist>>>>::_M_get_insert_hint_unique_pos();
  node = v20;
  v22 = v21;
  if ( v21 )
  {
    v23 = 1;
    if ( !v20 && v7 != v21 )
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
    node = std::_Rb_tree<std::string,std::pair<std::string const,boost::shared_ptr<Caver::MusicPlaylist>>,std::_Select1st<std::pair<std::string const,boost::shared_ptr<Caver::MusicPlaylist>>>,std::less<std::string>,std::allocator<std::pair<std::string const,boost::shared_ptr<Caver::MusicPlaylist>>>>::_M_create_node();
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

