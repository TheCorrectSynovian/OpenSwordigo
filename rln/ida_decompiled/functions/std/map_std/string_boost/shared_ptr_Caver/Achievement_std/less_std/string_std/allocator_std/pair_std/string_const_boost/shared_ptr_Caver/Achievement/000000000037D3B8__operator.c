/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000037D3B8
 * Mangled: _ZNSt3mapISsN5boost10shared_ptrIN5Caver11AchievementEEESt4lessISsESaISt4pairIKSsS4_EEEixERS8_
 * Demangled: std::map<std::string,boost::shared_ptr<Caver::Achievement>,std::less<std::string>,std::allocator<std::pair<std::string const,boost::shared_ptr<Caver::Achievement>>>>::operator[](std::string const&)
 *
 * Callers: 1
 *   0x00000000001F7980  std::map<std::string,boost::shared_ptr<Caver::Achievement>,std::less<std::string>,std::allocator<std::pair<std::string const,boost::shared_ptr<Caver::Achievement>>>>::operator[](std::string const&)
 *
 * Callees: 10
 *   0x00000000001F5190  .memcmp
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x0000000000200B50  std::_Rb_tree<std::string,std::pair<std::string const,boost::shared_ptr<Caver::Achievement>>,std::_Select1st<std::pair<std::string const,boost::shared_ptr<Caver::Achievement>>>,std::less<std::string>,std::allocator<std::pair<std::string const,boost::shared_ptr<Caver::Achievement>>>>::_M_get_insert_hint_unique_pos(std::_Rb_tree_const_iterator<std::pair<std::string const,boost::shared_ptr<Caver::Achievement>>>,std::string const&)
 *   0x0000000000203460  std::_Rb_tree<std::string,std::pair<std::string const,boost::shared_ptr<Caver::Achievement>>,std::_Select1st<std::pair<std::string const,boost::shared_ptr<Caver::Achievement>>>,std::less<std::string>,std::allocator<std::pair<std::string const,boost::shared_ptr<Caver::Achievement>>>>::_M_create_node(std::pair<std::string const,boost::shared_ptr<Caver::Achievement>> const&)
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x000000000054C8A0  sub_54C8A0
 *   0x000000000056A3A4  operator delete(void *)
 *   0x000000000056A528  sub_56A528
 *   0x00000000005818C4  sub_5818C4
 *   0x00000000006FE668  pthread_create
 *
 * Referenced strings: 102
 *   insn=0x000000000037D3D4 string=0x000000000037D3D8 "H"
 *   insn=0x000000000037D3DC string=0x000000000037D3E0 ""
 *   insn=0x000000000037D3F4 string=0x000000000037D3F8 "7"
 *   insn=0x000000000037D418 string=0x000000000037D41C ""
 *   insn=0x000000000037D420 string=0x000000000037D424 """
 *   insn=0x000000000037D424 string=0x000000000037D428 "Z"
 *   insn=0x000000000037D428 string=0x00000000001F5190 "P'"
 *   insn=0x000000000037D42C string=0x000000000037D430 "@"
 *   insn=0x000000000037D43C string=0x000000000037D440 ""
 *   insn=0x000000000037D47C string=0x000000000037D480 "@"
 *   insn=0x000000000037D484 string=0x000000000037D488 "a"
 *   insn=0x000000000037D488 string=0x000000000037D48C ""
 *   insn=0x000000000037D48C string=0x000000000037D490 ")"
 *   insn=0x000000000037D494 string=0x000000000037D498 """
 *   insn=0x000000000037D498 string=0x000000000037D49C "="
 *   insn=0x000000000037D49C string=0x000000000037D4A0 "`\n"
 *   insn=0x000000000037D4CC string=0x000000000037D4D0 "6"
 *   insn=0x000000000037D4D4 string=0x000000000037D4D8 "s"
 *   insn=0x000000000037D4DC string=0x000000000037D4E0 " "
 *   insn=0x000000000037D4E8 string=0x000000000037D4EC ""
 *   insn=0x000000000037D4EC string=0x000000000037D4F0 ")"
 *   insn=0x000000000037D4F4 string=0x000000000037D4F8 """
 *   insn=0x000000000037D4F8 string=0x000000000037D4FC "%"
 *   insn=0x000000000037D518 string=0x000000000037D51C "`"
 *   insn=0x000000000037D548 string=0x000000000037D54C ""
 *   insn=0x000000000037D554 string=0x000000000037D558 "4"
 *   insn=0x000000000037D55C string=0x000000000037D560 ""
 *   insn=0x000000000037D56C string=0x000000000037D570 "\t@"
 *   insn=0x000000000037D57C string=0x000000000037D580 ""
 *   insn=0x000000000037D58C string=0x000000000037D590 "@"
 *   insn=0x000000000037D59C string=0x000000000037D5A0 "I"
 *   insn=0x000000000037D5A0 string=0x000000000037D5A4 ")"
 *   insn=0x000000000037D5B0 string=0x000000000037D610 ")"
 *   insn=0x000000000037D5B4 string=0x000000000037D5B8 ""
 *   insn=0x000000000037D5C4 string=0x000000000037D5C8 "`"
 *   insn=0x000000000037D604 string=0x000000000037D608 "`"
 *   insn=0x000000000037D610 string=0x000000000037D614 ")=G"
 *   insn=0x000000000037D614 string=0x000000000037D618 "!"
 *   insn=0x000000000037D61C string=0x000000000037D620 "\t"
 *   insn=0x000000000037D61C string=0x000000000037D634 "\t"
 *   insn=0x000000000037D620 string=0x000000000037D624 "*"
 *   insn=0x000000000037D624 string=0x000000000037D628 "\n"
 *   insn=0x000000000037D630 string=0x000000000037D640 "?"
 *   insn=0x000000000037D634 string=0x000000000037D638 "*"
 *   insn=0x000000000037D638 string=0x000000000037D63C "\n"
 *   insn=0x000000000037D648 string=0x000000000037D64C "V"
 *   insn=0x000000000037D654 string=0x00000000001F62D0 "0'"
 *   insn=0x000000000037D658 string=0x000000000037D65C "J"
 *   insn=0x000000000037D65C string=0x000000000037D660 "J"
 *   insn=0x000000000037D664 string=0x000000000037D668 "(a"
 *   insn=0x000000000037D670 string=0x000000000037D674 "*"
 *   insn=0x000000000037D674 string=0x000000000037D678 "J=G"
 *   insn=0x000000000037D678 string=0x000000000037D67C ")!"
 *   insn=0x000000000037D680 string=0x000000000037D684 "*"
 *   insn=0x000000000037D680 string=0x000000000037D6B0 "*"
 *   insn=0x000000000037D684 string=0x000000000037D688 "K"
 *   insn=0x000000000037D688 string=0x000000000037D68C "+"
 *   insn=0x000000000037D690 string=0x000000000037D694 "_"
 *   insn=0x000000000037D694 string=0x000000000037D698 "l"
 *   insn=0x000000000037D6A0 string=0x000000000037D6A4 "@"
 *   insn=0x000000000037D6B0 string=0x000000000037D6B4 "K"
 *   insn=0x000000000037D6B4 string=0x000000000037D6B8 "+"
 *   insn=0x000000000037D6B8 string=0x000000000037D6BC "_"
 *   insn=0x000000000037D6C0 string=0x000000000037D6C4 "0"
 *   insn=0x000000000037D6CC string=0x000000000037D6D0 "}"
 *   insn=0x000000000037D6D8 string=0x000000000037D6DC "4"
 *   insn=0x000000000037D6E0 string=0x000000000037D6E4 ""
 *   insn=0x000000000037D6F0 string=0x000000000037D6F4 "\t@"
 *   insn=0x000000000037D700 string=0x000000000037D704 ""
 *   insn=0x000000000037D710 string=0x000000000037D714 "@"
 *   insn=0x000000000037D720 string=0x000000000037D724 "I"
 *   insn=0x000000000037D724 string=0x000000000037D728 ")"
 *   insn=0x000000000037D734 string=0x000000000037D738 ")"
 *   insn=0x000000000037D738 string=0x000000000037D73C ")=G"
 *   insn=0x000000000037D73C string=0x000000000037D740 "!"
 *   insn=0x000000000037D740 string=0x000000000037D744 "i"
 *   insn=0x000000000037D744 string=0x000000000037D748 "\t"
 *   insn=0x000000000037D744 string=0x000000000037D770 "\t"
 *   insn=0x000000000037D748 string=0x000000000037D74C "*"
 *   insn=0x000000000037D74C string=0x000000000037D750 "\n"
 *   insn=0x000000000037D754 string=0x000000000037D758 "?"
 *   insn=0x000000000037D758 string=0x000000000037D75C "L"
 *   insn=0x000000000037D768 string=0x000000000037D76C "V"
 *   insn=0x000000000037D770 string=0x000000000037D774 "*"
 *   insn=0x000000000037D774 string=0x000000000037D778 "\n"
 *   insn=0x000000000037D778 string=0x000000000037D77C "?"
 *   insn=0x000000000037D77C string=0x000000000037D780 ""
 *   insn=0x000000000037D784 string=0x000000000037D788 "O"
 *   insn=0x000000000037D78C string=0x000000000037D790 "J"
 *   insn=0x000000000037D790 string=0x000000000037D794 "J"
 *   insn=0x000000000037D798 string=0x000000000037D79C "(a"
 *   insn=0x000000000037D7A4 string=0x000000000037D7A8 "*"
 *   insn=0x000000000037D7A8 string=0x000000000037D7AC "J=G"
 *   insn=0x000000000037D7AC string=0x000000000037D7B0 ")!"
 *   insn=0x000000000037D7B4 string=0x000000000037D7B8 "*"
 *   insn=0x000000000037D7B4 string=0x000000000037D7E4 "*"
 *   insn=0x000000000037D7B8 string=0x000000000037D7BC "K"
 *   insn=0x000000000037D7BC string=0x000000000037D7C0 "+"
 *   insn=0x000000000037D7C4 string=0x000000000037D7C8 "_"
 *   insn=0x000000000037D7E4 string=0x000000000037D7E8 "K"
 *   insn=0x000000000037D7E8 string=0x000000000037D7EC "+"
 *   insn=0x000000000037D7EC string=0x000000000037D7F0 "_"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall std::map<std::string,boost::shared_ptr<Caver::Achievement>>::operator[](__int64 a1, const void **a2)
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
  std::_Rb_tree<std::string,std::pair<std::string const,boost::shared_ptr<Caver::Achievement>>,std::_Select1st<std::pair<std::string const,boost::shared_ptr<Caver::Achievement>>>,std::less<std::string>,std::allocator<std::pair<std::string const,boost::shared_ptr<Caver::Achievement>>>>::_M_get_insert_hint_unique_pos();
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
    node = std::_Rb_tree<std::string,std::pair<std::string const,boost::shared_ptr<Caver::Achievement>>,std::_Select1st<std::pair<std::string const,boost::shared_ptr<Caver::Achievement>>>,std::less<std::string>,std::allocator<std::pair<std::string const,boost::shared_ptr<Caver::Achievement>>>>::_M_create_node();
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

