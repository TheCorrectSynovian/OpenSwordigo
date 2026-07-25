/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002339FC
 * Mangled: _ZNSt3mapISsSsSt4lessISsESaISt4pairIKSsSsEEEixERS3_
 * Demangled: std::map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string const,std::string>>>::operator[](std::string const&)
 *
 * Callers: 1
 *   0x00000000001FE720  std::map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string const,std::string>>>::operator[](std::string const&)
 *
 * Callees: 9
 *   0x00000000001F5190  .memcmp
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001FD630  std::_Rb_tree<std::string,std::pair<std::string const,std::string>,std::_Select1st<std::pair<std::string const,std::string>>,std::less<std::string>,std::allocator<std::pair<std::string const,std::string>>>::_M_get_insert_hint_unique_pos(std::_Rb_tree_const_iterator<std::pair<std::string const,std::string>>,std::string const&)
 *   0x00000000002037E0  std::_Rb_tree<std::string,std::pair<std::string const,std::string>,std::_Select1st<std::pair<std::string const,std::string>>,std::less<std::string>,std::allocator<std::pair<std::string const,std::string>>>::_M_create_node(std::pair<std::string const,std::string> const&)
 *   0x000000000054C8A0  sub_54C8A0
 *   0x000000000056A3A4  operator delete(void *)
 *   0x000000000056A528  sub_56A528
 *   0x00000000005818C4  sub_5818C4
 *   0x00000000006FE668  pthread_create
 *
 * Referenced strings: 108
 *   insn=0x0000000000233A18 string=0x0000000000233A1C "I"
 *   insn=0x0000000000233A1C string=0x0000000000233A20 "("
 *   insn=0x0000000000233A38 string=0x0000000000233A3C "|"
 *   insn=0x0000000000233A58 string=0x0000000000233A5C ""
 *   insn=0x0000000000233A60 string=0x0000000000233A64 """
 *   insn=0x0000000000233A68 string=0x00000000001F5190 "P'"
 *   insn=0x0000000000233A6C string=0x0000000000233A70 "@"
 *   insn=0x0000000000233A7C string=0x0000000000233A80 "\n"
 *   insn=0x0000000000233AAC string=0x0000000000233AB0 "@"
 *   insn=0x0000000000233AB4 string=0x0000000000233AB8 "a"
 *   insn=0x0000000000233AB8 string=0x0000000000233ABC ""
 *   insn=0x0000000000233ABC string=0x0000000000233AC0 ")"
 *   insn=0x0000000000233AC4 string=0x0000000000233AC8 """
 *   insn=0x0000000000233AD8 string=0x0000000000233ADC "9"
 *   insn=0x0000000000233ADC string=0x0000000000233AE0 "(c"
 *   insn=0x0000000000233B10 string=0x00000000001FD630 "0'"
 *   insn=0x0000000000233B1C string=0x0000000000233B20 "6"
 *   insn=0x0000000000233B24 string=0x0000000000233B28 "s"
 *   insn=0x0000000000233B2C string=0x0000000000233B30 " "
 *   insn=0x0000000000233B38 string=0x0000000000233B3C ""
 *   insn=0x0000000000233B3C string=0x0000000000233B40 ")"
 *   insn=0x0000000000233B44 string=0x0000000000233B48 """
 *   insn=0x0000000000233B68 string=0x0000000000233B6C "`"
 *   insn=0x0000000000233B90 string=0x0000000000233B94 "Cc"
 *   insn=0x0000000000233B98 string=0x0000000000233B9C ""
 *   insn=0x0000000000233BCC string=0x0000000000233BD0 "A"
 *   insn=0x0000000000233BD4 string=0x0000000000233BD8 ""
 *   insn=0x0000000000233BE4 string=0x0000000000233BE8 "`"
 *   insn=0x0000000000233BE4 string=0x0000000000233CFC "u\t"
 *   insn=0x0000000000233C24 string=0x0000000000233C28 "`"
 *   insn=0x0000000000233C30 string=0x0000000000233C34 ")=G"
 *   insn=0x0000000000233C34 string=0x0000000000233C38 "!"
 *   insn=0x0000000000233C38 string=0x0000000000233C3C "\t"
 *   insn=0x0000000000233C3C string=0x0000000000233C40 "\t"
 *   insn=0x0000000000233C3C string=0x0000000000233C9C "\t"
 *   insn=0x0000000000233C40 string=0x0000000000233C44 "*"
 *   insn=0x0000000000233C44 string=0x0000000000233C48 "\n"
 *   insn=0x0000000000233C50 string=0x0000000000233CA8 "?"
 *   insn=0x0000000000233C54 string=0x0000000000233C58 ")=G"
 *   insn=0x0000000000233C58 string=0x0000000000233C5C "!"
 *   insn=0x0000000000233C60 string=0x0000000000233C64 "\t"
 *   insn=0x0000000000233C60 string=0x0000000000233CBC "\t"
 *   insn=0x0000000000233C64 string=0x0000000000233C68 "*"
 *   insn=0x0000000000233C68 string=0x0000000000233C6C "\n"
 *   insn=0x0000000000233C74 string=0x0000000000233CC8 "?"
 *   insn=0x0000000000233C78 string=0x0000000000233C7C ")=G"
 *   insn=0x0000000000233C7C string=0x0000000000233C80 "!"
 *   insn=0x0000000000233C84 string=0x0000000000233C88 "\t"
 *   insn=0x0000000000233C84 string=0x0000000000233CDC "\t"
 *   insn=0x0000000000233C88 string=0x0000000000233C8C "*"
 *   insn=0x0000000000233C8C string=0x0000000000233C90 "\n"
 *   insn=0x0000000000233C98 string=0x0000000000233CE8 "?"
 *   insn=0x0000000000233C9C string=0x0000000000233CA0 "*"
 *   insn=0x0000000000233CA0 string=0x0000000000233CA4 "\n"
 *   insn=0x0000000000233CA8 string=0x0000000000233CAC "L"
 *   insn=0x0000000000233CBC string=0x0000000000233CC0 "*"
 *   insn=0x0000000000233CC0 string=0x0000000000233CC4 "\n"
 *   insn=0x0000000000233CDC string=0x0000000000233CE0 "*"
 *   insn=0x0000000000233CE0 string=0x0000000000233CE4 "\n"
 *   insn=0x0000000000233CE8 string=0x0000000000233CEC "L"
 *   insn=0x0000000000233CFC string=0x00000000001F62D0 "0'"
 *   insn=0x0000000000233D04 string=0x0000000000233D08 "(a"
 *   insn=0x0000000000233D14 string=0x0000000000233D18 "J=G"
 *   insn=0x0000000000233D18 string=0x0000000000233D1C ")!"
 *   insn=0x0000000000233D20 string=0x0000000000233D24 "*"
 *   insn=0x0000000000233D20 string=0x0000000000233D38 "*"
 *   insn=0x0000000000233D24 string=0x0000000000233D28 "K"
 *   insn=0x0000000000233D28 string=0x0000000000233D2C "+"
 *   insn=0x0000000000233D34 string=0x0000000000233D44 "_"
 *   insn=0x0000000000233D38 string=0x0000000000233D3C "K"
 *   insn=0x0000000000233D3C string=0x0000000000233D40 "+"
 *   insn=0x0000000000233D50 string=0x0000000000233D54 "?"
 *   insn=0x0000000000233D54 string=0x0000000000233E50 "U"
 *   insn=0x0000000000233D58 string=0x0000000000233D5C "\n"
 *   insn=0x0000000000233D64 string=0x0000000000233D68 "(a"
 *   insn=0x0000000000233D94 string=0x0000000000233D98 ")=G"
 *   insn=0x0000000000233D98 string=0x0000000000233D9C "!"
 *   insn=0x0000000000233DA0 string=0x0000000000233DA4 "\t"
 *   insn=0x0000000000233DA0 string=0x0000000000233E58 "\t"
 *   insn=0x0000000000233DA4 string=0x0000000000233DA8 "*"
 *   insn=0x0000000000233DA8 string=0x0000000000233DAC "\n"
 *   insn=0x0000000000233DB0 string=0x0000000000233DB4 "?"
 *   insn=0x0000000000233DB4 string=0x0000000000233DB8 "l"
 *   insn=0x0000000000233DBC string=0x0000000000233DC0 "y"
 *   insn=0x0000000000233DCC string=0x0000000000233DD0 "J=G"
 *   insn=0x0000000000233DD0 string=0x0000000000233DD4 ")!"
 *   insn=0x0000000000233DD8 string=0x0000000000233DDC "*"
 *   insn=0x0000000000233DD8 string=0x0000000000233E14 "*"
 *   insn=0x0000000000233DDC string=0x0000000000233DE0 "K"
 *   insn=0x0000000000233DE0 string=0x0000000000233DE4 "+"
 *   insn=0x0000000000233DE8 string=0x0000000000233DEC ""
 *   insn=0x0000000000233DEC string=0x0000000000233E20 "_"
 *   insn=0x0000000000233DF0 string=0x0000000000233DF4 ")=G"
 *   insn=0x0000000000233DF4 string=0x0000000000233DF8 "!"
 *   insn=0x0000000000233DFC string=0x0000000000233E00 "\t"
 *   insn=0x0000000000233DFC string=0x0000000000233E38 "\t"
 *   insn=0x0000000000233E00 string=0x0000000000233E04 "*"
 *   insn=0x0000000000233E04 string=0x0000000000233E08 "\n"
 *   insn=0x0000000000233E0C string=0x0000000000233E10 ""
 *   insn=0x0000000000233E10 string=0x0000000000233E44 "?"
 *   insn=0x0000000000233E14 string=0x0000000000233E18 "K"
 *   insn=0x0000000000233E18 string=0x0000000000233E1C "+"
 *   insn=0x0000000000233E2C string=0x0000000000233E30 "]"
 *   insn=0x0000000000233E38 string=0x0000000000233E3C "*"
 *   insn=0x0000000000233E3C string=0x0000000000233E40 "\n"
 *   insn=0x0000000000233E58 string=0x0000000000233E5C "*"
 *   insn=0x0000000000233E5C string=0x0000000000233E60 "\n"
 *   insn=0x0000000000233E60 string=0x0000000000233E64 "?"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall std::map<std::string,std::string>::operator[](__int64 a1, const void **a2)
{
  __int64 node; // x19
  _QWORD *v5; // x28
  const void *v6; // x23
  unsigned __int64 v7; // x25
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
  void *v30; // x0
  char *v31; // x0
  char *v32; // x0
  int v34; // w0
  unsigned int *v35; // x8
  int v36; // w9
  unsigned int *v37; // x8
  int v38; // w9
  unsigned int *v39; // x8
  int v40; // w9
  __int64 v41; // [xsp+10h] [xbp-80h]
  char *v42; // [xsp+18h] [xbp-78h] BYREF
  void *v43; // [xsp+20h] [xbp-70h] BYREF
  _QWORD v44[3]; // [xsp+28h] [xbp-68h] BYREF

  node = a1 + 8;
  v44[2] = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  v5 = *(_QWORD **)(a1 + 16);
  v41 = a1 + 8;
  if ( v5 )
  {
    v6 = *a2;
    v7 = *((_QWORD *)*a2 - 3);
    do
    {
      while ( 1 )
      {
        v8 = (_QWORD *)v5[4];
        v9 = *(v8 - 3);
        v10 = v9 - v7;
        v11 = v9 <= v7 ? *(v8 - 3) : v7;
        v12 = memcmp(v8, v6, v11);
        if ( v12 )
          break;
        if ( v10 <= 0x7FFFFFFF )
        {
          v13 = v10 <= (__int64)0xFFFFFFFF80000000LL ? 0x80000000 : v10;
          if ( v13 < 0 )
            goto LABEL_8;
        }
LABEL_15:
        node = (__int64)v5;
        v5 = (_QWORD *)v5[2];
        if ( !v5 )
          goto LABEL_16;
      }
      if ( (v12 & 0x80000000) == 0 )
        goto LABEL_15;
LABEL_8:
      v5 = (_QWORD *)v5[3];
    }
    while ( v5 );
  }
LABEL_16:
  if ( node != v41 )
  {
    v14 = *(_QWORD **)(node + 32);
    v15 = *((_QWORD *)*a2 - 3);
    v16 = *(v14 - 3);
    v17 = v15 - v16;
    if ( v15 <= v16 )
      v18 = *((_QWORD *)*a2 - 3);
    else
      v18 = *(v14 - 3);
    v19 = memcmp(*a2, v14, v18);
    if ( v19 )
    {
      if ( (v19 & 0x80000000) == 0 )
        return node + 40;
    }
    else
    {
      if ( v17 > 0x7FFFFFFF )
        return node + 40;
      v34 = v17 <= (__int64)0xFFFFFFFF80000000LL ? 0x80000000 : v17;
      if ( (v34 & 0x80000000) == 0 )
        return node + 40;
    }
  }
  v42 = &byte_6FD2F8;
  sub_56A528(&v43, a2);
  sub_56A528(v44, &v42);
  insert_hint_unique_pos = std::_Rb_tree<std::string,std::pair<std::string const,std::string>,std::_Select1st<std::pair<std::string const,std::string>>,std::less<std::string>,std::allocator<std::pair<std::string const,std::string>>>::_M_get_insert_hint_unique_pos();
  node = insert_hint_unique_pos;
  v22 = v21;
  if ( v21 )
  {
    v23 = 1;
    if ( !insert_hint_unique_pos && v41 != v21 )
    {
      v24 = *(_QWORD **)(v21 + 32);
      v25 = *((_QWORD *)v43 - 3);
      v26 = *(v24 - 3);
      v27 = v25 - v26;
      if ( v25 <= v26 )
        v28 = *((_QWORD *)v43 - 3);
      else
        v28 = *(v24 - 3);
      v29 = memcmp(v43, v24, v28);
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
    node = std::_Rb_tree<std::string,std::pair<std::string const,std::string>,std::_Select1st<std::pair<std::string const,std::string>>,std::less<std::string>,std::allocator<std::pair<std::string const,std::string>>>::_M_create_node();
    sub_54C8A0(v23, node, v22, v41);
    ++*(_QWORD *)(a1 + 40);
  }
  v30 = (void *)(v44[0] - 24LL);
  if ( (__int64 *)(v44[0] - 24LL) != &qword_6FD2E0 )
  {
    v35 = (unsigned int *)(v44[0] - 8LL);
    if ( &pthread_create )
    {
      do
        v36 = __ldaxr(v35);
      while ( __stlxr(v36 - 1, v35) );
    }
    else
    {
      v36 = (*v35)--;
    }
    if ( v36 <= 0 )
      operator delete(v30);
  }
  v31 = (char *)v43 - 24;
  if ( (char *)v43 - 24 != (char *)&qword_6FD2E0 )
  {
    v37 = (unsigned int *)((char *)v43 - 8);
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
      operator delete(v31);
  }
  v32 = v42 - 24;
  if ( v42 - 24 != (char *)&qword_6FD2E0 )
  {
    v39 = (unsigned int *)(v42 - 8);
    if ( &pthread_create )
    {
      do
        v40 = __ldaxr(v39);
      while ( __stlxr(v40 - 1, v39) );
    }
    else
    {
      v40 = (*v39)--;
    }
    if ( v40 <= 0 )
      operator delete(v32);
  }
  return node + 40;
}

