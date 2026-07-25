/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004A54D8
 * Mangled: _ZNSt8_Rb_treeImSt4pairIKmN5Caver7FWTouchEESt10_Select1stIS4_ESt4lessImESaIS4_EE29_M_get_insert_hint_unique_posESt23_Rb_tree_const_iteratorIS4_ERS1_
 * Demangled: std::_Rb_tree<ulong,std::pair<ulong const,Caver::FWTouch>,std::_Select1st<std::pair<ulong const,Caver::FWTouch>>,std::less<ulong>,std::allocator<std::pair<ulong const,Caver::FWTouch>>>::_M_get_insert_hint_unique_pos(std::_Rb_tree_const_iterator<std::pair<ulong const,Caver::FWTouch>>,ulong const&)
 *
 * Callers: 1
 *   0x00000000001F59C0  std::_Rb_tree<ulong,std::pair<ulong const,Caver::FWTouch>,std::_Select1st<std::pair<ulong const,Caver::FWTouch>>,std::less<ulong>,std::allocator<std::pair<ulong const,Caver::FWTouch>>>::_M_get_insert_hint_unique_pos(std::_Rb_tree_const_iterator<std::pair<ulong const,Caver::FWTouch>>,ulong const&)
 *
 * Callees: 2
 *   0x000000000054C640  sub_54C640
 *   0x000000000054C700  sub_54C700
 *
 * Referenced strings: 44
 *   insn=0x00000000004A54FC string=0x00000000004A5500 "@"
 *   insn=0x00000000004A5504 string=0x00000000004A5508 "h"
 *   insn=0x00000000004A5520 string=0x00000000004A5524 "w"
 *   insn=0x00000000004A5524 string=0x00000000004A5528 ""
 *   insn=0x00000000004A5530 string=0x00000000004A5534 ""
 *   insn=0x00000000004A5540 string=0x00000000004A5544 "`"
 *   insn=0x00000000004A5554 string=0x00000000004A5558 "\t"
 *   insn=0x00000000004A5558 string=0x00000000004A555C "?"
 *   insn=0x00000000004A555C string=0x00000000004A5560 "#"
 *   insn=0x00000000004A5580 string=0x00000000004A5584 "i1"
 *   insn=0x00000000004A5584 string=0x00000000004A5588 ")"
 *   insn=0x00000000004A5588 string=0x00000000004A558C ")"
 *   insn=0x00000000004A55A8 string=0x00000000004A55AC "U"
 *   insn=0x00000000004A55B8 string=0x00000000004A55BC "?"
 *   insn=0x00000000004A55C0 string=0x00000000004A55C4 ":"
 *   insn=0x00000000004A55C4 string=0x00000000004A56AC "s2"
 *   insn=0x00000000004A55C8 string=0x00000000004A55CC """
 *   insn=0x00000000004A55D4 string=0x00000000004A55D8 "`"
 *   insn=0x00000000004A55E0 string=0x00000000004A55E4 ""
 *   insn=0x00000000004A55EC string=0x00000000004A55F0 "h"
 *   insn=0x00000000004A55F8 string=0x00000000004A55FC "s"
 *   insn=0x00000000004A55FC string=0x00000000004A5600 "1"
 *   insn=0x00000000004A5608 string=0x00000000004A560C "."
 *   insn=0x00000000004A5614 string=0x00000000004A5618 "+"
 *   insn=0x00000000004A561C string=0x00000000004A5620 ")"
 *   insn=0x00000000004A5624 string=0x00000000004A5628 "i"
 *   insn=0x00000000004A562C string=0x00000000004A5630 "h"
 *   insn=0x00000000004A5630 string=0x00000000004A5634 "ib"
 *   insn=0x00000000004A5634 string=0x00000000004A5638 "jB"
 *   insn=0x00000000004A563C string=0x00000000004A5640 "I1"
 *   insn=0x00000000004A5640 string=0x00000000004A5644 ")"
 *   insn=0x00000000004A5644 string=0x00000000004A5648 ")"
 *   insn=0x00000000004A5650 string=0x00000000004A5654 "b"
 *   insn=0x00000000004A5654 string=0x00000000004A56A0 ""
 *   insn=0x00000000004A5658 string=0x00000000004A565C " "
 *   insn=0x00000000004A5660 string=0x00000000004A5664 "'"
 *   insn=0x00000000004A5674 string=0x00000000004A5678 "h"
 *   insn=0x00000000004A5678 string=0x00000000004A567C "ib"
 *   insn=0x00000000004A567C string=0x00000000004A5680 "jB"
 *   insn=0x00000000004A5684 string=0x00000000004A5688 "I1"
 *   insn=0x00000000004A5688 string=0x00000000004A568C ")"
 *   insn=0x00000000004A568C string=0x00000000004A5690 ")"
 *   insn=0x00000000004A5698 string=0x00000000004A569C "C"
 *   insn=0x00000000004A56B8 string=0x00000000004A56BC "!"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall std::_Rb_tree<unsigned long,std::pair<unsigned long const,Caver::FWTouch>,std::_Select1st<std::pair<unsigned long const,Caver::FWTouch>>,std::less<unsigned long>,std::allocator<std::pair<unsigned long const,Caver::FWTouch>>>::_M_get_insert_hint_unique_pos(
        _QWORD *a1,
        _QWORD *a2,
        unsigned __int64 *a3)
{
  _QWORD *v5; // x21
  unsigned __int64 v7; // x23
  unsigned __int64 v8; // x8
  _QWORD *v9; // x22
  __int64 v10; // x0
  _QWORD *v11; // x9
  unsigned __int64 v12; // x8
  unsigned __int64 v13; // x10
  _QWORD *v14; // x9
  __int64 v15; // x0
  __int64 v16; // x0
  __int64 v18; // x9
  __int64 v19; // x19
  unsigned __int64 v20; // x8
  __int64 *v21; // x9
  __int64 v22; // x0
  __int64 v23; // x9
  unsigned __int64 v24; // x8
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

