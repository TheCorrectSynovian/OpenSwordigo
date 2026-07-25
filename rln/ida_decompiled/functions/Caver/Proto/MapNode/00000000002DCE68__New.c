/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002DCE68
 * Mangled: _ZNK5Caver5Proto7MapNode3NewEv
 * Demangled: Caver::Proto::MapNode::New(void)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000001F55E0  operator new(ulong)
 *
 * Referenced strings: 15
 *   insn=0x00000000002DCE74 string=0x00000000002DCE78 ""
 *   insn=0x00000000002DCE74 string=0x00000000001F55E0 "P'"
 *   insn=0x00000000002DCE78 string=0x00000000002DCE7C ""
 *   insn=0x00000000002DCE7C string=0x00000000002DCE80 "H "
 *   insn=0x00000000002DCE80 string=0x00000000002DCE84 "=D"
 *   insn=0x00000000002DCE88 string=0x00000000002DCE8C "\t8"
 *   insn=0x00000000002DCE90 string=0x00000000002DCE94 "H "
 *   insn=0x00000000002DCE94 string=0x00000000002DCE98 ""
 *   insn=0x00000000002DCE98 string=0x00000000002DCE9C "8"
 *   insn=0x00000000002DCE9C string=0x00000000002DCEA0 "H "
 *   insn=0x00000000002DCEA0 string=0x00000000002DCEA4 "QD"
 *   insn=0x00000000002DCEB0 string=0x00000000002DCEB4 "A"
 *   insn=0x00000000002DCEB4 string=0x00000000002DCEB8 ""
 *   insn=0x00000000002DCEB8 string=0x00000000002DCEBC "H "
 *   insn=0x00000000002DCEBC string=0x00000000002DCEC0 ""
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__n128 __fastcall Caver::Proto::MapNode::New(Caver::Proto::MapNode *this)
{
  __int64 v1; // x0
  __n128 result; // q0

  v1 = operator new(0x88u);
  *(_QWORD *)(v1 + 40) = v1 + 64;
  *(_DWORD *)(v1 + 56) = 4;
  result.n128_u64[0] = (unsigned __int64)&Caver::Proto::MapNode::_default_level_name_;
  *(_QWORD *)(v1 + 112) = &Caver::Proto::MapNode::_default_music_;
  *(_QWORD *)(v1 + 48) = 0;
  *(_DWORD *)(v1 + 8) = 0;
  *(_QWORD *)(v1 + 16) = 0;
  *(_QWORD *)v1 = off_6C6688;
  *(_DWORD *)(v1 + 96) = 0;
  *(_BYTE *)(v1 + 100) = 0;
  *(_DWORD *)(v1 + 104) = 0;
  result.n128_u64[1] = (unsigned __int64)&Caver::Proto::MapNode::_default_title_;
  *(_BYTE *)(v1 + 120) = 0;
  *(_DWORD *)(v1 + 124) = 0;
  *(_BYTE *)(v1 + 128) = 0;
  *(__n128 *)(v1 + 24) = result;
  *(_DWORD *)(v1 + 132) = 0;
  return result;
}

