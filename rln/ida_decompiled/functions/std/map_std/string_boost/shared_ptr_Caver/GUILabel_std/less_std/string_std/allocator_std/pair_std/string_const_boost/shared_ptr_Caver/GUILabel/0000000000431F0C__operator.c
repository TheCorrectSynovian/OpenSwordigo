/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000431F0C
 * Mangled: _ZNSt3mapISsN5boost10shared_ptrIN5Caver8GUILabelEEESt4lessISsESaISt4pairIKSsS4_EEEixERS8_
 * Demangled: std::map<std::string,boost::shared_ptr<Caver::GUILabel>,std::less<std::string>,std::allocator<std::pair<std::string const,boost::shared_ptr<Caver::GUILabel>>>>::operator[](std::string const&)
 *
 * Callers: 2
 *   0x0000000000202430  std::map<std::string,boost::shared_ptr<Caver::GUILabel>,std::less<std::string>,std::allocator<std::pair<std::string const,boost::shared_ptr<Caver::GUILabel>>>>::operator[](std::string const&)
 *   0x0000000000430208  Caver::QuestsView::QuestsView(void)
 *
 * Callees: 10
 *   0x00000000001F5190  .memcmp
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001FA9E0  std::_Rb_tree<std::string,std::pair<std::string const,boost::shared_ptr<Caver::GUILabel>>,std::_Select1st<std::pair<std::string const,boost::shared_ptr<Caver::GUILabel>>>,std::less<std::string>,std::allocator<std::pair<std::string const,boost::shared_ptr<Caver::GUILabel>>>>::_M_create_node(std::pair<std::string const,boost::shared_ptr<Caver::GUILabel>> const&)
 *   0x0000000000203930  std::_Rb_tree<std::string,std::pair<std::string const,boost::shared_ptr<Caver::GUILabel>>,std::_Select1st<std::pair<std::string const,boost::shared_ptr<Caver::GUILabel>>>,std::less<std::string>,std::allocator<std::pair<std::string const,boost::shared_ptr<Caver::GUILabel>>>>::_M_get_insert_hint_unique_pos(std::_Rb_tree_const_iterator<std::pair<std::string const,boost::shared_ptr<Caver::GUILabel>>>,std::string const&)
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x000000000054C8A0  sub_54C8A0
 *   0x000000000056A3A4  operator delete(void *)
 *   0x000000000056A528  sub_56A528
 *   0x00000000005818C4  sub_5818C4
 *   0x00000000006FE668  pthread_create
 *
 * Referenced strings: 96
 *   insn=0x0000000000431F28 string=0x0000000000431F2C "H"
 *   insn=0x0000000000431F30 string=0x0000000000431F34 ""
 *   insn=0x0000000000431F48 string=0x0000000000431F4C "7"
 *   insn=0x0000000000431F6C string=0x0000000000431F70 ""
 *   insn=0x0000000000431F74 string=0x0000000000431F78 """
 *   insn=0x0000000000431F7C string=0x00000000001F5190 "P'"
 *   insn=0x0000000000431F80 string=0x0000000000431F84 "@"
 *   insn=0x0000000000431F90 string=0x0000000000431F94 ""
 *   insn=0x0000000000431FD0 string=0x0000000000431FD4 "@"
 *   insn=0x0000000000431FD8 string=0x0000000000431FDC "a"
 *   insn=0x0000000000431FDC string=0x0000000000431FE0 ""
 *   insn=0x0000000000431FE0 string=0x0000000000431FE4 ")"
 *   insn=0x0000000000431FE8 string=0x0000000000431FEC """
 *   insn=0x0000000000431FEC string=0x0000000000431FF0 "h"
 *   insn=0x0000000000431FF0 string=0x0000000000431FF4 "`\n"
 *   insn=0x0000000000432000 string=0x0000000000432004 "I"
 *   insn=0x0000000000432014 string=0x0000000000432018 "FF"
 *   insn=0x0000000000432020 string=0x0000000000432024 "6"
 *   insn=0x0000000000432028 string=0x000000000043202C "s"
 *   insn=0x0000000000432030 string=0x0000000000432034 " "
 *   insn=0x000000000043203C string=0x0000000000432040 ""
 *   insn=0x0000000000432040 string=0x0000000000432044 ")"
 *   insn=0x0000000000432048 string=0x000000000043204C """
 *   insn=0x000000000043204C string=0x0000000000432050 "P"
 *   insn=0x000000000043206C string=0x0000000000432070 "`"
 *   insn=0x000000000043207C string=0x0000000000432080 "X""
 *   insn=0x0000000000432080 string=0x00000000001FA9E0 "0'"
 *   insn=0x000000000043209C string=0x00000000004320A0 ""
 *   insn=0x00000000004320A8 string=0x00000000004320AC "4"
 *   insn=0x00000000004320B0 string=0x00000000004320B4 ""
 *   insn=0x00000000004320C0 string=0x00000000004320C4 "\t@"
 *   insn=0x00000000004320D0 string=0x00000000004320D4 ""
 *   insn=0x00000000004320E0 string=0x00000000004320E4 "@"
 *   insn=0x00000000004320F4 string=0x00000000004320F8 ")"
 *   insn=0x0000000000432108 string=0x000000000043210C ""
 *   insn=0x0000000000432118 string=0x000000000043211C "`"
 *   insn=0x0000000000432118 string=0x00000000004321A8 "J"
 *   insn=0x0000000000432158 string=0x000000000043215C "`"
 *   insn=0x0000000000432164 string=0x0000000000432168 ")=G"
 *   insn=0x0000000000432168 string=0x000000000043216C "!"
 *   insn=0x0000000000432170 string=0x0000000000432174 "\t"
 *   insn=0x0000000000432170 string=0x0000000000432188 "\t"
 *   insn=0x0000000000432174 string=0x0000000000432178 "*"
 *   insn=0x0000000000432178 string=0x000000000043217C "\n"
 *   insn=0x0000000000432184 string=0x0000000000432194 "?"
 *   insn=0x0000000000432188 string=0x000000000043218C "*"
 *   insn=0x000000000043218C string=0x0000000000432190 "\n"
 *   insn=0x00000000004321A8 string=0x00000000001F62D0 "0'"
 *   insn=0x00000000004321B0 string=0x00000000004321B4 "J"
 *   insn=0x00000000004321B8 string=0x00000000004321BC "(a"
 *   insn=0x00000000004321C8 string=0x00000000004321CC "J=G"
 *   insn=0x00000000004321CC string=0x00000000004321D0 ")!"
 *   insn=0x00000000004321D4 string=0x00000000004321D8 "*"
 *   insn=0x00000000004321D4 string=0x0000000000432204 "*"
 *   insn=0x00000000004321D8 string=0x00000000004321DC "K"
 *   insn=0x00000000004321DC string=0x00000000004321E0 "+"
 *   insn=0x00000000004321E4 string=0x00000000004321E8 "_"
 *   insn=0x00000000004321E8 string=0x00000000004321EC "l"
 *   insn=0x00000000004321F4 string=0x00000000004321F8 "k"
 *   insn=0x0000000000432204 string=0x0000000000432208 "K"
 *   insn=0x0000000000432208 string=0x000000000043220C "+"
 *   insn=0x000000000043220C string=0x0000000000432210 "_"
 *   insn=0x0000000000432214 string=0x0000000000432218 "0"
 *   insn=0x000000000043222C string=0x0000000000432230 "4"
 *   insn=0x0000000000432234 string=0x0000000000432238 ""
 *   insn=0x0000000000432244 string=0x0000000000432248 "\t@"
 *   insn=0x0000000000432254 string=0x0000000000432258 ""
 *   insn=0x0000000000432264 string=0x0000000000432268 "@"
 *   insn=0x0000000000432278 string=0x000000000043227C ")"
 *   insn=0x000000000043228C string=0x0000000000432290 ")=G"
 *   insn=0x0000000000432290 string=0x0000000000432294 "!"
 *   insn=0x0000000000432294 string=0x0000000000432298 "i"
 *   insn=0x0000000000432298 string=0x000000000043229C "\t"
 *   insn=0x0000000000432298 string=0x00000000004322C4 "\t"
 *   insn=0x000000000043229C string=0x00000000004322A0 "*"
 *   insn=0x00000000004322A0 string=0x00000000004322A4 "\n"
 *   insn=0x00000000004322A8 string=0x00000000004322AC "?"
 *   insn=0x00000000004322AC string=0x00000000004322B0 "L"
 *   insn=0x00000000004322B4 string=0x00000000004322B8 ";"
 *   insn=0x00000000004322C4 string=0x00000000004322C8 "*"
 *   insn=0x00000000004322C8 string=0x00000000004322CC "\n"
 *   insn=0x00000000004322CC string=0x00000000004322D0 "?"
 *   insn=0x00000000004322D0 string=0x00000000004322D4 ""
 *   insn=0x00000000004322D8 string=0x00000000004322DC "z="
 *   insn=0x00000000004322E4 string=0x00000000004322E8 "J"
 *   insn=0x00000000004322EC string=0x00000000004322F0 "(a"
 *   insn=0x00000000004322FC string=0x0000000000432300 "J=G"
 *   insn=0x0000000000432300 string=0x0000000000432304 ")!"
 *   insn=0x0000000000432308 string=0x000000000043230C "*"
 *   insn=0x0000000000432308 string=0x0000000000432338 "*"
 *   insn=0x000000000043230C string=0x0000000000432310 "K"
 *   insn=0x0000000000432310 string=0x0000000000432314 "+"
 *   insn=0x0000000000432318 string=0x000000000043231C "_"
 *   insn=0x0000000000432338 string=0x000000000043233C "K"
 *   insn=0x000000000043233C string=0x0000000000432340 "+"
 *   insn=0x0000000000432340 string=0x0000000000432344 "_"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall std::map<std::string,boost::shared_ptr<Caver::GUILabel>>::operator[](__int64 a1, const void **a2)
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
  insert_hint_unique_pos = std::_Rb_tree<std::string,std::pair<std::string const,boost::shared_ptr<Caver::GUILabel>>,std::_Select1st<std::pair<std::string const,boost::shared_ptr<Caver::GUILabel>>>,std::less<std::string>,std::allocator<std::pair<std::string const,boost::shared_ptr<Caver::GUILabel>>>>::_M_get_insert_hint_unique_pos();
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
    node = std::_Rb_tree<std::string,std::pair<std::string const,boost::shared_ptr<Caver::GUILabel>>,std::_Select1st<std::pair<std::string const,boost::shared_ptr<Caver::GUILabel>>>,std::less<std::string>,std::allocator<std::pair<std::string const,boost::shared_ptr<Caver::GUILabel>>>>::_M_create_node();
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

