/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000247974
 * Mangled: _ZNSt8_Rb_treeIlSt4pairIKlN5boost10shared_ptrIN5Caver19ComponentCollectionEEEESt10_Select1stIS7_ESt4lessIlESaIS7_EE29_M_get_insert_hint_unique_posESt23_Rb_tree_const_iteratorIS7_ERS1_
 * Demangled: std::_Rb_tree<long,std::pair<long const,boost::shared_ptr<Caver::ComponentCollection>>,std::_Select1st<std::pair<long const,boost::shared_ptr<Caver::ComponentCollection>>>,std::less<long>,std::allocator<std::pair<long const,boost::shared_ptr<Caver::ComponentCollection>>>>::_M_get_insert_hint_unique_pos(std::_Rb_tree_const_iterator<std::pair<long const,boost::shared_ptr<Caver::ComponentCollection>>>,long const&)
 *
 * Callers: 1
 *   0x00000000001FECF0  std::_Rb_tree<long,std::pair<long const,boost::shared_ptr<Caver::ComponentCollection>>,std::_Select1st<std::pair<long const,boost::shared_ptr<Caver::ComponentCollection>>>,std::less<long>,std::allocator<std::pair<long const,boost::shared_ptr<Caver::ComponentCollection>>>>::_M_get_insert_hint_unique_pos(std::_Rb_tree_const_iterator<std::pair<long const,boost::shared_ptr<Caver::ComponentCollection>>>,long const&)
 *
 * Callees: 2
 *   0x000000000054C640  sub_54C640
 *   0x000000000054C700  sub_54C700
 *
 * Referenced strings: 45
 *   insn=0x0000000000247998 string=0x000000000024799C "@"
 *   insn=0x00000000002479A0 string=0x00000000002479A4 "h"
 *   insn=0x00000000002479BC string=0x00000000002479C0 "P"
 *   insn=0x00000000002479C0 string=0x00000000002479C4 ""
 *   insn=0x00000000002479CC string=0x00000000002479D0 ""
 *   insn=0x00000000002479DC string=0x00000000002479E0 "`"
 *   insn=0x00000000002479F0 string=0x00000000002479F4 "\t"
 *   insn=0x00000000002479F4 string=0x00000000002479F8 "?"
 *   insn=0x00000000002479F8 string=0x00000000002479FC "+"
 *   insn=0x0000000000247A1C string=0x0000000000247A20 "i"
 *   insn=0x0000000000247A20 string=0x0000000000247A24 ")"
 *   insn=0x0000000000247A24 string=0x0000000000247A28 ")"
 *   insn=0x0000000000247A30 string=0x0000000000247A34 "\n"
 *   insn=0x0000000000247A44 string=0x0000000000247A48 "."
 *   insn=0x0000000000247A54 string=0x0000000000247A58 "?"
 *   insn=0x0000000000247A5C string=0x0000000000247A60 ":"
 *   insn=0x0000000000247A60 string=0x0000000000247B48 "s"
 *   insn=0x0000000000247A64 string=0x0000000000247A68 "*"
 *   insn=0x0000000000247A70 string=0x0000000000247A74 "`"
 *   insn=0x0000000000247A7C string=0x0000000000247A80 ""
 *   insn=0x0000000000247A84 string=0x0000000000247A88 "\n"
 *   insn=0x0000000000247A88 string=0x0000000000247A8C "h"
 *   insn=0x0000000000247A94 string=0x0000000000247A98 "s"
 *   insn=0x0000000000247A98 string=0x0000000000247A9C "1"
 *   insn=0x0000000000247AA4 string=0x0000000000247AA8 "."
 *   insn=0x0000000000247AB0 string=0x0000000000247AB4 "+"
 *   insn=0x0000000000247AB8 string=0x0000000000247ABC ")"
 *   insn=0x0000000000247AC0 string=0x0000000000247AC4 "i"
 *   insn=0x0000000000247AC8 string=0x0000000000247ACC "h"
 *   insn=0x0000000000247ACC string=0x0000000000247AD0 "ib"
 *   insn=0x0000000000247AD0 string=0x0000000000247AD4 "jB"
 *   insn=0x0000000000247AD8 string=0x0000000000247ADC "I"
 *   insn=0x0000000000247ADC string=0x0000000000247AE0 ")"
 *   insn=0x0000000000247AE0 string=0x0000000000247AE4 ")"
 *   insn=0x0000000000247AEC string=0x0000000000247AF0 "j"
 *   insn=0x0000000000247AF0 string=0x0000000000247B3C ""
 *   insn=0x0000000000247AF4 string=0x0000000000247AF8 " "
 *   insn=0x0000000000247B10 string=0x0000000000247B14 "h"
 *   insn=0x0000000000247B14 string=0x0000000000247B18 "ib"
 *   insn=0x0000000000247B18 string=0x0000000000247B1C "jB"
 *   insn=0x0000000000247B20 string=0x0000000000247B24 "I"
 *   insn=0x0000000000247B24 string=0x0000000000247B28 ")"
 *   insn=0x0000000000247B28 string=0x0000000000247B2C ")"
 *   insn=0x0000000000247B34 string=0x0000000000247B38 "K"
 *   insn=0x0000000000247B54 string=0x0000000000247B58 "!"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall std::_Rb_tree<long,std::pair<long const,boost::shared_ptr<Caver::ComponentCollection>>,std::_Select1st<std::pair<long const,boost::shared_ptr<Caver::ComponentCollection>>>,std::less<long>,std::allocator<std::pair<long const,boost::shared_ptr<Caver::ComponentCollection>>>>::_M_get_insert_hint_unique_pos(
        _QWORD *a1,
        _QWORD *a2,
        __int64 *a3)
{
  _QWORD *v5; // x21
  __int64 v7; // x23
  __int64 v8; // x8
  _QWORD *v9; // x22
  __int64 v10; // x0
  _QWORD *v11; // x9
  __int64 v12; // x8
  __int64 v13; // x10
  _QWORD *v14; // x9
  __int64 v15; // x0
  __int64 v16; // x0
  __int64 v18; // x9
  __int64 v19; // x19
  __int64 v20; // x8
  __int64 *v21; // x9
  __int64 v22; // x0
  __int64 v23; // x9
  __int64 v24; // x8
  __int64 *v25; // x9

  v5 = a1 + 1;
  if ( a1 + 1 == a2 )
  {
    if ( !a1[5] || *(_QWORD *)(a1[4] + 32LL) >= *a3 )
    {
      v11 = (_QWORD *)a1[2];
      if ( !v11 )
        goto LABEL_16;
      v12 = *a3;
      do
      {
        v5 = v11;
        v13 = v11[4];
        v14 = v11 + 3;
        if ( v12 < v13 )
          v14 = v5 + 2;
        v11 = (_QWORD *)*v14;
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
      if ( v5[4] >= v12 )
        return (__int64)v5;
      else
        return 0;
    }
    return 0;
  }
  v7 = *a3;
  v8 = a2[4];
  if ( *a3 < v8 )
  {
    v9 = (_QWORD *)a1[3];
    if ( v9 == a2 )
      return (__int64)v9;
    v10 = sub_54C700(a2);
    if ( *(_QWORD *)(v10 + 32) < v7 )
    {
      if ( *(_QWORD *)(v10 + 24) )
        return (__int64)a2;
      else
        return 0;
    }
    v18 = a1[2];
    if ( v18 )
    {
      do
      {
        v19 = v18;
        v20 = *(_QWORD *)(v18 + 32);
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
        if ( *(_QWORD *)(v22 + 32) >= v7 )
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
    return (__int64)a2;
  if ( (_QWORD *)a1[4] == a2 )
    return 0;
  v16 = sub_54C640(a2);
  if ( v7 >= *(_QWORD *)(v16 + 32) )
  {
    v23 = a1[2];
    if ( v23 )
    {
      do
      {
        v19 = v23;
        v24 = *(_QWORD *)(v23 + 32);
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
  if ( a2[3] )
    return v16;
  else
    return 0;
}

