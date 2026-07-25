/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000464F84
 * Mangled: _ZNSt3mapISsN5boost13intrusive_ptrIN5Caver11SceneObjectEEESt4lessISsESaISt4pairIKSsS4_EEEixERS8_
 * Demangled: std::map<std::string,boost::intrusive_ptr<Caver::SceneObject>,std::less<std::string>,std::allocator<std::pair<std::string const,boost::intrusive_ptr<Caver::SceneObject>>>>::operator[](std::string const&)
 *
 * Callers: 1
 *   0x0000000000203D90  std::map<std::string,boost::intrusive_ptr<Caver::SceneObject>,std::less<std::string>,std::allocator<std::pair<std::string const,boost::intrusive_ptr<Caver::SceneObject>>>>::operator[](std::string const&)
 *
 * Callees: 10
 *   0x00000000001F5190  .memcmp
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F6410  std::_Rb_tree<std::string,std::pair<std::string const,boost::intrusive_ptr<Caver::SceneObject>>,std::_Select1st<std::pair<std::string const,boost::intrusive_ptr<Caver::SceneObject>>>,std::less<std::string>,std::allocator<std::pair<std::string const,boost::intrusive_ptr<Caver::SceneObject>>>>::_M_get_insert_hint_unique_pos(std::_Rb_tree_const_iterator<std::pair<std::string const,boost::intrusive_ptr<Caver::SceneObject>>>,std::string const&)
 *   0x00000000001FC1C0  std::_Rb_tree<std::string,std::pair<std::string const,boost::intrusive_ptr<Caver::SceneObject>>,std::_Select1st<std::pair<std::string const,boost::intrusive_ptr<Caver::SceneObject>>>,std::less<std::string>,std::allocator<std::pair<std::string const,boost::intrusive_ptr<Caver::SceneObject>>>>::_M_create_node(std::pair<std::string const,boost::intrusive_ptr<Caver::SceneObject>> const&)
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x000000000054C8A0  sub_54C8A0
 *   0x000000000056A3A4  operator delete(void *)
 *   0x000000000056A528  sub_56A528
 *   0x00000000005818C4  sub_5818C4
 *   0x00000000006FE668  pthread_create
 *
 * Referenced strings: 106
 *   insn=0x0000000000464FA0 string=0x0000000000464FA4 "I"
 *   insn=0x0000000000464FA4 string=0x0000000000464FA8 "("
 *   insn=0x0000000000464FBC string=0x0000000000464FC0 "7"
 *   insn=0x0000000000464FE0 string=0x0000000000464FE4 ""
 *   insn=0x0000000000464FE8 string=0x0000000000464FEC """
 *   insn=0x0000000000464FEC string=0x0000000000464FF0 "h@"
 *   insn=0x0000000000464FF0 string=0x00000000001F5190 "P'"
 *   insn=0x0000000000464FF4 string=0x0000000000464FF8 "@"
 *   insn=0x0000000000465004 string=0x0000000000465008 ""
 *   insn=0x0000000000465044 string=0x0000000000465048 "@"
 *   insn=0x000000000046504C string=0x0000000000465050 "a"
 *   insn=0x0000000000465050 string=0x0000000000465054 ""
 *   insn=0x0000000000465054 string=0x0000000000465058 ")"
 *   insn=0x000000000046505C string=0x0000000000465060 """
 *   insn=0x0000000000465060 string=0x0000000000465064 "K@"
 *   insn=0x0000000000465064 string=0x0000000000465068 "@\t"
 *   insn=0x0000000000465068 string=0x000000000046506C "`"
 *   insn=0x0000000000465074 string=0x0000000000465078 ","
 *   insn=0x000000000046508C string=0x00000000001F6410 "0'"
 *   insn=0x0000000000465094 string=0x0000000000465098 "6"
 *   insn=0x000000000046509C string=0x00000000004650A0 "s"
 *   insn=0x00000000004650A4 string=0x00000000004650A8 " "
 *   insn=0x00000000004650B0 string=0x00000000004650B4 ""
 *   insn=0x00000000004650B4 string=0x00000000004650B8 ")"
 *   insn=0x00000000004650BC string=0x00000000004650C0 """
 *   insn=0x00000000004650C0 string=0x00000000004650C4 "3@"
 *   insn=0x00000000004650E0 string=0x00000000004650E4 "`"
 *   insn=0x00000000004650F0 string=0x00000000004650F4 "3\"
 *   insn=0x00000000004650F4 string=0x00000000001FC1C0 "0'"
 *   insn=0x0000000000465110 string=0x0000000000465114 ""
 *   insn=0x0000000000465120 string=0x0000000000465124 "@"
 *   insn=0x0000000000465124 string=0x0000000000465128 ""
 *   insn=0x0000000000465128 string=0x000000000046512C ""
 *   insn=0x0000000000465130 string=0x0000000000465134 ""
 *   insn=0x0000000000465134 string=0x0000000000465138 ""
 *   insn=0x0000000000465140 string=0x0000000000465144 "\t"
 *   insn=0x0000000000465144 string=0x0000000000465148 ")"
 *   insn=0x0000000000465158 string=0x000000000046515C ""
 *   insn=0x0000000000465168 string=0x000000000046516C "`"
 *   insn=0x0000000000465168 string=0x00000000004651F8 "6D"
 *   insn=0x00000000004651A8 string=0x00000000004651AC "`"
 *   insn=0x00000000004651B4 string=0x00000000004651B8 ")=G"
 *   insn=0x00000000004651B8 string=0x00000000004651BC "!"
 *   insn=0x00000000004651C0 string=0x00000000004651C4 "\t"
 *   insn=0x00000000004651C0 string=0x00000000004651D8 "\t"
 *   insn=0x00000000004651C4 string=0x00000000004651C8 "*"
 *   insn=0x00000000004651C8 string=0x00000000004651CC "\n"
 *   insn=0x00000000004651D4 string=0x00000000004651E4 "?"
 *   insn=0x00000000004651D8 string=0x00000000004651DC "*"
 *   insn=0x00000000004651DC string=0x00000000004651E0 "\n"
 *   insn=0x00000000004651EC string=0x00000000004651F0 "m"
 *   insn=0x00000000004651F8 string=0x00000000001F62D0 "0'"
 *   insn=0x00000000004651FC string=0x0000000000465200 "\n"
 *   insn=0x0000000000465200 string=0x0000000000465204 "J"
 *   insn=0x0000000000465208 string=0x000000000046520C "(a"
 *   insn=0x0000000000465218 string=0x000000000046521C "J=G"
 *   insn=0x000000000046521C string=0x0000000000465220 ")!"
 *   insn=0x0000000000465224 string=0x0000000000465228 "*"
 *   insn=0x0000000000465224 string=0x0000000000465254 "*"
 *   insn=0x0000000000465228 string=0x000000000046522C "K"
 *   insn=0x000000000046522C string=0x0000000000465230 "+"
 *   insn=0x0000000000465234 string=0x0000000000465238 "_"
 *   insn=0x0000000000465238 string=0x000000000046523C "l"
 *   insn=0x0000000000465244 string=0x0000000000465248 "W"
 *   insn=0x0000000000465254 string=0x0000000000465258 "K"
 *   insn=0x0000000000465258 string=0x000000000046525C "+"
 *   insn=0x000000000046525C string=0x0000000000465260 "_"
 *   insn=0x0000000000465264 string=0x0000000000465268 "("
 *   insn=0x000000000046527C string=0x0000000000465280 "("
 *   insn=0x0000000000465280 string=0x0000000000465284 "\t\t@"
 *   insn=0x0000000000465284 string=0x0000000000465288 ")"
 *   insn=0x0000000000465288 string=0x000000000046528C "\t\t"
 *   insn=0x0000000000465290 string=0x0000000000465294 "\t"
 *   insn=0x0000000000465294 string=0x0000000000465298 ")"
 *   insn=0x000000000046529C string=0x00000000004652A0 " "
 *   insn=0x00000000004652A4 string=0x00000000004652A8 "\t"
 *   insn=0x00000000004652A8 string=0x00000000004652AC ")"
 *   insn=0x00000000004652BC string=0x00000000004652C0 ")=G"
 *   insn=0x00000000004652C0 string=0x00000000004652C4 "!"
 *   insn=0x00000000004652C4 string=0x00000000004652C8 "i"
 *   insn=0x00000000004652C8 string=0x00000000004652CC "\t"
 *   insn=0x00000000004652C8 string=0x00000000004652F4 "\t"
 *   insn=0x00000000004652CC string=0x00000000004652D0 "*"
 *   insn=0x00000000004652D0 string=0x00000000004652D4 "\n"
 *   insn=0x00000000004652D8 string=0x00000000004652DC "?"
 *   insn=0x00000000004652DC string=0x00000000004652E0 "L"
 *   insn=0x00000000004652E4 string=0x00000000004652E8 "/"
 *   insn=0x00000000004652EC string=0x00000000004652F0 "uq"
 *   insn=0x00000000004652F4 string=0x00000000004652F8 "*"
 *   insn=0x00000000004652F8 string=0x00000000004652FC "\n"
 *   insn=0x00000000004652FC string=0x0000000000465300 "?"
 *   insn=0x0000000000465300 string=0x0000000000465304 ""
 *   insn=0x0000000000465308 string=0x000000000046530C "nq"
 *   insn=0x0000000000465310 string=0x0000000000465314 "\n"
 *   insn=0x0000000000465314 string=0x0000000000465318 "J"
 *   insn=0x000000000046531C string=0x0000000000465320 "(a"
 *   insn=0x000000000046532C string=0x0000000000465330 "J=G"
 *   insn=0x0000000000465330 string=0x0000000000465334 ")!"
 *   insn=0x0000000000465338 string=0x000000000046533C "*"
 *   insn=0x0000000000465338 string=0x0000000000465368 "*"
 *   insn=0x000000000046533C string=0x0000000000465340 "K"
 *   insn=0x0000000000465340 string=0x0000000000465344 "+"
 *   insn=0x0000000000465348 string=0x000000000046534C "_"
 *   insn=0x0000000000465368 string=0x000000000046536C "K"
 *   insn=0x000000000046536C string=0x0000000000465370 "+"
 *   insn=0x0000000000465370 string=0x0000000000465374 "_"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall std::map<std::string,boost::intrusive_ptr<Caver::SceneObject>>::operator[](
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
  __int64 v30; // x0
  int v31; // w8
  char *v32; // x0
  int v34; // w0
  unsigned int *v35; // x8
  int v36; // w9
  void *v38; // [xsp+10h] [xbp-70h] BYREF
  __int64 v39; // [xsp+18h] [xbp-68h]
  __int64 v40; // [xsp+28h] [xbp-58h]

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
      v34 = v17 <= (__int64)0xFFFFFFFF80000000LL ? 0x80000000 : v17;
      if ( (v34 & 0x80000000) == 0 )
        return node + 40;
    }
  }
  sub_56A528(&v38, v5);
  v39 = 0;
  std::_Rb_tree<std::string,std::pair<std::string const,boost::intrusive_ptr<Caver::SceneObject>>,std::_Select1st<std::pair<std::string const,boost::intrusive_ptr<Caver::SceneObject>>>,std::less<std::string>,std::allocator<std::pair<std::string const,boost::intrusive_ptr<Caver::SceneObject>>>>::_M_get_insert_hint_unique_pos();
  node = v20;
  v22 = v21;
  if ( v21 )
  {
    v23 = 1;
    if ( !v20 && v7 != v21 )
    {
      v24 = *(_QWORD **)(v21 + 32);
      v25 = *((_QWORD *)v38 - 3);
      v26 = *(v24 - 3);
      v27 = v25 - v26;
      if ( v25 <= v26 )
        v28 = *((_QWORD *)v38 - 3);
      else
        v28 = *(v24 - 3);
      v29 = memcmp(v38, v24, v28);
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
    node = std::_Rb_tree<std::string,std::pair<std::string const,boost::intrusive_ptr<Caver::SceneObject>>,std::_Select1st<std::pair<std::string const,boost::intrusive_ptr<Caver::SceneObject>>>,std::less<std::string>,std::allocator<std::pair<std::string const,boost::intrusive_ptr<Caver::SceneObject>>>>::_M_create_node();
    sub_54C8A0(v23, node, v22, v7);
    ++*(_QWORD *)(a1 + 40);
  }
  v30 = v39;
  if ( v39 )
  {
    v31 = *(_DWORD *)&byte_8[v39] - 1;
    *(_DWORD *)&byte_8[v39] = v31;
    if ( !v31 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v30 + 8LL))(v30);
  }
  v32 = (char *)v38 - 24;
  if ( (char *)v38 - 24 != (char *)&qword_6FD2E0 )
  {
    v35 = (unsigned int *)((char *)v38 - 8);
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
      operator delete(v32);
  }
  return node + 40;
}

