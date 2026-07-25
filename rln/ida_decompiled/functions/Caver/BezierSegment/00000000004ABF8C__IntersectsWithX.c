/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004ABF8C
 * Mangled: _ZN5Caver13BezierSegment15IntersectsWithXEfPiPf
 * Demangled: Caver::BezierSegment::IntersectsWithX(float,int *,float *)
 *
 * Callers: 1
 *   0x0000000000200610  Caver::BezierSegment::IntersectsWithX(float,int *,float *)
 *
 * Callees: 2
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x0000000000202100  Caver::RootsForCubicEquation(float,float,float,float,float *)
 *
 * Referenced strings: 22
 *   insn=0x00000000004ABF9C string=0x00000000004ABFA0 "U"
 *   insn=0x00000000004ABFC4 string=0x00000000004ABFC8 "g!"
 *   insn=0x00000000004ABFD0 string=0x00000000004ABFD4 "b""
 *   insn=0x00000000004ABFD8 string=0x00000000004ABFDC "0(""
 *   insn=0x00000000004ABFDC string=0x00000000004ABFE0 "c8$"
 *   insn=0x00000000004ABFFC string=0x00000000004AC000 "@X"
 *   insn=0x00000000004AC004 string=0x00000000004AC008 ""
 *   insn=0x00000000004AC008 string=0x00000000004AC00C "I"
 *   insn=0x00000000004AC00C string=0x00000000004AC010 "J"
 *   insn=0x00000000004AC010 string=0x00000000004AC014 " "
 *   insn=0x00000000004AC010 string=0x00000000005972E8 "T"
 *   insn=0x00000000004AC014 string=0x00000000004AC018 "A"
 *   insn=0x00000000004AC024 string=0x00000000004AC028 "B"
 *   insn=0x00000000004AC028 string=0x00000000004AC02C "@  "
 *   insn=0x00000000004AC030 string=0x00000000004AC034 "@ !"
 *   insn=0x00000000004AC030 string=0x00000000004AC048 ")"
 *   insn=0x00000000004AC038 string=0x00000000004AC03C "T"
 *   insn=0x00000000004AC03C string=0x00000000004AC044 ""
 *   insn=0x00000000004AC048 string=0x00000000004AC04C "J"
 *   insn=0x00000000004AC050 string=0x00000000004AC054 "S"
 *   insn=0x00000000004AC054 string=0x00000000004AC058 "h"
 *   insn=0x00000000004AC090 string=0x00000000001F62D0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

bool __fastcall Caver::BezierSegment::IntersectsWithX(Caver::BezierSegment *this, float a2, float *a3, float *a4)
{
  int v6; // w0
  int v7; // w8
  __int64 v8; // x9
  float *v9; // x10
  float v10; // s2
  _BYTE v12[12]; // [xsp+Ch] [xbp-34h] BYREF
  __int64 v13; // [xsp+18h] [xbp-28h]

  v13 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  v6 = Caver::RootsForCubicEquation(
         (Caver *)v12,
         *((float *)this + 6)
       + (float)((float)((float)(*((float *)this + 2) * 3.0) - *(float *)this) - (float)(*((float *)this + 4) * 3.0)),
         (float)((float)(*(float *)this * 3.0) + (float)(*((float *)this + 2) * -6.0))
       + (float)(*((float *)this + 4) * 3.0),
         (float)(*((float *)this + 2) * 3.0) - (float)(*(float *)this * 3.0),
         *(float *)this - a2,
         a3);
  if ( v6 < 1 )
    return 0;
  v7 = 0;
  v8 = (unsigned int)v6;
  v9 = (float *)v12;
  do
  {
    v10 = *v9;
    if ( *v9 > -0.00001 && v10 < 1.0 )
    {
      if ( a4 )
        a4[v7] = v10;
      ++v7;
    }
    --v8;
    ++v9;
  }
  while ( v8 );
  if ( a3 )
    *(_DWORD *)a3 = v7;
  return v7 > 0;
}

