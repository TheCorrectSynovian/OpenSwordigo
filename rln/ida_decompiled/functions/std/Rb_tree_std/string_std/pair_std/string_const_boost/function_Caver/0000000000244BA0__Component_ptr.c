/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000244BA0
 * Mangled: _ZNSt8_Rb_treeISsSt4pairIKSsN5boost8functionIFPN5Caver9ComponentEvEEEESt10_Select1stIS9_ESt4lessISsESaIS9_EE29_M_get_insert_hint_unique_posESt23_Rb_tree_const_iteratorIS9_ERS1_
 * Demangled: std::_Rb_tree<std::string,std::pair<std::string const,boost::function<Caver::Component * ()(void)>>,std::_Select1st<std::pair<std::string const,boost::function<Caver::Component * ()(void)>>>,std::less<std::string>,std::allocator<std::pair<std::string const,boost::function<Caver::Component * ()(void)>>>>::_M_get_insert_hint_unique_pos(std::_Rb_tree_const_iterator<std::pair<std::string const,boost::function<Caver::Component * ()(void)>>>,std::string const&)
 *
 * Callers: 1
 *   0x00000000001F6CA0  std::_Rb_tree<std::string,std::pair<std::string const,boost::function<Caver::Component * ()(void)>>,std::_Select1st<std::pair<std::string const,boost::function<Caver::Component * ()(void)>>>,std::less<std::string>,std::allocator<std::pair<std::string const,boost::function<Caver::Component * ()(void)>>>>::_M_get_insert_hint_unique_pos(std::_Rb_tree_const_iterator<std::pair<std::string const,boost::function<Caver::Component * ()(void)>>>,std::string const&)
 *
 * Callees: 4
 *   0x00000000001F5190  .memcmp
 *   0x00000000001FE2A0  std::_Rb_tree<std::string,std::pair<std::string const,boost::function<Caver::Component * ()(void)>>,std::_Select1st<std::pair<std::string const,boost::function<Caver::Component * ()(void)>>>,std::less<std::string>,std::allocator<std::pair<std::string const,boost::function<Caver::Component * ()(void)>>>>::_M_get_insert_unique_pos(std::string const&)
 *   0x000000000054C640  sub_54C640
 *   0x000000000054C700  sub_54C700
 *
 * Referenced strings: 39
 *   insn=0x0000000000244BC8 string=0x0000000000244BCC "`"
 *   insn=0x0000000000244BD0 string=0x0000000000244BD4 "w"
 *   insn=0x0000000000244BE8 string=0x0000000000244BEC """
 *   insn=0x0000000000244BEC string=0x0000000000244BF0 "h"
 *   insn=0x0000000000244BF0 string=0x00000000001F5190 "P'"
 *   insn=0x0000000000244BF8 string=0x0000000000244C8C ":"
 *   insn=0x0000000000244C18 string=0x0000000000244C1C ""
 *   insn=0x0000000000244C24 string=0x0000000000244C28 "Z"
 *   insn=0x0000000000244C30 string=0x0000000000244C34 "c"
 *   insn=0x0000000000244C48 string=0x0000000000244C4C ")"
 *   insn=0x0000000000244C4C string=0x0000000000244C50 ""
 *   insn=0x0000000000244C54 string=0x0000000000244C58 """
 *   insn=0x0000000000244C58 string=0x0000000000244C5C "M"
 *   insn=0x0000000000244C60 string=0x0000000000244C64 "@\t"
 *   insn=0x0000000000244C64 string=0x0000000000244C68 "="
 *   insn=0x0000000000244C6C string=0x0000000000244C70 "_"
 *   insn=0x0000000000244C78 string=0x0000000000244C7C "_"
 *   insn=0x0000000000244C80 string=0x0000000000244C84 "@"
 *   insn=0x0000000000244C98 string=0x0000000000244C9C "="
 *   insn=0x0000000000244CAC string=0x0000000000244CB0 "`"
 *   insn=0x0000000000244CB4 string=0x0000000000244CB8 "b"
 *   insn=0x0000000000244CC4 string=0x0000000000244CC8 "("
 *   insn=0x0000000000244CD0 string=0x0000000000244CD4 "/"
 *   insn=0x0000000000244CDC string=0x0000000000244CE0 "?"
 *   insn=0x0000000000244CE0 string=0x0000000000244CE4 "L"
 *   insn=0x0000000000244CE8 string=0x0000000000244CEC "?"
 *   insn=0x0000000000244CF0 string=0x0000000000244CF4 " "
 *   insn=0x0000000000244CF8 string=0x0000000000244CFC "h"
 *   insn=0x0000000000244D04 string=0x0000000000244D08 "w"
 *   insn=0x0000000000244D0C string=0x0000000000244D10 "$"
 *   insn=0x0000000000244D14 string=0x0000000000244D18 "_"
 *   insn=0x0000000000244D20 string=0x0000000000244D24 "_"
 *   insn=0x0000000000244D28 string=0x0000000000244D2C "@"
 *   insn=0x0000000000244D40 string=0x0000000000244D44 "L"
 *   insn=0x0000000000244D50 string=0x0000000000244D54 "`"
 *   insn=0x0000000000244D6C string=0x0000000000244D70 "?"
 *   insn=0x0000000000244D78 string=0x0000000000244D7C "?"
 *   insn=0x0000000000244D80 string=0x0000000000244D84 " "
 *   insn=0x0000000000244D90 string=0x0000000000244D94 "C"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall std::_Rb_tree<std::string,std::pair<std::string const,boost::function<Caver::Component * ()(void)>>,std::_Select1st<std::pair<std::string const,boost::function<Caver::Component * ()(void)>>>,std::less<std::string>,std::allocator<std::pair<std::string const,boost::function<Caver::Component * ()(void)>>>>::_M_get_insert_hint_unique_pos(
        _QWORD *a1,
        _QWORD *a2,
        const void **a3)
{
  _QWORD *v4; // x19
  const void *v5; // x22
  _QWORD *v6; // x23
  size_t v7; // x24
  size_t v8; // x25
  const void *v9; // x0
  __int64 v10; // x26
  size_t v11; // x2
  int v12; // w0
  __int64 v13; // x23
  _QWORD *v14; // x0
  unsigned __int64 v15; // x8
  __int64 v16; // x25
  size_t v17; // x2
  int v18; // w0
  const void *v19; // x1
  _QWORD *v20; // x0
  unsigned __int64 v21; // x9
  unsigned __int64 v22; // x8
  __int64 v23; // x19
  size_t v24; // x2
  int v25; // w0
  int v26; // w0
  __int64 v27; // x26
  size_t v28; // x2
  int v29; // w0
  __int64 v30; // x23
  _QWORD *v31; // x1
  unsigned __int64 v32; // x8
  __int64 v33; // x25
  size_t v34; // x2
  int v35; // w0
  int v37; // w0
  int v38; // w0
  int v39; // w0

  v4 = a2;
  if ( a1 + 1 == a2 )
  {
    if ( !a1[5] )
      return std::_Rb_tree<std::string,std::pair<std::string const,boost::function<Caver::Component * ()(void)>>,std::_Select1st<std::pair<std::string const,boost::function<Caver::Component * ()(void)>>>,std::less<std::string>,std::allocator<std::pair<std::string const,boost::function<Caver::Component * ()(void)>>>>::_M_get_insert_unique_pos();
    v19 = *a3;
    v20 = *(_QWORD **)(a1[4] + 32LL);
    v21 = *((_QWORD *)*a3 - 3);
    v22 = *(v20 - 3);
    v23 = v22 - v21;
    if ( v22 <= v21 )
      v24 = *(v20 - 3);
    else
      v24 = *((_QWORD *)*a3 - 3);
    v25 = memcmp(v20, v19, v24);
    if ( v25 )
    {
      if ( (v25 & 0x80000000) == 0 )
        return std::_Rb_tree<std::string,std::pair<std::string const,boost::function<Caver::Component * ()(void)>>,std::_Select1st<std::pair<std::string const,boost::function<Caver::Component * ()(void)>>>,std::less<std::string>,std::allocator<std::pair<std::string const,boost::function<Caver::Component * ()(void)>>>>::_M_get_insert_unique_pos();
    }
    else
    {
      if ( v23 > 0x7FFFFFFF )
        return std::_Rb_tree<std::string,std::pair<std::string const,boost::function<Caver::Component * ()(void)>>,std::_Select1st<std::pair<std::string const,boost::function<Caver::Component * ()(void)>>>,std::less<std::string>,std::allocator<std::pair<std::string const,boost::function<Caver::Component * ()(void)>>>>::_M_get_insert_unique_pos();
      v38 = v23 <= (__int64)0xFFFFFFFF80000000LL ? 0x80000000 : v23;
      if ( (v38 & 0x80000000) == 0 )
        return std::_Rb_tree<std::string,std::pair<std::string const,boost::function<Caver::Component * ()(void)>>,std::_Select1st<std::pair<std::string const,boost::function<Caver::Component * ()(void)>>>,std::less<std::string>,std::allocator<std::pair<std::string const,boost::function<Caver::Component * ()(void)>>>>::_M_get_insert_unique_pos();
    }
    return 0;
  }
  v5 = *a3;
  v6 = (_QWORD *)a2[4];
  v7 = *((_QWORD *)*a3 - 3);
  v8 = *(v6 - 3);
  v9 = *a3;
  v10 = v7 - v8;
  if ( v7 <= v8 )
    v11 = *((_QWORD *)*a3 - 3);
  else
    v11 = *(v6 - 3);
  v12 = memcmp(v9, v6, v11);
  if ( v12 )
  {
    if ( v12 < 0 )
      goto LABEL_7;
  }
  else if ( v10 <= 0x7FFFFFFF )
  {
    v26 = v10 <= (__int64)0xFFFFFFFF80000000LL ? 0x80000000 : v7 - v8;
    if ( v26 < 0 )
    {
LABEL_7:
      if ( (_QWORD *)a1[3] == v4 )
        return a1[3];
      v13 = sub_54C700(v4);
      v14 = *(_QWORD **)(v13 + 32);
      v15 = *(v14 - 3);
      v16 = v15 - v7;
      if ( v15 <= v7 )
        v17 = *(v14 - 3);
      else
        v17 = v7;
      v18 = memcmp(v14, v5, v17);
      if ( v18 )
      {
        if ( v18 < 0 )
        {
LABEL_65:
          if ( *(_QWORD *)(v13 + 24) )
            return (__int64)v4;
          else
            return 0;
        }
      }
      else if ( v16 <= 0x7FFFFFFF )
      {
        v39 = v16 <= (__int64)0xFFFFFFFF80000000LL ? 0x80000000 : v16;
        if ( v39 < 0 )
          goto LABEL_65;
      }
      return std::_Rb_tree<std::string,std::pair<std::string const,boost::function<Caver::Component * ()(void)>>,std::_Select1st<std::pair<std::string const,boost::function<Caver::Component * ()(void)>>>,std::less<std::string>,std::allocator<std::pair<std::string const,boost::function<Caver::Component * ()(void)>>>>::_M_get_insert_unique_pos();
    }
  }
  v27 = v8 - v7;
  if ( v8 <= v7 )
    v28 = v8;
  else
    v28 = v7;
  v29 = memcmp(v6, v5, v28);
  if ( v29 )
  {
    if ( (v29 & 0x80000000) == 0 )
      return (__int64)v4;
  }
  else
  {
    if ( v27 > 0x7FFFFFFF )
      return (__int64)v4;
    v37 = v27 <= (__int64)0xFFFFFFFF80000000LL ? 0x80000000 : v8 - v7;
    if ( (v37 & 0x80000000) == 0 )
      return (__int64)v4;
  }
  if ( (_QWORD *)a1[4] == v4 )
    return 0;
  v30 = sub_54C640(v4);
  v31 = *(_QWORD **)(v30 + 32);
  v32 = *(v31 - 3);
  v33 = v7 - v32;
  if ( v7 <= v32 )
    v34 = v7;
  else
    v34 = *(v31 - 3);
  v35 = memcmp(v5, v31, v34);
  if ( !v35 )
  {
    if ( v33 > 0x7FFFFFFF )
      return std::_Rb_tree<std::string,std::pair<std::string const,boost::function<Caver::Component * ()(void)>>,std::_Select1st<std::pair<std::string const,boost::function<Caver::Component * ()(void)>>>,std::less<std::string>,std::allocator<std::pair<std::string const,boost::function<Caver::Component * ()(void)>>>>::_M_get_insert_unique_pos();
    if ( v33 <= (__int64)0xFFFFFFFF80000000LL )
      v35 = 0x80000000;
    else
      v35 = v33;
  }
  if ( (v35 & 0x80000000) == 0 )
    return std::_Rb_tree<std::string,std::pair<std::string const,boost::function<Caver::Component * ()(void)>>,std::_Select1st<std::pair<std::string const,boost::function<Caver::Component * ()(void)>>>,std::less<std::string>,std::allocator<std::pair<std::string const,boost::function<Caver::Component * ()(void)>>>>::_M_get_insert_unique_pos();
  if ( v4[3] )
    return v30;
  else
    return 0;
}

