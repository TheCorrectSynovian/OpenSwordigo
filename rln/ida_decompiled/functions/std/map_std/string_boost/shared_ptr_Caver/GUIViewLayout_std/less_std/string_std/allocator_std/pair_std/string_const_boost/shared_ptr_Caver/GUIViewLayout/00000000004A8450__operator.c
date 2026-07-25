/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004A8450
 * Mangled: _ZNSt3mapISsN5boost10shared_ptrIN5Caver13GUIViewLayoutEEESt4lessISsESaISt4pairIKSsS4_EEEixERS8_
 * Demangled: std::map<std::string,boost::shared_ptr<Caver::GUIViewLayout>,std::less<std::string>,std::allocator<std::pair<std::string const,boost::shared_ptr<Caver::GUIViewLayout>>>>::operator[](std::string const&)
 *
 * Callers: 1
 *   0x00000000001FDD20  std::map<std::string,boost::shared_ptr<Caver::GUIViewLayout>,std::less<std::string>,std::allocator<std::pair<std::string const,boost::shared_ptr<Caver::GUIViewLayout>>>>::operator[](std::string const&)
 *
 * Callees: 10
 *   0x00000000001F5190  .memcmp
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001FDA70  std::_Rb_tree<std::string,std::pair<std::string const,boost::shared_ptr<Caver::GUIViewLayout>>,std::_Select1st<std::pair<std::string const,boost::shared_ptr<Caver::GUIViewLayout>>>,std::less<std::string>,std::allocator<std::pair<std::string const,boost::shared_ptr<Caver::GUIViewLayout>>>>::_M_create_node(std::pair<std::string const,boost::shared_ptr<Caver::GUIViewLayout>> const&)
 *   0x0000000000203520  std::_Rb_tree<std::string,std::pair<std::string const,boost::shared_ptr<Caver::GUIViewLayout>>,std::_Select1st<std::pair<std::string const,boost::shared_ptr<Caver::GUIViewLayout>>>,std::less<std::string>,std::allocator<std::pair<std::string const,boost::shared_ptr<Caver::GUIViewLayout>>>>::_M_get_insert_hint_unique_pos(std::_Rb_tree_const_iterator<std::pair<std::string const,boost::shared_ptr<Caver::GUIViewLayout>>>,std::string const&)
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x000000000054C8A0  sub_54C8A0
 *   0x000000000056A3A4  operator delete(void *)
 *   0x000000000056A528  sub_56A528
 *   0x00000000005818C4  sub_5818C4
 *   0x00000000006FE668  pthread_create
 *
 * Referenced strings: 94
 *   insn=0x00000000004A846C string=0x00000000004A8470 "H"
 *   insn=0x00000000004A8474 string=0x00000000004A8478 ""
 *   insn=0x00000000004A848C string=0x00000000004A8490 "7"
 *   insn=0x00000000004A84B0 string=0x00000000004A84B4 ""
 *   insn=0x00000000004A84B8 string=0x00000000004A84BC """
 *   insn=0x00000000004A84BC string=0x00000000004A84C0 "43"
 *   insn=0x00000000004A84C0 string=0x00000000001F5190 "P'"
 *   insn=0x00000000004A84C4 string=0x00000000004A84C8 "@"
 *   insn=0x00000000004A84D4 string=0x00000000004A84D8 ""
 *   insn=0x00000000004A8514 string=0x00000000004A8518 "@"
 *   insn=0x00000000004A851C string=0x00000000004A8520 "a"
 *   insn=0x00000000004A8520 string=0x00000000004A8524 ""
 *   insn=0x00000000004A8524 string=0x00000000004A8528 ")"
 *   insn=0x00000000004A852C string=0x00000000004A8530 """
 *   insn=0x00000000004A8534 string=0x00000000004A8538 "`\n"
 *   insn=0x00000000004A8564 string=0x00000000004A8568 "6"
 *   insn=0x00000000004A856C string=0x00000000004A8570 "s"
 *   insn=0x00000000004A8574 string=0x00000000004A8578 " "
 *   insn=0x00000000004A8580 string=0x00000000004A8584 ""
 *   insn=0x00000000004A8584 string=0x00000000004A8588 ")"
 *   insn=0x00000000004A858C string=0x00000000004A8590 """
 *   insn=0x00000000004A85B0 string=0x00000000004A85B4 "`"
 *   insn=0x00000000004A85C0 string=0x00000000004A85C4 "+U"
 *   insn=0x00000000004A85C4 string=0x00000000001FDA70 "0'"
 *   insn=0x00000000004A85E0 string=0x00000000004A85E4 ""
 *   insn=0x00000000004A85EC string=0x00000000004A85F0 "4"
 *   insn=0x00000000004A85F4 string=0x00000000004A85F8 ""
 *   insn=0x00000000004A8604 string=0x00000000004A8608 "\t@"
 *   insn=0x00000000004A8614 string=0x00000000004A8618 ""
 *   insn=0x00000000004A8624 string=0x00000000004A8628 "@"
 *   insn=0x00000000004A8638 string=0x00000000004A863C ")"
 *   insn=0x00000000004A864C string=0x00000000004A8650 ""
 *   insn=0x00000000004A865C string=0x00000000004A8660 "`"
 *   insn=0x00000000004A869C string=0x00000000004A86A0 "`"
 *   insn=0x00000000004A86A8 string=0x00000000004A86AC ")=G"
 *   insn=0x00000000004A86AC string=0x00000000004A86B0 "!"
 *   insn=0x00000000004A86B4 string=0x00000000004A86B8 "\t"
 *   insn=0x00000000004A86B4 string=0x00000000004A86CC "\t"
 *   insn=0x00000000004A86B8 string=0x00000000004A86BC "*"
 *   insn=0x00000000004A86BC string=0x00000000004A86C0 "\n"
 *   insn=0x00000000004A86C8 string=0x00000000004A86D8 "?"
 *   insn=0x00000000004A86CC string=0x00000000004A86D0 "*"
 *   insn=0x00000000004A86D0 string=0x00000000004A86D4 "\n"
 *   insn=0x00000000004A86E0 string=0x00000000004A86E4 "0"
 *   insn=0x00000000004A86EC string=0x00000000001F62D0 "0'"
 *   insn=0x00000000004A86F4 string=0x00000000004A86F8 "J"
 *   insn=0x00000000004A86FC string=0x00000000004A8700 "(a"
 *   insn=0x00000000004A870C string=0x00000000004A8710 "J=G"
 *   insn=0x00000000004A8710 string=0x00000000004A8714 ")!"
 *   insn=0x00000000004A8718 string=0x00000000004A871C "*"
 *   insn=0x00000000004A8718 string=0x00000000004A8748 "*"
 *   insn=0x00000000004A871C string=0x00000000004A8720 "K"
 *   insn=0x00000000004A8720 string=0x00000000004A8724 "+"
 *   insn=0x00000000004A8728 string=0x00000000004A872C "_"
 *   insn=0x00000000004A872C string=0x00000000004A8730 "l"
 *   insn=0x00000000004A8740 string=0x00000000004A8744 "`d"
 *   insn=0x00000000004A8748 string=0x00000000004A874C "K"
 *   insn=0x00000000004A874C string=0x00000000004A8750 "+"
 *   insn=0x00000000004A8750 string=0x00000000004A8754 "_"
 *   insn=0x00000000004A8758 string=0x00000000004A875C "0"
 *   insn=0x00000000004A8764 string=0x00000000004A8768 "Wd"
 *   insn=0x00000000004A8770 string=0x00000000004A8774 "4"
 *   insn=0x00000000004A8778 string=0x00000000004A877C ""
 *   insn=0x00000000004A8788 string=0x00000000004A878C "\t@"
 *   insn=0x00000000004A8798 string=0x00000000004A879C ""
 *   insn=0x00000000004A87A8 string=0x00000000004A87AC "@"
 *   insn=0x00000000004A87BC string=0x00000000004A87C0 ")"
 *   insn=0x00000000004A87D0 string=0x00000000004A87D4 ")=G"
 *   insn=0x00000000004A87D4 string=0x00000000004A87D8 "!"
 *   insn=0x00000000004A87D8 string=0x00000000004A87DC "i"
 *   insn=0x00000000004A87DC string=0x00000000004A87E0 "\t"
 *   insn=0x00000000004A87DC string=0x00000000004A8808 "\t"
 *   insn=0x00000000004A87E0 string=0x00000000004A87E4 "*"
 *   insn=0x00000000004A87E4 string=0x00000000004A87E8 "\n"
 *   insn=0x00000000004A87EC string=0x00000000004A87F0 "?"
 *   insn=0x00000000004A87F0 string=0x00000000004A87F4 "L"
 *   insn=0x00000000004A8800 string=0x00000000004A8804 "0d"
 *   insn=0x00000000004A8808 string=0x00000000004A880C "*"
 *   insn=0x00000000004A880C string=0x00000000004A8810 "\n"
 *   insn=0x00000000004A8810 string=0x00000000004A8814 "?"
 *   insn=0x00000000004A8814 string=0x00000000004A8818 ""
 *   insn=0x00000000004A881C string=0x00000000004A8820 ")d"
 *   insn=0x00000000004A8828 string=0x00000000004A882C "J"
 *   insn=0x00000000004A8830 string=0x00000000004A8834 "(a"
 *   insn=0x00000000004A8840 string=0x00000000004A8844 "J=G"
 *   insn=0x00000000004A8844 string=0x00000000004A8848 ")!"
 *   insn=0x00000000004A884C string=0x00000000004A8850 "*"
 *   insn=0x00000000004A884C string=0x00000000004A887C "*"
 *   insn=0x00000000004A8850 string=0x00000000004A8854 "K"
 *   insn=0x00000000004A8854 string=0x00000000004A8858 "+"
 *   insn=0x00000000004A885C string=0x00000000004A8860 "_"
 *   insn=0x00000000004A887C string=0x00000000004A8880 "K"
 *   insn=0x00000000004A8880 string=0x00000000004A8884 "+"
 *   insn=0x00000000004A8884 string=0x00000000004A8888 "_"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

_QWORD *__fastcall std::map<std::string,boost::shared_ptr<Caver::GUIViewLayout>>::operator[](
        _QWORD *a1,
        const void **a2)
{
  _QWORD *v2; // x19
  _QWORD *v3; // x28
  const void *v4; // x23
  const void **v5; // x22
  unsigned __int64 v6; // x25
  _QWORD *v7; // x20
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
  _QWORD *v20; // x0
  _QWORD *v21; // x1
  _QWORD *v22; // x22
  unsigned int v23; // w23
  _QWORD *v24; // x1
  unsigned __int64 v25; // x8
  unsigned __int64 v26; // x9
  __int64 v27; // x19
  size_t v28; // x2
  unsigned int v29; // w0
  _QWORD *v30; // x0
  _QWORD *v31; // x20
  __int64 v32; // x8
  __int64 v33; // x8
  char *v34; // x0
  int v36; // w0
  unsigned int *v37; // x8
  int v38; // w9
  void *v40[2]; // [xsp+18h] [xbp-78h] BYREF
  _QWORD *v41; // [xsp+28h] [xbp-68h]
  __int64 v42; // [xsp+38h] [xbp-58h]

  v2 = a1 + 1;
  v42 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  v3 = (_QWORD *)a1[2];
  if ( v3 )
  {
    v4 = *a2;
    v5 = a2;
    v6 = *((_QWORD *)*a2 - 3);
    v7 = a1 + 1;
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
        v2 = v3;
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
  v7 = a1 + 1;
LABEL_18:
  if ( v2 != v7 )
  {
    v14 = (_QWORD *)v2[4];
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
        return v2 + 5;
    }
    else
    {
      if ( v17 > 0x7FFFFFFF )
        return v2 + 5;
      v36 = v17 <= (__int64)0xFFFFFFFF80000000LL ? 0x80000000 : v17;
      if ( (v36 & 0x80000000) == 0 )
        return v2 + 5;
    }
  }
  sub_56A528(v40, v5);
  v40[1] = 0;
  v41 = 0;
  std::_Rb_tree<std::string,std::pair<std::string const,boost::shared_ptr<Caver::GUIViewLayout>>,std::_Select1st<std::pair<std::string const,boost::shared_ptr<Caver::GUIViewLayout>>>,std::less<std::string>,std::allocator<std::pair<std::string const,boost::shared_ptr<Caver::GUIViewLayout>>>>::_M_get_insert_hint_unique_pos();
  v2 = v20;
  v22 = v21;
  if ( v21 )
  {
    v23 = 1;
    if ( !v20 && v7 != v21 )
    {
      v24 = (_QWORD *)v21[4];
      v25 = *((_QWORD *)v40[0] - 3);
      v26 = *(v24 - 3);
      v27 = v25 - v26;
      if ( v25 <= v26 )
        v28 = *((_QWORD *)v40[0] - 3);
      else
        v28 = *(v24 - 3);
      v29 = memcmp(v40[0], v24, v28);
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
    std::_Rb_tree<std::string,std::pair<std::string const,boost::shared_ptr<Caver::GUIViewLayout>>,std::_Select1st<std::pair<std::string const,boost::shared_ptr<Caver::GUIViewLayout>>>,std::less<std::string>,std::allocator<std::pair<std::string const,boost::shared_ptr<Caver::GUIViewLayout>>>>::_M_create_node();
    v2 = v30;
    sub_54C8A0(v23, v30, v22, v7);
    ++a1[5];
  }
  v31 = v41;
  if ( v41 )
  {
    v32 = v41[1] - 1LL;
    v41[1] = v32;
    if ( !v32 )
    {
      (*(void (__fastcall **)(_QWORD *))(*v31 + 16LL))(v31);
      v33 = v31[2] - 1LL;
      v31[2] = v33;
      if ( !v33 )
        (*(void (__fastcall **)(_QWORD *))(*v31 + 24LL))(v31);
    }
  }
  v34 = (char *)v40[0] - 24;
  if ( (char *)v40[0] - 24 != (char *)&qword_6FD2E0 )
  {
    v37 = (unsigned int *)((char *)v40[0] - 8);
    if ( &pthread_create )
    {
      do
        v38 = __ldaxr(v37);
      while ( __stlxr(v38 - 1, v37) );
    }
    else
    {
      v38 = (*v37)--;
    }
    if ( v38 <= 0 )
      operator delete(v34);
  }
  return v2 + 5;
}

