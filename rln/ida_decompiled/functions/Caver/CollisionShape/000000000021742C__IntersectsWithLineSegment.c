/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000021742C
 * Mangled: _ZNK5Caver14CollisionShape25IntersectsWithLineSegmentERKNS_11LineSegmentEPNS_7Vector2ES5_Pi
 * Demangled: Caver::CollisionShape::IntersectsWithLineSegment(Caver::LineSegment const&,Caver::Vector2 *,Caver::Vector2 *,int *)
 *
 * Callers: 1
 *   0x00000000001FAE20  Caver::CollisionShape::IntersectsWithLineSegment(Caver::LineSegment const&,Caver::Vector2 *,Caver::Vector2 *,int *)
 *
 * Callees: 5
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F8980  Caver::LineSegmentIntersectsCircle(Caver::LineSegment const&,Caver::Circle const&,Caver::Vector2 const&,float,float,float *,Caver::Vector2*)
 *   0x00000000001FC130  Caver::LineSegmentIntersectsRectangle(Caver::LineSegment const&,Caver::Rectangle const&,Caver::Vector2 const&,float,float,float *,Caver::Vector2*)
 *   0x00000000001FDC30  Caver::Rectangle::FlipHorizontally(void)
 *   0x00000000002000A0  Caver::LineSegmentIntersectsPolygon(Caver::LineSegment const&,Caver::Polygon const&,Caver::Vector2 const&,float,float,float *,Caver::Vector2*,Caver::Vector2*,int *)
 *
 * Referenced strings: 15
 *   insn=0x000000000021743C string=0x0000000000217440 "V"
 *   insn=0x0000000000217460 string=0x0000000000217464 "_"
 *   insn=0x0000000000217468 string=0x000000000021746C "_\t"
 *   insn=0x0000000000217470 string=0x0000000000217474 "_"
 *   insn=0x0000000000217474 string=0x0000000000217478 "a"
 *   insn=0x000000000021749C string=0x00000000002174A0 """
 *   insn=0x00000000002174AC string=0x00000000002174B0 "\t@"
 *   insn=0x00000000002174B8 string=0x00000000002174BC "h"
 *   insn=0x00000000002174DC string=0x00000000002174E0 "("
 *   insn=0x00000000002174E0 string=0x00000000001F8980 "0'"
 *   insn=0x00000000002174F4 string=0x00000000002174F8 "h"
 *   insn=0x0000000000217500 string=0x00000000001FDC30 "0'"
 *   insn=0x000000000021751C string=0x00000000001FC130 "0'"
 *   insn=0x0000000000217534 string=0x0000000000217550 "`{"
 *   insn=0x0000000000217550 string=0x00000000001F62D0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::CollisionShape::IntersectsWithLineSegment(
        Caver::CollisionShape *this,
        const Caver::LineSegment *a2,
        Caver::Vector2 *a3,
        Caver::Vector2 *a4,
        Caver::Vector2 *a5,
        Caver::Vector2 *a6,
        __int64 a7,
        int *a8)
{
  int v9; // w10
  char v12; // w0
  float *v13; // x8
  __int64 v14; // d0
  float v16[6]; // [xsp+0h] [xbp-40h] BYREF
  __int64 v17; // [xsp+18h] [xbp-28h]

  v17 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  v9 = *(_DWORD *)this;
  if ( *(_DWORD *)this == 1 )
  {
    *(_OWORD *)v16 = *(_OWORD *)*((_QWORD *)this + 1);
    if ( *((_BYTE *)this + 40) )
      Caver::Rectangle::FlipHorizontally((Caver::Rectangle *)v16);
    v12 = Caver::LineSegmentIntersectsRectangle(
            a2,
            (const Caver::LineSegment *)v16,
            (Caver::CollisionShape *)((char *)this + 24),
            0,
            *((float *)this + 8),
            *((float *)this + 9),
            (float *)a3,
            a6);
  }
  else if ( v9 == 2 )
  {
    v13 = (float *)*((_QWORD *)this + 1);
    v14 = *(_QWORD *)v13;
    *(_QWORD *)v16 = *(_QWORD *)v13;
    v16[2] = v13[2];
    if ( *((_BYTE *)this + 40) )
      v16[0] = -*(float *)&v14;
    v12 = Caver::LineSegmentIntersectsCircle(
            a2,
            (const Caver::LineSegment *)v16,
            (Caver::CollisionShape *)((char *)this + 24),
            0,
            *((float *)this + 8),
            *((float *)this + 9),
            (float *)a3,
            a6);
  }
  else if ( v9 == 3 )
  {
    v12 = Caver::LineSegmentIntersectsPolygon(
            a2,
            *((const Caver::LineSegment **)this + 1),
            (Caver::CollisionShape *)((char *)this + 24),
            0,
            *((float *)this + 8),
            *((float *)this + 9),
            (float *)a3,
            a4,
            a5,
            a8);
  }
  else
  {
    v12 = 0;
  }
  return v12 & 1;
}

