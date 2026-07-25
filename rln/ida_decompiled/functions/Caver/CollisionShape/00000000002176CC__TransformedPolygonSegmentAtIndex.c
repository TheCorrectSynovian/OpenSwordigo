/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002176CC
 * Mangled: _ZNK5Caver14CollisionShape32TransformedPolygonSegmentAtIndexEi
 * Demangled: Caver::CollisionShape::TransformedPolygonSegmentAtIndex(int)
 *
 * Callers: 0
 *
 * Callees: 2
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001FE880  Caver::Vector2::Transformed(Caver::Vector2 const&,float,float)
 *
 * Referenced strings: 12
 *   insn=0x00000000002176E0 string=0x00000000002176E4 "W"
 *   insn=0x00000000002176F4 string=0x00000000002176F8 "vb"
 *   insn=0x00000000002176FC string=0x0000000000217700 "h"
 *   insn=0x0000000000217704 string=0x0000000000217708 ""
 *   insn=0x0000000000217708 string=0x000000000021770C ""
 *   insn=0x000000000021770C string=0x0000000000217710 "\t"
 *   insn=0x0000000000217718 string=0x000000000021771C ""
 *   insn=0x0000000000217720 string=0x0000000000217724 "`"
 *   insn=0x0000000000217728 string=0x000000000021772C "U"
 *   insn=0x000000000021773C string=0x0000000000217740 "`"
 *   insn=0x0000000000217744 string=0x0000000000217748 "N"
 *   insn=0x000000000021777C string=0x00000000001F62D0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __usercall Caver::CollisionShape::TransformedPolygonSegmentAtIndex@<X0>(
        Caver::CollisionShape *this@<X0>,
        int a2@<W1>,
        __int64 a3@<X8>)
{
  const Caver::Vector2 *v5; // x22
  _QWORD *v6; // x8
  __int64 result; // x0
  __int64 v8; // [xsp+0h] [xbp-40h]

  v5 = (Caver::CollisionShape *)((char *)this + 24);
  _ReadStatusReg(TPIDR_EL0);
  v6 = (_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 1) + 8LL) + 8LL * a2);
  *(_QWORD *)a3 = *v6;
  *(_QWORD *)(a3 + 8) = v6[1];
  Caver::Vector2::Transformed(
    (Caver::Vector2 *)a3,
    (Caver::CollisionShape *)((char *)this + 24),
    *((float *)this + 8),
    *((float *)this + 9));
  *(_QWORD *)a3 = v8;
  result = Caver::Vector2::Transformed((Caver::Vector2 *)(a3 + 8), v5, *((float *)this + 8), *((float *)this + 9));
  *(_QWORD *)(a3 + 8) = v8;
  return result;
}

