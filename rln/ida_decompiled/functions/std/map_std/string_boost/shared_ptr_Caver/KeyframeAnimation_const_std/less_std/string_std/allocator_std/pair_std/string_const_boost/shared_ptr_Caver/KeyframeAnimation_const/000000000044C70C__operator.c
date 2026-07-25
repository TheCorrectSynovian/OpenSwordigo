/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000044C70C
 * Mangled: _ZNSt3mapISsN5boost10shared_ptrIKN5Caver17KeyframeAnimationEEESt4lessISsESaISt4pairIKSsS5_EEEixERS9_
 * Demangled: std::map<std::string,boost::shared_ptr<Caver::KeyframeAnimation const>,std::less<std::string>,std::allocator<std::pair<std::string const,boost::shared_ptr<Caver::KeyframeAnimation const>>>>::operator[](std::string const&)
 *
 * Callers: 1
 *   0x00000000001FE8D0  std::map<std::string,boost::shared_ptr<Caver::KeyframeAnimation const>,std::less<std::string>,std::allocator<std::pair<std::string const,boost::shared_ptr<Caver::KeyframeAnimation const>>>>::operator[](std::string const&)
 *
 * Callees: 10
 *   0x00000000001F5190  .memcmp
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001FCCC0  std::_Rb_tree<std::string,std::pair<std::string const,boost::shared_ptr<Caver::KeyframeAnimation const>>,std::_Select1st<std::pair<std::string const,boost::shared_ptr<Caver::KeyframeAnimation const>>>,std::less<std::string>,std::allocator<std::pair<std::string const,boost::shared_ptr<Caver::KeyframeAnimation const>>>>::_M_create_node(std::pair<std::string const,boost::shared_ptr<Caver::KeyframeAnimation const>> const&)
 *   0x00000000002018B0  std::_Rb_tree<std::string,std::pair<std::string const,boost::shared_ptr<Caver::KeyframeAnimation const>>,std::_Select1st<std::pair<std::string const,boost::shared_ptr<Caver::KeyframeAnimation const>>>,std::less<std::string>,std::allocator<std::pair<std::string const,boost::shared_ptr<Caver::KeyframeAnimation const>>>>::_M_get_insert_hint_unique_pos(std::_Rb_tree_const_iterator<std::pair<std::string const,boost::shared_ptr<Caver::KeyframeAnimation const>>>,std::string const&)
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x000000000054C8A0  sub_54C8A0
 *   0x000000000056A3A4  operator delete(void *)
 *   0x000000000056A528  sub_56A528
 *   0x00000000005818C4  sub_5818C4
 *   0x00000000006FE668  pthread_create
 *
 * Referenced strings: 95
 *   insn=0x000000000044C728 string=0x000000000044C72C "H"
 *   insn=0x000000000044C730 string=0x000000000044C734 ""
 *   insn=0x000000000044C748 string=0x000000000044C74C "7"
 *   insn=0x000000000044C76C string=0x000000000044C770 ""
 *   insn=0x000000000044C774 string=0x000000000044C778 """
 *   insn=0x000000000044C77C string=0x00000000001F5190 "P'"
 *   insn=0x000000000044C780 string=0x000000000044C784 "@"
 *   insn=0x000000000044C790 string=0x000000000044C794 ""
 *   insn=0x000000000044C7D0 string=0x000000000044C7D4 "@"
 *   insn=0x000000000044C7D8 string=0x000000000044C7DC "a"
 *   insn=0x000000000044C7DC string=0x000000000044C7E0 ""
 *   insn=0x000000000044C7E0 string=0x000000000044C7E4 ")"
 *   insn=0x000000000044C7E8 string=0x000000000044C7EC """
 *   insn=0x000000000044C7EC string=0x000000000044C7F0 "h"
 *   insn=0x000000000044C7F0 string=0x000000000044C7F4 "`\n"
 *   insn=0x000000000044C800 string=0x000000000044C804 "Iw"
 *   insn=0x000000000044C814 string=0x000000000044C818 "&"
 *   insn=0x000000000044C820 string=0x000000000044C824 "6"
 *   insn=0x000000000044C828 string=0x000000000044C82C "s"
 *   insn=0x000000000044C830 string=0x000000000044C834 " "
 *   insn=0x000000000044C83C string=0x000000000044C840 ""
 *   insn=0x000000000044C840 string=0x000000000044C844 ")"
 *   insn=0x000000000044C848 string=0x000000000044C84C """
 *   insn=0x000000000044C84C string=0x000000000044C850 "P"
 *   insn=0x000000000044C86C string=0x000000000044C870 "`"
 *   insn=0x000000000044C880 string=0x00000000001FCCC0 "0'"
 *   insn=0x000000000044C89C string=0x000000000044C8A0 ""
 *   insn=0x000000000044C8A8 string=0x000000000044C8AC "4"
 *   insn=0x000000000044C8B0 string=0x000000000044C8B4 ""
 *   insn=0x000000000044C8C0 string=0x000000000044C8C4 "\t@"
 *   insn=0x000000000044C8D0 string=0x000000000044C8D4 ""
 *   insn=0x000000000044C8E0 string=0x000000000044C8E4 "@"
 *   insn=0x000000000044C8F4 string=0x000000000044C8F8 ")"
 *   insn=0x000000000044C908 string=0x000000000044C90C ""
 *   insn=0x000000000044C918 string=0x000000000044C91C "`"
 *   insn=0x000000000044C918 string=0x000000000044C9A8 "J"
 *   insn=0x000000000044C958 string=0x000000000044C95C "`"
 *   insn=0x000000000044C964 string=0x000000000044C968 ")=G"
 *   insn=0x000000000044C968 string=0x000000000044C96C "!"
 *   insn=0x000000000044C970 string=0x000000000044C974 "\t"
 *   insn=0x000000000044C970 string=0x000000000044C988 "\t"
 *   insn=0x000000000044C974 string=0x000000000044C978 "*"
 *   insn=0x000000000044C978 string=0x000000000044C97C "\n"
 *   insn=0x000000000044C984 string=0x000000000044C994 "?"
 *   insn=0x000000000044C988 string=0x000000000044C98C "*"
 *   insn=0x000000000044C98C string=0x000000000044C990 "\n"
 *   insn=0x000000000044C9A8 string=0x00000000001F62D0 "0'"
 *   insn=0x000000000044C9B0 string=0x000000000044C9B4 "J"
 *   insn=0x000000000044C9B8 string=0x000000000044C9BC "(a"
 *   insn=0x000000000044C9C8 string=0x000000000044C9CC "J=G"
 *   insn=0x000000000044C9CC string=0x000000000044C9D0 ")!"
 *   insn=0x000000000044C9D4 string=0x000000000044C9D8 "*"
 *   insn=0x000000000044C9D4 string=0x000000000044CA04 "*"
 *   insn=0x000000000044C9D8 string=0x000000000044C9DC "K"
 *   insn=0x000000000044C9DC string=0x000000000044C9E0 "+"
 *   insn=0x000000000044C9E4 string=0x000000000044C9E8 "_"
 *   insn=0x000000000044C9E8 string=0x000000000044C9EC "l"
 *   insn=0x000000000044C9F4 string=0x000000000044C9F8 "kv"
 *   insn=0x000000000044CA04 string=0x000000000044CA08 "K"
 *   insn=0x000000000044CA08 string=0x000000000044CA0C "+"
 *   insn=0x000000000044CA0C string=0x000000000044CA10 "_"
 *   insn=0x000000000044CA14 string=0x000000000044CA18 "0"
 *   insn=0x000000000044CA2C string=0x000000000044CA30 "4"
 *   insn=0x000000000044CA34 string=0x000000000044CA38 ""
 *   insn=0x000000000044CA44 string=0x000000000044CA48 "\t@"
 *   insn=0x000000000044CA54 string=0x000000000044CA58 ""
 *   insn=0x000000000044CA64 string=0x000000000044CA68 "@"
 *   insn=0x000000000044CA78 string=0x000000000044CA7C ")"
 *   insn=0x000000000044CA8C string=0x000000000044CA90 ")=G"
 *   insn=0x000000000044CA90 string=0x000000000044CA94 "!"
 *   insn=0x000000000044CA94 string=0x000000000044CA98 "i"
 *   insn=0x000000000044CA98 string=0x000000000044CA9C "\t"
 *   insn=0x000000000044CA98 string=0x000000000044CAC4 "\t"
 *   insn=0x000000000044CA9C string=0x000000000044CAA0 "*"
 *   insn=0x000000000044CAA0 string=0x000000000044CAA4 "\n"
 *   insn=0x000000000044CAA8 string=0x000000000044CAAC "?"
 *   insn=0x000000000044CAAC string=0x000000000044CAB0 "L"
 *   insn=0x000000000044CAB4 string=0x000000000044CAB8 ";v"
 *   insn=0x000000000044CAC4 string=0x000000000044CAC8 "*"
 *   insn=0x000000000044CAC8 string=0x000000000044CACC "\n"
 *   insn=0x000000000044CACC string=0x000000000044CAD0 "?"
 *   insn=0x000000000044CAD0 string=0x000000000044CAD4 ""
 *   insn=0x000000000044CAD8 string=0x000000000044CADC "z"
 *   insn=0x000000000044CAE4 string=0x000000000044CAE8 "J"
 *   insn=0x000000000044CAEC string=0x000000000044CAF0 "(a"
 *   insn=0x000000000044CAFC string=0x000000000044CB00 "J=G"
 *   insn=0x000000000044CB00 string=0x000000000044CB04 ")!"
 *   insn=0x000000000044CB08 string=0x000000000044CB0C "*"
 *   insn=0x000000000044CB08 string=0x000000000044CB38 "*"
 *   insn=0x000000000044CB0C string=0x000000000044CB10 "K"
 *   insn=0x000000000044CB10 string=0x000000000044CB14 "+"
 *   insn=0x000000000044CB18 string=0x000000000044CB1C "_"
 *   insn=0x000000000044CB38 string=0x000000000044CB3C "K"
 *   insn=0x000000000044CB3C string=0x000000000044CB40 "+"
 *   insn=0x000000000044CB40 string=0x000000000044CB44 "_"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall std::map<std::string,boost::shared_ptr<Caver::KeyframeAnimation const>>::operator[](
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
  insert_hint_unique_pos = std::_Rb_tree<std::string,std::pair<std::string const,boost::shared_ptr<Caver::KeyframeAnimation const>>,std::_Select1st<std::pair<std::string const,boost::shared_ptr<Caver::KeyframeAnimation const>>>,std::less<std::string>,std::allocator<std::pair<std::string const,boost::shared_ptr<Caver::KeyframeAnimation const>>>>::_M_get_insert_hint_unique_pos();
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
    node = std::_Rb_tree<std::string,std::pair<std::string const,boost::shared_ptr<Caver::KeyframeAnimation const>>,std::_Select1st<std::pair<std::string const,boost::shared_ptr<Caver::KeyframeAnimation const>>>,std::less<std::string>,std::allocator<std::pair<std::string const,boost::shared_ptr<Caver::KeyframeAnimation const>>>>::_M_create_node();
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

