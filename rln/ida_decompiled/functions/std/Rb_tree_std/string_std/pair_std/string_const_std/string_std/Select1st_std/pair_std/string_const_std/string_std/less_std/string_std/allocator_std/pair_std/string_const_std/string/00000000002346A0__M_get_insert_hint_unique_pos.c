/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002346A0
 * Mangled: _ZNSt8_Rb_treeISsSt4pairIKSsSsESt10_Select1stIS2_ESt4lessISsESaIS2_EE29_M_get_insert_hint_unique_posESt23_Rb_tree_const_iteratorIS2_ERS1_
 * Demangled: std::_Rb_tree<std::string,std::pair<std::string const,std::string>,std::_Select1st<std::pair<std::string const,std::string>>,std::less<std::string>,std::allocator<std::pair<std::string const,std::string>>>::_M_get_insert_hint_unique_pos(std::_Rb_tree_const_iterator<std::pair<std::string const,std::string>>,std::string const&)
 *
 * Callers: 1
 *   0x00000000001FD630  std::_Rb_tree<std::string,std::pair<std::string const,std::string>,std::_Select1st<std::pair<std::string const,std::string>>,std::less<std::string>,std::allocator<std::pair<std::string const,std::string>>>::_M_get_insert_hint_unique_pos(std::_Rb_tree_const_iterator<std::pair<std::string const,std::string>>,std::string const&)
 *
 * Callees: 4
 *   0x00000000001F5190  .memcmp
 *   0x00000000001FEB30  std::_Rb_tree<std::string,std::pair<std::string const,std::string>,std::_Select1st<std::pair<std::string const,std::string>>,std::less<std::string>,std::allocator<std::pair<std::string const,std::string>>>::_M_get_insert_unique_pos(std::string const&)
 *   0x000000000054C640  sub_54C640
 *   0x000000000054C700  sub_54C700
 *
 * Referenced strings: 34
 *   insn=0x00000000002346C8 string=0x00000000002346CC "`"
 *   insn=0x00000000002346D0 string=0x00000000002346D4 "w"
 *   insn=0x00000000002346E8 string=0x00000000002346EC """
 *   insn=0x00000000002346F0 string=0x00000000001F5190 "P'"
 *   insn=0x00000000002346F8 string=0x000000000023478C ":"
 *   insn=0x0000000000234718 string=0x000000000023471C ""
 *   insn=0x0000000000234730 string=0x0000000000234734 "c"
 *   insn=0x0000000000234748 string=0x000000000023474C ")"
 *   insn=0x000000000023474C string=0x0000000000234750 ""
 *   insn=0x0000000000234754 string=0x0000000000234758 """
 *   insn=0x0000000000234760 string=0x0000000000234764 "@\t"
 *   insn=0x0000000000234764 string=0x0000000000234768 "="
 *   insn=0x000000000023476C string=0x0000000000234770 "_"
 *   insn=0x0000000000234778 string=0x000000000023477C "_"
 *   insn=0x0000000000234780 string=0x0000000000234784 "@"
 *   insn=0x0000000000234798 string=0x000000000023479C "}"
 *   insn=0x00000000002347AC string=0x00000000002347B0 "`"
 *   insn=0x00000000002347C4 string=0x00000000002347C8 "("
 *   insn=0x00000000002347D0 string=0x00000000002347D4 "o"
 *   insn=0x00000000002347DC string=0x00000000002347E0 "?"
 *   insn=0x00000000002347E0 string=0x00000000002347E4 "L"
 *   insn=0x00000000002347E8 string=0x00000000002347EC "?"
 *   insn=0x00000000002347F0 string=0x00000000002347F4 " "
 *   insn=0x00000000002347F8 string=0x00000000002347FC "h"
 *   insn=0x0000000000234804 string=0x0000000000234808 "w"
 *   insn=0x000000000023480C string=0x0000000000234810 "$"
 *   insn=0x0000000000234814 string=0x0000000000234818 "_"
 *   insn=0x0000000000234820 string=0x0000000000234824 "_"
 *   insn=0x0000000000234828 string=0x000000000023482C "@"
 *   insn=0x0000000000234840 string=0x0000000000234844 "L"
 *   insn=0x0000000000234850 string=0x0000000000234854 "`"
 *   insn=0x000000000023486C string=0x0000000000234870 "?"
 *   insn=0x0000000000234878 string=0x000000000023487C "?"
 *   insn=0x0000000000234880 string=0x0000000000234884 " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall std::_Rb_tree<std::string,std::pair<std::string const,std::string>,std::_Select1st<std::pair<std::string const,std::string>>,std::less<std::string>,std::allocator<std::pair<std::string const,std::string>>>::_M_get_insert_hint_unique_pos(
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
      return std::_Rb_tree<std::string,std::pair<std::string const,std::string>,std::_Select1st<std::pair<std::string const,std::string>>,std::less<std::string>,std::allocator<std::pair<std::string const,std::string>>>::_M_get_insert_unique_pos();
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
        return std::_Rb_tree<std::string,std::pair<std::string const,std::string>,std::_Select1st<std::pair<std::string const,std::string>>,std::less<std::string>,std::allocator<std::pair<std::string const,std::string>>>::_M_get_insert_unique_pos();
    }
    else
    {
      if ( v23 > 0x7FFFFFFF )
        return std::_Rb_tree<std::string,std::pair<std::string const,std::string>,std::_Select1st<std::pair<std::string const,std::string>>,std::less<std::string>,std::allocator<std::pair<std::string const,std::string>>>::_M_get_insert_unique_pos();
      v38 = v23 <= (__int64)0xFFFFFFFF80000000LL ? 0x80000000 : v23;
      if ( (v38 & 0x80000000) == 0 )
        return std::_Rb_tree<std::string,std::pair<std::string const,std::string>,std::_Select1st<std::pair<std::string const,std::string>>,std::less<std::string>,std::allocator<std::pair<std::string const,std::string>>>::_M_get_insert_unique_pos();
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
      return std::_Rb_tree<std::string,std::pair<std::string const,std::string>,std::_Select1st<std::pair<std::string const,std::string>>,std::less<std::string>,std::allocator<std::pair<std::string const,std::string>>>::_M_get_insert_unique_pos();
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
      return std::_Rb_tree<std::string,std::pair<std::string const,std::string>,std::_Select1st<std::pair<std::string const,std::string>>,std::less<std::string>,std::allocator<std::pair<std::string const,std::string>>>::_M_get_insert_unique_pos();
    if ( v33 <= (__int64)0xFFFFFFFF80000000LL )
      v35 = 0x80000000;
    else
      v35 = v33;
  }
  if ( (v35 & 0x80000000) == 0 )
    return std::_Rb_tree<std::string,std::pair<std::string const,std::string>,std::_Select1st<std::pair<std::string const,std::string>>,std::less<std::string>,std::allocator<std::pair<std::string const,std::string>>>::_M_get_insert_unique_pos();
  if ( v4[3] )
    return v30;
  else
    return 0;
}

