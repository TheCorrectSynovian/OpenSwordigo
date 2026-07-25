/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000280348
 * Mangled: _ZN5Caver18PhysicsObjectState17UpdateObjectStateEf
 * Demangled: Caver::PhysicsObjectState::UpdateObjectState(float)
 *
 * Callers: 1
 *   0x00000000001FAE60  Caver::PhysicsObjectState::UpdateObjectState(float)
 *
 * Callees: 4
 *   0x00000000001F5DA0  Caver::SceneObject::RegisterForWorldBoundsUpdate(void)
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F87B0  Caver::SceneObject::VelocityAtWorldPoint(Caver::Vector2 const&)
 *   0x00000000001FD530  .sqrtf
 *
 * Referenced strings: 72
 *   insn=0x000000000028035C string=0x0000000000280360 "U"
 *   insn=0x0000000000280370 string=0x0000000000280374 "h"
 *   insn=0x0000000000280374 string=0x0000000000280378 ""
 *   insn=0x0000000000280378 string=0x000000000028037C "aBE"
 *   insn=0x0000000000280378 string=0x0000000000280538 "h"
 *   insn=0x000000000028037C string=0x0000000000280380 "b"
 *   insn=0x0000000000280380 string=0x0000000000280384 "d"
 *   insn=0x0000000000280384 string=0x0000000000280388 "H"
 *   insn=0x0000000000280388 string=0x000000000028038C "`J@"
 *   insn=0x0000000000280390 string=0x0000000000280394 "!"
 *   insn=0x0000000000280398 string=0x000000000028039C """
 *   insn=0x00000000002803A4 string=0x00000000002803A8 "@"
 *   insn=0x00000000002803A4 string=0x00000000002803B4 "h6@"
 *   insn=0x00000000002803AC string=0x00000000002803B0 "B"
 *   insn=0x00000000002803B4 string=0x00000000002803B8 "@"
 *   insn=0x00000000002803C8 string=0x00000000002803CC "M"
 *   insn=0x00000000002803CC string=0x00000000002803F4 "`"
 *   insn=0x00000000002803D0 string=0x00000000002803D4 "  !"
 *   insn=0x00000000002803DC string=0x00000000002803E0 "T"
 *   insn=0x00000000002803E0 string=0x00000000001FD530 "0'"
 *   insn=0x00000000002803EC string=0x00000000002803F0 "B"
 *   insn=0x00000000002803F8 string=0x00000000002803FC "h"
 *   insn=0x00000000002803F8 string=0x000000000028048C "`"
 *   insn=0x0000000000280404 string=0x0000000000280408 "9@"
 *   insn=0x0000000000280414 string=0x00000000001F87B0 "0'"
 *   insn=0x000000000028041C string=0x0000000000280420 "c>@"
 *   insn=0x0000000000280420 string=0x0000000000280424 "d2@"
 *   insn=0x0000000000280424 string=0x0000000000280428 "E( "
 *   insn=0x0000000000280428 string=0x000000000028042C "@  "
 *   insn=0x0000000000280430 string=0x0000000000280434 "b."
 *   insn=0x0000000000280434 string=0x0000000000280438 "a*@"
 *   insn=0x0000000000280444 string=0x0000000000280448 "c%"
 *   insn=0x0000000000280448 string=0x000000000028044C "c$"
 *   insn=0x000000000028044C string=0x0000000000280450 "$8""
 *   insn=0x0000000000280454 string=0x0000000000280458 "e&"
 *   insn=0x000000000028045C string=0x0000000000280460 "\t"
 *   insn=0x0000000000280460 string=0x0000000000280464 "B8!"
 *   insn=0x0000000000280460 string=0x0000000000280480 "b*"
 *   insn=0x0000000000280464 string=0x0000000000280468 "H  "
 *   insn=0x000000000028046C string=0x0000000000280470 "@"
 *   insn=0x0000000000280470 string=0x0000000000280474 "` "
 *   insn=0x0000000000280478 string=0x000000000028047C ""( "
 *   insn=0x0000000000280488 string=0x0000000000280498 "t"
 *   insn=0x0000000000280490 string=0x0000000000280494 "B"
 *   insn=0x0000000000280498 string=0x000000000028049C "A"
 *   insn=0x000000000028049C string=0x00000000002804A0 ""
 *   insn=0x00000000002804A0 string=0x00000000002804A4 ""
 *   insn=0x00000000002804A8 string=0x00000000002804AC "`"
 *   insn=0x00000000002804AC string=0x00000000002804B0 "@( "
 *   insn=0x00000000002804B8 string=0x00000000002804BC "!(#"
 *   insn=0x00000000002804BC string=0x00000000002804C0 "!&"
 *   insn=0x00000000002804C8 string=0x00000000002804CC "c"
 *   insn=0x00000000002804CC string=0x00000000002804D0 "` ("
 *   insn=0x00000000002804D0 string=0x00000000002804D4 "A(!"
 *   insn=0x00000000002804D8 string=0x00000000002804DC ""8""
 *   insn=0x00000000002804DC string=0x00000000002804E0 "B"
 *   insn=0x00000000002804E0 string=0x00000000002804E4 "@ ("
 *   insn=0x00000000002804E4 string=0x00000000002804E8 "I"
 *   insn=0x00000000002804F8 string=0x00000000002804FC ")"
 *   insn=0x00000000002804FC string=0x00000000001F5DA0 "P'"
 *   insn=0x0000000000280508 string=0x000000000028050C "t"
 *   insn=0x0000000000280514 string=0x0000000000280518 " ( "
 *   insn=0x000000000028051C string=0x0000000000280520 "!"
 *   insn=0x0000000000280520 string=0x0000000000280524 "  ("
 *   insn=0x0000000000280538 string=0x000000000028053C "H"
 *   insn=0x000000000028053C string=0x0000000000280564 "`"
 *   insn=0x0000000000280558 string=0x000000000028055C "h"
 *   insn=0x000000000028055C string=0x0000000000280560 ""
 *   insn=0x0000000000280568 string=0x000000000028056C " "
 *   insn=0x000000000028056C string=0x0000000000280570 "`"
 *   insn=0x0000000000280580 string=0x000000000028059C "M"
 *   insn=0x000000000028059C string=0x00000000001F62D0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 *__fastcall Caver::PhysicsObjectState::UpdateObjectState(__int64 *this, double a2)
{
  float32x2_t *v2; // x19
  float v4; // s0
  float32x2_t v5; // d2
  float v6; // s8
  float v7; // s0
  float v8; // s2
  float v9; // s0
  float v10; // s3
  float v11; // s4
  float v12; // s1
  float v13; // s2
  float v14; // s3
  unsigned __int64 v15; // d2
  float32x2_t v16; // d0
  unsigned __int64 v17; // x20
  float v18; // s0
  float v19; // s4
  float v20; // s0
  float v21; // s1
  int v22; // w8
  float v23; // s1
  float v24; // s0
  int v25; // w8
  unsigned __int64 v26; // [xsp+0h] [xbp-60h]
  double v27; // [xsp+10h] [xbp-50h]
  __int64 v28; // [xsp+28h] [xbp-38h] BYREF
  __int64 v29[2]; // [xsp+30h] [xbp-30h] BYREF

  v2 = (float32x2_t *)this;
  v29[1] = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  if ( !*((_BYTE *)this + 116) )
    goto LABEL_27;
  v4 = *((float *)this + 18);
  v5.n64_u64[0] = vadd_f32(
                    vmul_n_f32(*(float32x2_t *)((char *)this + 84), *((float *)this + 23)),
                    vmul_n_f32(*(float32x2_t *)((char *)this + 76), *((float *)this + 24))).n64_u64[0];
  if ( v4 > 0.00001 )
    v5.n64_u64[0] = vsub_f32(v5, vmul_n_f32(vmul_n_f32(v5, v4), *(float *)&a2)).n64_u64[0];
  v6 = *((float *)this + 13);
  v7 = vaddv_f32(vmul_f32(v5, v5));
  v27 = a2;
  if ( v7 > (float)(v6 * v6) )
    v5.n64_u64[0] = vmul_n_f32(v5, v6 / sqrtf(v7)).n64_u64[0];
  this = (__int64 *)this[4];
  if ( this )
  {
    v26 = v5.n64_u64[0];
    v28 = *(_QWORD *)(v2->n64_u64[0] + 112);
    this = Caver::SceneObject::VelocityAtWorldPoint(v29, (Caver::SceneObject *)this, (const Caver::Vector2 *)&v28);
    v8 = *((float *)v29 + 1);
    v9 = -1.0;
    v10 = v2[7].n64_f32[1];
    v11 = v2[6].n64_f32[0];
    if ( *((float *)v29 + 1) < -1.0 )
      v8 = *((float *)v29 + 1) + -1.0;
    v2[5].n64_f32[1] = v8;
    v12 = v2[5].n64_f32[0];
    v13 = *(float *)v29;
    a2 = v27;
    v14 = (float)(v10 * 4.0) * v11;
    if ( fabsf(v12 - *(float *)v29) > (float)(v14 * *(float *)&v27) )
    {
      if ( (float)(*(float *)v29 - v12) > 0.0 )
        v9 = 1.0;
      v13 = v12 + (float)((float)(v14 * v9) * *(float *)&v27);
    }
    v2[5].n64_f32[0] = v13;
    v15 = v26;
  }
  else
  {
    v16.n64_u64[0] = v2[5].n64_u64[0];
    v2[5].n64_u64[0] = 0;
    v15 = vadd_f32(v5, v16).n64_u64[0];
  }
  v17 = v2->n64_u64[0];
  *(_QWORD *)(v17 + 104) = v15;
  v18 = *(float *)&v15 + v2[5].n64_f32[0];
  v19 = *(float *)(v17 + 112);
  LODWORD(v15) = *(_DWORD *)(v17 + 116);
  v20 = v19 + (float)(v18 * *(float *)&a2);
  v21 = *(float *)&v15 + (float)((float)(*((float *)&v15 + 1) + v2[5].n64_f32[1]) * *(float *)&a2);
  if ( fabsf(v20 - v19) > 0.0001 || fabsf(v21 - *(float *)&v15) > 0.0001 )
  {
    v22 = *(unsigned __int8 *)(v17 + 180);
    *(float *)(v17 + 112) = v20;
    *(float *)(v17 + 116) = v21;
    if ( !v22 )
    {
      this = (__int64 *)Caver::SceneObject::RegisterForWorldBoundsUpdate((Caver::SceneObject *)v17);
      *(_BYTE *)(v17 + 180) = 1;
      a2 = v27;
      v17 = v2->n64_u64[0];
    }
  }
  v23 = *(float *)(v17 + 128);
  v24 = v23 + (float)(*(float *)(v17 + 132) * *(float *)&a2);
  if ( fabsf(v24 - v23) > 0.0001 && (v25 = *(unsigned __int8 *)(v17 + 180), *(float *)(v17 + 128) = v24, !v25) )
  {
    this = (__int64 *)Caver::SceneObject::RegisterForWorldBoundsUpdate((Caver::SceneObject *)v17);
    a2 = v27;
    *(_BYTE *)(v17 + 180) = 1;
    if ( v2[12].n64_u8[5] )
      goto LABEL_22;
  }
  else
  {
LABEL_27:
    if ( v2[12].n64_u8[5] )
    {
LABEL_22:
      v2[12].n64_u8[5] = 0;
      return this;
    }
  }
  v2[1].n64_u64[0] = vadd_f32(vdup_lane_s32(*(int32x2_t *)&a2, 0), v2[1]).n64_u64[0];
  return this;
}

