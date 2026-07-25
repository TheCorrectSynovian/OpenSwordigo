/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000454268
 * Mangled: _ZN5Caver14ParticleSystem25BuildVertexDataWithCameraERKNS_7Vector3ES3_
 * Demangled: Caver::ParticleSystem::BuildVertexDataWithCamera(Caver::Vector3 const&,Caver::Vector3 const&)
 *
 * Callers: 1
 *   0x00000000001F7C20  Caver::ParticleSystem::BuildVertexDataWithCamera(Caver::Vector3 const&,Caver::Vector3 const&)
 *
 * Callees: 5
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001FBA10  Caver::Vector2::RotateWithSinCos(float,float)
 *   0x00000000001FF1F0  .cosf
 *   0x0000000000200330  Caver::Vector3::Normalize(void)
 *   0x0000000000203C70  .sinf
 *
 * Referenced strings: 73
 *   insn=0x0000000000454290 string=0x0000000000454294 "H"
 *   insn=0x0000000000454298 string=0x000000000045429C ""
 *   insn=0x00000000004542B0 string=0x00000000004542B4 ""
 *   insn=0x00000000004542D4 string=0x00000000004542D8 "5!\n"
 *   insn=0x00000000004542EC string=0x00000000004542F0 """
 *   insn=0x00000000004542FC string=0x0000000000454300 "A8#"
 *   insn=0x0000000000454308 string=0x000000000045430C "\t"
 *   insn=0x0000000000454328 string=0x000000000045432C "!""
 *   insn=0x0000000000454344 string=0x0000000000454348 "@8 "
 *   insn=0x0000000000454368 string=0x000000000045436C "F"
 *   insn=0x000000000045436C string=0x0000000000454370 "g$"
 *   insn=0x0000000000454374 string=0x0000000000454378 "#"
 *   insn=0x0000000000454384 string=0x0000000000454388 "A"
 *   insn=0x0000000000454388 string=0x000000000045438C "*"
 *   insn=0x0000000000454390 string=0x0000000000454394 "7"
 *   insn=0x0000000000454398 string=0x000000000045439C ""
 *   insn=0x000000000045439C string=0x00000000004543A0 " "
 *   insn=0x00000000004543C0 string=0x00000000004543C4 ""
 *   insn=0x00000000004543C4 string=0x00000000004543C8 "\t"
 *   insn=0x00000000004543E0 string=0x00000000004543E4 "Z'"
 *   insn=0x00000000004543E8 string=0x00000000004543EC "U"
 *   insn=0x00000000004543FC string=0x0000000000454400 " "
 *   insn=0x0000000000454404 string=0x0000000000454408 "!"
 *   insn=0x0000000000454414 string=0x0000000000454418 "~"
 *   insn=0x0000000000454418 string=0x00000000001FBA10 "0'"
 *   insn=0x0000000000454428 string=0x000000000045442C "c"
 *   insn=0x000000000045442C string=0x0000000000454430 "!"
 *   insn=0x0000000000454440 string=0x0000000000454444 "!"
 *   insn=0x0000000000454448 string=0x000000000045444C "D"
 *   insn=0x000000000045444C string=0x0000000000454450 "!"
 *   insn=0x0000000000454458 string=0x000000000045445C "b\t""
 *   insn=0x0000000000454468 string=0x000000000045446C "d$"
 *   insn=0x0000000000454480 string=0x0000000000454484 "B"
 *   insn=0x0000000000454484 string=0x0000000000454488 "b""
 *   insn=0x000000000045448C string=0x0000000000454490 "J"
 *   insn=0x0000000000454498 string=0x000000000045449C "b""
 *   insn=0x000000000045449C string=0x00000000004544A0 "h!"
 *   insn=0x00000000004544A0 string=0x00000000004544A4 "M"
 *   insn=0x00000000004544B4 string=0x00000000004544B8 "?"
 *   insn=0x00000000004544B8 string=0x00000000004544BC ")"
 *   insn=0x00000000004544BC string=0x00000000004544C0 "_"
 *   insn=0x00000000004544C0 string=0x00000000004544C4 "L"
 *   insn=0x00000000004544C8 string=0x00000000004544CC "@"
 *   insn=0x00000000004544CC string=0x00000000004544D0 ""
 *   insn=0x00000000004544D8 string=0x00000000004544DC "` "
 *   insn=0x00000000004544DC string=0x00000000004544E0 ""
 *   insn=0x00000000004544E4 string=0x00000000004544E8 "k"
 *   insn=0x00000000004544E8 string=0x00000000004544EC "m"
 *   insn=0x00000000004544F0 string=0x00000000004544F4 ")"
 *   insn=0x00000000004544FC string=0x0000000000454500 "$"
 *   insn=0x0000000000454500 string=0x0000000000454504 "J"
 *   insn=0x000000000045450C string=0x0000000000454510 "k"
 *   insn=0x0000000000454510 string=0x0000000000454514 "!$"
 *   insn=0x0000000000454514 string=0x0000000000454518 "D"
 *   insn=0x0000000000454518 string=0x000000000045451C "B$"
 *   insn=0x000000000045451C string=0x0000000000454520 "d"
 *   insn=0x0000000000454520 string=0x0000000000454524 "c$"
 *   insn=0x0000000000454524 string=0x0000000000454528 "\t"
 *   insn=0x0000000000454528 string=0x000000000045452C ","
 *   insn=0x000000000045452C string=0x0000000000454530 "J"
 *   insn=0x0000000000454530 string=0x0000000000454534 "k"
 *   insn=0x0000000000454538 string=0x000000000045453C "9"
 *   insn=0x000000000045453C string=0x0000000000454540 "I"
 *   insn=0x0000000000454540 string=0x0000000000454544 "i"
 *   insn=0x0000000000454544 string=0x0000000000454548 "?"
 *   insn=0x0000000000454548 string=0x000000000045454C "\t"
 *   insn=0x0000000000454558 string=0x000000000045455C ")"
 *   insn=0x000000000045455C string=0x0000000000454560 "?"
 *   insn=0x0000000000454564 string=0x0000000000454568 ""
 *   insn=0x0000000000454574 string=0x0000000000454578 ""
 *   insn=0x0000000000454580 string=0x0000000000454584 "a"
 *   insn=0x0000000000454584 string=0x00000000004545B0 "H"
 *   insn=0x00000000004545B0 string=0x00000000001F62D0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::ParticleSystem::BuildVertexDataWithCamera(
        __int64 this,
        float32x2_t *a2,
        const Caver::Vector3 *a3)
{
  __int64 v3; // x20
  __int64 v4; // x9
  int *v5; // x21
  __int64 v6; // x26
  float32x2_t v7; // t1
  float v8; // s2
  float v9; // s3
  float v10; // s1
  float v11; // s4
  float v12; // s6
  float v13; // s1
  float v14; // s0
  float32x2_t v15; // d6
  float32x2_t v16; // d10
  float v17; // s11
  float v18; // s8
  float v19; // s9
  __int64 v20; // x25
  unsigned __int8 *v21; // x24
  _BYTE *v22; // x23
  unsigned __int8 *v23; // x22
  float32x2_t *v24; // x19
  _BYTE *v25; // x28
  __int64 v26; // x26
  float32x2_t *v27; // x21
  float32x2_t v28; // d4
  unsigned __int64 v29; // d1
  float v30; // s3
  unsigned int v31; // s2
  float v32; // s0
  int v33; // w9
  int v34; // w10
  __int64 v35; // x8
  int v36; // w13
  float v37; // s2
  int v38; // w12
  int v39; // w10
  int v40; // w11
  __int64 v43; // [xsp+28h] [xbp-D8h]
  __int64 v44; // [xsp+30h] [xbp-D0h]
  float *v45; // [xsp+38h] [xbp-C8h]
  float32x2_t *v46; // [xsp+40h] [xbp-C0h]
  float *v47; // [xsp+48h] [xbp-B8h]
  float *v48; // [xsp+50h] [xbp-B0h]
  int v49; // [xsp+58h] [xbp-A8h]
  unsigned __int64 v50; // [xsp+60h] [xbp-A0h] BYREF
  _BYTE v51[12]; // [xsp+68h] [xbp-98h] BYREF
  _QWORD v52[3]; // [xsp+78h] [xbp-88h] BYREF

  v3 = this;
  v52[2] = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  if ( *(int *)(this + 36) >= 1 )
  {
    v4 = 0;
    v49 = 0;
    do
    {
      v43 = *(_QWORD *)(v3 + 8);
      v44 = v4;
      v5 = (int *)(*(_QWORD *)(v3 + 40) + 68 * v4);
      v6 = *v5;
      v7.n64_u64[0] = *(unsigned __int64 *)++v5;
      v8 = *((float *)v5 + 2);
      v9 = a2[1].n64_f32[0];
      v48 = (float *)(v5 + 2);
      v52[0] = vsub_f32(v7, (float32x2_t)a2->n64_u64[0]).n64_u64[0];
      *(float *)&v52[1] = v8 - v9;
      Caver::Vector3::Normalize((Caver::Vector3 *)v52);
      v11 = *((float *)a3 + 1);
      v10 = *((float *)a3 + 2);
      v12 = *((float *)v52 + 1) * v10;
      v13 = (float)(*(float *)&v52[1] * *(float *)a3) - (float)(v10 * *(float *)v52);
      v14 = (float)(v11 * *(float *)v52) - (float)(*((float *)v52 + 1) * *(float *)a3);
      *(float *)v51 = v12 - (float)(*(float *)&v52[1] * v11);
      *(float *)&v51[4] = v13;
      *(float *)&v51[8] = v14;
      Caver::Vector3::Normalize((Caver::Vector3 *)v51);
      v15.n64_u32[0] = vdupq_lane_s32(*(int32x2_t *)&v51[4], 1).n128_u32[0];
      v15.n64_u32[1] = *(_DWORD *)v51;
      v16.n64_u64[0] = vsub_f32(
                         vmul_f32(*(float32x2_t *)&v51[4], (float32x2_t)__PAIR64__(v52[0], v52[1])),
                         vmul_f32(v15, *(float32x2_t *)((char *)v52 + 4))).n64_u64[0];
      v17 = (float)(*((float *)v52 + 1) * *(float *)v51) - vmuls_n_f32(*(float *)v52, *(float *)&v51[4]);
      v18 = sinf(*((float *)v5 + 7));
      v47 = (float *)(v5 + 9);
      v46 = (float32x2_t *)(v5 + 11);
      v45 = (float *)(v5 + 13);
      v19 = cosf(*((float *)v5 + 7));
      v20 = 0;
      v21 = (unsigned __int8 *)(v5 + 6);
      v22 = (char *)v5 + 25;
      v23 = (unsigned __int8 *)v5 + 26;
      v24 = (float32x2_t *)v5;
      v25 = (char *)v5 + 27;
      v26 = v43 + 88 * v6;
      do
      {
        v27 = (float32x2_t *)(v26 + 8 * v20);
        v50 = vmul_f32(vmul_n_f32(v27[3], *v47), (float32x2_t)v46->n64_u64[0]).n64_u64[0];
        this = Caver::Vector2::RotateWithSinCos((Caver::Vector2 *)&v50, v18, v19);
        v28.n64_u64[0] = vmul_n_f32(v16, *((float *)&v50 + 1)).n64_u64[0];
        v29 = vadd_f32(vadd_f32(vmul_n_f32(*(float32x2_t *)v51, *(float *)&v50), (float32x2_t)v24->n64_u64[0]), v28).n64_u64[0];
        v28.n64_u8[0] = *v21;
        v30 = *v45;
        *(float *)&v31 = v17 * *((float *)&v50 + 1);
        v32 = (float)((float)(*(float *)&v50 * *(float *)&v51[8]) + *v48) + (float)(v17 * *((float *)&v50 + 1));
        LOBYTE(v31) = *v22;
        v28.n64_f32[0] = *v45 * (float)v28.n64_u32[0];
        v33 = (int)v28.n64_f32[0];
        v28.n64_u8[0] = *v23;
        v34 = (int)(float)(*v45 * (float)v31);
        v37 = *v45 * (float)v28.n64_u32[0];
        v35 = *(_QWORD *)(v3 + 64) + *(int *)(v3 + 48) * (__int64)(v49 + (int)v20);
        v36 = (int)v37;
        LOBYTE(v37) = *v25;
        *(_QWORD *)v35 = v29;
        *(float *)(v35 + 8) = v32;
        if ( v33 >= 255 )
          LOBYTE(v33) = -1;
        if ( v34 >= 255 )
          LOBYTE(v38) = -1;
        else
          LOBYTE(v38) = v34;
        *(float32x2_t *)(v35 + 12) = v27[7];
        if ( v36 >= 255 )
          LOBYTE(v39) = -1;
        else
          LOBYTE(v39) = v36;
        v40 = (int)(float)(v30 * (float)LODWORD(v37));
        if ( v40 >= 255 )
          LOBYTE(v40) = -1;
        if ( *(_BYTE *)(v3 + 184) )
        {
          v33 = (int)(float)(*(float *)(v3 + 168) * (float)(unsigned __int8)v33);
          v38 = (int)(float)(*(float *)(v3 + 172) * (float)(unsigned __int8)v38);
          v39 = (int)(float)(*(float *)(v3 + 176) * (float)(unsigned __int8)v39);
          v40 = (int)(float)(*(float *)(v3 + 180) * (float)(unsigned __int8)v40);
        }
        ++v20;
        *(_DWORD *)(v35 + 20) = (unsigned __int8)v33
                              | (unsigned __int16)((unsigned __int8)v38 << 8)
                              | ((unsigned __int8)v39 << 16) & 0xFFFFFF
                              | ((unsigned __int8)v40 << 24);
      }
      while ( v20 != 4 );
      v4 = v44 + 1;
      v49 += 4;
    }
    while ( v44 + 1 < *(int *)(v3 + 36) );
  }
  return this;
}

