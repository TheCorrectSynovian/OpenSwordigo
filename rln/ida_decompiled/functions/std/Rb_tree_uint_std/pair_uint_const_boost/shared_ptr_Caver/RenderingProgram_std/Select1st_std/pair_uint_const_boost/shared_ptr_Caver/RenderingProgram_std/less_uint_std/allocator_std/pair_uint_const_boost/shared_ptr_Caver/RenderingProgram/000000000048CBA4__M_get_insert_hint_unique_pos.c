/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000048CBA4
 * Mangled: _ZNSt8_Rb_treeIjSt4pairIKjN5boost10shared_ptrIN5Caver16RenderingProgramEEEESt10_Select1stIS7_ESt4lessIjESaIS7_EE29_M_get_insert_hint_unique_posESt23_Rb_tree_const_iteratorIS7_ERS1_
 * Demangled: std::_Rb_tree<uint,std::pair<uint const,boost::shared_ptr<Caver::RenderingProgram>>,std::_Select1st<std::pair<uint const,boost::shared_ptr<Caver::RenderingProgram>>>,std::less<uint>,std::allocator<std::pair<uint const,boost::shared_ptr<Caver::RenderingProgram>>>>::_M_get_insert_hint_unique_pos(std::_Rb_tree_const_iterator<std::pair<uint const,boost::shared_ptr<Caver::RenderingProgram>>>,uint const&)
 *
 * Callers: 1
 *   0x0000000000200990  std::_Rb_tree<uint,std::pair<uint const,boost::shared_ptr<Caver::RenderingProgram>>,std::_Select1st<std::pair<uint const,boost::shared_ptr<Caver::RenderingProgram>>>,std::less<uint>,std::allocator<std::pair<uint const,boost::shared_ptr<Caver::RenderingProgram>>>>::_M_get_insert_hint_unique_pos(std::_Rb_tree_const_iterator<std::pair<uint const,boost::shared_ptr<Caver::RenderingProgram>>>,uint const&)
 *
 * Callees: 2
 *   0x000000000054C640  sub_54C640
 *   0x000000000054C700  sub_54C700
 *
 * Referenced strings: 43
 *   insn=0x000000000048CBC8 string=0x000000000048CBCC "@"
 *   insn=0x000000000048CBD0 string=0x000000000048CBD4 "h"@"
 *   insn=0x000000000048CBF0 string=0x000000000048CBF4 " @"
 *   insn=0x000000000048CBFC string=0x000000000048CC00 ""
 *   insn=0x000000000048CC0C string=0x000000000048CC10 "`"
 *   insn=0x000000000048CC20 string=0x000000000048CC24 "\t!@"
 *   insn=0x000000000048CC24 string=0x000000000048CC28 "?"
 *   insn=0x000000000048CC28 string=0x000000000048CC2C "#"
 *   insn=0x000000000048CC4C string=0x000000000048CC50 "i1"
 *   insn=0x000000000048CC50 string=0x000000000048CC54 ")"
 *   insn=0x000000000048CC54 string=0x000000000048CC58 ")"
 *   insn=0x000000000048CC84 string=0x000000000048CC88 "?"
 *   insn=0x000000000048CC8C string=0x000000000048CC90 ":"
 *   insn=0x000000000048CC90 string=0x000000000048CD78 "s2"
 *   insn=0x000000000048CC94 string=0x000000000048CC98 """
 *   insn=0x000000000048CCA0 string=0x000000000048CCA4 "`"
 *   insn=0x000000000048CCA8 string=0x000000000048CCAC "e"
 *   insn=0x000000000048CCAC string=0x000000000048CCB0 " @"
 *   insn=0x000000000048CCB8 string=0x000000000048CCBC "h"
 *   insn=0x000000000048CCC4 string=0x000000000048CCC8 "s"
 *   insn=0x000000000048CCC8 string=0x000000000048CCCC "1"
 *   insn=0x000000000048CCD4 string=0x000000000048CCD8 "."
 *   insn=0x000000000048CCE0 string=0x000000000048CCE4 "+"
 *   insn=0x000000000048CCE8 string=0x000000000048CCEC ")"
 *   insn=0x000000000048CCF0 string=0x000000000048CCF4 "i"
 *   insn=0x000000000048CCF8 string=0x000000000048CCFC "h"@"
 *   insn=0x000000000048CCFC string=0x000000000048CD00 "ib"
 *   insn=0x000000000048CD00 string=0x000000000048CD04 "jB"
 *   insn=0x000000000048CD08 string=0x000000000048CD0C "I1"
 *   insn=0x000000000048CD0C string=0x000000000048CD10 ")"
 *   insn=0x000000000048CD10 string=0x000000000048CD14 ")"
 *   insn=0x000000000048CD1C string=0x000000000048CD20 "b"
 *   insn=0x000000000048CD20 string=0x000000000048CD6C " @"
 *   insn=0x000000000048CD24 string=0x000000000048CD28 " "
 *   insn=0x000000000048CD2C string=0x000000000048CD30 "t"
 *   insn=0x000000000048CD40 string=0x000000000048CD44 "h"@"
 *   insn=0x000000000048CD44 string=0x000000000048CD48 "ib"
 *   insn=0x000000000048CD48 string=0x000000000048CD4C "jB"
 *   insn=0x000000000048CD50 string=0x000000000048CD54 "I1"
 *   insn=0x000000000048CD54 string=0x000000000048CD58 ")"
 *   insn=0x000000000048CD58 string=0x000000000048CD5C ")"
 *   insn=0x000000000048CD64 string=0x000000000048CD68 "C"
 *   insn=0x000000000048CD84 string=0x000000000048CD88 "!"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall std::_Rb_tree<unsigned int,std::pair<unsigned int const,boost::shared_ptr<Caver::RenderingProgram>>,std::_Select1st<std::pair<unsigned int const,boost::shared_ptr<Caver::RenderingProgram>>>,std::less<unsigned int>,std::allocator<std::pair<unsigned int const,boost::shared_ptr<Caver::RenderingProgram>>>>::_M_get_insert_hint_unique_pos(
        _QWORD *a1,
        __int64 a2,
        unsigned int *a3)
{
  _QWORD *v5; // x21
  unsigned int v7; // w23
  unsigned int v8; // w8
  _QWORD *v9; // x22
  __int64 v10; // x0
  __int64 v11; // x9
  unsigned int v12; // w8
  unsigned int v13; // w10
  __int64 *v14; // x9
  __int64 v15; // x0
  __int64 v16; // x0
  __int64 v18; // x9
  __int64 v19; // x19
  unsigned int v20; // w8
  __int64 *v21; // x9
  __int64 v22; // x0
  __int64 v23; // x9
  unsigned int v24; // w8
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

