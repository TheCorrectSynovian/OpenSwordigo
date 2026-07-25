/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002438C0
 * Mangled: _ZNSt8_Rb_treeIiSt4pairIKiN5Caver9Component13OutletBindingEESt10_Select1stIS5_ESt4lessIiESaIS5_EE29_M_get_insert_hint_unique_posESt23_Rb_tree_const_iteratorIS5_ERS1_
 * Demangled: std::_Rb_tree<int,std::pair<int const,Caver::Component::OutletBinding>,std::_Select1st<std::pair<int const,Caver::Component::OutletBinding>>,std::less<int>,std::allocator<std::pair<int const,Caver::Component::OutletBinding>>>::_M_get_insert_hint_unique_pos(std::_Rb_tree_const_iterator<std::pair<int const,Caver::Component::OutletBinding>>,int const&)
 *
 * Callers: 1
 *   0x00000000001F9AC0  std::_Rb_tree<int,std::pair<int const,Caver::Component::OutletBinding>,std::_Select1st<std::pair<int const,Caver::Component::OutletBinding>>,std::less<int>,std::allocator<std::pair<int const,Caver::Component::OutletBinding>>>::_M_get_insert_hint_unique_pos(std::_Rb_tree_const_iterator<std::pair<int const,Caver::Component::OutletBinding>>,int const&)
 *
 * Callees: 2
 *   0x000000000054C640  sub_54C640
 *   0x000000000054C700  sub_54C700
 *
 * Referenced strings: 46
 *   insn=0x00000000002438E4 string=0x00000000002438E8 "@"
 *   insn=0x00000000002438EC string=0x00000000002438F0 "h"@"
 *   insn=0x0000000000243908 string=0x000000000024390C "}#"
 *   insn=0x000000000024390C string=0x0000000000243910 " @"
 *   insn=0x0000000000243918 string=0x000000000024391C ""
 *   insn=0x0000000000243928 string=0x000000000024392C "`"
 *   insn=0x000000000024393C string=0x0000000000243940 "\t!@"
 *   insn=0x0000000000243940 string=0x0000000000243944 "?"
 *   insn=0x0000000000243944 string=0x0000000000243948 "+"
 *   insn=0x0000000000243968 string=0x000000000024396C "i"
 *   insn=0x000000000024396C string=0x0000000000243970 ")"
 *   insn=0x0000000000243970 string=0x0000000000243974 ")"
 *   insn=0x000000000024397C string=0x0000000000243980 "\n"
 *   insn=0x0000000000243990 string=0x0000000000243994 "[#"
 *   insn=0x00000000002439A0 string=0x00000000002439A4 "?"
 *   insn=0x00000000002439A8 string=0x00000000002439AC ":"
 *   insn=0x00000000002439AC string=0x0000000000243A94 "s"
 *   insn=0x00000000002439B0 string=0x00000000002439B4 "*"
 *   insn=0x00000000002439BC string=0x00000000002439C0 "`"
 *   insn=0x00000000002439C8 string=0x00000000002439CC " @"
 *   insn=0x00000000002439D0 string=0x00000000002439D4 "\n"
 *   insn=0x00000000002439D4 string=0x00000000002439D8 "h"
 *   insn=0x00000000002439E0 string=0x00000000002439E4 "s"
 *   insn=0x00000000002439E4 string=0x00000000002439E8 "1"
 *   insn=0x00000000002439F0 string=0x00000000002439F4 "."
 *   insn=0x00000000002439FC string=0x0000000000243A00 "+"
 *   insn=0x0000000000243A04 string=0x0000000000243A08 ")"
 *   insn=0x0000000000243A0C string=0x0000000000243A10 "i"
 *   insn=0x0000000000243A14 string=0x0000000000243A18 "h"@"
 *   insn=0x0000000000243A18 string=0x0000000000243A1C "ib"
 *   insn=0x0000000000243A1C string=0x0000000000243A20 "jB"
 *   insn=0x0000000000243A24 string=0x0000000000243A28 "I"
 *   insn=0x0000000000243A28 string=0x0000000000243A2C ")"
 *   insn=0x0000000000243A2C string=0x0000000000243A30 ")"
 *   insn=0x0000000000243A38 string=0x0000000000243A3C "j"
 *   insn=0x0000000000243A3C string=0x0000000000243A88 " @"
 *   insn=0x0000000000243A40 string=0x0000000000243A44 " "
 *   insn=0x0000000000243A48 string=0x0000000000243A4C "-#"
 *   insn=0x0000000000243A5C string=0x0000000000243A60 "h"@"
 *   insn=0x0000000000243A60 string=0x0000000000243A64 "ib"
 *   insn=0x0000000000243A64 string=0x0000000000243A68 "jB"
 *   insn=0x0000000000243A6C string=0x0000000000243A70 "I"
 *   insn=0x0000000000243A70 string=0x0000000000243A74 ")"
 *   insn=0x0000000000243A74 string=0x0000000000243A78 ")"
 *   insn=0x0000000000243A80 string=0x0000000000243A84 "K"
 *   insn=0x0000000000243AA0 string=0x0000000000243AA4 "!"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall std::_Rb_tree<int,std::pair<int const,Caver::Component::OutletBinding>,std::_Select1st<std::pair<int const,Caver::Component::OutletBinding>>,std::less<int>,std::allocator<std::pair<int const,Caver::Component::OutletBinding>>>::_M_get_insert_hint_unique_pos(
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

