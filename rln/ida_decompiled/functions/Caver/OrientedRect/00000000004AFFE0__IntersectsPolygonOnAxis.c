/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004AFFE0
 * Mangled: _ZNK5Caver12OrientedRect23IntersectsPolygonOnAxisERKNS_7PolygonERKNS_7Vector2EPfS7_
 * Demangled: Caver::OrientedRect::IntersectsPolygonOnAxis(Caver::Polygon const&,Caver::Vector2 const&,float *,float *)
 *
 * Callers: 1
 *   0x00000000001FC6D0  Caver::OrientedRect::IntersectsPolygonOnAxis(Caver::Polygon const&,Caver::Vector2 const&,float *,float *)
 *
 * Callees: 2
 *   0x00000000001F4EF0  Caver::Polygon::SpanOnAxis(Caver::Vector2 const&,float *,float *)
 *   0x00000000001F62D0  .__stack_chk_fail
 *
 * Referenced strings: 27
 *   insn=0x00000000004AFFF8 string=0x00000000004AFFFC "U"
 *   insn=0x00000000004B0028 string=0x00000000004B002C "D$"
 *   insn=0x00000000004B002C string=0x00000000004B0030 "B&"
 *   insn=0x00000000004B0030 string=0x00000000004B0034 "!#"
 *   insn=0x00000000004B0034 string=0x00000000004B0038 "e%"
 *   insn=0x00000000004B0038 string=0x00000000004B003C "c'"
 *   insn=0x00000000004B003C string=0x00000000004B0040 "\t(!"
 *   insn=0x00000000004B0040 string=0x00000000004B0044 "A(#"
 *   insn=0x00000000004B0050 string=0x00000000004B0054 "!"
 *   insn=0x00000000004B0054 string=0x00000000004B0058 "@ "
 *   insn=0x00000000004B0058 string=0x00000000004B005C "a!"
 *   insn=0x00000000004B005C string=0x00000000004B0060 "\n(!"
 *   insn=0x00000000004B006C string=0x00000000004B0070 "()*"
 *   insn=0x00000000004B0074 string=0x00000000001F4EF0 "P'"
 *   insn=0x00000000004B0078 string=0x00000000005837A4 "o"
 *   insn=0x00000000004B0090 string=0x0000000000583734 "o"
 *   insn=0x00000000004B0098 string=0x00000000004B009C ""9*"
 *   insn=0x00000000004B009C string=0x00000000004B00A0 "C(#"
 *   insn=0x00000000004B00A0 string=0x00000000004B00A4 "  #"
 *   insn=0x00000000004B00A4 string=0x00000000004B00A8 "e"
 *   insn=0x00000000004B00A8 string=0x00000000004B00B4 "t"
 *   insn=0x00000000004B00AC string=0x00000000004B00B0 ""
 *   insn=0x00000000004B00B4 string=0x00000000004B00B8 "!8""
 *   insn=0x00000000004B00B4 string=0x00000000004B00C0 "s"
 *   insn=0x00000000004B00C4 string=0x00000000004B00C8 "`"
 *   insn=0x00000000004B00DC string=0x00000000004B00FC "u"
 *   insn=0x00000000004B00FC string=0x00000000001F62D0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::OrientedRect::IntersectsPolygonOnAxis(
        Caver::OrientedRect *this,
        const Caver::Polygon *a2,
        const Caver::Vector2 *a3,
        float *a4,
        float *a5)
{
  float v6; // s3
  float v7; // s9
  float v8; // s10
  float v10; // s0
  float v12; // [xsp+0h] [xbp-40h] BYREF
  float v13; // [xsp+4h] [xbp-3Ch] BYREF
  __int64 v14; // [xsp+8h] [xbp-38h]

  v14 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  v6 = *((float *)a3 + 1);
  v7 = (float)(*(float *)this * *(float *)a3) + (float)(*((float *)this + 1) * v6);
  v8 = (float)(*((float *)this + 6)
             * fabsf((float)(*(float *)a3 * *((float *)this + 2)) + (float)(v6 * *((float *)this + 3))))
     + (float)(*((float *)this + 7)
             * fabsf((float)(*(float *)a3 * *((float *)this + 4)) + (float)(v6 * *((float *)this + 5))));
  Caver::Polygon::SpanOnAxis(a2, a3, &v13, &v12);
  v10 = v13;
  if ( v13 > (float)((float)(v7 + v8) + -0.001) || v12 < (float)((float)(v7 - v8) + 0.001) )
    return 0;
  if ( a4 )
    *a4 = v12 - (float)(v7 - v8);
  if ( a5 )
    *a5 = v10 - (float)(v7 + v8);
  return 1;
}

