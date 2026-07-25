/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000037E500
 * Mangled: _ZNSt3mapISsdSt4lessISsESaISt4pairIKSsdEEEixERS3_
 * Demangled: std::map<std::string,double,std::less<std::string>,std::allocator<std::pair<std::string const,double>>>::operator[](std::string const&)
 *
 * Callers: 1
 *   0x00000000001FEFF0  std::map<std::string,double,std::less<std::string>,std::allocator<std::pair<std::string const,double>>>::operator[](std::string const&)
 *
 * Callees: 9
 *   0x00000000001F5190  .memcmp
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F8EA0  std::_Rb_tree<std::string,std::pair<std::string const,double>,std::_Select1st<std::pair<std::string const,double>>,std::less<std::string>,std::allocator<std::pair<std::string const,double>>>::_M_create_node(std::pair<std::string const,double> const&)
 *   0x00000000001FDC00  std::_Rb_tree<std::string,std::pair<std::string const,double>,std::_Select1st<std::pair<std::string const,double>>,std::less<std::string>,std::allocator<std::pair<std::string const,double>>>::_M_get_insert_hint_unique_pos(std::_Rb_tree_const_iterator<std::pair<std::string const,double>>,std::string const&)
 *   0x000000000054C8A0  sub_54C8A0
 *   0x000000000056A3A4  operator delete(void *)
 *   0x000000000056A528  sub_56A528
 *   0x00000000005818C4  sub_5818C4
 *   0x00000000006FE668  pthread_create
 *
 * Referenced strings: 57
 *   insn=0x000000000037E51C string=0x000000000037E520 "I"
 *   insn=0x000000000037E520 string=0x000000000037E524 "("
 *   insn=0x000000000037E538 string=0x000000000037E53C "7"
 *   insn=0x000000000037E55C string=0x000000000037E560 ""
 *   insn=0x000000000037E564 string=0x000000000037E568 """
 *   insn=0x000000000037E568 string=0x000000000037E56C "\t"
 *   insn=0x000000000037E56C string=0x00000000001F5190 "P'"
 *   insn=0x000000000037E570 string=0x000000000037E574 "@"
 *   insn=0x000000000037E580 string=0x000000000037E584 ""
 *   insn=0x000000000037E5C0 string=0x000000000037E5C4 "@"
 *   insn=0x000000000037E5CC string=0x000000000037E5D0 ""
 *   insn=0x000000000037E5D0 string=0x000000000037E5D4 ")"
 *   insn=0x000000000037E5D8 string=0x000000000037E5DC """
 *   insn=0x000000000037E5E0 string=0x000000000037E5E4 " "
 *   insn=0x000000000037E5E4 string=0x000000000037E5E8 "@"
 *   insn=0x000000000037E604 string=0x000000000037E608 "~"
 *   insn=0x000000000037E608 string=0x00000000001FDC00 "0'"
 *   insn=0x000000000037E610 string=0x000000000037E614 "6"
 *   insn=0x000000000037E618 string=0x000000000037E61C "u"
 *   insn=0x000000000037E620 string=0x000000000037E624 " "
 *   insn=0x000000000037E62C string=0x000000000037E630 ""
 *   insn=0x000000000037E630 string=0x000000000037E634 ")"
 *   insn=0x000000000037E638 string=0x000000000037E63C """
 *   insn=0x000000000037E670 string=0x00000000001F8EA0 "0'"
 *   insn=0x000000000037E688 string=0x000000000037E68C "h"
 *   insn=0x000000000037E68C string=0x000000000037E690 ""
 *   insn=0x000000000037E690 string=0x000000000037E694 "h"
 *   insn=0x000000000037E698 string=0x000000000037E69C ")"
 *   insn=0x000000000037E69C string=0x000000000037E6A0 ")"
 *   insn=0x000000000037E6AC string=0x000000000037E70C ")"
 *   insn=0x000000000037E6B0 string=0x000000000037E6B4 ""
 *   insn=0x000000000037E700 string=0x000000000037E704 "`"
 *   insn=0x000000000037E70C string=0x000000000037E710 ")=G"
 *   insn=0x000000000037E710 string=0x000000000037E714 "!"
 *   insn=0x000000000037E718 string=0x000000000037E71C "\t"
 *   insn=0x000000000037E718 string=0x000000000037E730 "\t"
 *   insn=0x000000000037E71C string=0x000000000037E720 "*"
 *   insn=0x000000000037E720 string=0x000000000037E724 "\n"
 *   insn=0x000000000037E72C string=0x000000000037E73C "?"
 *   insn=0x000000000037E730 string=0x000000000037E734 "*"
 *   insn=0x000000000037E734 string=0x000000000037E738 "\n"
 *   insn=0x000000000037E750 string=0x00000000001F62D0 "0'"
 *   insn=0x000000000037E754 string=0x000000000037E758 "*"
 *   insn=0x000000000037E758 string=0x000000000037E75C "J"
 *   insn=0x000000000037E760 string=0x000000000037E764 "(a"
 *   insn=0x000000000037E76C string=0x000000000037E770 "*"
 *   insn=0x000000000037E770 string=0x000000000037E774 "J=G"
 *   insn=0x000000000037E774 string=0x000000000037E778 ")!"
 *   insn=0x000000000037E77C string=0x000000000037E780 "*"
 *   insn=0x000000000037E77C string=0x000000000037E7AC "*"
 *   insn=0x000000000037E780 string=0x000000000037E784 "K"
 *   insn=0x000000000037E784 string=0x000000000037E788 "+"
 *   insn=0x000000000037E78C string=0x000000000037E790 "_"
 *   insn=0x000000000037E7A4 string=0x000000000037E7A8 "G"
 *   insn=0x000000000037E7AC string=0x000000000037E7B0 "K"
 *   insn=0x000000000037E7B0 string=0x000000000037E7B4 "+"
 *   insn=0x000000000037E7B4 string=0x000000000037E7B8 "_"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall std::map<std::string,double>::operator[](__int64 a1, const void **a2)
{
  __int64 node; // x21
  _QWORD *v3; // x28
  const void *v4; // x23
  const void **v5; // x22
  unsigned __int64 v6; // x25
  __int64 v7; // x19
  _QWORD *v8; // x0
  unsigned __int64 v9; // x8
  __int64 v10; // x20
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
  __int64 v27; // x21
  size_t v28; // x2
  unsigned int v29; // w0
  char *v30; // x0
  int v32; // w0
  unsigned int *v33; // x8
  int v34; // w9
  void *v36[4]; // [xsp+10h] [xbp-70h] BYREF

  node = a1 + 8;
  v36[3] = *(void **)(_ReadStatusReg(TPIDR_EL0) + 40);
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
      v32 = v17 <= (__int64)0xFFFFFFFF80000000LL ? 0x80000000 : v17;
      if ( (v32 & 0x80000000) == 0 )
        return node + 40;
    }
  }
  sub_56A528(v36, v5);
  v36[1] = 0;
  std::_Rb_tree<std::string,std::pair<std::string const,double>,std::_Select1st<std::pair<std::string const,double>>,std::less<std::string>,std::allocator<std::pair<std::string const,double>>>::_M_get_insert_hint_unique_pos();
  node = v20;
  v22 = v21;
  if ( v21 )
  {
    v23 = 1;
    if ( !v20 && v7 != v21 )
    {
      v24 = *(_QWORD **)(v21 + 32);
      v25 = *((_QWORD *)v36[0] - 3);
      v26 = *(v24 - 3);
      v27 = v25 - v26;
      if ( v25 <= v26 )
        v28 = *((_QWORD *)v36[0] - 3);
      else
        v28 = *(v24 - 3);
      v29 = memcmp(v36[0], v24, v28);
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
    node = std::_Rb_tree<std::string,std::pair<std::string const,double>,std::_Select1st<std::pair<std::string const,double>>,std::less<std::string>,std::allocator<std::pair<std::string const,double>>>::_M_create_node();
    sub_54C8A0(v23, node, v22, v7);
    ++*(_QWORD *)(a1 + 40);
  }
  v30 = (char *)v36[0] - 24;
  if ( (char *)v36[0] - 24 != (char *)&qword_6FD2E0 )
  {
    v33 = (unsigned int *)((char *)v36[0] - 8);
    if ( &pthread_create )
    {
      do
        v34 = __ldaxr(v33);
      while ( __stlxr(v34 - 1, v33) );
    }
    else
    {
      v34 = (*v33)--;
    }
    if ( v34 <= 0 )
      operator delete(v30);
  }
  return node + 40;
}

