/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000448158
 * Mangled: _ZN5Caver11MeshClipper13ClipWithPlaneERKNS_7Vector4E
 * Demangled: Caver::MeshClipper::ClipWithPlane(Caver::Vector4 const&)
 *
 * Callers: 1
 *   0x00000000001F9530  Caver::MeshClipper::ClipWithPlane(Caver::Vector4 const&)
 *
 * Callees: 2
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F71D0  Caver::Vector3::Vector3(Caver::Vector4 const&)
 *
 * Referenced strings: 34
 *   insn=0x0000000000448168 string=0x000000000044816C "U"
 *   insn=0x0000000000448184 string=0x0000000000448188 "h"
 *   insn=0x0000000000448184 string=0x00000000001F71D0 "0'"
 *   insn=0x0000000000448190 string=0x0000000000448194 "k2@"
 *   insn=0x0000000000448190 string=0x00000000004481E4 "h"
 *   insn=0x00000000004481A0 string=0x00000000004481A4 "jV@"
 *   insn=0x00000000004481A8 string=0x00000000004481AC "k"
 *   insn=0x00000000004481AC string=0x00000000004481B0 "d"
 *   insn=0x00000000004481B0 string=0x00000000004481B4 "f"
 *   insn=0x00000000004481B4 string=0x00000000004481B8 "k"
 *   insn=0x00000000004481D0 string=0x00000000004481D4 "Dy)"
 *   insn=0x00000000004481D4 string=0x00000000004481D8 ")"
 *   insn=0x00000000004481D8 string=0x00000000004481DC "?"
 *   insn=0x00000000004481EC string=0x00000000004481F0 "mB@"
 *   insn=0x00000000004481F0 string=0x00000000004481F4 "jV@"
 *   insn=0x00000000004481F4 string=0x00000000004481F8 "k^@"
 *   insn=0x000000000044820C string=0x0000000000448210 "Ayn"
 *   insn=0x0000000000448214 string=0x0000000000448218 "Byo"
 *   insn=0x000000000044821C string=0x0000000000448220 "#"
 *   insn=0x0000000000448220 string=0x0000000000448224 "(  "
 *   insn=0x0000000000448224 string=0x0000000000448228 "aL "
 *   insn=0x0000000000448228 string=0x000000000044822C "a"
 *   insn=0x000000000044822C string=0x0000000000448230 "Cyn"
 *   insn=0x000000000044823C string=0x0000000000448240 "H  "
 *   insn=0x0000000000448240 string=0x0000000000448244 "B"
 *   insn=0x0000000000448248 string=0x000000000044824C "@ !"
 *   insn=0x000000000044824C string=0x0000000000448250 "A"
 *   insn=0x0000000000448250 string=0x0000000000448254 "b"
 *   insn=0x0000000000448258 string=0x000000000044825C "h  "
 *   insn=0x0000000000448260 string=0x0000000000448264 "@ !"
 *   insn=0x0000000000448268 string=0x000000000044826C "ny)"
 *   insn=0x000000000044826C string=0x0000000000448270 ")"
 *   insn=0x0000000000448270 string=0x0000000000448274 "?"
 *   insn=0x00000000004482A0 string=0x00000000001F62D0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::MeshClipper::ClipWithPlane(Caver::MeshClipper *this, const Caver::Vector4 *a2)
{
  __int64 result; // x0
  __int64 v5; // x8
  float v6; // s0
  float v7; // s1
  float v8; // s2
  float v9; // s3
  __int64 v10; // x10
  __int64 v11; // x9
  float *v12; // x11
  float v13; // s4
  float v14; // s5
  float v15; // s6
  __int64 v16; // x8
  __int64 v17; // x10
  __int64 v18; // x11
  __int64 v19; // x9
  int *v20; // x13
  float v21; // s1
  __int64 v22; // x14
  float v23; // s2
  float v24; // s3
  bool v25; // nf
  bool v26; // cc
  float v27; // s1
  float v28; // s3
  int v29; // w14
  int v30; // w15
  float v31; // s2
  int v32; // w15
  bool v33; // cc
  float v34; // s2
  int v35; // w15
  _DWORD v36[4]; // [xsp+8h] [xbp-38h] BYREF
  __int64 v37; // [xsp+18h] [xbp-28h]

  v37 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  result = Caver::Vector3::Vector3((Caver::Vector3 *)v36, a2);
  v5 = *((int *)this + 40);
  if ( (int)v5 >= 1 )
  {
    v6 = *((float *)a2 + 3);
    v7 = *(float *)v36;
    v8 = *(float *)&v36[1];
    v9 = *(float *)&v36[2];
    v10 = *((_QWORD *)this + 21);
    v11 = 0;
    v12 = (float *)(*((_QWORD *)this + 12) + 4LL);
    do
    {
      v13 = *(v12 - 1);
      v14 = *v12;
      v15 = v12[1];
      v12 += 17;
      *(float *)(v10 + 4 * v11++) = (float)((float)((float)(v13 * v7) + (float)(v14 * v8)) + (float)(v15 * v9)) - v6;
    }
    while ( v11 < v5 );
  }
  v16 = *((int *)this + 44);
  if ( (int)v16 >= 1 )
  {
    v17 = *((_QWORD *)this + 21);
    v18 = *((_QWORD *)this + 23);
    v19 = 0;
    v20 = (int *)(*((_QWORD *)this + 16) + 8LL);
    do
    {
      v21 = *(float *)(v17 + 4LL * *(v20 - 2));
      v22 = *v20;
      v23 = *(float *)(v17 + 4LL * *(v20 - 1));
      v20 += 3;
      v24 = fabsf(v21);
      v25 = v21 < 0.0;
      v26 = v21 <= 0.0;
      if ( v21 >= 0.0 )
        v27 = 0.0;
      else
        v27 = v24;
      if ( !v26 )
        v27 = v24;
      v28 = *(float *)(v17 + 4 * v22);
      if ( v25 )
        v29 = -1;
      else
        v29 = 1;
      if ( v25 )
        v30 = v29;
      else
        v30 = 0;
      if ( v26 )
        v29 = v30;
      v25 = v23 < 0.0;
      v31 = fabsf(v23);
      if ( v25 )
        v32 = -1;
      else
        v32 = 1;
      v33 = v31 <= v27;
      if ( v31 > v27 )
        v27 = v31;
      v34 = fabsf(v28);
      if ( !v33 )
        v29 = v32;
      if ( v28 >= 0.0 )
        v35 = 1;
      else
        v35 = -1;
      if ( v34 > v27 )
        v29 = v35;
      *(_DWORD *)(v18 + 4 * v19++) = v29;
    }
    while ( v19 < v16 );
  }
  return result;
}

