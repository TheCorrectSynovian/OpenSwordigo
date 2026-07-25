/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002C1758
 * Mangled: _ZN5Caver14IsConvexVertexEPNS_11VertexList_EPNS_15VertexListNode_E
 * Demangled: Caver::IsConvexVertex(Caver::VertexList_ *,Caver::VertexListNode_ *)
 *
 * Callers: 0
 *
 * Callees: 2
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F6DE0  Caver::Vector2::Angle(void)
 *
 * Referenced strings: 16
 *   insn=0x00000000002C1768 string=0x00000000002C176C "S"
 *   insn=0x00000000002C176C string=0x00000000002C1770 "h"
 *   insn=0x00000000002C1778 string=0x00000000002C177C "("
 *   insn=0x00000000002C177C string=0x00000000002C1780 "!@A"
 *   insn=0x00000000002C178C string=0x00000000002C1790 "("
 *   insn=0x00000000002C17A0 string=0x00000000001F6DE0 "0'"
 *   insn=0x00000000002C17A4 string=0x00000000002C17A8 ""
 *   insn=0x00000000002C17B0 string=0x00000000002C17B4 "  "
 *   insn=0x00000000002C17BC string=0x00000000002C17C0 "H"
 *   insn=0x00000000002C17BC string=0x00000000002C17D8 ""
 *   insn=0x00000000002C17C8 string=0x00000000002C17CC "k"
 *   insn=0x00000000002C17D0 string=0x00000000002C17D4 "\n"
 *   insn=0x00000000002C17D4 string=0x00000000002C17FC "h"
 *   insn=0x00000000002C17DC string=0x00000000002C17E0 ""
 *   insn=0x00000000002C17F4 string=0x00000000002C17F8 " "
 *   insn=0x00000000002C1820 string=0x00000000001F62D0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::IsConvexVertex(__int64 a1, _QWORD *a2)
{
  float32x2_t v2; // d1
  float v3; // s0
  float v4; // s8
  float v5; // s0
  float v6; // s0
  bool v7; // cc
  double v8; // d0
  unsigned __int64 v10; // [xsp+8h] [xbp-28h] BYREF
  _QWORD v11[2]; // [xsp+10h] [xbp-20h] BYREF

  v11[1] = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  v2.n64_u64[0] = *(unsigned __int64 *)((char *)a2 + 20);
  v11[0] = vsub_f32(*(float32x2_t *)(*a2 + 20LL), v2).n64_u64[0];
  v10 = vsub_f32(*(float32x2_t *)(a2[1] + 20LL), v2).n64_u64[0];
  Caver::Vector2::Angle((Caver::Vector2 *)&v10);
  v4 = v3;
  Caver::Vector2::Angle((Caver::Vector2 *)v11);
  v6 = v4 - v5;
  v7 = v6 > 0.0;
  v8 = v6;
  if ( v7 || v8 < -3.14159265 )
    return (v8 <= 6.28318531) & (unsigned __int8)(v8 >= 3.14159265);
  else
    return 1;
}

