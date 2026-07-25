/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004B0200
 * Mangled: _ZN5Caver21PolygonSelfIntersectsEPKNS_7Vector2Ei
 * Demangled: Caver::PolygonSelfIntersects(Caver::Vector2 const*,int)
 *
 * Callers: 0
 *
 * Callees: 2
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x0000000000203E50  Caver::LineSegmentsIntersect(Caver::Vector2 const&,Caver::Vector2 const&,Caver::Vector2 const&,Caver::Vector2 const&,float *,float *,bool)
 *
 * Referenced strings: 14
 *   insn=0x00000000004B0218 string=0x00000000004B021C "T"
 *   insn=0x00000000004B0224 string=0x00000000004B0228 "?"
 *   insn=0x00000000004B022C string=0x00000000004B0230 "k"
 *   insn=0x00000000004B0230 string=0x00000000004B0234 "("
 *   insn=0x00000000004B0238 string=0x00000000004B023C "6|@"
 *   insn=0x00000000004B0244 string=0x00000000004B0248 "hzu"
 *   insn=0x00000000004B0254 string=0x00000000004B0258 "hzu"
 *   insn=0x00000000004B0260 string=0x00000000004B0264 "j"
 *   insn=0x00000000004B0268 string=0x00000000004B026C "?"
 *   insn=0x00000000004B026C string=0x00000000004B0270 "izh"
 *   insn=0x00000000004B0274 string=0x00000000004B0278 "hzh"
 *   insn=0x00000000004B029C string=0x00000000004B02A0 " "
 *   insn=0x00000000004B02A0 string=0x00000000004B02A4 "?"
 *   insn=0x00000000004B02F4 string=0x00000000001F62D0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::PolygonSelfIntersects(
        Caver *this,
        const Caver::Vector2 *a2,
        int a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        bool a8)
{
  __int64 v9; // x21
  __int64 v10; // x22
  __int64 v11; // x23
  __int64 i; // x24
  __int64 v13; // x8
  __int64 v14; // x8
  __int64 v15; // x25
  __int64 v16; // x9
  __int64 v17; // x8
  __int64 v19; // [xsp+8h] [xbp-68h] BYREF
  __int64 v20; // [xsp+10h] [xbp-60h] BYREF
  __int64 v21; // [xsp+18h] [xbp-58h] BYREF
  _QWORD v22[2]; // [xsp+20h] [xbp-50h] BYREF

  v22[1] = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  if ( (int)a2 < 2 )
    return 0;
  v9 = 0;
  v10 = (int)a2;
  v11 = (int)a2 - 1;
  for ( i = 1; ; ++i )
  {
    v13 = *((_QWORD *)this + v9++);
    v22[0] = v13;
    v21 = *((_QWORD *)this + v9);
    v14 = i;
    if ( v9 < v10 )
      break;
LABEL_9:
    if ( v9 >= v11 )
      return 0;
  }
  while ( 1 )
  {
    v15 = v14 + 1;
    v16 = *((_QWORD *)this + v14);
    v17 = v14 + 1 < v10 ? v14 + 1 : 0LL;
    v19 = *((_QWORD *)this + v17);
    v20 = v16;
    if ( (Caver::LineSegmentsIntersect(
            (Caver *)v22,
            (const Caver::Vector2 *)&v21,
            (const Caver::Vector2 *)&v20,
            (const Caver::Vector2 *)&v19,
            0,
            0,
            0,
            a8)
        & 1) != 0 )
      return 1;
    v14 = v15;
    if ( v15 >= v10 )
      goto LABEL_9;
  }
}

