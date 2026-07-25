/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000044BAB0
 * Mangled: _ZNSt3mapISsN5boost10shared_ptrIKN5Caver5ModelEEESt4lessISsESaISt4pairIKSsS5_EEEixERS9_
 * Demangled: std::map<std::string,boost::shared_ptr<Caver::Model const>,std::less<std::string>,std::allocator<std::pair<std::string const,boost::shared_ptr<Caver::Model const>>>>::operator[](std::string const&)
 *
 * Callers: 2
 *   0x00000000001FE200  std::map<std::string,boost::shared_ptr<Caver::Model const>,std::less<std::string>,std::allocator<std::pair<std::string const,boost::shared_ptr<Caver::Model const>>>>::operator[](std::string const&)
 *   0x000000000044B5C4  Caver::ModelLibrary::ModelForName(std::string const&)
 *
 * Callees: 10
 *   0x00000000001F5190  .memcmp
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F7D00  std::_Rb_tree<std::string,std::pair<std::string const,boost::shared_ptr<Caver::Model const>>,std::_Select1st<std::pair<std::string const,boost::shared_ptr<Caver::Model const>>>,std::less<std::string>,std::allocator<std::pair<std::string const,boost::shared_ptr<Caver::Model const>>>>::_M_create_node(std::pair<std::string const,boost::shared_ptr<Caver::Model const>> const&)
 *   0x00000000001FF9E0  std::_Rb_tree<std::string,std::pair<std::string const,boost::shared_ptr<Caver::Model const>>,std::_Select1st<std::pair<std::string const,boost::shared_ptr<Caver::Model const>>>,std::less<std::string>,std::allocator<std::pair<std::string const,boost::shared_ptr<Caver::Model const>>>>::_M_get_insert_hint_unique_pos(std::_Rb_tree_const_iterator<std::pair<std::string const,boost::shared_ptr<Caver::Model const>>>,std::string const&)
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x000000000054C8A0  sub_54C8A0
 *   0x000000000056A3A4  operator delete(void *)
 *   0x000000000056A528  sub_56A528
 *   0x00000000005818C4  sub_5818C4
 *   0x00000000006FE668  pthread_create
 *
 * Referenced strings: 93
 *   insn=0x000000000044BACC string=0x000000000044BAD0 "H"
 *   insn=0x000000000044BAD4 string=0x000000000044BAD8 ""
 *   insn=0x000000000044BAEC string=0x000000000044BAF0 "7"
 *   insn=0x000000000044BB10 string=0x000000000044BB14 ""
 *   insn=0x000000000044BB18 string=0x000000000044BB1C """
 *   insn=0x000000000044BB20 string=0x00000000001F5190 "P'"
 *   insn=0x000000000044BB24 string=0x000000000044BB28 "@"
 *   insn=0x000000000044BB34 string=0x000000000044BB38 ""
 *   insn=0x000000000044BB74 string=0x000000000044BB78 "@"
 *   insn=0x000000000044BB7C string=0x000000000044BB80 "a"
 *   insn=0x000000000044BB80 string=0x000000000044BB84 ""
 *   insn=0x000000000044BB84 string=0x000000000044BB88 ")"
 *   insn=0x000000000044BB8C string=0x000000000044BB90 """
 *   insn=0x000000000044BB94 string=0x000000000044BB98 "`\n"
 *   insn=0x000000000044BBA4 string=0x000000000044BBA8 "`z"
 *   insn=0x000000000044BBC4 string=0x000000000044BBC8 "6"
 *   insn=0x000000000044BBCC string=0x000000000044BBD0 "s"
 *   insn=0x000000000044BBD4 string=0x000000000044BBD8 " "
 *   insn=0x000000000044BBE0 string=0x000000000044BBE4 ""
 *   insn=0x000000000044BBE4 string=0x000000000044BBE8 ")"
 *   insn=0x000000000044BBEC string=0x000000000044BBF0 """
 *   insn=0x000000000044BBF0 string=0x000000000044BBF4 "g"
 *   insn=0x000000000044BC10 string=0x000000000044BC14 "`"
 *   insn=0x000000000044BC20 string=0x000000000044BC24 "7"
 *   insn=0x000000000044BC24 string=0x00000000001F7D00 "0'"
 *   insn=0x000000000044BC40 string=0x000000000044BC44 ""
 *   insn=0x000000000044BC4C string=0x000000000044BC50 "4"
 *   insn=0x000000000044BC54 string=0x000000000044BC58 ""
 *   insn=0x000000000044BC64 string=0x000000000044BC68 "\t@"
 *   insn=0x000000000044BC74 string=0x000000000044BC78 ""
 *   insn=0x000000000044BC84 string=0x000000000044BC88 "@"
 *   insn=0x000000000044BC98 string=0x000000000044BC9C ")"
 *   insn=0x000000000044BCAC string=0x000000000044BCB0 ""
 *   insn=0x000000000044BCBC string=0x000000000044BCC0 "`"
 *   insn=0x000000000044BCBC string=0x000000000044BD4C "a"
 *   insn=0x000000000044BCFC string=0x000000000044BD00 "`"
 *   insn=0x000000000044BD08 string=0x000000000044BD0C ")=G"
 *   insn=0x000000000044BD0C string=0x000000000044BD10 "!"
 *   insn=0x000000000044BD14 string=0x000000000044BD18 "\t"
 *   insn=0x000000000044BD14 string=0x000000000044BD2C "\t"
 *   insn=0x000000000044BD18 string=0x000000000044BD1C "*"
 *   insn=0x000000000044BD1C string=0x000000000044BD20 "\n"
 *   insn=0x000000000044BD28 string=0x000000000044BD38 "?"
 *   insn=0x000000000044BD2C string=0x000000000044BD30 "*"
 *   insn=0x000000000044BD30 string=0x000000000044BD34 "\n"
 *   insn=0x000000000044BD4C string=0x00000000001F62D0 "0'"
 *   insn=0x000000000044BD54 string=0x000000000044BD58 "J"
 *   insn=0x000000000044BD5C string=0x000000000044BD60 "(a"
 *   insn=0x000000000044BD6C string=0x000000000044BD70 "J=G"
 *   insn=0x000000000044BD70 string=0x000000000044BD74 ")!"
 *   insn=0x000000000044BD78 string=0x000000000044BD7C "*"
 *   insn=0x000000000044BD78 string=0x000000000044BDA8 "*"
 *   insn=0x000000000044BD7C string=0x000000000044BD80 "K"
 *   insn=0x000000000044BD80 string=0x000000000044BD84 "+"
 *   insn=0x000000000044BD88 string=0x000000000044BD8C "_"
 *   insn=0x000000000044BD8C string=0x000000000044BD90 "l"
 *   insn=0x000000000044BDA8 string=0x000000000044BDAC "K"
 *   insn=0x000000000044BDAC string=0x000000000044BDB0 "+"
 *   insn=0x000000000044BDB0 string=0x000000000044BDB4 "_"
 *   insn=0x000000000044BDB8 string=0x000000000044BDBC "0"
 *   insn=0x000000000044BDD0 string=0x000000000044BDD4 "4"
 *   insn=0x000000000044BDD8 string=0x000000000044BDDC ""
 *   insn=0x000000000044BDE8 string=0x000000000044BDEC "\t@"
 *   insn=0x000000000044BDF8 string=0x000000000044BDFC ""
 *   insn=0x000000000044BE08 string=0x000000000044BE0C "@"
 *   insn=0x000000000044BE1C string=0x000000000044BE20 ")"
 *   insn=0x000000000044BE30 string=0x000000000044BE34 ")=G"
 *   insn=0x000000000044BE34 string=0x000000000044BE38 "!"
 *   insn=0x000000000044BE38 string=0x000000000044BE3C "i"
 *   insn=0x000000000044BE3C string=0x000000000044BE40 "\t"
 *   insn=0x000000000044BE3C string=0x000000000044BE68 "\t"
 *   insn=0x000000000044BE40 string=0x000000000044BE44 "*"
 *   insn=0x000000000044BE44 string=0x000000000044BE48 "\n"
 *   insn=0x000000000044BE4C string=0x000000000044BE50 "?"
 *   insn=0x000000000044BE50 string=0x000000000044BE54 "L"
 *   insn=0x000000000044BE58 string=0x000000000044BE5C "Ry"
 *   insn=0x000000000044BE68 string=0x000000000044BE6C "*"
 *   insn=0x000000000044BE6C string=0x000000000044BE70 "\n"
 *   insn=0x000000000044BE70 string=0x000000000044BE74 "?"
 *   insn=0x000000000044BE74 string=0x000000000044BE78 ""
 *   insn=0x000000000044BE88 string=0x000000000044BE8C "J"
 *   insn=0x000000000044BE90 string=0x000000000044BE94 "(a"
 *   insn=0x000000000044BEA0 string=0x000000000044BEA4 "J=G"
 *   insn=0x000000000044BEA4 string=0x000000000044BEA8 ")!"
 *   insn=0x000000000044BEAC string=0x000000000044BEB0 "*"
 *   insn=0x000000000044BEAC string=0x000000000044BEDC "*"
 *   insn=0x000000000044BEB0 string=0x000000000044BEB4 "K"
 *   insn=0x000000000044BEB4 string=0x000000000044BEB8 "+"
 *   insn=0x000000000044BEBC string=0x000000000044BEC0 "_"
 *   insn=0x000000000044BECC string=0x000000000044BED0 "5y"
 *   insn=0x000000000044BEDC string=0x000000000044BEE0 "K"
 *   insn=0x000000000044BEE0 string=0x000000000044BEE4 "+"
 *   insn=0x000000000044BEE4 string=0x000000000044BEE8 "_"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall std::map<std::string,boost::shared_ptr<Caver::Model const>>::operator[](__int64 a1, const void **a2)
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
  insert_hint_unique_pos = std::_Rb_tree<std::string,std::pair<std::string const,boost::shared_ptr<Caver::Model const>>,std::_Select1st<std::pair<std::string const,boost::shared_ptr<Caver::Model const>>>,std::less<std::string>,std::allocator<std::pair<std::string const,boost::shared_ptr<Caver::Model const>>>>::_M_get_insert_hint_unique_pos();
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
    node = std::_Rb_tree<std::string,std::pair<std::string const,boost::shared_ptr<Caver::Model const>>,std::_Select1st<std::pair<std::string const,boost::shared_ptr<Caver::Model const>>>,std::less<std::string>,std::allocator<std::pair<std::string const,boost::shared_ptr<Caver::Model const>>>>::_M_create_node();
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

