/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004505D0
 * Mangled: _ZNSt8_Rb_treeIiSt4pairIKiiESt10_Select1stIS2_ESt4lessIiESaIS2_EE29_M_get_insert_hint_unique_posESt23_Rb_tree_const_iteratorIS2_ERS1_
 * Demangled: std::_Rb_tree<int,std::pair<int const,int>,std::_Select1st<std::pair<int const,int>>,std::less<int>,std::allocator<std::pair<int const,int>>>::_M_get_insert_hint_unique_pos(std::_Rb_tree_const_iterator<std::pair<int const,int>>,int const&)
 *
 * Callers: 1
 *   0x00000000001FE770  std::_Rb_tree<int,std::pair<int const,int>,std::_Select1st<std::pair<int const,int>>,std::less<int>,std::allocator<std::pair<int const,int>>>::_M_get_insert_hint_unique_pos(std::_Rb_tree_const_iterator<std::pair<int const,int>>,int const&)
 *
 * Callees: 2
 *   0x000000000054C640  sub_54C640
 *   0x000000000054C700  sub_54C700
 *
 * Referenced strings: 44
 *   insn=0x00000000004505F4 string=0x00000000004505F8 "@"
 *   insn=0x00000000004505FC string=0x0000000000450600 "h"@"
 *   insn=0x0000000000450618 string=0x000000000045061C "9"
 *   insn=0x000000000045061C string=0x0000000000450620 " @"
 *   insn=0x0000000000450628 string=0x000000000045062C ""
 *   insn=0x0000000000450638 string=0x000000000045063C "`"
 *   insn=0x000000000045064C string=0x0000000000450650 "\t!@"
 *   insn=0x0000000000450650 string=0x0000000000450654 "?"
 *   insn=0x0000000000450654 string=0x0000000000450658 "+"
 *   insn=0x0000000000450678 string=0x000000000045067C "i"
 *   insn=0x000000000045067C string=0x0000000000450680 ")"
 *   insn=0x0000000000450680 string=0x0000000000450684 ")"
 *   insn=0x000000000045068C string=0x0000000000450690 "\n"
 *   insn=0x00000000004506B0 string=0x00000000004506B4 "?"
 *   insn=0x00000000004506B8 string=0x00000000004506BC ":"
 *   insn=0x00000000004506BC string=0x00000000004507A4 "s"
 *   insn=0x00000000004506C0 string=0x00000000004506C4 "*"
 *   insn=0x00000000004506CC string=0x00000000004506D0 "`"
 *   insn=0x00000000004506D8 string=0x00000000004506DC " @"
 *   insn=0x00000000004506E0 string=0x00000000004506E4 "\n"
 *   insn=0x00000000004506E4 string=0x00000000004506E8 "h"
 *   insn=0x00000000004506F0 string=0x00000000004506F4 "s"
 *   insn=0x00000000004506F4 string=0x00000000004506F8 "1"
 *   insn=0x0000000000450700 string=0x0000000000450704 "."
 *   insn=0x000000000045070C string=0x0000000000450710 "+"
 *   insn=0x0000000000450714 string=0x0000000000450718 ")"
 *   insn=0x000000000045071C string=0x0000000000450720 "i"
 *   insn=0x0000000000450724 string=0x0000000000450728 "h"@"
 *   insn=0x0000000000450728 string=0x000000000045072C "ib"
 *   insn=0x000000000045072C string=0x0000000000450730 "jB"
 *   insn=0x0000000000450734 string=0x0000000000450738 "I"
 *   insn=0x0000000000450738 string=0x000000000045073C ")"
 *   insn=0x000000000045073C string=0x0000000000450740 ")"
 *   insn=0x0000000000450748 string=0x000000000045074C "j"
 *   insn=0x000000000045074C string=0x0000000000450798 " @"
 *   insn=0x0000000000450750 string=0x0000000000450754 " "
 *   insn=0x000000000045076C string=0x0000000000450770 "h"@"
 *   insn=0x0000000000450770 string=0x0000000000450774 "ib"
 *   insn=0x0000000000450774 string=0x0000000000450778 "jB"
 *   insn=0x000000000045077C string=0x0000000000450780 "I"
 *   insn=0x0000000000450780 string=0x0000000000450784 ")"
 *   insn=0x0000000000450784 string=0x0000000000450788 ")"
 *   insn=0x0000000000450790 string=0x0000000000450794 "K"
 *   insn=0x00000000004507B0 string=0x00000000004507B4 "!"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall std::_Rb_tree<int,std::pair<int const,int>,std::_Select1st<std::pair<int const,int>>,std::less<int>,std::allocator<std::pair<int const,int>>>::_M_get_insert_hint_unique_pos(
        _QWORD *a1,
        __int64 a2,
        int *a3)
{
  _QWORD *v5; // x21
  int v7; // w23
  int v8; // w8
  _QWORD *v9; // x22
  __int64 v10; // x0
  __int64 v11; // x9
  int v12; // w8
  int v13; // w10
  __int64 *v14; // x9
  __int64 v15; // x0
  __int64 v16; // x0
  __int64 v18; // x9
  __int64 v19; // x19
  int v20; // w8
  __int64 *v21; // x9
  __int64 v22; // x0
  __int64 v23; // x9
  int v24; // w8
  __int64 *v25; // x9

  v5 = a1 + 1;
  if ( a1 + 1 == (_QWORD *)a2 )
  {
    if ( !a1[5] || *(_DWORD *)(a1[4] + 32LL) >= *a3 )
    {
      v11 = a1[2];
      if ( !v11 )
        goto LABEL_16;
      v12 = *a3;
      do
      {
        v5 = (_QWORD *)v11;
        v13 = *(_DWORD *)(v11 + 32);
        v14 = (__int64 *)(v11 + 24);
        if ( v12 < v13 )
          v14 = v5 + 2;
        v11 = *v14;
      }
      while ( v11 );
      if ( v12 < v13 )
      {
LABEL_16:
        if ( v5 == (_QWORD *)a1[3] )
          return 0;
        v15 = sub_54C700(v5);
        v12 = *a3;
        v5 = (_QWORD *)v15;
      }
      if ( *((_DWORD *)v5 + 8) >= v12 )
        return (__int64)v5;
      else
        return 0;
    }
    return 0;
  }
  v7 = *a3;
  v8 = *(_DWORD *)(a2 + 32);
  if ( *a3 < v8 )
  {
    v9 = (_QWORD *)a1[3];
    if ( v9 == (_QWORD *)a2 )
      return (__int64)v9;
    v10 = sub_54C700(a2);
    if ( *(_DWORD *)(v10 + 32) < v7 )
    {
      if ( *(_QWORD *)(v10 + 24) )
        return a2;
      else
        return 0;
    }
    v18 = a1[2];
    if ( v18 )
    {
      do
      {
        v19 = v18;
        v20 = *(_DWORD *)(v18 + 32);
        v21 = (__int64 *)(v18 + 24);
        if ( v7 < v20 )
          v21 = (__int64 *)(v19 + 16);
        v18 = *v21;
      }
      while ( v18 );
      v22 = v19;
      if ( v7 >= v20 )
        goto LABEL_43;
      if ( (_QWORD *)v19 != v9 )
      {
LABEL_37:
        v22 = sub_54C700(v19);
LABEL_43:
        if ( *(_DWORD *)(v22 + 32) >= v7 )
          return v22;
        else
          return 0;
      }
    }
    else
    {
      v19 = (__int64)v5;
      if ( v5 != v9 )
        goto LABEL_37;
    }
    return 0;
  }
  if ( v8 >= v7 )
    return a2;
  if ( a1[4] == a2 )
    return 0;
  v16 = sub_54C640(a2);
  if ( v7 >= *(_DWORD *)(v16 + 32) )
  {
    v23 = a1[2];
    if ( v23 )
    {
      do
      {
        v19 = v23;
        v24 = *(_DWORD *)(v23 + 32);
        v25 = (__int64 *)(v23 + 24);
        if ( v7 < v24 )
          v25 = (__int64 *)(v19 + 16);
        v23 = *v25;
      }
      while ( v23 );
      v22 = v19;
      if ( v7 >= v24 )
        goto LABEL_43;
    }
    else
    {
      v19 = (__int64)v5;
    }
    if ( v19 != a1[3] )
      goto LABEL_37;
    return 0;
  }
  if ( *(_QWORD *)(a2 + 24) )
    return v16;
  else
    return 0;
}

