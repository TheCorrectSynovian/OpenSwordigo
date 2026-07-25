/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000244320
 * Mangled: _ZNSt3mapISsN5boost8functionIFPN5Caver9ComponentEvEEESt4lessISsESaISt4pairIKSsS6_EEEixERSA_
 * Demangled: std::map<std::string,boost::function<Caver::Component * ()(void)>,std::less<std::string>,std::allocator<std::pair<std::string const,boost::function<Caver::Component * ()(void)>>>>::operator[](std::string const&)
 *
 * Callers: 1
 *   0x00000000001FDB10  std::map<std::string,boost::function<Caver::Component * ()(void)>,std::less<std::string>,std::allocator<std::pair<std::string const,boost::function<Caver::Component * ()(void)>>>>::operator[](std::string const&)
 *
 * Callees: 11
 *   0x00000000001F4570  std::_Rb_tree<std::string,std::pair<std::string const,boost::function<Caver::Component * ()(void)>>,std::_Select1st<std::pair<std::string const,boost::function<Caver::Component * ()(void)>>>,std::less<std::string>,std::allocator<std::pair<std::string const,boost::function<Caver::Component * ()(void)>>>>::_M_create_node(std::pair<std::string const,boost::function<Caver::Component * ()(void)>> const&)
 *   0x00000000001F5190  .memcmp
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F6CA0  std::_Rb_tree<std::string,std::pair<std::string const,boost::function<Caver::Component * ()(void)>>,std::_Select1st<std::pair<std::string const,boost::function<Caver::Component * ()(void)>>>,std::less<std::string>,std::allocator<std::pair<std::string const,boost::function<Caver::Component * ()(void)>>>>::_M_get_insert_hint_unique_pos(std::_Rb_tree_const_iterator<std::pair<std::string const,boost::function<Caver::Component * ()(void)>>>,std::string const&)
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x0000000000244834  boost::function<Caver::Component * ()(void)>::operator=(boost::function<Caver::Component * ()(void)> const&)
 *   0x000000000054C8A0  sub_54C8A0
 *   0x000000000056A3A4  operator delete(void *)
 *   0x000000000056A528  sub_56A528
 *   0x00000000005818C4  sub_5818C4
 *   0x00000000006FE668  pthread_create
 *
 * Referenced strings: 131
 *   insn=0x000000000024433C string=0x0000000000244340 "H"
 *   insn=0x0000000000244344 string=0x0000000000244348 ""
 *   insn=0x000000000024435C string=0x0000000000244360 "7"
 *   insn=0x0000000000244380 string=0x0000000000244384 ""
 *   insn=0x0000000000244388 string=0x000000000024438C """
 *   insn=0x0000000000244390 string=0x00000000001F5190 "P'"
 *   insn=0x0000000000244394 string=0x0000000000244398 "@"
 *   insn=0x00000000002443A4 string=0x00000000002443A8 ""
 *   insn=0x00000000002443E4 string=0x00000000002443E8 "@"
 *   insn=0x00000000002443EC string=0x00000000002443F0 "a"
 *   insn=0x00000000002443F0 string=0x00000000002443F4 ""
 *   insn=0x00000000002443F4 string=0x00000000002443F8 ")"
 *   insn=0x00000000002443FC string=0x0000000000244400 """
 *   insn=0x0000000000244400 string=0x0000000000244404 "c"
 *   insn=0x0000000000244418 string=0x000000000024441C "C"
 *   insn=0x0000000000244424 string=0x0000000000244428 "("
 *   insn=0x000000000024442C string=0x0000000000244430 "h"
 *   insn=0x0000000000244430 string=0x0000000000244434 ""
 *   insn=0x0000000000244434 string=0x0000000000244438 ""
 *   insn=0x000000000024443C string=0x0000000000244440 " !"
 *   insn=0x0000000000244444 string=0x0000000000244448 "!A"
 *   insn=0x0000000000244470 string=0x0000000000244474 "`\t"
 *   insn=0x0000000000244498 string=0x00000000001F6CA0 "0'"
 *   insn=0x00000000002444A0 string=0x00000000002444A4 "6"
 *   insn=0x00000000002444A8 string=0x00000000002444AC "s"
 *   insn=0x00000000002444B0 string=0x00000000002444B4 " "
 *   insn=0x00000000002444BC string=0x00000000002444C0 ""
 *   insn=0x00000000002444C0 string=0x00000000002444C4 ")"
 *   insn=0x00000000002444C8 string=0x00000000002444CC """
 *   insn=0x00000000002444CC string=0x00000000002444D0 "0"
 *   insn=0x00000000002444EC string=0x00000000002444F0 "`"
 *   insn=0x0000000000244500 string=0x00000000001F4570 "P'"
 *   insn=0x000000000024451C string=0x0000000000244520 ""
 *   insn=0x0000000000244528 string=0x000000000024452C "h"
 *   insn=0x000000000024452C string=0x0000000000244530 "("
 *   insn=0x0000000000244530 string=0x0000000000244534 ""
 *   insn=0x0000000000244534 string=0x0000000000244538 ""
 *   insn=0x0000000000244540 string=0x0000000000244544 " A"
 *   insn=0x0000000000244558 string=0x000000000024455C "\t%"
 *   insn=0x000000000024455C string=0x0000000000244560 ")"
 *   insn=0x0000000000244568 string=0x000000000024456C "a"
 *   insn=0x000000000024456C string=0x00000000002445D8 "\t%"
 *   insn=0x0000000000244570 string=0x0000000000244574 "h"
 *   insn=0x0000000000244574 string=0x0000000000244578 "("
 *   insn=0x0000000000244578 string=0x000000000024457C ""
 *   insn=0x000000000024457C string=0x0000000000244580 ""
 *   insn=0x0000000000244588 string=0x000000000024458C " !"
 *   insn=0x00000000002445A0 string=0x00000000002445A4 ""
 *   insn=0x00000000002445B0 string=0x00000000002445B4 "`"
 *   insn=0x00000000002445B0 string=0x0000000000244624 "+"
 *   insn=0x00000000002445D8 string=0x00000000002445DC ")=G"
 *   insn=0x00000000002445DC string=0x00000000002445E0 "!"
 *   insn=0x00000000002445E4 string=0x00000000002445E8 "\t"
 *   insn=0x00000000002445E4 string=0x00000000002445FC "\t"
 *   insn=0x00000000002445E8 string=0x00000000002445EC "*"
 *   insn=0x00000000002445EC string=0x00000000002445F0 "\n"
 *   insn=0x00000000002445F8 string=0x0000000000244608 "?"
 *   insn=0x00000000002445FC string=0x0000000000244600 "*"
 *   insn=0x0000000000244600 string=0x0000000000244604 "\n"
 *   insn=0x0000000000244608 string=0x000000000024460C ","
 *   insn=0x0000000000244610 string=0x0000000000244614 "d"
 *   insn=0x0000000000244624 string=0x00000000001F62D0 "0'"
 *   insn=0x0000000000244628 string=0x000000000024462C "\n%"
 *   insn=0x000000000024462C string=0x0000000000244630 "J"
 *   insn=0x0000000000244634 string=0x0000000000244638 "(a"
 *   insn=0x000000000024463C string=0x0000000000244640 "@\t"
 *   insn=0x0000000000244640 string=0x0000000000244644 "\n%"
 *   insn=0x0000000000244644 string=0x0000000000244648 "J=G"
 *   insn=0x0000000000244648 string=0x000000000024464C ")!"
 *   insn=0x0000000000244650 string=0x0000000000244654 "*"
 *   insn=0x0000000000244650 string=0x00000000002446C4 "*"
 *   insn=0x0000000000244654 string=0x0000000000244658 "K"
 *   insn=0x0000000000244658 string=0x000000000024465C "+"
 *   insn=0x0000000000244664 string=0x00000000002446A4 "_"
 *   insn=0x0000000000244668 string=0x000000000024466C "\n%"
 *   insn=0x000000000024466C string=0x0000000000244670 "J"
 *   insn=0x0000000000244674 string=0x0000000000244678 "(a"
 *   insn=0x000000000024467C string=0x0000000000244680 "@"
 *   insn=0x0000000000244680 string=0x0000000000244684 "\n%"
 *   insn=0x0000000000244684 string=0x0000000000244688 "J=G"
 *   insn=0x0000000000244688 string=0x000000000024468C ")!"
 *   insn=0x0000000000244690 string=0x0000000000244694 "*"
 *   insn=0x0000000000244694 string=0x0000000000244698 "K"
 *   insn=0x0000000000244698 string=0x000000000024469C "+"
 *   insn=0x00000000002446B0 string=0x00000000002446B4 "<"
 *   insn=0x00000000002446BC string=0x00000000002446C0 "6"
 *   insn=0x00000000002446BC string=0x0000000000244770 "("
 *   insn=0x00000000002446C4 string=0x00000000002446C8 "K"
 *   insn=0x00000000002446C8 string=0x00000000002446CC "+"
 *   insn=0x00000000002446CC string=0x00000000002446D0 "_"
 *   insn=0x00000000002446D4 string=0x00000000002446D8 "$"
 *   insn=0x00000000002446E0 string=0x00000000002446E4 "h"
 *   insn=0x00000000002446E4 string=0x00000000002446E8 ","
 *   insn=0x00000000002446F0 string=0x00000000002446F4 "h"
 *   insn=0x00000000002446F4 string=0x00000000002446F8 "("
 *   insn=0x00000000002446F8 string=0x00000000002446FC ""
 *   insn=0x00000000002446FC string=0x0000000000244700 ""
 *   insn=0x0000000000244708 string=0x000000000024470C " A"
 *   insn=0x0000000000244720 string=0x0000000000244724 "\t%"
 *   insn=0x0000000000244724 string=0x0000000000244728 ")"
 *   insn=0x0000000000244734 string=0x0000000000244738 "\t%"
 *   insn=0x0000000000244738 string=0x000000000024473C ")=G"
 *   insn=0x000000000024473C string=0x0000000000244740 "!"
 *   insn=0x0000000000244744 string=0x0000000000244748 "\t"
 *   insn=0x0000000000244744 string=0x00000000002447A0 "\t"
 *   insn=0x0000000000244748 string=0x000000000024474C "*"
 *   insn=0x000000000024474C string=0x0000000000244750 "\n"
 *   insn=0x0000000000244754 string=0x0000000000244758 "?"
 *   insn=0x0000000000244758 string=0x000000000024475C "l"
 *   insn=0x0000000000244768 string=0x000000000024476C "h"
 *   insn=0x0000000000244770 string=0x0000000000244774 ""
 *   insn=0x0000000000244774 string=0x0000000000244778 ""
 *   insn=0x0000000000244780 string=0x0000000000244784 " !"
 *   insn=0x0000000000244798 string=0x000000000024479C "J"
 *   insn=0x00000000002447A0 string=0x00000000002447A4 "*"
 *   insn=0x00000000002447A4 string=0x00000000002447A8 "\n"
 *   insn=0x00000000002447A8 string=0x00000000002447AC "?"
 *   insn=0x00000000002447B8 string=0x00000000002447BC "\n%"
 *   insn=0x00000000002447BC string=0x00000000002447C0 "J"
 *   insn=0x00000000002447C4 string=0x00000000002447C8 "(a"
 *   insn=0x00000000002447D0 string=0x00000000002447D4 "\n%"
 *   insn=0x00000000002447D4 string=0x00000000002447D8 "J=G"
 *   insn=0x00000000002447D8 string=0x00000000002447DC ")!"
 *   insn=0x00000000002447E0 string=0x00000000002447E4 "*"
 *   insn=0x00000000002447E0 string=0x0000000000244810 "*"
 *   insn=0x00000000002447E4 string=0x00000000002447E8 "K"
 *   insn=0x00000000002447E8 string=0x00000000002447EC "+"
 *   insn=0x00000000002447F0 string=0x00000000002447F4 "_"
 *   insn=0x0000000000244810 string=0x0000000000244814 "K"
 *   insn=0x0000000000244814 string=0x0000000000244818 "+"
 *   insn=0x0000000000244818 string=0x000000000024481C "_"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall std::map<std::string,boost::function<Caver::Component * ()(void)>>::operator[](
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
  int v20; // w0
  __int64 insert_hint_unique_pos; // x0
  __int64 v22; // x1
  __int64 v23; // x22
  unsigned int v24; // w23
  _QWORD *v25; // x1
  unsigned __int64 v26; // x8
  unsigned __int64 v27; // x9
  __int64 v28; // x19
  size_t v29; // x2
  unsigned int v30; // w0
  void (__fastcall *v31)(__int128 *, __int128 *, __int64); // x8
  char *v32; // x0
  unsigned int *v34; // x8
  int v35; // w9
  void *v37; // [xsp+38h] [xbp-88h] BYREF
  __int64 v38; // [xsp+40h] [xbp-80h]
  __int128 v39; // [xsp+48h] [xbp-78h] BYREF
  __int64 v40; // [xsp+68h] [xbp-58h]

  node = a1 + 8;
  v40 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
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
      v20 = v17 <= (__int64)0xFFFFFFFF80000000LL ? 0x80000000 : v17;
      if ( (v20 & 0x80000000) == 0 )
        return node + 40;
    }
  }
  sub_56A528(&v37, v5);
  v38 = 0;
  insert_hint_unique_pos = std::_Rb_tree<std::string,std::pair<std::string const,boost::function<Caver::Component * ()(void)>>,std::_Select1st<std::pair<std::string const,boost::function<Caver::Component * ()(void)>>>,std::less<std::string>,std::allocator<std::pair<std::string const,boost::function<Caver::Component * ()(void)>>>>::_M_get_insert_hint_unique_pos();
  node = insert_hint_unique_pos;
  v23 = v22;
  if ( v22 )
  {
    v24 = 1;
    if ( !insert_hint_unique_pos && v7 != v22 )
    {
      v25 = *(_QWORD **)(v22 + 32);
      v26 = *((_QWORD *)v37 - 3);
      v27 = *(v25 - 3);
      v28 = v26 - v27;
      if ( v26 <= v27 )
        v29 = *((_QWORD *)v37 - 3);
      else
        v29 = *(v25 - 3);
      v30 = memcmp(v37, v25, v29);
      if ( !v30 )
      {
        v30 = 0x7FFFFFFF;
        if ( v28 <= 0x7FFFFFFF )
        {
          if ( v28 <= (__int64)0xFFFFFFFF80000000LL )
            v30 = 0x80000000;
          else
            v30 = v28;
        }
      }
      v24 = v30 >> 31;
    }
    node = std::_Rb_tree<std::string,std::pair<std::string const,boost::function<Caver::Component * ()(void)>>,std::_Select1st<std::pair<std::string const,boost::function<Caver::Component * ()(void)>>>,std::less<std::string>,std::allocator<std::pair<std::string const,boost::function<Caver::Component * ()(void)>>>>::_M_create_node();
    sub_54C8A0(v24, node, v23, v7);
    ++*(_QWORD *)(a1 + 40);
  }
  if ( v38 )
  {
    if ( (v38 & 1) == 0 )
    {
      v31 = *(void (__fastcall **)(__int128 *, __int128 *, __int64))(v38 & 0xFFFFFFFFFFFFFFFELL);
      if ( v31 )
        v31(&v39, &v39, 2);
    }
    v38 = 0;
  }
  v32 = (char *)v37 - 24;
  if ( (char *)v37 - 24 != (char *)&qword_6FD2E0 )
  {
    v34 = (unsigned int *)((char *)v37 - 8);
    if ( &pthread_create )
    {
      do
        v35 = __ldaxr(v34);
      while ( __stlxr(v35 - 1, v34) );
    }
    else
    {
      v35 = (*v34)--;
    }
    if ( v35 <= 0 )
      operator delete(v32);
  }
  return node + 40;
}

