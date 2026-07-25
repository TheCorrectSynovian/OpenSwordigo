/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000003D3D94
 * Mangled: _ZNSt3mapISsN5boost10shared_ptrIN5Caver7GUIViewEEESt4lessISsESaISt4pairIKSsS4_EEEixERS8_
 * Demangled: std::map<std::string,boost::shared_ptr<Caver::GUIView>,std::less<std::string>,std::allocator<std::pair<std::string const,boost::shared_ptr<Caver::GUIView>>>>::operator[](std::string const&)
 *
 * Callers: 1
 *   0x00000000001FFE80  std::map<std::string,boost::shared_ptr<Caver::GUIView>,std::less<std::string>,std::allocator<std::pair<std::string const,boost::shared_ptr<Caver::GUIView>>>>::operator[](std::string const&)
 *
 * Callees: 10
 *   0x00000000001F5190  .memcmp
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001FB360  std::_Rb_tree<std::string,std::pair<std::string const,boost::shared_ptr<Caver::GUIView>>,std::_Select1st<std::pair<std::string const,boost::shared_ptr<Caver::GUIView>>>,std::less<std::string>,std::allocator<std::pair<std::string const,boost::shared_ptr<Caver::GUIView>>>>::_M_get_insert_hint_unique_pos(std::_Rb_tree_const_iterator<std::pair<std::string const,boost::shared_ptr<Caver::GUIView>>>,std::string const&)
 *   0x00000000002013E0  std::_Rb_tree<std::string,std::pair<std::string const,boost::shared_ptr<Caver::GUIView>>,std::_Select1st<std::pair<std::string const,boost::shared_ptr<Caver::GUIView>>>,std::less<std::string>,std::allocator<std::pair<std::string const,boost::shared_ptr<Caver::GUIView>>>>::_M_create_node(std::pair<std::string const,boost::shared_ptr<Caver::GUIView>> const&)
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x000000000054C8A0  sub_54C8A0
 *   0x000000000056A3A4  operator delete(void *)
 *   0x000000000056A528  sub_56A528
 *   0x00000000005818C4  sub_5818C4
 *   0x00000000006FE668  pthread_create
 *
 * Referenced strings: 92
 *   insn=0x00000000003D3DB0 string=0x00000000003D3DB4 "H"
 *   insn=0x00000000003D3DB8 string=0x00000000003D3DBC ""
 *   insn=0x00000000003D3DD0 string=0x00000000003D3DD4 "7"
 *   insn=0x00000000003D3DF4 string=0x00000000003D3DF8 ""
 *   insn=0x00000000003D3DFC string=0x00000000003D3E00 """
 *   insn=0x00000000003D3E04 string=0x00000000001F5190 "P'"
 *   insn=0x00000000003D3E08 string=0x00000000003D3E0C "@"
 *   insn=0x00000000003D3E18 string=0x00000000003D3E1C ""
 *   insn=0x00000000003D3E58 string=0x00000000003D3E5C "@"
 *   insn=0x00000000003D3E60 string=0x00000000003D3E64 "a"
 *   insn=0x00000000003D3E64 string=0x00000000003D3E68 ""
 *   insn=0x00000000003D3E68 string=0x00000000003D3E6C ")"
 *   insn=0x00000000003D3E70 string=0x00000000003D3E74 """
 *   insn=0x00000000003D3E78 string=0x00000000003D3E7C "`\n"
 *   insn=0x00000000003D3E9C string=0x00000000003D3EA0 "0"
 *   insn=0x00000000003D3EA0 string=0x00000000001FB360 "0'"
 *   insn=0x00000000003D3EA8 string=0x00000000003D3EAC "6"
 *   insn=0x00000000003D3EB0 string=0x00000000003D3EB4 "s"
 *   insn=0x00000000003D3EB8 string=0x00000000003D3EBC " "
 *   insn=0x00000000003D3EC4 string=0x00000000003D3EC8 ""
 *   insn=0x00000000003D3EC8 string=0x00000000003D3ECC ")"
 *   insn=0x00000000003D3ED0 string=0x00000000003D3ED4 """
 *   insn=0x00000000003D3EF4 string=0x00000000003D3EF8 "`"
 *   insn=0x00000000003D3F04 string=0x00000000003D3F08 "6"
 *   insn=0x00000000003D3F1C string=0x00000000003D3F20 "`"
 *   insn=0x00000000003D3F24 string=0x00000000003D3F28 ""
 *   insn=0x00000000003D3F30 string=0x00000000003D3F34 "4"
 *   insn=0x00000000003D3F38 string=0x00000000003D3F3C ""
 *   insn=0x00000000003D3F48 string=0x00000000003D3F4C "\t@"
 *   insn=0x00000000003D3F58 string=0x00000000003D3F5C ""
 *   insn=0x00000000003D3F68 string=0x00000000003D3F6C "@"
 *   insn=0x00000000003D3F7C string=0x00000000003D3F80 ")"
 *   insn=0x00000000003D3F90 string=0x00000000003D3F94 ""
 *   insn=0x00000000003D3FA0 string=0x00000000003D3FA4 "`"
 *   insn=0x00000000003D3FE0 string=0x00000000003D3FE4 "`"
 *   insn=0x00000000003D3FEC string=0x00000000003D3FF0 ")=G"
 *   insn=0x00000000003D3FF0 string=0x00000000003D3FF4 "!"
 *   insn=0x00000000003D3FF8 string=0x00000000003D3FFC "\t"
 *   insn=0x00000000003D3FF8 string=0x00000000003D4010 "\t"
 *   insn=0x00000000003D3FFC string=0x00000000003D4000 "*"
 *   insn=0x00000000003D4000 string=0x00000000003D4004 "\n"
 *   insn=0x00000000003D400C string=0x00000000003D401C "?"
 *   insn=0x00000000003D4010 string=0x00000000003D4014 "*"
 *   insn=0x00000000003D4014 string=0x00000000003D4018 "\n"
 *   insn=0x00000000003D4030 string=0x00000000001F62D0 "0'"
 *   insn=0x00000000003D4038 string=0x00000000003D403C "J"
 *   insn=0x00000000003D4040 string=0x00000000003D4044 "(a"
 *   insn=0x00000000003D4050 string=0x00000000003D4054 "J=G"
 *   insn=0x00000000003D4054 string=0x00000000003D4058 ")!"
 *   insn=0x00000000003D405C string=0x00000000003D4060 "*"
 *   insn=0x00000000003D405C string=0x00000000003D408C "*"
 *   insn=0x00000000003D4060 string=0x00000000003D4064 "K"
 *   insn=0x00000000003D4064 string=0x00000000003D4068 "+"
 *   insn=0x00000000003D406C string=0x00000000003D4070 "_"
 *   insn=0x00000000003D4070 string=0x00000000003D4074 "l"
 *   insn=0x00000000003D408C string=0x00000000003D4090 "K"
 *   insn=0x00000000003D4090 string=0x00000000003D4094 "+"
 *   insn=0x00000000003D4094 string=0x00000000003D4098 "_"
 *   insn=0x00000000003D409C string=0x00000000003D40A0 "0"
 *   insn=0x00000000003D40B4 string=0x00000000003D40B8 "4"
 *   insn=0x00000000003D40BC string=0x00000000003D40C0 ""
 *   insn=0x00000000003D40CC string=0x00000000003D40D0 "\t@"
 *   insn=0x00000000003D40DC string=0x00000000003D40E0 ""
 *   insn=0x00000000003D40EC string=0x00000000003D40F0 "@"
 *   insn=0x00000000003D4100 string=0x00000000003D4104 ")"
 *   insn=0x00000000003D4114 string=0x00000000003D4118 ")=G"
 *   insn=0x00000000003D4118 string=0x00000000003D411C "!"
 *   insn=0x00000000003D411C string=0x00000000003D4120 "i"
 *   insn=0x00000000003D4120 string=0x00000000003D4124 "\t"
 *   insn=0x00000000003D4120 string=0x00000000003D414C "\t"
 *   insn=0x00000000003D4124 string=0x00000000003D4128 "*"
 *   insn=0x00000000003D4128 string=0x00000000003D412C "\n"
 *   insn=0x00000000003D4130 string=0x00000000003D4134 "?"
 *   insn=0x00000000003D4134 string=0x00000000003D4138 "L"
 *   insn=0x00000000003D414C string=0x00000000003D4150 "*"
 *   insn=0x00000000003D4150 string=0x00000000003D4154 "\n"
 *   insn=0x00000000003D4154 string=0x00000000003D4158 "?"
 *   insn=0x00000000003D4158 string=0x00000000003D415C ""
 *   insn=0x00000000003D416C string=0x00000000003D4170 "J"
 *   insn=0x00000000003D4174 string=0x00000000003D4178 "(a"
 *   insn=0x00000000003D4184 string=0x00000000003D4188 "J=G"
 *   insn=0x00000000003D4188 string=0x00000000003D418C ")!"
 *   insn=0x00000000003D4190 string=0x00000000003D4194 "*"
 *   insn=0x00000000003D4190 string=0x00000000003D41C0 "*"
 *   insn=0x00000000003D4194 string=0x00000000003D4198 "K"
 *   insn=0x00000000003D4198 string=0x00000000003D419C "+"
 *   insn=0x00000000003D41A0 string=0x00000000003D41A4 "_"
 *   insn=0x00000000003D41B0 string=0x00000000003D41B4 "|X"
 *   insn=0x00000000003D41B8 string=0x00000000003D41BC "d"
 *   insn=0x00000000003D41C0 string=0x00000000003D41C4 "K"
 *   insn=0x00000000003D41C4 string=0x00000000003D41C8 "+"
 *   insn=0x00000000003D41C8 string=0x00000000003D41CC "_"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall std::map<std::string,boost::shared_ptr<Caver::GUIView>>::operator[](__int64 a1, const void **a2)
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
  std::_Rb_tree<std::string,std::pair<std::string const,boost::shared_ptr<Caver::GUIView>>,std::_Select1st<std::pair<std::string const,boost::shared_ptr<Caver::GUIView>>>,std::less<std::string>,std::allocator<std::pair<std::string const,boost::shared_ptr<Caver::GUIView>>>>::_M_get_insert_hint_unique_pos();
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
    node = std::_Rb_tree<std::string,std::pair<std::string const,boost::shared_ptr<Caver::GUIView>>,std::_Select1st<std::pair<std::string const,boost::shared_ptr<Caver::GUIView>>>,std::less<std::string>,std::allocator<std::pair<std::string const,boost::shared_ptr<Caver::GUIView>>>>::_M_create_node();
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

