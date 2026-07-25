/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000457D84
 * Mangled: _ZN5Caver6Camera18EvaluateViewMatrixEv
 * Demangled: Caver::Camera::EvaluateViewMatrix(void)
 *
 * Callers: 1
 *   0x00000000001F5E10  Caver::Camera::EvaluateViewMatrix(void)
 *
 * Callees: 5
 *   0x00000000001F5110  Caver::Matrix4::PostTranslate(Caver::Vector3 const&)
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F9650  Caver::Matrix4::Inverse(void)
 *   0x00000000001F9ED0  Caver::Matrix4::FromRotationQuaternion(Caver::Quaternion const&)
 *   0x00000000001FFE90  C_Matrix4Mul(float const*,float const*,float *)
 *
 * Referenced strings: 81
 *   insn=0x0000000000457D94 string=0x0000000000457D98 "U"
 *   insn=0x0000000000457DAC string=0x0000000000457DB0 "`"
 *   insn=0x0000000000457DB0 string=0x0000000000457DB4 "a*@"
 *   insn=0x0000000000457DB4 string=0x0000000000457DB8 "h"
 *   insn=0x0000000000457DBC string=0x0000000000457DC0 "!@!"
 *   insn=0x0000000000457DD0 string=0x0000000000457DD4 "?"
 *   insn=0x0000000000457DD4 string=0x0000000000457DD8 "h"
 *   insn=0x0000000000457DD4 string=0x00000000001F9ED0 "0'"
 *   insn=0x0000000000457DD8 string=0x0000000000457DDC "i"
 *   insn=0x0000000000457DE4 string=0x0000000000457DE8 "\t"
 *   insn=0x0000000000457DE8 string=0x0000000000457DEC "J"
 *   insn=0x0000000000457DEC string=0x0000000000457DF0 ")"
 *   insn=0x0000000000457DF0 string=0x0000000000457DF4 ")"
 *   insn=0x0000000000457DF4 string=0x0000000000457DF8 "+"
 *   insn=0x0000000000457DFC string=0x0000000000457E00 "t"
 *   insn=0x0000000000457E04 string=0x0000000000457E14 "l"
 *   insn=0x0000000000457E10 string=0x0000000000457E54 "+E@"
 *   insn=0x0000000000457E1C string=0x0000000000457E20 "j"
 *   insn=0x0000000000457E20 string=0x0000000000457E24 "m"
 *   insn=0x0000000000457E24 string=0x0000000000457E28 "J"
 *   insn=0x0000000000457E44 string=0x0000000000457E48 "a"
 *   insn=0x0000000000457E50 string=0x0000000000457E64 "`\n@"
 *   insn=0x0000000000457E54 string=0x0000000000457E58 "KE"
 *   insn=0x0000000000457E58 string=0x0000000000457E5C "_"
 *   insn=0x0000000000457E64 string=0x0000000000457E68 "a"
 *   insn=0x0000000000457E74 string=0x0000000000457E78 "!@!"
 *   insn=0x0000000000457E84 string=0x0000000000457E88 "`"
 *   insn=0x0000000000457E84 string=0x00000000001F5110 "P'"
 *   insn=0x0000000000457E98 string=0x0000000000457E9C "h"
 *   insn=0x0000000000457E9C string=0x0000000000457EA0 "i"
 *   insn=0x0000000000457EA8 string=0x0000000000457EAC "\t"
 *   insn=0x0000000000457EAC string=0x0000000000457EB0 "J"
 *   insn=0x0000000000457EB0 string=0x0000000000457EB4 ")"
 *   insn=0x0000000000457EB4 string=0x0000000000457EB8 ")"
 *   insn=0x0000000000457EB8 string=0x0000000000457EBC "+"
 *   insn=0x0000000000457EC4 string=0x0000000000457EC8 "i"
 *   insn=0x0000000000457EC4 string=0x0000000000457ED4 "l"
 *   insn=0x0000000000457ED0 string=0x0000000000457F14 "KE@"
 *   insn=0x0000000000457EDC string=0x0000000000457EE0 "i"
 *   insn=0x0000000000457EE0 string=0x0000000000457EE4 "m"
 *   insn=0x0000000000457EE4 string=0x0000000000457EE8 ")"
 *   insn=0x0000000000457F04 string=0x0000000000457F08 "a"
 *   insn=0x0000000000457F14 string=0x0000000000457F18 "+E"
 *   insn=0x0000000000457F18 string=0x0000000000457F1C "?"
 *   insn=0x0000000000457F30 string=0x0000000000457F34 "h"
 *   insn=0x0000000000457F30 string=0x00000000001F9650 "0'"
 *   insn=0x0000000000457F34 string=0x0000000000457F38 "i"
 *   insn=0x0000000000457F38 string=0x0000000000457F3C "\n("
 *   insn=0x0000000000457F40 string=0x0000000000457F44 "\t"
 *   insn=0x0000000000457F44 string=0x0000000000457F48 "J"
 *   insn=0x0000000000457F48 string=0x0000000000457F4C ")"
 *   insn=0x0000000000457F4C string=0x0000000000457F50 ")"
 *   insn=0x0000000000457F50 string=0x0000000000457F54 "`"
 *   insn=0x0000000000457F54 string=0x0000000000457F58 "+"
 *   insn=0x0000000000457F64 string=0x0000000000457F68 "#"
 *   insn=0x0000000000457F68 string=0x0000000000457F6C "l"
 *   insn=0x0000000000457F68 string=0x0000000000457FAC "+E@"
 *   insn=0x0000000000457F74 string=0x0000000000457F78 "j"
 *   insn=0x0000000000457F78 string=0x0000000000457F7C "mB"
 *   insn=0x0000000000457F7C string=0x0000000000457F80 "J"
 *   insn=0x0000000000457F9C string=0x0000000000457FA0 "a"
 *   insn=0x0000000000457FA8 string=0x0000000000457FBC "a"
 *   insn=0x0000000000457FAC string=0x0000000000457FB0 "KE"
 *   insn=0x0000000000457FB0 string=0x0000000000457FB4 "_"
 *   insn=0x0000000000457FC8 string=0x0000000000457FCC "h"
 *   insn=0x0000000000457FCC string=0x0000000000457FD0 "i"
 *   insn=0x0000000000457FD8 string=0x0000000000457FDC "\t"
 *   insn=0x0000000000457FDC string=0x0000000000457FE0 "J"
 *   insn=0x0000000000457FE0 string=0x0000000000457FE4 ")"
 *   insn=0x0000000000457FE4 string=0x0000000000457FE8 ")"
 *   insn=0x0000000000457FE8 string=0x0000000000457FEC "+"
 *   insn=0x0000000000457FF4 string=0x0000000000457FF8 "i"
 *   insn=0x0000000000457FF4 string=0x0000000000458004 "l"
 *   insn=0x0000000000458000 string=0x0000000000458044 "KE@"
 *   insn=0x000000000045800C string=0x0000000000458010 "i"
 *   insn=0x0000000000458010 string=0x0000000000458014 "mB"
 *   insn=0x0000000000458014 string=0x0000000000458018 ")"
 *   insn=0x0000000000458034 string=0x0000000000458038 "a"
 *   insn=0x0000000000458044 string=0x0000000000458048 "+E"
 *   insn=0x0000000000458048 string=0x000000000045804C "?"
 *   insn=0x0000000000458078 string=0x00000000001F62D0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Camera::EvaluateViewMatrix(float32x2_t *this, const Caver::Quaternion *a2)
{
  unsigned __int64 v3; // d0
  float v4; // s1
  float32x2_t *v5; // x9
  unsigned __int64 v6; // x11
  __int64 *v7; // x9
  char *v8; // x10
  __int64 v9; // x10
  _OWORD *v10; // x13
  __int128 *v11; // x14
  __int64 v12; // x15
  __int128 v13; // q0
  __int128 v14; // q1
  int v15; // t1
  float v16; // s1
  float32x2_t *v17; // x9
  unsigned __int64 v18; // x11
  char *v19; // x9
  __int64 *v20; // x10
  __int64 v21; // x9
  _OWORD *v22; // x13
  __int128 *v23; // x14
  __int64 v24; // x15
  __int128 v25; // q0
  __int128 v26; // q1
  int v27; // t1
  float32x2_t *v28; // x9
  unsigned __int64 v29; // x11
  __int64 *v30; // x9
  float32x2_t *v31; // x10
  __int64 v32; // x10
  float32x2_t *v33; // x13
  __int128 *v34; // x14
  __int64 v35; // x15
  __int128 v36; // q0
  __int128 v37; // q1
  unsigned __int32 v38; // t1
  __int64 result; // x0
  float32x2_t *v40; // x9
  unsigned __int64 v41; // x11
  float32x2_t *v42; // x9
  __int64 *v43; // x10
  __int64 v44; // x9
  float32x2_t *v45; // x13
  __int128 *v46; // x14
  __int64 v47; // x15
  __int128 v48; // q0
  __int128 v49; // q1
  unsigned __int32 v50; // t1
  unsigned __int32 v51; // [xsp+8h] [xbp-78h] BYREF
  unsigned __int64 v52; // [xsp+Ch] [xbp-74h]
  float v53; // [xsp+14h] [xbp-6Ch]
  __int64 v54; // [xsp+18h] [xbp-68h] BYREF
  float v55; // [xsp+20h] [xbp-60h]
  _QWORD v56[7]; // [xsp+28h] [xbp-58h] BYREF

  v56[6] = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  v3 = vneg_f32(this[4]).n64_u64[0];
  v4 = -this[5].n64_f32[0];
  v51 = this[3].n64_u32[1];
  v52 = v3;
  v53 = v4;
  Caver::Matrix4::FromRotationQuaternion(&v54, (Caver::Matrix4 *)&v51, a2);
  v5 = this + 6;
  if ( &this[13].n64_u8[4] > (unsigned __int8 *)&this[6] )
    v5 = (float32x2_t *)((char *)this + 108);
  v6 = (((unsigned __int64)v5->n64_u64 - 45 - (unsigned __int64)this) >> 2) + 1;
  if ( v6 < 8 )
  {
    v7 = &v54;
    v8 = (char *)&this[5] + 4;
    do
    {
LABEL_8:
      v15 = *(_DWORD *)v7;
      v7 = (__int64 *)((char *)v7 + 4);
      *(_DWORD *)v8 = v15;
      v8 += 4;
    }
    while ( v8 < (char *)&this[13] + 4 );
    goto LABEL_9;
  }
  v9 = 4 * (v6 & 0x7FFFFFFFFFFFFFF8LL);
  v7 = (__int64 *)((char *)&v54 + v9);
  v10 = (_OWORD *)((char *)&this[7] + 4);
  v8 = (char *)&this[5] + v9 + 4;
  v11 = (__int128 *)v56;
  v12 = v6 & 0x7FFFFFFFFFFFFFF8LL;
  do
  {
    v13 = *(v11 - 1);
    v14 = *v11;
    v12 -= 8;
    v11 += 2;
    *(v10 - 1) = v13;
    *v10 = v14;
    v10 += 2;
  }
  while ( v12 );
  if ( v6 != (v6 & 0x7FFFFFFFFFFFFFF8LL) )
    goto LABEL_8;
LABEL_9:
  v16 = -this[3].n64_f32[0];
  v54 = vneg_f32(this[2]).n64_i64[0];
  v55 = v16;
  Caver::Matrix4::PostTranslate((Caver::Matrix4 *)((char *)&this[5] + 4), (const Caver::Vector3 *)&v54);
  C_Matrix4Mul((const float *)&this[13] + 1, (const float *)&this[5] + 1, (float *)&v54);
  v17 = this + 22;
  if ( &this[29].n64_u8[4] > (unsigned __int8 *)&this[22] )
    v17 = (float32x2_t *)((char *)this + 236);
  v18 = (((unsigned __int64)v17->n64_u64 - 173 - (unsigned __int64)this) >> 2) + 1;
  if ( v18 < 8 )
  {
    v19 = (char *)&this[21] + 4;
    v20 = &v54;
    do
    {
LABEL_16:
      v27 = *(_DWORD *)v20;
      v20 = (__int64 *)((char *)v20 + 4);
      *(_DWORD *)v19 = v27;
      v19 += 4;
    }
    while ( v19 < (char *)&this[29] + 4 );
    goto LABEL_17;
  }
  v21 = 4 * (v18 & 0x7FFFFFFFFFFFFFF8LL);
  v20 = (__int64 *)((char *)&v54 + v21);
  v22 = (_OWORD *)((char *)&this[23] + 4);
  v19 = (char *)&this[21] + v21 + 4;
  v23 = (__int128 *)v56;
  v24 = v18 & 0x7FFFFFFFFFFFFFF8LL;
  do
  {
    v25 = *(v23 - 1);
    v26 = *v23;
    v24 -= 8;
    v23 += 2;
    *(v22 - 1) = v25;
    *v22 = v26;
    v22 += 2;
  }
  while ( v24 );
  if ( v18 != (v18 & 0x7FFFFFFFFFFFFFF8LL) )
    goto LABEL_16;
LABEL_17:
  Caver::Matrix4::Inverse(&v54, (Caver::Matrix4 *)((char *)&this[5] + 4));
  v28 = (float32x2_t *)((char *)this + 324);
  if ( &this[48] > (float32x2_t *)&this[40].n64_u8[4] )
    v28 = this + 48;
  v29 = (((unsigned __int64)v28->n64_u64 - 321 - (unsigned __int64)this) >> 2) + 1;
  v30 = &v54;
  v31 = this + 40;
  if ( v29 < 8 )
    goto LABEL_34;
  v32 = 4 * (v29 & 0x7FFFFFFFFFFFFFF8LL);
  v30 = (__int64 *)((char *)&v54 + v32);
  v33 = this + 42;
  v31 = (float32x2_t *)((char *)this + v32 + 320);
  v34 = (__int128 *)v56;
  v35 = v29 & 0x7FFFFFFFFFFFFFF8LL;
  do
  {
    v36 = *(v34 - 1);
    v37 = *v34;
    v35 -= 8;
    v34 += 2;
    *(_OWORD *)v33[-2].n64_u64 = v36;
    *(_OWORD *)v33->n64_u64 = v37;
    v33 += 4;
  }
  while ( v35 );
  if ( v29 != (v29 & 0x7FFFFFFFFFFFFFF8LL) )
  {
LABEL_34:
    do
    {
      v38 = *(_DWORD *)v30;
      v30 = (__int64 *)((char *)v30 + 4);
      v31->n64_u32[0] = v38;
      v31 = (float32x2_t *)((char *)v31 + 4);
    }
    while ( v31 < &this[48] );
  }
  result = C_Matrix4Mul((const float *)&this[40], (const float *)&this[32], (float *)&v54);
  v40 = (float32x2_t *)((char *)this + 388);
  if ( &this[56] > (float32x2_t *)&this[48].n64_u8[4] )
    v40 = this + 56;
  v41 = (((unsigned __int64)v40->n64_u64 - 385 - (unsigned __int64)this) >> 2) + 1;
  if ( v41 < 8 )
  {
    v42 = this + 48;
    v43 = &v54;
    do
    {
LABEL_31:
      v50 = *(_DWORD *)v43;
      v43 = (__int64 *)((char *)v43 + 4);
      v42->n64_u32[0] = v50;
      v42 = (float32x2_t *)((char *)v42 + 4);
    }
    while ( v42 < &this[56] );
    return result;
  }
  v44 = 4 * (v41 & 0x7FFFFFFFFFFFFFF8LL);
  v43 = (__int64 *)((char *)&v54 + v44);
  v45 = this + 50;
  v42 = (float32x2_t *)((char *)this + v44 + 384);
  v46 = (__int128 *)v56;
  v47 = v41 & 0x7FFFFFFFFFFFFFF8LL;
  do
  {
    v48 = *(v46 - 1);
    v49 = *v46;
    v47 -= 8;
    v46 += 2;
    *(_OWORD *)v45[-2].n64_u64 = v48;
    *(_OWORD *)v45->n64_u64 = v49;
    v45 += 4;
  }
  while ( v47 );
  if ( v41 != (v41 & 0x7FFFFFFFFFFFFFF8LL) )
    goto LABEL_31;
  return result;
}

