/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004339A4
 * Mangled: _ZNSt8_Rb_treeISsSt4pairIKSsN5boost10shared_ptrIN5Caver8GUILabelEEEESt10_Select1stIS7_ESt4lessISsESaIS7_EE29_M_get_insert_hint_unique_posESt23_Rb_tree_const_iteratorIS7_ERS1_
 * Demangled: std::_Rb_tree<std::string,std::pair<std::string const,boost::shared_ptr<Caver::GUILabel>>,std::_Select1st<std::pair<std::string const,boost::shared_ptr<Caver::GUILabel>>>,std::less<std::string>,std::allocator<std::pair<std::string const,boost::shared_ptr<Caver::GUILabel>>>>::_M_get_insert_hint_unique_pos(std::_Rb_tree_const_iterator<std::pair<std::string const,boost::shared_ptr<Caver::GUILabel>>>,std::string const&)
 *
 * Callers: 1
 *   0x0000000000203930  std::_Rb_tree<std::string,std::pair<std::string const,boost::shared_ptr<Caver::GUILabel>>,std::_Select1st<std::pair<std::string const,boost::shared_ptr<Caver::GUILabel>>>,std::less<std::string>,std::allocator<std::pair<std::string const,boost::shared_ptr<Caver::GUILabel>>>>::_M_get_insert_hint_unique_pos(std::_Rb_tree_const_iterator<std::pair<std::string const,boost::shared_ptr<Caver::GUILabel>>>,std::string const&)
 *
 * Callees: 4
 *   0x00000000001F5190  .memcmp
 *   0x00000000001FDCA0  std::_Rb_tree<std::string,std::pair<std::string const,boost::shared_ptr<Caver::GUILabel>>,std::_Select1st<std::pair<std::string const,boost::shared_ptr<Caver::GUILabel>>>,std::less<std::string>,std::allocator<std::pair<std::string const,boost::shared_ptr<Caver::GUILabel>>>>::_M_get_insert_unique_pos(std::string const&)
 *   0x000000000054C640  sub_54C640
 *   0x000000000054C700  sub_54C700
 *
 * Referenced strings: 35
 *   insn=0x00000000004339CC string=0x00000000004339D0 "`"
 *   insn=0x00000000004339D4 string=0x00000000004339D8 "w"
 *   insn=0x00000000004339EC string=0x00000000004339F0 """
 *   insn=0x00000000004339F4 string=0x00000000001F5190 "P'"
 *   insn=0x00000000004339FC string=0x0000000000433A90 ":"
 *   insn=0x0000000000433A0C string=0x0000000000433A10 "<c"
 *   insn=0x0000000000433A1C string=0x0000000000433A20 ""
 *   insn=0x0000000000433A34 string=0x0000000000433A38 "c"
 *   insn=0x0000000000433A4C string=0x0000000000433A50 ")"
 *   insn=0x0000000000433A50 string=0x0000000000433A54 ""
 *   insn=0x0000000000433A58 string=0x0000000000433A5C """
 *   insn=0x0000000000433A64 string=0x0000000000433A68 "@\t"
 *   insn=0x0000000000433A68 string=0x0000000000433A6C "="
 *   insn=0x0000000000433A70 string=0x0000000000433A74 "_"
 *   insn=0x0000000000433A7C string=0x0000000000433A80 "_"
 *   insn=0x0000000000433A84 string=0x0000000000433A88 "@"
 *   insn=0x0000000000433AB0 string=0x0000000000433AB4 "`"
 *   insn=0x0000000000433AC8 string=0x0000000000433ACC "("
 *   insn=0x0000000000433AE0 string=0x0000000000433AE4 "?"
 *   insn=0x0000000000433AE4 string=0x0000000000433AE8 "L"
 *   insn=0x0000000000433AEC string=0x0000000000433AF0 "?"
 *   insn=0x0000000000433AF4 string=0x0000000000433AF8 " "
 *   insn=0x0000000000433AFC string=0x0000000000433B00 "h"
 *   insn=0x0000000000433B08 string=0x0000000000433B0C "w"
 *   insn=0x0000000000433B10 string=0x0000000000433B14 "$"
 *   insn=0x0000000000433B18 string=0x0000000000433B1C "_"
 *   insn=0x0000000000433B24 string=0x0000000000433B28 "_"
 *   insn=0x0000000000433B2C string=0x0000000000433B30 "@"
 *   insn=0x0000000000433B44 string=0x0000000000433B48 "L"
 *   insn=0x0000000000433B54 string=0x0000000000433B58 "`"
 *   insn=0x0000000000433B70 string=0x0000000000433B74 "?"
 *   insn=0x0000000000433B7C string=0x0000000000433B80 "?"
 *   insn=0x0000000000433B84 string=0x0000000000433B88 " "
 *   insn=0x0000000000433B94 string=0x0000000000433B98 "B("
 *   insn=0x0000000000433B98 string=0x00000000001FDCA0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall std::_Rb_tree<std::string,std::pair<std::string const,boost::shared_ptr<Caver::GUILabel>>,std::_Select1st<std::pair<std::string const,boost::shared_ptr<Caver::GUILabel>>>,std::less<std::string>,std::allocator<std::pair<std::string const,boost::shared_ptr<Caver::GUILabel>>>>::_M_get_insert_hint_unique_pos(
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
      return std::_Rb_tree<std::string,std::pair<std::string const,boost::shared_ptr<Caver::GUILabel>>,std::_Select1st<std::pair<std::string const,boost::shared_ptr<Caver::GUILabel>>>,std::less<std::string>,std::allocator<std::pair<std::string const,boost::shared_ptr<Caver::GUILabel>>>>::_M_get_insert_unique_pos();
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
        return std::_Rb_tree<std::string,std::pair<std::string const,boost::shared_ptr<Caver::GUILabel>>,std::_Select1st<std::pair<std::string const,boost::shared_ptr<Caver::GUILabel>>>,std::less<std::string>,std::allocator<std::pair<std::string const,boost::shared_ptr<Caver::GUILabel>>>>::_M_get_insert_unique_pos();
    }
    else
    {
      if ( v23 > 0x7FFFFFFF )
        return std::_Rb_tree<std::string,std::pair<std::string const,boost::shared_ptr<Caver::GUILabel>>,std::_Select1st<std::pair<std::string const,boost::shared_ptr<Caver::GUILabel>>>,std::less<std::string>,std::allocator<std::pair<std::string const,boost::shared_ptr<Caver::GUILabel>>>>::_M_get_insert_unique_pos();
      v38 = v23 <= (__int64)0xFFFFFFFF80000000LL ? 0x80000000 : v23;
      if ( (v38 & 0x80000000) == 0 )
        return std::_Rb_tree<std::string,std::pair<std::string const,boost::shared_ptr<Caver::GUILabel>>,std::_Select1st<std::pair<std::string const,boost::shared_ptr<Caver::GUILabel>>>,std::less<std::string>,std::allocator<std::pair<std::string const,boost::shared_ptr<Caver::GUILabel>>>>::_M_get_insert_unique_pos();
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
      return std::_Rb_tree<std::string,std::pair<std::string const,boost::shared_ptr<Caver::GUILabel>>,std::_Select1st<std::pair<std::string const,boost::shared_ptr<Caver::GUILabel>>>,std::less<std::string>,std::allocator<std::pair<std::string const,boost::shared_ptr<Caver::GUILabel>>>>::_M_get_insert_unique_pos();
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
      return std::_Rb_tree<std::string,std::pair<std::string const,boost::shared_ptr<Caver::GUILabel>>,std::_Select1st<std::pair<std::string const,boost::shared_ptr<Caver::GUILabel>>>,std::less<std::string>,std::allocator<std::pair<std::string const,boost::shared_ptr<Caver::GUILabel>>>>::_M_get_insert_unique_pos();
    if ( v33 <= (__int64)0xFFFFFFFF80000000LL )
      v35 = 0x80000000;
    else
      v35 = v33;
  }
  if ( (v35 & 0x80000000) == 0 )
    return std::_Rb_tree<std::string,std::pair<std::string const,boost::shared_ptr<Caver::GUILabel>>,std::_Select1st<std::pair<std::string const,boost::shared_ptr<Caver::GUILabel>>>,std::less<std::string>,std::allocator<std::pair<std::string const,boost::shared_ptr<Caver::GUILabel>>>>::_M_get_insert_unique_pos();
  if ( v4[3] )
    return v30;
  else
    return 0;
}

