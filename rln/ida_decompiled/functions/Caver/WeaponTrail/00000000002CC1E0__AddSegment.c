/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002CC1E0
 * Mangled: _ZN5Caver11WeaponTrail10AddSegmentERKNS_7Vector3ES3_f
 * Demangled: Caver::WeaponTrail::AddSegment(Caver::Vector3 const&,Caver::Vector3 const&,float)
 *
 * Callers: 1
 *   0x00000000001F5A50  Caver::WeaponTrail::AddSegment(Caver::Vector3 const&,Caver::Vector3 const&,float)
 *
 * Callees: 3
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001FBBB0  .memmove
 *   0x0000000000203430  Caver::WeaponTrail::SetVertex(int,Caver::Vector3 const&,Caver::Color const&,Caver::Vector2 const&)
 *
 * Referenced strings: 62
 *   insn=0x00000000002CC1F8 string=0x00000000002CC1FC "V"
 *   insn=0x00000000002CC204 string=0x00000000002CC208 ""
 *   insn=0x00000000002CC210 string=0x00000000002CC214 "h^@)"
 *   insn=0x00000000002CC21C string=0x00000000002CC220 "!"
 *   insn=0x00000000002CC220 string=0x00000000002CC224 "`"
 *   insn=0x00000000002CC220 string=0x00000000002CC244 "a"@=`2@"
 *   insn=0x00000000002CC228 string=0x00000000002CC22C "h"
 *   insn=0x00000000002CC22C string=0x00000000002CC230 "y"
 *   insn=0x00000000002CC238 string=0x00000000002CC23C "]"
 *   insn=0x00000000002CC23C string=0x00000000002CC240 "w"
 *   insn=0x00000000002CC23C string=0x00000000001FBBB0 "0'"
 *   insn=0x00000000002CC244 string=0x00000000002CC248 "`2@"
 *   insn=0x00000000002CC248 string=0x00000000002CC24C "b&@=c*@=d.@=!"
 *   insn=0x00000000002CC24C string=0x00000000002CC250 "c*@=d.@=!"
 *   insn=0x00000000002CC250 string=0x00000000002CC254 "d.@=!"
 *   insn=0x00000000002CC254 string=0x00000000002CC258 "!"
 *   insn=0x00000000002CC25C string=0x00000000002CC260 "B"
 *   insn=0x00000000002CC260 string=0x00000000002CC264 "("
 *   insn=0x00000000002CC264 string=0x00000000002CC268 "c"
 *   insn=0x00000000002CC278 string=0x00000000002CC27C "I"
 *   insn=0x00000000002CC27C string=0x00000000002CC280 ""
 *   insn=0x00000000002CC284 string=0x00000000002CC288 "j"
 *   insn=0x00000000002CC288 string=0x00000000002CC28C "?"
 *   insn=0x00000000002CC28C string=0x00000000002CC290 ""
 *   insn=0x00000000002CC294 string=0x00000000002CC298 ")"
 *   insn=0x00000000002CC298 string=0x00000000002CC29C "_"
 *   insn=0x00000000002CC2A0 string=0x00000000002CC2A4 ")"
 *   insn=0x00000000002CC2A4 string=0x00000000002CC2A8 "J"
 *   insn=0x00000000002CC2B0 string=0x00000000002CC2B4 "H"
 *   insn=0x00000000002CC2BC string=0x00000000002CC2C0 " "
 *   insn=0x00000000002CC2C4 string=0x00000000002CC2C8 "I"
 *   insn=0x00000000002CC2C8 string=0x00000000002CC2CC "\n"
 *   insn=0x00000000002CC2D4 string=0x00000000002CC2D8 ""
 *   insn=0x00000000002CC2D8 string=0x00000000002CC2DC " "
 *   insn=0x00000000002CC2E8 string=0x00000000002CC2EC "_"
 *   insn=0x00000000002CC2F0 string=0x00000000002CC2F4 "-"
 *   insn=0x00000000002CC2F8 string=0x00000000002CC2FC "I"
 *   insn=0x00000000002CC304 string=0x00000000002CC308 "*"
 *   insn=0x00000000002CC308 string=0x00000000002CC30C ""
 *   insn=0x00000000002CC318 string=0x00000000002CC31C "\t"
 *   insn=0x00000000002CC328 string=0x00000000002CC32C "B"
 *   insn=0x00000000002CC32C string=0x00000000002CC330 "\n"
 *   insn=0x00000000002CC334 string=0x00000000002CC338 ""
 *   insn=0x00000000002CC338 string=0x00000000002CC33C "@!"
 *   insn=0x00000000002CC33C string=0x00000000002CC340 """
 *   insn=0x00000000002CC348 string=0x00000000002CC34C "\t"
 *   insn=0x00000000002CC34C string=0x00000000002CC350 "@!"
 *   insn=0x00000000002CC350 string=0x00000000002CC354 "B"
 *   insn=0x00000000002CC354 string=0x00000000002CC358 ""
 *   insn=0x00000000002CC358 string=0x00000000002CC35C "?"
 *   insn=0x00000000002CC35C string=0x00000000002CC360 "\n"
 *   insn=0x00000000002CC360 string=0x00000000002CC364 "@!"
 *   insn=0x00000000002CC364 string=0x00000000002CC368 ")"
 *   insn=0x00000000002CC368 string=0x00000000002CC36C "_"
 *   insn=0x00000000002CC374 string=0x00000000002CC378 "H"
 *   insn=0x00000000002CC38C string=0x00000000002CC390 "h:@"
 *   insn=0x00000000002CC3A8 string=0x00000000002CC3AC "!"
 *   insn=0x00000000002CC3AC string=0x00000000002CC3B0 "h:@"
 *   insn=0x00000000002CC3D4 string=0x00000000002CC3D8 "h"
 *   insn=0x00000000002CC3D8 string=0x00000000002CC3DC ""
 *   insn=0x00000000002CC3DC string=0x00000000002CC3E0 "h"
 *   insn=0x00000000002CC410 string=0x00000000001F62D0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::WeaponTrail::AddSegment(
        Caver::WeaponTrail *this,
        const Caver::Vector3 *a2,
        const Caver::Vector3 *a3,
        float a4,
        float a5,
        float a6,
        float a7,
        float a8)
{
  int v11; // w23
  __int64 v13; // x0
  float v14; // s0
  int v15; // w8
  float v16; // s4
  float v17; // s3
  int v18; // w9
  int v19; // w10
  int v20; // w12
  float v21; // s0
  unsigned int v22; // w8
  unsigned __int8 v23; // w10
  int v24; // w12
  float v25; // s0
  unsigned int v26; // w9
  int v27; // w10
  int v28; // w8
  float v29; // s0
  unsigned __int8 v30; // w9
  unsigned int v31; // w13
  unsigned __int8 v32; // w9
  unsigned int v33; // w10
  unsigned int v34; // w9
  unsigned __int8 v35; // w8
  float v36; // s2
  unsigned int v37; // w10
  int v38; // w8
  float v39; // s0
  float v40; // s2
  int v41; // w9
  float v42; // s0
  float v43; // s2
  char v44; // w8
  char v45; // w9
  __int64 result; // x0
  int v47; // [xsp+0h] [xbp-50h] BYREF
  int v48; // [xsp+4h] [xbp-4Ch]
  _BYTE v49[8]; // [xsp+8h] [xbp-48h] BYREF
  _BYTE v50[8]; // [xsp+10h] [xbp-40h] BYREF
  __int64 v51; // [xsp+18h] [xbp-38h]

  v51 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  v11 = *((_DWORD *)this + 1);
  if ( v11 == *(_DWORD *)this )
  {
    v13 = *((_QWORD *)this + 3);
    *((_DWORD *)this + 1) = v11 - 1;
    memmove((void *)v13, (const void *)(v13 + 64), 64LL * (v11 - 1));
    v11 = *((_DWORD *)this + 1);
  }
  LOBYTE(a5) = *((_BYTE *)this + 8);
  v14 = *((float *)this + 12);
  LOBYTE(a6) = *((_BYTE *)this + 9);
  LOBYTE(a7) = *((_BYTE *)this + 10);
  LOBYTE(a8) = *((_BYTE *)this + 11);
  v15 = (int)(float)(v14 * (float)LODWORD(a5));
  v16 = (float)LODWORD(a8);
  v17 = v14 * (float)LODWORD(a7);
  v18 = (int)(float)(v14 * (float)LODWORD(a6));
  if ( v15 >= 255 )
    LOBYTE(v15) = -1;
  v19 = (int)v17;
  v20 = (int)(float)(v14 * v16);
  if ( v18 >= 255 )
    LOBYTE(v18) = -1;
  if ( v19 >= 255 )
    LOBYTE(v19) = -1;
  v21 = (float)(unsigned __int8)v15 * a4;
  v22 = (unsigned __int8)v19;
  if ( v20 >= 255 )
    v23 = -1;
  else
    v23 = v20;
  v24 = (int)v21;
  v25 = (float)(unsigned __int8)v18 * a4;
  v26 = v23;
  v27 = (int)v25;
  v28 = (int)(float)((float)v22 * a4);
  v29 = (float)v26 * a4;
  if ( v24 >= 255 )
    v30 = -1;
  else
    v30 = v24;
  v31 = v30;
  v50[0] = v30;
  if ( v27 >= 255 )
    v32 = -1;
  else
    v32 = v27;
  v33 = v32;
  if ( v28 >= 255 )
    LOBYTE(v28) = -1;
  v50[1] = v32;
  v34 = (unsigned __int8)v28;
  v50[2] = v28;
  if ( (int)v29 >= 255 )
    v35 = -1;
  else
    v35 = (int)v29;
  v36 = (float)v33;
  v37 = v35;
  v50[3] = v35;
  v38 = (int)(float)((float)v31 * 0.5);
  v39 = v36 * 0.5;
  v40 = (float)v34;
  v41 = (int)v39;
  v42 = v40 * 0.5;
  v43 = (float)v37;
  if ( v38 >= 255 )
    LOBYTE(v38) = -1;
  if ( v41 >= 255 )
    LOBYTE(v41) = -1;
  v49[0] = v38;
  if ( (int)v42 >= 255 )
    v44 = -1;
  else
    v44 = (int)v42;
  v49[1] = v41;
  if ( (int)(float)(v43 * 0.5) >= 255 )
    v45 = -1;
  else
    v45 = (int)(float)(v43 * 0.5);
  v49[2] = v44;
  v49[3] = v45;
  v47 = *((_DWORD *)this + 14);
  v48 = 0;
  Caver::WeaponTrail::SetVertex(this, 2 * v11, a2, (const Caver::Color *)v49, (const Caver::Vector2 *)&v47);
  v47 = *((_DWORD *)this + 14);
  v48 = 1065353216;
  result = Caver::WeaponTrail::SetVertex(
             this,
             (2 * v11) | 1u,
             a3,
             (const Caver::Color *)v50,
             (const Caver::Vector2 *)&v47);
  ++*((_DWORD *)this + 1);
  return result;
}

