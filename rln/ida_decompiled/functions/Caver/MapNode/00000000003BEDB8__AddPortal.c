/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000003BEDB8
 * Mangled: _ZN5Caver7MapNode9AddPortalERKNS0_6PortalE
 * Demangled: Caver::MapNode::AddPortal(Caver::MapNode::Portal const&)
 *
 * Callers: 1
 *   0x00000000001FB440  Caver::MapNode::AddPortal(Caver::MapNode::Portal const&)
 *
 * Callees: 2
 *   0x00000000001FD1C0  std::vector<Caver::MapNode::Portal,std::allocator<Caver::MapNode::Portal>>::_M_insert_aux(__gnu_cxx::__normal_iterator<Caver::MapNode::Portal*,std::vector<Caver::MapNode::Portal,std::allocator<Caver::MapNode::Portal>>>,Caver::MapNode::Portal const&)
 *   0x000000000056A528  sub_56A528
 *
 * Referenced strings: 6
 *   insn=0x00000000003BEDC8 string=0x00000000003BEDCC "t"
 *   insn=0x00000000003BEDD8 string=0x00000000003BEE14 "`"
 *   insn=0x00000000003BEDF4 string=0x00000000003BEDF8 "h"
 *   insn=0x00000000003BEDF8 string=0x00000000003BEDFC "a"
 *   insn=0x00000000003BEDFC string=0x00000000003BEE00 "h"
 *   insn=0x00000000003BEE2C string=0x00000000001FD1C0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::MapNode::AddPortal(__int64 a1, __int64 a2)
{
  __int64 v3; // x20

  v3 = *(_QWORD *)(a1 + 56);
  if ( v3 == *(_QWORD *)(a1 + 64) )
  {
    std::vector<Caver::MapNode::Portal>::_M_insert_aux();
  }
  else
  {
    sub_56A528(*(_QWORD *)(a1 + 56), a2);
    *(_WORD *)(v3 + 16) = *(_WORD *)(a2 + 16);
    *(_QWORD *)(v3 + 8) = *(_QWORD *)(a2 + 8);
    *(_QWORD *)(a1 + 56) += 24LL;
  }
}

