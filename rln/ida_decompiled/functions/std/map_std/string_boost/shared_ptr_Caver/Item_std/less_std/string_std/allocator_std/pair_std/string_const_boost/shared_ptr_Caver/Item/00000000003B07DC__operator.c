/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000003B07DC
 * Mangled: _ZNSt3mapISsN5boost10shared_ptrIN5Caver4ItemEEESt4lessISsESaISt4pairIKSsS4_EEEixERS8_
 * Demangled: std::map<std::string,boost::shared_ptr<Caver::Item>,std::less<std::string>,std::allocator<std::pair<std::string const,boost::shared_ptr<Caver::Item>>>>::operator[](std::string const&)
 *
 * Callers: 1
 *   0x00000000001F9D20  std::map<std::string,boost::shared_ptr<Caver::Item>,std::less<std::string>,std::allocator<std::pair<std::string const,boost::shared_ptr<Caver::Item>>>>::operator[](std::string const&)
 *
 * Callees: 10
 *   0x00000000001F5190  .memcmp
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001FA340  std::_Rb_tree<std::string,std::pair<std::string const,boost::shared_ptr<Caver::Item>>,std::_Select1st<std::pair<std::string const,boost::shared_ptr<Caver::Item>>>,std::less<std::string>,std::allocator<std::pair<std::string const,boost::shared_ptr<Caver::Item>>>>::_M_get_insert_hint_unique_pos(std::_Rb_tree_const_iterator<std::pair<std::string const,boost::shared_ptr<Caver::Item>>>,std::string const&)
 *   0x00000000001FDAE0  std::_Rb_tree<std::string,std::pair<std::string const,boost::shared_ptr<Caver::Item>>,std::_Select1st<std::pair<std::string const,boost::shared_ptr<Caver::Item>>>,std::less<std::string>,std::allocator<std::pair<std::string const,boost::shared_ptr<Caver::Item>>>>::_M_create_node(std::pair<std::string const,boost::shared_ptr<Caver::Item>> const&)
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x000000000054C8A0  sub_54C8A0
 *   0x000000000056A3A4  operator delete(void *)
 *   0x000000000056A528  sub_56A528
 *   0x00000000005818C4  sub_5818C4
 *   0x00000000006FE668  pthread_create
 *
 * Referenced strings: 98
 *   insn=0x00000000003B07F8 string=0x00000000003B07FC "H"
 *   insn=0x00000000003B0800 string=0x00000000003B0804 ""
 *   insn=0x00000000003B0818 string=0x00000000003B081C "7"
 *   insn=0x00000000003B083C string=0x00000000003B0840 ""
 *   insn=0x00000000003B0844 string=0x00000000003B0848 """
 *   insn=0x00000000003B0848 string=0x00000000003B084C "Q"
 *   insn=0x00000000003B084C string=0x00000000001F5190 "P'"
 *   insn=0x00000000003B0850 string=0x00000000003B0854 "@"
 *   insn=0x00000000003B0860 string=0x00000000003B0864 ""
 *   insn=0x00000000003B08A0 string=0x00000000003B08A4 "@"
 *   insn=0x00000000003B08A8 string=0x00000000003B08AC "a"
 *   insn=0x00000000003B08AC string=0x00000000003B08B0 ""
 *   insn=0x00000000003B08B0 string=0x00000000003B08B4 ")"
 *   insn=0x00000000003B08B8 string=0x00000000003B08BC """
 *   insn=0x00000000003B08BC string=0x00000000003B08C0 "4"
 *   insn=0x00000000003B08C0 string=0x00000000003B08C4 "`\n"
 *   insn=0x00000000003B08E8 string=0x00000000001FA340 "0'"
 *   insn=0x00000000003B08F0 string=0x00000000003B08F4 "6"
 *   insn=0x00000000003B08F8 string=0x00000000003B08FC "s"
 *   insn=0x00000000003B0900 string=0x00000000003B0904 " "
 *   insn=0x00000000003B090C string=0x00000000003B0910 ""
 *   insn=0x00000000003B0910 string=0x00000000003B0914 ")"
 *   insn=0x00000000003B0918 string=0x00000000003B091C """
 *   insn=0x00000000003B093C string=0x00000000003B0940 "`"
 *   insn=0x00000000003B094C string=0x00000000003B0950 "d4"
 *   insn=0x00000000003B0950 string=0x00000000001FDAE0 "0'"
 *   insn=0x00000000003B096C string=0x00000000003B0970 ""
 *   insn=0x00000000003B0978 string=0x00000000003B097C "4"
 *   insn=0x00000000003B0980 string=0x00000000003B0984 ""
 *   insn=0x00000000003B0990 string=0x00000000003B0994 "\t@"
 *   insn=0x00000000003B09A0 string=0x00000000003B09A4 ""
 *   insn=0x00000000003B09B0 string=0x00000000003B09B4 "@"
 *   insn=0x00000000003B09C4 string=0x00000000003B09C8 ")"
 *   insn=0x00000000003B09D8 string=0x00000000003B09DC ""
 *   insn=0x00000000003B09E8 string=0x00000000003B09EC "`"
 *   insn=0x00000000003B0A28 string=0x00000000003B0A2C "`"
 *   insn=0x00000000003B0A34 string=0x00000000003B0A38 ")=G"
 *   insn=0x00000000003B0A38 string=0x00000000003B0A3C "!"
 *   insn=0x00000000003B0A40 string=0x00000000003B0A44 "\t"
 *   insn=0x00000000003B0A40 string=0x00000000003B0A58 "\t"
 *   insn=0x00000000003B0A44 string=0x00000000003B0A48 "*"
 *   insn=0x00000000003B0A48 string=0x00000000003B0A4C "\n"
 *   insn=0x00000000003B0A54 string=0x00000000003B0A64 "?"
 *   insn=0x00000000003B0A58 string=0x00000000003B0A5C "*"
 *   insn=0x00000000003B0A5C string=0x00000000003B0A60 "\n"
 *   insn=0x00000000003B0A6C string=0x00000000003B0A70 "M"
 *   insn=0x00000000003B0A78 string=0x00000000001F62D0 "0'"
 *   insn=0x00000000003B0A80 string=0x00000000003B0A84 "J"
 *   insn=0x00000000003B0A88 string=0x00000000003B0A8C "(a"
 *   insn=0x00000000003B0A98 string=0x00000000003B0A9C "J=G"
 *   insn=0x00000000003B0A9C string=0x00000000003B0AA0 ")!"
 *   insn=0x00000000003B0AA4 string=0x00000000003B0AA8 "*"
 *   insn=0x00000000003B0AA4 string=0x00000000003B0AD4 "*"
 *   insn=0x00000000003B0AA8 string=0x00000000003B0AAC "K"
 *   insn=0x00000000003B0AAC string=0x00000000003B0AB0 "+"
 *   insn=0x00000000003B0AB4 string=0x00000000003B0AB8 "_"
 *   insn=0x00000000003B0AB8 string=0x00000000003B0ABC "l"
 *   insn=0x00000000003B0AC4 string=0x00000000003B0AC8 "7"
 *   insn=0x00000000003B0ACC string=0x00000000003B0AD0 "}C"
 *   insn=0x00000000003B0AD4 string=0x00000000003B0AD8 "K"
 *   insn=0x00000000003B0AD8 string=0x00000000003B0ADC "+"
 *   insn=0x00000000003B0ADC string=0x00000000003B0AE0 "_"
 *   insn=0x00000000003B0AE4 string=0x00000000003B0AE8 "0"
 *   insn=0x00000000003B0AF0 string=0x00000000003B0AF4 "tC"
 *   insn=0x00000000003B0AFC string=0x00000000003B0B00 "4"
 *   insn=0x00000000003B0B04 string=0x00000000003B0B08 ""
 *   insn=0x00000000003B0B14 string=0x00000000003B0B18 "\t@"
 *   insn=0x00000000003B0B24 string=0x00000000003B0B28 ""
 *   insn=0x00000000003B0B34 string=0x00000000003B0B38 "@"
 *   insn=0x00000000003B0B48 string=0x00000000003B0B4C ")"
 *   insn=0x00000000003B0B5C string=0x00000000003B0B60 ")=G"
 *   insn=0x00000000003B0B60 string=0x00000000003B0B64 "!"
 *   insn=0x00000000003B0B64 string=0x00000000003B0B68 "i"
 *   insn=0x00000000003B0B68 string=0x00000000003B0B6C "\t"
 *   insn=0x00000000003B0B68 string=0x00000000003B0B94 "\t"
 *   insn=0x00000000003B0B6C string=0x00000000003B0B70 "*"
 *   insn=0x00000000003B0B70 string=0x00000000003B0B74 "\n"
 *   insn=0x00000000003B0B78 string=0x00000000003B0B7C "?"
 *   insn=0x00000000003B0B7C string=0x00000000003B0B80 "L"
 *   insn=0x00000000003B0B84 string=0x00000000003B0B88 ""
 *   insn=0x00000000003B0B8C string=0x00000000003B0B90 "MC"
 *   insn=0x00000000003B0B94 string=0x00000000003B0B98 "*"
 *   insn=0x00000000003B0B98 string=0x00000000003B0B9C "\n"
 *   insn=0x00000000003B0B9C string=0x00000000003B0BA0 "?"
 *   insn=0x00000000003B0BA0 string=0x00000000003B0BA4 ""
 *   insn=0x00000000003B0BA8 string=0x00000000003B0BAC "FC"
 *   insn=0x00000000003B0BB4 string=0x00000000003B0BB8 "J"
 *   insn=0x00000000003B0BBC string=0x00000000003B0BC0 "(a"
 *   insn=0x00000000003B0BCC string=0x00000000003B0BD0 "J=G"
 *   insn=0x00000000003B0BD0 string=0x00000000003B0BD4 ")!"
 *   insn=0x00000000003B0BD8 string=0x00000000003B0BDC "*"
 *   insn=0x00000000003B0BD8 string=0x00000000003B0C08 "*"
 *   insn=0x00000000003B0BDC string=0x00000000003B0BE0 "K"
 *   insn=0x00000000003B0BE0 string=0x00000000003B0BE4 "+"
 *   insn=0x00000000003B0BE8 string=0x00000000003B0BEC "_"
 *   insn=0x00000000003B0C08 string=0x00000000003B0C0C "K"
 *   insn=0x00000000003B0C0C string=0x00000000003B0C10 "+"
 *   insn=0x00000000003B0C10 string=0x00000000003B0C14 "_"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall std::map<std::string,boost::shared_ptr<Caver::Item>>::operator[](__int64 a1, const void **a2)
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
  insert_hint_unique_pos = std::_Rb_tree<std::string,std::pair<std::string const,boost::shared_ptr<Caver::Item>>,std::_Select1st<std::pair<std::string const,boost::shared_ptr<Caver::Item>>>,std::less<std::string>,std::allocator<std::pair<std::string const,boost::shared_ptr<Caver::Item>>>>::_M_get_insert_hint_unique_pos();
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
    node = std::_Rb_tree<std::string,std::pair<std::string const,boost::shared_ptr<Caver::Item>>,std::_Select1st<std::pair<std::string const,boost::shared_ptr<Caver::Item>>>,std::less<std::string>,std::allocator<std::pair<std::string const,boost::shared_ptr<Caver::Item>>>>::_M_create_node();
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

