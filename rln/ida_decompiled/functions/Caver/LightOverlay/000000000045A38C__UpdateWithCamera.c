/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000045A38C
 * Mangled: _ZN5Caver12LightOverlay16UpdateWithCameraEPNS_6CameraE
 * Demangled: Caver::LightOverlay::UpdateWithCamera(Caver::Camera *)
 *
 * Callers: 1
 *   0x00000000001F9D90  Caver::LightOverlay::UpdateWithCamera(Caver::Camera *)
 *
 * Callees: 9
 *   0x00000000001F4F60  operator delete[](void *)
 *   0x00000000001F5EA0  Caver::Camera::VisibleAreaSizeAtDistance(float)
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F8570  operator new[](ulong)
 *   0x00000000001FA4C0  Caver::Camera::ViewPointFromWorldPosition(Caver::Vector3 const&,float *)
 *   0x00000000001FC650  Caver::Rectangle::DistanceFromPointSquared(Caver::Vector2 const&)
 *   0x00000000001FD530  .sqrtf
 *   0x000000000045A84C  Caver::LightOverlay::Draw(Caver::RenderingContext *)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 131
 *   insn=0x000000000045A3B8 string=0x000000000045A3BC "H"
 *   insn=0x000000000045A3C0 string=0x000000000045A3C4 ""
 *   insn=0x000000000045A3D0 string=0x000000000045A3D4 "y"
 *   insn=0x000000000045A3D8 string=0x000000000045A3DC "("
 *   insn=0x000000000045A3DC string=0x000000000045A3E0 ")"
 *   insn=0x000000000045A3E0 string=0x000000000045A3E4 ")"
 *   insn=0x000000000045A3E8 string=0x000000000045A3EC " "
 *   insn=0x000000000045A3EC string=0x000000000045A3F0 "`x"
 *   insn=0x000000000045A3F0 string=0x000000000045A3F4 "?"
 *   insn=0x000000000045A3F0 string=0x00000000001F8570 "0'"
 *   insn=0x000000000045A3F8 string=0x000000000045A3FC "k"
 *   insn=0x000000000045A3FC string=0x000000000045A4E8 "?"
 *   insn=0x000000000045A408 string=0x000000000045A40C "hN@"
 *   insn=0x000000000045A41C string=0x000000000045A420 "("
 *   insn=0x000000000045A420 string=0x00000000001FA4C0 "0'"
 *   insn=0x000000000045A42C string=0x000000000045A430 "hN@"
 *   insn=0x000000000045A438 string=0x000000000045A43C ""
 *   insn=0x000000000045A448 string=0x000000000045A44C "!"
 *   insn=0x000000000045A450 string=0x000000000045A454 "!"
 *   insn=0x000000000045A458 string=0x000000000045A45C "!"
 *   insn=0x000000000045A460 string=0x000000000045A464 " "
 *   insn=0x000000000045A468 string=0x000000000045A46C "g"
 *   insn=0x000000000045A46C string=0x000000000045A470 " "
 *   insn=0x000000000045A470 string=0x000000000045A474 "/"
 *   insn=0x000000000045A474 string=0x00000000001FD530 "0'"
 *   insn=0x000000000045A480 string=0x000000000045A484 "hN@"
 *   insn=0x000000000045A480 string=0x00000000001F5EA0 "P'"
 *   insn=0x000000000045A490 string=0x000000000045A494 ""
 *   insn=0x000000000045A498 string=0x000000000045A49C " "
 *   insn=0x000000000045A4A4 string=0x000000000045A4A8 "-@"
 *   insn=0x000000000045A4B4 string=0x000000000045A4B8 "f"
 *   insn=0x000000000045A4B8 string=0x00000000001FC650 "0'"
 *   insn=0x000000000045A4BC string=0x000000000045A4C0 "{"
 *   insn=0x000000000045A4C0 string=0x000000000045A4C4 "Z"
 *   insn=0x000000000045A4C4 string=0x000000000045A4C8 "!!"
 *   insn=0x000000000045A4D4 string=0x000000000045A4D8 "y"
 *   insn=0x000000000045A4E0 string=0x000000000045A4E4 "K"
 *   insn=0x000000000045A4F0 string=0x000000000045A4F4 ""
 *   insn=0x000000000045A508 string=0x000000000045A50C ""
 *   insn=0x000000000045A518 string=0x000000000045A51C "H"
 *   insn=0x000000000045A520 string=0x000000000045A524 "h"
 *   insn=0x000000000045A524 string=0x000000000045A528 "))A-j"
 *   insn=0x000000000045A528 string=0x000000000045A52C "j"
 *   insn=0x000000000045A530 string=0x000000000045A534 "$9*"
 *   insn=0x000000000045A534 string=0x000000000045A538 "%)*"
 *   insn=0x000000000045A540 string=0x000000000045A544 "J"
 *   insn=0x000000000045A544 string=0x000000000045A548 "l"
 *   insn=0x000000000045A54C string=0x000000000045A550 "_"
 *   insn=0x000000000045A550 string=0x000000000045A554 "z}"
 *   insn=0x000000000045A554 string=0x000000000045A558 "["
 *   insn=0x000000000045A558 string=0x000000000045A55C "_"
 *   insn=0x000000000045A564 string=0x000000000045A568 "+"
 *   insn=0x000000000045A564 string=0x000000000045A678 "hN@"
 *   insn=0x000000000045A568 string=0x000000000045A56C ","
 *   insn=0x000000000045A56C string=0x000000000045A570 "M\t*"
 *   insn=0x000000000045A578 string=0x000000000045A584 "}"
 *   insn=0x000000000045A57C string=0x000000000045A580 "Z"
 *   insn=0x000000000045A598 string=0x000000000045A59C " "
 *   insn=0x000000000045A5A4 string=0x000000000045A5A8 " "
 *   insn=0x000000000045A5A4 string=0x000000000045A5B8 "h"
 *   insn=0x000000000045A5B8 string=0x000000000045A5BC "i"
 *   insn=0x000000000045A5BC string=0x000000000045A5C0 "a9 "
 *   insn=0x000000000045A5C0 string=0x000000000045A5C4 "`) "
 *   insn=0x000000000045A5CC string=0x000000000045A5D0 "*"
 *   insn=0x000000000045A5D0 string=0x000000000045A5D4 "!"
 *   insn=0x000000000045A5D8 string=0x000000000045A5DC "+"
 *   insn=0x000000000045A5DC string=0x000000000045A5E0 "_"
 *   insn=0x000000000045A5E0 string=0x000000000045A5E4 "y}"
 *   insn=0x000000000045A5E4 string=0x000000000045A5E8 "\"
 *   insn=0x000000000045A5E8 string=0x000000000045A5EC "?"
 *   insn=0x000000000045A5F0 string=0x000000000045A5F4 "j"
 *   insn=0x000000000045A5F0 string=0x000000000045A664 "_"
 *   insn=0x000000000045A5F4 string=0x000000000045A5F8 ")e"
 *   insn=0x000000000045A5F8 string=0x000000000045A5FC "W"
 *   insn=0x000000000045A600 string=0x000000000045A610 "}"
 *   insn=0x000000000045A604 string=0x000000000045A608 "9"
 *   insn=0x000000000045A620 string=0x000000000045A624 " "
 *   insn=0x000000000045A62C string=0x000000000045A630 " "
 *   insn=0x000000000045A64C string=0x000000000045A650 "?"
 *   insn=0x000000000045A650 string=0x000000000045A654 "!( "
 *   insn=0x000000000045A65C string=0x000000000045A660 "+"
 *   insn=0x000000000045A660 string=0x000000000045A604 "h"
 *   insn=0x000000000045A668 string=0x000000000045A66C "a\nJm`"
 *   insn=0x000000000045A668 string=0x000000000045A57C "h"
 *   insn=0x000000000045A66C string=0x000000000045A670 "`"
 *   insn=0x000000000045A670 string=0x000000000045A674 "y"
 *   insn=0x000000000045A688 string=0x000000000045A68C "`"
 *   insn=0x000000000045A68C string=0x000000000045A690 "c"
 *   insn=0x000000000045A694 string=0x000000000045A698 "a"
 *   insn=0x000000000045A69C string=0x000000000045A6A0 "a\n\nm"
 *   insn=0x000000000045A6A8 string=0x000000000045A6AC "K"
 *   insn=0x000000000045A6B0 string=0x000000000045A6B8 "l"
 *   insn=0x000000000045A6BC string=0x000000000045A6C0 "+"
 *   insn=0x000000000045A6C0 string=0x000000000045A6C4 "j"
 *   insn=0x000000000045A6C4 string=0x000000000045A6C8 "i"
 *   insn=0x000000000045A6C8 string=0x000000000045A6CC "m"
 *   insn=0x000000000045A6DC string=0x000000000045A6E0 "J1"
 *   insn=0x000000000045A6E8 string=0x000000000045A6EC "+"
 *   insn=0x000000000045A6EC string=0x000000000045A790 ""
 *   insn=0x000000000045A6F0 string=0x000000000045A6F4 """
 *   insn=0x000000000045A6F4 string=0x000000000045A6F8 "?E"
 *   insn=0x000000000045A6F8 string=0x000000000045A6FC "c"@"
 *   insn=0x000000000045A6FC string=0x000000000045A700 "d"
 *   insn=0x000000000045A700 string=0x000000000045A704 "e"
 *   insn=0x000000000045A704 string=0x000000000045A708 "f"
 *   insn=0x000000000045A70C string=0x000000000045A710 "B#"
 *   insn=0x000000000045A710 string=0x000000000045A714 "c"
 *   insn=0x000000000045A718 string=0x000000000045A71C "Bh!"
 *   insn=0x000000000045A720 string=0x000000000045A724 "D$"
 *   insn=0x000000000045A728 string=0x000000000045A72C "E%"
 *   insn=0x000000000045A730 string=0x000000000045A734 "c"
 *   insn=0x000000000045A734 string=0x000000000045A738 "F&"
 *   insn=0x000000000045A740 string=0x000000000045A744 "B#"
 *   insn=0x000000000045A750 string=0x000000000045A754 "P"
 *   insn=0x000000000045A774 string=0x000000000045A778 "M"
 *   insn=0x000000000045A778 string=0x000000000045A77C "m"
 *   insn=0x000000000045A784 string=0x000000000045A788 "k"
 *   insn=0x000000000045A788 string=0x000000000045A78C "l"
 *   insn=0x000000000045A798 string=0x000000000045A79C "`"
 *   insn=0x000000000045A7A0 string=0x000000000045A7A8 "H\t"
 *   insn=0x000000000045A7A8 string=0x0000000000583944 "\n"
 *   insn=0x000000000045A7B4 string=0x000000000045A7B8 "b*"
 *   insn=0x000000000045A7B8 string=0x000000000045A7BC "c"
 *   insn=0x000000000045A7C0 string=0x000000000045A7C4 "%"
 *   insn=0x000000000045A7C8 string=0x000000000045A7CC "B"
 *   insn=0x000000000045A7CC string=0x000000000045A7D0 "c"
 *   insn=0x000000000045A7D0 string=0x000000000045A7D4 "b*"
 *   insn=0x000000000045A7D8 string=0x000000000045A7DC "!"
 *   insn=0x000000000045A7E0 string=0x000000000045A7E4 "`"
 *   insn=0x000000000045A7EC string=0x00000000001F4F60 "P'"
 *   insn=0x000000000045A830 string=0x00000000001F62D0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::LightOverlay::UpdateWithCamera(float32x4_t *this, Caver::Camera *a2)
{
  signed __int64 v4; // x25
  unsigned __int64 v5; // x0
  _BYTE *v6; // x20
  float32x2_t v7; // d4
  float v8; // s5
  float v9; // s6
  __int64 v10; // x24
  __int64 v11; // x26
  signed __int64 v12; // x27
  __int64 v13; // x8
  float32x2_t v14; // d1
  unsigned __int64 v15; // d1
  float *v16; // x23
  __int64 v17; // x8
  float v18; // s0
  __int64 v19; // x21
  float32x2_t v20; // d1
  float v21; // s0
  float32x2_t v22; // d2
  float *v23; // x9
  int v24; // w8
  float v25; // s9
  float v26; // s10
  int v27; // w12
  int v28; // w11
  int v29; // w26
  int v30; // w27
  float v31; // s11
  float v32; // s12
  float v33; // s14
  float v34; // s0
  int v35; // w8
  unsigned __int32 v36; // w9
  signed int v37; // w12
  int v38; // w11
  int v39; // w25
  signed int v40; // w28
  float *i; // x23
  float v42; // s0
  __int64 v43; // x8
  float32x2_t v44; // d3
  float32x2_t v45; // d4
  int v46; // w12
  float *v47; // x9
  int v48; // w13
  int v49; // w8
  int *v50; // x10
  int j; // w12
  float v52; // s2
  float v53; // s3
  float v54; // s2
  float v55; // s2
  int v56; // w13
  int v57; // w14
  float v58; // s2
  int v59; // w15
  unsigned __int16 v60; // w13
  unsigned __int8 v61; // w14
  float v62; // s3
  __int64 v63; // [xsp+20h] [xbp-B0h] BYREF
  __int64 v64; // [xsp+28h] [xbp-A8h] BYREF
  float v65; // [xsp+34h] [xbp-9Ch] BYREF
  __int64 v66; // [xsp+38h] [xbp-98h]

  v66 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  v4 = this[9].n128_i32[1];
  if ( is_mul_ok(v4, 0x14u) )
    v5 = 20 * v4;
  else
    v5 = -1;
  v6 = (_BYTE *)operator new[](v5);
  if ( (int)v4 >= 1 )
  {
    v10 = 0;
    v11 = 0;
    v12 = 0;
    do
    {
      Caver::Camera::ViewPointFromWorldPosition(&v64, a2, (const Caver::Vector3 *)(this[9].n128_u64[1] + v11), &v65);
      *(_QWORD *)&v6[v10 + 4] = v64;
      v13 = this[9].n128_u64[1] + v11;
      v14.n64_u64[0] = vsub_f32(*(float32x2_t *)((char *)a2 + 20), *(float32x2_t *)(v13 + 4)).n64_u64[0];
      v15 = vmul_f32(v14, v14).n64_u64[0];
      Caver::Camera::VisibleAreaSizeAtDistance(
        &v63,
        a2,
        sqrtf(
          (float)((float)((float)(*((float *)a2 + 4) - *(float *)v13) * (float)(*((float *)a2 + 4) - *(float *)v13))
                + *(float *)&v15)
        + *((float *)&v15 + 1)));
      v16 = (float *)&v6[v10];
      v17 = this[9].n128_u64[1] + v11;
      v16[3] = (float)(*(float *)(v17 + 48) / *((float *)&v63 + 1)) * *((float *)a2 + 3);
      v16[4] = *(float *)(v17 + 44);
      Caver::Rectangle::DistanceFromPointSquared((Caver::Rectangle *)this, (const Caver::Vector2 *)&v6[v10 + 4]);
      ++v12;
      v11 += 60;
      v6[v10] = v18 < (float)(*(float *)&v6[v10 + 12] * *(float *)&v6[v10 + 12]);
      v4 = this[9].n128_i32[1];
      v10 += 20;
    }
    while ( v12 < v4 );
  }
  this[10].n128_u64[0] = 0;
  this[10].n128_u64[1] = 0;
  this[11].n128_u32[0] = 0;
  if ( (int)v4 <= 0 )
  {
    v21 = 0.0;
  }
  else
  {
    v19 = 0;
    v20.n64_u64[0] = 0;
    v21 = 0.0;
    v22.n64_u64[0] = 0;
    do
    {
      if ( v6[20 * v19] )
      {
        v23 = (float *)&v6[20 * v19];
        v24 = this[1].n128_i32[2];
        v25 = v23[2];
        v26 = v23[3];
        v27 = vcvtms_s32_f32((float)(v25 + v26) / (float)v24);
        v28 = vcvtps_s32_f32((float)(v25 - v26) / (float)v24);
        v29 = v28 & ~(v28 >> 31);
        if ( (signed __int32)(this[1].n128_u32[0] - 1) >= v27 )
          v30 = v27;
        else
          v30 = this[1].n128_u32[0] - 1;
        v8 = 0.0;
        if ( v29 <= v30 )
        {
          v31 = v23[1];
          v32 = v23[4];
          v8 = 0.0;
          while ( 1 )
          {
            v33 = (float)((float)(v24 * v29) - v25) * (float)((float)(v24 * v29) - v25);
            v34 = sqrtf(fabsf((float)(v26 * v26) - v33));
            v35 = this[1].n128_i32[3];
            v36 = this[1].n128_u32[1];
            v37 = vcvtms_s32_f32((float)(v31 + v34) / (float)v35);
            v38 = vcvtps_s32_f32((float)(v31 - v34) / (float)v35);
            v39 = v38 & ~(v38 >> 31);
            if ( (int)(v36 - 1) >= v37 )
              v40 = v37;
            else
              v40 = v36 - 1;
            if ( v39 <= v40 )
            {
              for ( i = (float *)(this[2].n128_u64[1] + 4LL * (int)(v39 + v36 * v29)); ; ++i )
              {
                v42 = v32
                    * (float)(1.0
                            - (float)(sqrtf(
                                        v33
                                      + (float)((float)((float)(v35 * v39) - v31) * (float)((float)(v35 * v39) - v31)))
                                    / v26));
                v8 = v8 + v42;
                *i = *i + v42;
                if ( v39 >= v40 )
                  break;
                v35 = this[1].n128_i32[3];
                ++v39;
              }
            }
            if ( v29 >= v30 )
              break;
            v24 = this[1].n128_i32[2];
            ++v29;
          }
          v20.n64_u64[0] = this[10].n128_u64[0];
          v22.n64_u64[0] = *(unsigned __int64 *)&this[10].n128_i8[8];
          v21 = this[11].n128_f32[0];
          LODWORD(v4) = this[9].n128_u32[1];
        }
        v21 = v8 + v21;
        v43 = this[9].n128_u64[1] + 60 * v19;
        v44.n64_u64[0] = *(unsigned __int64 *)(v43 + 12);
        v45.n64_u64[0] = *(unsigned __int64 *)(v43 + 20);
        this[11].n128_f32[0] = v21;
        v7.n64_u64[0] = vmul_n_f32(v45, v8).n64_u64[0];
        v20.n64_u64[0] = vadd_f32(vmul_n_f32(v44, v8), v20).n64_u64[0];
        v22.n64_u64[0] = vadd_f32(v7, v22).n64_u64[0];
        this[10].n128_u64[0] = v20.n64_u64[0];
        *(float32x2_t *)&this[10].n128_i8[8] = v22;
      }
      ++v19;
    }
    while ( v19 < (int)v4 );
  }
  v46 = this[1].n128_i32[0];
  if ( v46 >= 1 )
  {
    v47 = (float *)this[2].n128_u64[1];
    v48 = this[1].n128_i32[1];
    v49 = 0;
    v50 = (int *)(this[3].n128_u64[1] + 12);
    do
    {
      if ( v48 >= 1 )
      {
        for ( j = 0; j < v48; ++j )
        {
          v52 = *v47;
          *v47++ = 0.0;
          v53 = this[2].n128_f32[0];
          v7.n64_u8[0] = this[2].n128_u8[4];
          LOBYTE(v8) = this[2].n128_u8[5];
          LOBYTE(v9) = this[2].n128_u8[6];
          v54 = (float)(1.0 - v52) * v53;
          LOBYTE(v53) = this[2].n128_u8[7];
          v55 = fmaxf(v54, 0.0);
          v7.n64_f32[0] = v55 * (float)v7.n64_u32[0];
          v8 = v55 * (float)LODWORD(v8);
          v56 = (int)v7.n64_f32[0];
          v9 = v55 * (float)LODWORD(v9);
          v57 = (int)v8;
          v58 = v55 * (float)LODWORD(v53);
          v59 = (int)v9;
          if ( (int)v7.n64_f32[0] >= 255 )
            LOBYTE(v56) = -1;
          if ( v57 >= 255 )
            LOBYTE(v57) = -1;
          if ( v59 >= 255 )
            LOBYTE(v59) = -1;
          v60 = (unsigned __int8)v56 | ((unsigned __int8)v57 << 8);
          if ( (int)v58 >= 255 )
            v61 = -1;
          else
            v61 = (int)v58;
          *v50 = v60 | ((unsigned __int8)v59 << 16) & 0xFFFFFF | (v61 << 24);
          v50 += 4;
          v48 = this[1].n128_i32[1];
        }
        v46 = this[1].n128_i32[0];
      }
      ++v49;
    }
    while ( v49 < v46 );
    v21 = this[11].n128_f32[0];
  }
  if ( v21 > 0.01 )
  {
    v62 = (float)this[1].n128_i32[1];
    this[10] = vmulq_n_f32(this[10], 1.0 / v21);
    this[11].n128_f32[0] = v21 * (float)(1.0 / (float)((float)v46 * v62));
  }
  operator delete[](v6);
}

