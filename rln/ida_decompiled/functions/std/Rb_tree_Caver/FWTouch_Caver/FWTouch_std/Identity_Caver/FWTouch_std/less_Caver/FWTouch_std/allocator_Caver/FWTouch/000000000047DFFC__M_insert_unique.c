/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000047DFFC
 * Mangled: _ZNSt8_Rb_treeIN5Caver7FWTouchES1_St9_IdentityIS1_ESt4lessIS1_ESaIS1_EE16_M_insert_uniqueERKS1_
 * Demangled: std::_Rb_tree<Caver::FWTouch,Caver::FWTouch,std::_Identity<Caver::FWTouch>,std::less<Caver::FWTouch>,std::allocator<Caver::FWTouch>>::_M_insert_unique(Caver::FWTouch const&)
 *
 * Callers: 1
 *   0x00000000001FACF0  std::_Rb_tree<Caver::FWTouch,Caver::FWTouch,std::_Identity<Caver::FWTouch>,std::less<Caver::FWTouch>,std::allocator<Caver::FWTouch>>::_M_insert_unique(Caver::FWTouch const&)
 *
 * Callees: 3
 *   0x00000000002002C0  std::_Rb_tree<Caver::FWTouch,Caver::FWTouch,std::_Identity<Caver::FWTouch>,std::less<Caver::FWTouch>,std::allocator<Caver::FWTouch>>::_M_create_node(Caver::FWTouch const&)
 *   0x000000000054C700  sub_54C700
 *   0x000000000054C8A0  sub_54C8A0
 *
 * Referenced strings: 16
 *   insn=0x000000000047E010 string=0x000000000047E014 "i\n@"
 *   insn=0x000000000047E018 string=0x000000000047E01C "t""
 *   insn=0x000000000047E038 string=0x000000000047E03C "i1"
 *   insn=0x000000000047E03C string=0x000000000047E040 ")"
 *   insn=0x000000000047E040 string=0x000000000047E044 ")"
 *   insn=0x000000000047E04C string=0x000000000047E050 "c"
 *   insn=0x000000000047E050 string=0x000000000047E054 "\t"
 *   insn=0x000000000047E050 string=0x000000000047E05C "h"
 *   insn=0x000000000047E064 string=0x000000000047E084 "V"
 *   insn=0x000000000047E078 string=0x000000000047E07C "?"
 *   insn=0x000000000047E07C string=0x000000000047E080 """
 *   insn=0x000000000047E088 string=0x000000000047E08C "`"
 *   insn=0x000000000047E09C string=0x000000000047E0A0 ""
 *   insn=0x000000000047E0DC string=0x000000000047E0E0 "h"
 *   insn=0x000000000047E0E4 string=0x000000000047E0E8 ""
 *   insn=0x000000000047E0E8 string=0x000000000047E0EC "h"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall std::_Rb_tree<Caver::FWTouch,Caver::FWTouch,std::_Identity<Caver::FWTouch>,std::less<Caver::FWTouch>,std::allocator<Caver::FWTouch>>::_M_insert_unique(
        _QWORD *a1,
        unsigned __int64 *a2)
{
  _QWORD *v3; // x9
  _QWORD *v5; // x20
  unsigned __int64 v6; // x8
  _QWORD *v7; // x22
  unsigned __int64 v8; // x10
  _QWORD *v9; // x9
  __int64 node; // x23
  __int64 v11; // x0
  _BOOL4 v12; // w24

  v3 = (_QWORD *)a1[2];
  v5 = a1 + 1;
  if ( v3 )
  {
    v6 = *a2;
    do
    {
      v7 = v3;
      v8 = v3[4];
      v9 = v3 + 3;
      if ( v6 < v8 )
        v9 = v7 + 2;
      v3 = (_QWORD *)*v9;
    }
    while ( v3 );
    node = (__int64)v7;
    if ( v6 >= v8 )
    {
LABEL_11:
      if ( *(_QWORD *)(node + 32) >= v6 )
        return node;
      goto LABEL_12;
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
    node = v11;
    goto LABEL_11;
  }
LABEL_12:
  if ( !v7 )
    return 0;
  v12 = v5 == v7 || *a2 < v7[4];
  node = std::_Rb_tree<Caver::FWTouch,Caver::FWTouch,std::_Identity<Caver::FWTouch>,std::less<Caver::FWTouch>,std::allocator<Caver::FWTouch>>::_M_create_node();
  sub_54C8A0(v12, node, v7, v5);
  ++a1[5];
  return node;
}

