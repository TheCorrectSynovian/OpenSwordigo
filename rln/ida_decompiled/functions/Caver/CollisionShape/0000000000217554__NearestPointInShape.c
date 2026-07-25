/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000217554
 * Mangled: _ZNK5Caver14CollisionShape19NearestPointInShapeERKNS_7Vector2E
 * Demangled: Caver::CollisionShape::NearestPointInShape(Caver::Vector2 const&)
 *
 * Callers: 1
 *   0x00000000001F8E80  Caver::CollisionShape::NearestPointInShape(Caver::Vector2 const&)
 *
 * Callees: 6
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F8E10  Caver::Vector2::Normalize(void)
 *   0x00000000001F8F90  Caver::Vector2::InverseTransformed(Caver::Vector2 const&,float,float)
 *   0x00000000001FCBE0  Caver::Rectangle::NearestPointInRectangle(Caver::Vector2 const&)
 *   0x00000000001FDC30  Caver::Rectangle::FlipHorizontally(void)
 *   0x00000000001FE880  Caver::Vector2::Transformed(Caver::Vector2 const&,float,float)
 *
 * Referenced strings: 23
 *   insn=0x0000000000217568 string=0x000000000021756C "W"
 *   insn=0x0000000000217584 string=0x0000000000217588 "?"
 *   insn=0x000000000021758C string=0x0000000000217590 "?\t"
 *   insn=0x0000000000217594 string=0x0000000000217598 "?"
 *   insn=0x000000000021759C string=0x00000000002175A0 "@"
 *   insn=0x00000000002175B4 string=0x00000000002175B8 "I"
 *   insn=0x00000000002175D0 string=0x00000000002175D4 "o"
 *   insn=0x00000000002175D4 string=0x00000000001F8F90 "0'"
 *   insn=0x00000000002175E4 string=0x00000000002175E8 "@8%"
 *   insn=0x00000000002175E8 string=0x00000000002175EC ""!"
 *   insn=0x00000000002175F0 string=0x00000000002175F4 "B(#"
 *   insn=0x00000000002175F8 string=0x00000000002175FC "@ #"
 *   insn=0x0000000000217610 string=0x00000000001F8E10 "0'"
 *   insn=0x000000000021761C string=0x0000000000217620 "A"
 *   insn=0x0000000000217648 string=0x000000000021764C "h"
 *   insn=0x0000000000217650 string=0x0000000000217654 "w"
 *   insn=0x0000000000217654 string=0x00000000001FDC30 "0'"
 *   insn=0x0000000000217668 string=0x000000000021766C "I"
 *   insn=0x0000000000217678 string=0x000000000021767C "Y"
 *   insn=0x000000000021767C string=0x00000000001FCBE0 "0'"
 *   insn=0x000000000021768C string=0x0000000000217690 "|"
 *   insn=0x0000000000217698 string=0x000000000021769C "h"
 *   insn=0x00000000002176C8 string=0x00000000001F62D0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 *__usercall Caver::CollisionShape::NearestPointInShape@<X0>(
        __int64 *this@<X0>,
        const Caver::Vector2 *a2@<X1>,
        _QWORD *a3@<X8>)
{
  float *v3; // x20
  float *v6; // x8
  float v7; // w24
  const Caver::Vector2 *v8; // x22
  Caver::Vector2 *v9; // x0
  float v10; // s0
  float v11; // s1
  float v12; // [xsp+10h] [xbp-90h]
  float v13; // [xsp+20h] [xbp-80h]
  unsigned __int64 v14; // [xsp+30h] [xbp-70h] BYREF
  float32x2_t v15; // [xsp+38h] [xbp-68h] BYREF
  __int64 v16; // [xsp+40h] [xbp-60h] BYREF
  __int64 v17; // [xsp+48h] [xbp-58h] BYREF
  __int128 v18; // [xsp+50h] [xbp-50h] BYREF
  __int64 v19; // [xsp+68h] [xbp-38h]

  v3 = (float *)this;
  v19 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  if ( *(_DWORD *)this == 1 )
  {
    v18 = *(_OWORD *)this[1];
    if ( *((_BYTE *)this + 40) )
      Caver::Rectangle::FlipHorizontally((Caver::Rectangle *)&v18);
    v8 = (const Caver::Vector2 *)(v3 + 6);
    Caver::Vector2::InverseTransformed(&v17, a2, (const Caver::Vector2 *)(v3 + 6), v3[8], v3[9]);
    Caver::Rectangle::NearestPointInRectangle(&v16, (Caver::Rectangle *)&v18, (const Caver::Vector2 *)&v17);
    v10 = v3[8];
    v11 = v3[9];
    v9 = (Caver::Vector2 *)&v16;
    return (__int64 *)Caver::Vector2::Transformed(v9, v8, v10, v11);
  }
  if ( *(_DWORD *)this != 2 )
  {
    *a3 = 0;
    return this;
  }
  v6 = (float *)this[1];
  v7 = *v6;
  v12 = v6[1];
  v13 = v6[2];
  if ( *((_BYTE *)this + 40) )
    LODWORD(v7) ^= 0x80000000;
  v8 = (const Caver::Vector2 *)(this + 3);
  this = Caver::Vector2::InverseTransformed(
           (__int64 *)&v18,
           a2,
           (const Caver::Vector2 *)(this + 3),
           *((float *)this + 8),
           *((float *)this + 9));
  if ( (float)((float)((float)(*(float *)&v18 - v7) * (float)(*(float *)&v18 - v7))
             + (float)((float)(*((float *)&v18 + 1) - v12) * (float)(*((float *)&v18 + 1) - v12))) > (float)(v13 * v13) )
  {
    v15.n64_f32[0] = *(float *)&v18 - v7;
    v15.n64_f32[1] = *((float *)&v18 + 1) - v12;
    Caver::Vector2::Normalize((Caver::Vector2 *)&v15);
    v9 = (Caver::Vector2 *)&v14;
    v14 = vadd_f32(vmul_n_f32(v15, v13), (float32x2_t)__PAIR64__(LODWORD(v12), LODWORD(v7))).n64_u64[0];
    v10 = v3[8];
    v11 = v3[9];
    return (__int64 *)Caver::Vector2::Transformed(v9, v8, v10, v11);
  }
  *a3 = *(_QWORD *)a2;
  return this;
}

