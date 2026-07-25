/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000216D3C
 * Mangled: _ZNSt8_Rb_treeIN5Caver13CollisionPairESt4pairIKS1_bESt10_Select1stIS4_ESt4lessIS1_ESaIS4_EE16_M_insert_uniqueERKS4_
 * Demangled: std::_Rb_tree<Caver::CollisionPair,std::pair<Caver::CollisionPair const,bool>,std::_Select1st<std::pair<Caver::CollisionPair const,bool>>,std::less<Caver::CollisionPair>,std::allocator<std::pair<Caver::CollisionPair const,bool>>>::_M_insert_unique(std::pair<Caver::CollisionPair const,bool> const&)
 *
 * Callers: 1
 *   0x0000000000202910  std::_Rb_tree<Caver::CollisionPair,std::pair<Caver::CollisionPair const,bool>,std::_Select1st<std::pair<Caver::CollisionPair const,bool>>,std::less<Caver::CollisionPair>,std::allocator<std::pair<Caver::CollisionPair const,bool>>>::_M_insert_unique(std::pair<Caver::CollisionPair const,bool> const&)
 *
 * Callees: 3
 *   0x00000000001F55E0  operator new(ulong)
 *   0x000000000054C700  sub_54C700
 *   0x000000000054C8A0  sub_54C8A0
 *
 * Referenced strings: 28
 *   insn=0x0000000000216D50 string=0x0000000000216D54 "k\n@"
 *   insn=0x0000000000216D58 string=0x0000000000216D5C "t""
 *   insn=0x0000000000216D7C string=0x0000000000216D80 "k"
 *   insn=0x0000000000216D80 string=0x0000000000216D84 "+"
 *   insn=0x0000000000216D84 string=0x0000000000216D88 "\t"
 *   insn=0x0000000000216D90 string=0x0000000000216D94 "?"
 *   insn=0x0000000000216DA0 string=0x0000000000216DA4 "k"
 *   insn=0x0000000000216DA4 string=0x0000000000216DA8 ""
 *   insn=0x0000000000216DAC string=0x0000000000216DB0 "j"
 *   insn=0x0000000000216DB0 string=0x0000000000216DB4 "\t"
 *   insn=0x0000000000216DB0 string=0x0000000000216DBC "h"
 *   insn=0x0000000000216DC8 string=0x0000000000216DCC "M"
 *   insn=0x0000000000216DD8 string=0x0000000000216DDC "?"
 *   insn=0x0000000000216DDC string=0x0000000000216DE0 "B"
 *   insn=0x0000000000216E14 string=0x0000000000216E18 "c"
 *   insn=0x0000000000216E1C string=0x0000000000216E20 "&"
 *   insn=0x0000000000216E28 string=0x0000000000216E2C "#"
 *   insn=0x0000000000216E30 string=0x0000000000216E34 "`"
 *   insn=0x0000000000216E54 string=0x00000000001F55E0 "P'"
 *   insn=0x0000000000216E64 string=0x0000000000216E68 "\t\t@"
 *   insn=0x0000000000216E68 string=0x0000000000216E6C ")"
 *   insn=0x0000000000216E6C string=0x0000000000216E70 "\t\t"
 *   insn=0x0000000000216E7C string=0x0000000000216E80 "\t\t@"
 *   insn=0x0000000000216E80 string=0x0000000000216E84 ")"
 *   insn=0x0000000000216E84 string=0x0000000000216E88 "\t\t"
 *   insn=0x0000000000216EA4 string=0x0000000000216EA8 "h"
 *   insn=0x0000000000216EAC string=0x0000000000216EB0 ""
 *   insn=0x0000000000216EB0 string=0x0000000000216EB4 "h"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall std::_Rb_tree<Caver::CollisionPair,std::pair<Caver::CollisionPair const,bool>,std::_Select1st<std::pair<Caver::CollisionPair const,bool>>,std::less<Caver::CollisionPair>,std::allocator<std::pair<Caver::CollisionPair const,bool>>>::_M_insert_unique(
        _QWORD *a1,
        unsigned __int64 *a2)
{
  _QWORD *v3; // x11
  _QWORD *v5; // x20
  unsigned __int64 v6; // x8
  _QWORD *v7; // x22
  unsigned __int64 v8; // x10
  int v9; // w10
  __int64 v10; // x23
  __int64 v11; // x0
  unsigned __int64 v12; // x9
  unsigned __int64 v13; // x9
  _BOOL4 v14; // w24
  __int64 v15; // x0
  unsigned __int64 v16; // x8
  unsigned __int64 v17; // x8

  v3 = (_QWORD *)a1[2];
  v5 = a1 + 1;
  if ( v3 )
  {
    v6 = *a2;
    do
    {
      while ( 1 )
      {
        v7 = v3;
        v8 = v3[4];
        if ( v6 >= v8 && (v6 != v8 || a2[1] >= v3[5]) )
          break;
        v9 = 1;
        v3 = (_QWORD *)v3[2];
        if ( !v3 )
          goto LABEL_9;
      }
      v9 = 0;
      v3 = (_QWORD *)v3[3];
    }
    while ( v3 );
LABEL_9:
    v10 = (__int64)v7;
    if ( !v9 )
    {
LABEL_14:
      v12 = *(_QWORD *)(v10 + 32);
      if ( v12 >= v6 && (v12 != v6 || *(_QWORD *)(v10 + 40) >= a2[1]) )
        return v10;
      goto LABEL_15;
    }
  }
  else
  {
    v7 = a1 + 1;
  }
  if ( v7 != (_QWORD *)a1[3] )
  {
    v11 = sub_54C700(v7);
    v6 = *a2;
    v10 = v11;
    goto LABEL_14;
  }
LABEL_15:
  if ( !v7 )
    return 0;
  if ( v5 == v7 || (v13 = v7[4], *a2 < v13) )
    v14 = 1;
  else
    v14 = *a2 == v13 && a2[1] < v7[5];
  v15 = operator new(0x38u);
  v16 = *a2;
  v10 = v15;
  *(_QWORD *)(v15 + 32) = *a2;
  if ( v16 )
    ++*(_DWORD *)(v16 + 8);
  v17 = a2[1];
  *(_QWORD *)(v15 + 40) = v17;
  if ( v17 )
    ++*(_DWORD *)(v17 + 8);
  *(_BYTE *)(v15 + 48) = *((_BYTE *)a2 + 16);
  sub_54C8A0(v14, v15, v7, v5);
  ++a1[5];
  return v10;
}

