/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004AC394
 * Mangled: _ZN5Caver32RectangleIntersectsConvexPolygonERKNS_9RectangleERKNS_7Vector2EffRKNS_7PolygonES5_ffPS3_Pf
 * Demangled: Caver::RectangleIntersectsConvexPolygon(Caver::Rectangle const&,Caver::Vector2 const&,float,float,Caver::Polygon const&,Caver::Vector2 const&,float,float,Caver::Vector2*,float *)
 *
 * Callers: 1
 *   0x0000000000202C50  Caver::RectangleIntersectsConvexPolygon(Caver::Rectangle const&,Caver::Vector2 const&,float,float,Caver::Polygon const&,Caver::Vector2 const&,float,float,Caver::Vector2*,float *)
 *
 * Callees: 5
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F8E10  Caver::Vector2::Normalize(void)
 *   0x00000000001FC440  Caver::Vector2::Rotate(float)
 *   0x00000000001FC6D0  Caver::OrientedRect::IntersectsPolygonOnAxis(Caver::Polygon const&,Caver::Vector2 const&,float *,float *)
 *   0x00000000001FDC90  Caver::OrientedRect::OBFromTransformedRectangle(Caver::Rectangle const&,Caver::Vector2 const&,float,float,Caver::Vector2 const&,float,float)
 *
 * Referenced strings: 44
 *   insn=0x00000000004AC3B4 string=0x00000000004AC3B8 "V"
 *   insn=0x00000000004AC3D4 string=0x00000000004AC3D8 "h"
 *   insn=0x00000000004AC3D8 string=0x00000000004AC3DC "I"
 *   insn=0x00000000004AC3DC string=0x00000000004AC3E0 ",F"
 *   insn=0x00000000004AC3E0 string=0x00000000001FDC90 "0'"
 *   insn=0x00000000004AC404 string=0x00000000001FC6D0 "0'"
 *   insn=0x00000000004AC41C string=0x00000000004AC420 """
 *   insn=0x00000000004AC424 string=0x00000000004AC428 "  ""
 *   insn=0x00000000004AC428 string=0x00000000004AC42C "*x""
 *   insn=0x00000000004AC430 string=0x00000000004AC434 "8A"
 *   insn=0x00000000004AC434 string=0x00000000004AC438 "@! "
 *   insn=0x00000000004AC440 string=0x00000000004AC444 "\n"
 *   insn=0x00000000004AC448 string=0x00000000004AC44C "8"
 *   insn=0x00000000004AC474 string=0x00000000004AC478 "\nL*"
 *   insn=0x00000000004AC478 string=0x00000000004AC47C " @!"
 *   insn=0x00000000004AC480 string=0x00000000004AC484 "8A"
 *   insn=0x00000000004AC484 string=0x00000000004AC488 "@! "
 *   insn=0x00000000004AC490 string=0x00000000004AC494 "\n"
 *   insn=0x00000000004AC498 string=0x00000000004AC49C "8"
 *   insn=0x00000000004AC4A4 string=0x00000000004AC4A8 "m"
 *   insn=0x00000000004AC4B4 string=0x00000000004AC4B8 ":"
 *   insn=0x00000000004AC4B8 string=0x00000000004AC4BC "_"
 *   insn=0x00000000004AC4C0 string=0x00000000004AC4C4 "I"
 *   insn=0x00000000004AC4C4 string=0x00000000004AC4C8 "H"
 *   insn=0x00000000004AC4C8 string=0x00000000004AC4CC " "
 *   insn=0x00000000004AC4D4 string=0x00000000004AC4D8 "@8 "
 *   insn=0x00000000004AC4D8 string=0x00000000004AC4DC "a8!"
 *   insn=0x00000000004AC4E4 string=0x00000000004AC4E8 "J2"
 *   insn=0x00000000004AC4E8 string=0x00000000001F8E10 "0'"
 *   insn=0x00000000004AC4FC string=0x00000000004AC500 "t@"
 *   insn=0x00000000004AC510 string=0x00000000004AC514 "9#"
 *   insn=0x00000000004AC518 string=0x00000000004AC51C "7A"
 *   insn=0x00000000004AC51C string=0x00000000004AC520 "XA"
 *   insn=0x00000000004AC520 string=0x00000000004AC524 "\nL*"
 *   insn=0x00000000004AC524 string=0x00000000004AC528 "_"
 *   insn=0x00000000004AC52C string=0x00000000004AC530 "+"
 *   insn=0x00000000004AC534 string=0x00000000004AC550 "s"
 *   insn=0x00000000004AC538 string=0x00000000004AC53C " "
 *   insn=0x00000000004AC544 string=0x00000000001FC440 "0'"
 *   insn=0x00000000004AC550 string=0x00000000004AC554 "@\t("
 *   insn=0x00000000004AC554 string=0x00000000004AC558 "`"
 *   insn=0x00000000004AC570 string=0x00000000004AC574 "A"
 *   insn=0x00000000004AC574 string=0x00000000004AC59C "M'"
 *   insn=0x00000000004AC59C string=0x00000000001F62D0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::RectangleIntersectsConvexPolygon(
        Caver *this,
        const Caver::Rectangle *a2,
        const Caver::Vector2 *a3,
        float a4,
        float a5,
        const Caver::Polygon *a6,
        const Caver::Vector2 *a7,
        float a8,
        float a9,
        Caver::Vector2 *a10,
        float *a11)
{
  float v16; // s10
  unsigned int v17; // w23
  unsigned int v18; // w24
  __int64 v19; // x8
  __int64 v20; // x25
  __int64 v21; // x9
  __int64 v22; // x10
  __int64 v23; // x26
  __int64 v24; // x8
  float *v25; // x8
  float v26; // s0
  unsigned __int64 v28; // [xsp+0h] [xbp-B0h] BYREF
  float v29; // [xsp+Ch] [xbp-A4h] BYREF
  __int128 v30; // [xsp+10h] [xbp-A0h] BYREF
  _BYTE v31[8]; // [xsp+28h] [xbp-88h] BYREF
  __int128 v32; // [xsp+30h] [xbp-80h]
  __int64 v33; // [xsp+48h] [xbp-68h]

  v33 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  Caver::OrientedRect::OBFromTransformedRectangle(this, a2, a6, a4, a5, a6, a8, a9);
  v30 = v32;
  if ( (Caver::OrientedRect::IntersectsPolygonOnAxis(
          (Caver::OrientedRect *)v31,
          a3,
          (const Caver::Vector2 *)&v30,
          (float *)&v28,
          &v29)
      & 1) == 0 )
    return 0;
  v16 = fminf(*(float *)&v28, 3.4028e38);
  if ( *(float *)&v28 >= 3.4028e38 )
    v17 = 0;
  else
    v17 = v30;
  if ( *(float *)&v28 >= 3.4028e38 )
    v18 = 0;
  else
    v18 = DWORD1(v30);
  if ( v16 > (float)-v29 )
  {
    v16 = -v29;
    v17 = v30 ^ 0x80000000;
    v18 = DWORD1(v30) ^ 0x80000000;
  }
  if ( (Caver::OrientedRect::IntersectsPolygonOnAxis(
          (Caver::OrientedRect *)v31,
          a3,
          (const Caver::Vector2 *)((char *)&v30 + 8),
          (float *)&v28,
          &v29)
      & 1) == 0 )
    return 0;
  if ( *(float *)&v28 < v16 )
  {
    v16 = *(float *)&v28;
    v17 = DWORD2(v30);
    v18 = HIDWORD(v30);
  }
  if ( v16 > (float)-v29 )
  {
    v16 = -v29;
    v17 = DWORD2(v30) ^ 0x80000000;
    v18 = HIDWORD(v30) ^ 0x80000000;
  }
  LODWORD(v19) = *(_DWORD *)a3;
  if ( *(int *)a3 > 0 )
  {
    v20 = 0;
    v21 = 0;
    do
    {
      v22 = *((_QWORD *)a3 + 1);
      v23 = v21 + 1;
      v24 = v21 + 1 < (int)v19 ? v21 + 1 : 0LL;
      v25 = (float *)(v22 + 8 * v24);
      v26 = -(float)(*v25 - *(float *)(v22 + v20));
      *(float *)&v28 = v25[1] - *(float *)(v22 + v20 + 4);
      *((float *)&v28 + 1) = v26;
      Caver::Vector2::Normalize((Caver::Vector2 *)&v28);
      if ( (Caver::OrientedRect::IntersectsPolygonOnAxis(
              (Caver::OrientedRect *)v31,
              a3,
              (const Caver::Vector2 *)&v28,
              &v29,
              0)
          & 1) == 0 )
        return 0;
      v19 = *(int *)a3;
      v20 += 8;
      if ( v29 < v16 )
      {
        v17 = v28;
        v18 = HIDWORD(v28);
        v16 = v29;
      }
      v21 = v23;
    }
    while ( v23 < v19 );
  }
  if ( a7 )
  {
    v28 = __PAIR64__(v18, v17);
    Caver::Vector2::Rotate((Caver::Vector2 *)&v28, a8);
    *(_QWORD *)a7 = v28;
  }
  if ( a10 )
    *(float *)a10 = v16 * a9;
  return 1;
}

