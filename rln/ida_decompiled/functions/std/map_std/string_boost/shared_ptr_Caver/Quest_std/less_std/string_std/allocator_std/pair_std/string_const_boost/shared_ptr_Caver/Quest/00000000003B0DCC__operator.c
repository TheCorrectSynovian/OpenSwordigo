/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000003B0DCC
 * Mangled: _ZNSt3mapISsN5boost10shared_ptrIN5Caver5QuestEEESt4lessISsESaISt4pairIKSsS4_EEEixERS8_
 * Demangled: std::map<std::string,boost::shared_ptr<Caver::Quest>,std::less<std::string>,std::allocator<std::pair<std::string const,boost::shared_ptr<Caver::Quest>>>>::operator[](std::string const&)
 *
 * Callers: 1
 *   0x00000000001FEB50  std::map<std::string,boost::shared_ptr<Caver::Quest>,std::less<std::string>,std::allocator<std::pair<std::string const,boost::shared_ptr<Caver::Quest>>>>::operator[](std::string const&)
 *
 * Callees: 10
 *   0x00000000001F5190  .memcmp
 *   0x00000000001F6050  std::_Rb_tree<std::string,std::pair<std::string const,boost::shared_ptr<Caver::Quest>>,std::_Select1st<std::pair<std::string const,boost::shared_ptr<Caver::Quest>>>,std::less<std::string>,std::allocator<std::pair<std::string const,boost::shared_ptr<Caver::Quest>>>>::_M_create_node(std::pair<std::string const,boost::shared_ptr<Caver::Quest>> const&)
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001FEB90  std::_Rb_tree<std::string,std::pair<std::string const,boost::shared_ptr<Caver::Quest>>,std::_Select1st<std::pair<std::string const,boost::shared_ptr<Caver::Quest>>>,std::less<std::string>,std::allocator<std::pair<std::string const,boost::shared_ptr<Caver::Quest>>>>::_M_get_insert_hint_unique_pos(std::_Rb_tree_const_iterator<std::pair<std::string const,boost::shared_ptr<Caver::Quest>>>,std::string const&)
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x000000000054C8A0  sub_54C8A0
 *   0x000000000056A3A4  operator delete(void *)
 *   0x000000000056A528  sub_56A528
 *   0x00000000005818C4  sub_5818C4
 *   0x00000000006FE668  pthread_create
 *
 * Referenced strings: 92
 *   insn=0x00000000003B0DE8 string=0x00000000003B0DEC "H"
 *   insn=0x00000000003B0DF0 string=0x00000000003B0DF4 ""
 *   insn=0x00000000003B0E08 string=0x00000000003B0E0C "7"
 *   insn=0x00000000003B0E2C string=0x00000000003B0E30 ""
 *   insn=0x00000000003B0E34 string=0x00000000003B0E38 """
 *   insn=0x00000000003B0E3C string=0x00000000001F5190 "P'"
 *   insn=0x00000000003B0E40 string=0x00000000003B0E44 "@"
 *   insn=0x00000000003B0E50 string=0x00000000003B0E54 ""
 *   insn=0x00000000003B0E90 string=0x00000000003B0E94 "@"
 *   insn=0x00000000003B0E98 string=0x00000000003B0E9C "a"
 *   insn=0x00000000003B0E9C string=0x00000000003B0EA0 ""
 *   insn=0x00000000003B0EA0 string=0x00000000003B0EA4 ")"
 *   insn=0x00000000003B0EA8 string=0x00000000003B0EAC """
 *   insn=0x00000000003B0EB0 string=0x00000000003B0EB4 "`\n"
 *   insn=0x00000000003B0ED4 string=0x00000000003B0ED8 ".7"
 *   insn=0x00000000003B0EE0 string=0x00000000003B0EE4 "6"
 *   insn=0x00000000003B0EE8 string=0x00000000003B0EEC "s"
 *   insn=0x00000000003B0EF0 string=0x00000000003B0EF4 " "
 *   insn=0x00000000003B0EFC string=0x00000000003B0F00 ""
 *   insn=0x00000000003B0F00 string=0x00000000003B0F04 ")"
 *   insn=0x00000000003B0F08 string=0x00000000003B0F0C """
 *   insn=0x00000000003B0F2C string=0x00000000003B0F30 "`"
 *   insn=0x00000000003B0F3C string=0x00000000003B0F40 "D"
 *   insn=0x00000000003B0F40 string=0x00000000001F6050 "0'"
 *   insn=0x00000000003B0F54 string=0x00000000003B0F58 "Rn"
 *   insn=0x00000000003B0F5C string=0x00000000003B0F60 ""
 *   insn=0x00000000003B0F68 string=0x00000000003B0F6C "4"
 *   insn=0x00000000003B0F70 string=0x00000000003B0F74 ""
 *   insn=0x00000000003B0F80 string=0x00000000003B0F84 "\t@"
 *   insn=0x00000000003B0F90 string=0x00000000003B0F94 ""
 *   insn=0x00000000003B0FA0 string=0x00000000003B0FA4 "@"
 *   insn=0x00000000003B0FB4 string=0x00000000003B0FB8 ")"
 *   insn=0x00000000003B0FC8 string=0x00000000003B0FCC ""
 *   insn=0x00000000003B0FD8 string=0x00000000003B0FDC "`"
 *   insn=0x00000000003B1018 string=0x00000000003B101C "`"
 *   insn=0x00000000003B1024 string=0x00000000003B1028 ")=G"
 *   insn=0x00000000003B1028 string=0x00000000003B102C "!"
 *   insn=0x00000000003B1030 string=0x00000000003B1034 "\t"
 *   insn=0x00000000003B1030 string=0x00000000003B1048 "\t"
 *   insn=0x00000000003B1034 string=0x00000000003B1038 "*"
 *   insn=0x00000000003B1038 string=0x00000000003B103C "\n"
 *   insn=0x00000000003B1044 string=0x00000000003B1054 "?"
 *   insn=0x00000000003B1048 string=0x00000000003B104C "*"
 *   insn=0x00000000003B104C string=0x00000000003B1050 "\n"
 *   insn=0x00000000003B1068 string=0x00000000001F62D0 "0'"
 *   insn=0x00000000003B1070 string=0x00000000003B1074 "J"
 *   insn=0x00000000003B1078 string=0x00000000003B107C "(a"
 *   insn=0x00000000003B1088 string=0x00000000003B108C "J=G"
 *   insn=0x00000000003B108C string=0x00000000003B1090 ")!"
 *   insn=0x00000000003B1094 string=0x00000000003B1098 "*"
 *   insn=0x00000000003B1094 string=0x00000000003B10C4 "*"
 *   insn=0x00000000003B1098 string=0x00000000003B109C "K"
 *   insn=0x00000000003B109C string=0x00000000003B10A0 "+"
 *   insn=0x00000000003B10A4 string=0x00000000003B10A8 "_"
 *   insn=0x00000000003B10A8 string=0x00000000003B10AC "l"
 *   insn=0x00000000003B10C4 string=0x00000000003B10C8 "K"
 *   insn=0x00000000003B10C8 string=0x00000000003B10CC "+"
 *   insn=0x00000000003B10CC string=0x00000000003B10D0 "_"
 *   insn=0x00000000003B10D4 string=0x00000000003B10D8 "0"
 *   insn=0x00000000003B10EC string=0x00000000003B10F0 "4"
 *   insn=0x00000000003B10F4 string=0x00000000003B10F8 ""
 *   insn=0x00000000003B1104 string=0x00000000003B1108 "\t@"
 *   insn=0x00000000003B1114 string=0x00000000003B1118 ""
 *   insn=0x00000000003B1124 string=0x00000000003B1128 "@"
 *   insn=0x00000000003B1138 string=0x00000000003B113C ")"
 *   insn=0x00000000003B114C string=0x00000000003B1150 ")=G"
 *   insn=0x00000000003B1150 string=0x00000000003B1154 "!"
 *   insn=0x00000000003B1154 string=0x00000000003B1158 "i"
 *   insn=0x00000000003B1158 string=0x00000000003B115C "\t"
 *   insn=0x00000000003B1158 string=0x00000000003B1184 "\t"
 *   insn=0x00000000003B115C string=0x00000000003B1160 "*"
 *   insn=0x00000000003B1160 string=0x00000000003B1164 "\n"
 *   insn=0x00000000003B1168 string=0x00000000003B116C "?"
 *   insn=0x00000000003B116C string=0x00000000003B1170 "L"
 *   insn=0x00000000003B1184 string=0x00000000003B1188 "*"
 *   insn=0x00000000003B1188 string=0x00000000003B118C "\n"
 *   insn=0x00000000003B118C string=0x00000000003B1190 "?"
 *   insn=0x00000000003B1190 string=0x00000000003B1194 ""
 *   insn=0x00000000003B11A4 string=0x00000000003B11A8 "J"
 *   insn=0x00000000003B11AC string=0x00000000003B11B0 "(a"
 *   insn=0x00000000003B11BC string=0x00000000003B11C0 "J=G"
 *   insn=0x00000000003B11C0 string=0x00000000003B11C4 ")!"
 *   insn=0x00000000003B11C8 string=0x00000000003B11CC "*"
 *   insn=0x00000000003B11C8 string=0x00000000003B11F8 "*"
 *   insn=0x00000000003B11CC string=0x00000000003B11D0 "K"
 *   insn=0x00000000003B11D0 string=0x00000000003B11D4 "+"
 *   insn=0x00000000003B11D8 string=0x00000000003B11DC "_"
 *   insn=0x00000000003B11E8 string=0x00000000003B11EC "n"
 *   insn=0x00000000003B11F0 string=0x00000000003B11F4 "Vt"
 *   insn=0x00000000003B11F8 string=0x00000000003B11FC "K"
 *   insn=0x00000000003B11FC string=0x00000000003B1200 "+"
 *   insn=0x00000000003B1200 string=0x00000000003B1204 "_"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall std::map<std::string,boost::shared_ptr<Caver::Quest>>::operator[](__int64 a1, const void **a2)
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
  insert_hint_unique_pos = std::_Rb_tree<std::string,std::pair<std::string const,boost::shared_ptr<Caver::Quest>>,std::_Select1st<std::pair<std::string const,boost::shared_ptr<Caver::Quest>>>,std::less<std::string>,std::allocator<std::pair<std::string const,boost::shared_ptr<Caver::Quest>>>>::_M_get_insert_hint_unique_pos();
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
    node = std::_Rb_tree<std::string,std::pair<std::string const,boost::shared_ptr<Caver::Quest>>,std::_Select1st<std::pair<std::string const,boost::shared_ptr<Caver::Quest>>>,std::less<std::string>,std::allocator<std::pair<std::string const,boost::shared_ptr<Caver::Quest>>>>::_M_create_node();
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

