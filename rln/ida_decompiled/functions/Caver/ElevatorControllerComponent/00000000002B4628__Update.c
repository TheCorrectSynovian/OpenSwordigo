/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002B4628
 * Mangled: _ZN5Caver27ElevatorControllerComponent6UpdateEf
 * Demangled: Caver::ElevatorControllerComponent::Update(float)
 *
 * Callers: 1
 *   0x00000000001FF520  Caver::ElevatorControllerComponent::Update(float)
 *
 * Callees: 3
 *   0x00000000001F5DA0  Caver::SceneObject::RegisterForWorldBoundsUpdate(void)
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F8E10  Caver::Vector2::Normalize(void)
 *
 * Referenced strings: 121
 *   insn=0x00000000002B4640 string=0x00000000002B4644 "U"
 *   insn=0x00000000002B464C string=0x00000000002B4650 ""
 *   insn=0x00000000002B4654 string=0x00000000002B4658 "h"
 *   insn=0x00000000002B4658 string=0x00000000002B465C "H"
 *   insn=0x00000000002B465C string=0x00000000002B4744 "h"
 *   insn=0x00000000002B4660 string=0x00000000002B4664 "`"
 *   insn=0x00000000002B4664 string=0x00000000002B46F0 "t"
 *   insn=0x00000000002B4668 string=0x00000000002B466C "A"
 *   insn=0x00000000002B466C string=0x00000000002B4670 "h"
 *   insn=0x00000000002B466C string=0x00000000002B48B4 "t"
 *   insn=0x00000000002B4674 string=0x00000000002B4678 "@"
 *   insn=0x00000000002B4678 string=0x00000000002B4780 "`"
 *   insn=0x00000000002B4680 string=0x00000000002B4684 "t"
 *   insn=0x00000000002B4680 string=0x00000000002B4790 "i"
 *   insn=0x00000000002B4684 string=0x00000000002B4688 "b^@"
 *   insn=0x00000000002B4688 string=0x00000000002B468C "h"
 *   insn=0x00000000002B4694 string=0x00000000002B4698 "!"
 *   insn=0x00000000002B4698 string=0x00000000002B469C "!"
 *   insn=0x00000000002B469C string=0x00000000002B46A0 "!"
 *   insn=0x00000000002B46A0 string=0x00000000002B46A4 "   "
 *   insn=0x00000000002B46A4 string=0x00000000002B46A8 "%"
 *   insn=0x00000000002B46A8 string=0x00000000002B46AC "h"
 *   insn=0x00000000002B46A8 string=0x00000000002B48AC "h"
 *   insn=0x00000000002B46B0 string=0x00000000002B46B4 "j"
 *   insn=0x00000000002B46B4 string=0x00000000002B46B8 "h&"
 *   insn=0x00000000002B46C0 string=0x00000000002B46C4 "#"
 *   insn=0x00000000002B46C4 string=0x00000000002B46C8 "%8$"
 *   insn=0x00000000002B46C8 string=0x00000000002B46CC "F8#"
 *   insn=0x00000000002B46DC string=0x00000000002B46E0 "d"
 *   insn=0x00000000002B46E4 string=0x00000000002B46E8 "a8""
 *   insn=0x00000000002B46E8 string=0x00000000002B46EC "i"
 *   insn=0x00000000002B46F0 string=0x00000000002B46F4 "`"
 *   insn=0x00000000002B46F4 string=0x00000000002B46F8 "h"
 *   insn=0x00000000002B4700 string=0x00000000002B4704 "h"
 *   insn=0x00000000002B4704 string=0x00000000002B4708 " 8 "
 *   insn=0x00000000002B4708 string=0x00000000002B470C "C8#"
 *   insn=0x00000000002B4710 string=0x00000000002B4714 "c#"
 *   insn=0x00000000002B4720 string=0x00000000002B4724 "`  "
 *   insn=0x00000000002B4720 string=0x00000000002B4770 "`  "
 *   insn=0x00000000002B4724 string=0x00000000002B4728 "%"
 *   insn=0x00000000002B4728 string=0x00000000002B472C "i"
 *   insn=0x00000000002B4730 string=0x00000000002B4734 "h"
 *   insn=0x00000000002B4738 string=0x00000000002B473C "a"
 *   insn=0x00000000002B4738 string=0x00000000002B4850 "h"
 *   insn=0x00000000002B473C string=0x00000000002B4740 "F"
 *   insn=0x00000000002B4740 string=0x00000000002B4858 "c"
 *   insn=0x00000000002B4748 string=0x00000000002B474C "A"
 *   insn=0x00000000002B474C string=0x00000000002B4750 "i"
 *   insn=0x00000000002B4754 string=0x00000000002B4758 "h"
 *   insn=0x00000000002B4758 string=0x00000000002B475C ")"
 *   insn=0x00000000002B475C string=0x00000000002B4760 "t"
 *   insn=0x00000000002B475C string=0x00000000002B47E0 "t"
 *   insn=0x00000000002B4760 string=0x00000000002B4764 "`"
 *   insn=0x00000000002B4768 string=0x00000000002B476C "&"
 *   insn=0x00000000002B476C string=0x00000000002B4804 "b"
 *   insn=0x00000000002B4778 string=0x00000000002B477C "~"
 *   insn=0x00000000002B4788 string=0x00000000002B478C "\t"
 *   insn=0x00000000002B4790 string=0x00000000002B4794 "t"
 *   insn=0x00000000002B4798 string=0x00000000002B479C "h"
 *   insn=0x00000000002B479C string=0x00000000002B47A0 "i*"
 *   insn=0x00000000002B47A4 string=0x00000000002B47A8 "h"
 *   insn=0x00000000002B47AC string=0x00000000002B47B0 """
 *   insn=0x00000000002B47B0 string=0x00000000002B47B4 "C"
 *   insn=0x00000000002B47B8 string=0x00000000002B47BC "&8#"
 *   insn=0x00000000002B47D0 string=0x00000000002B47D4 "@8 "
 *   insn=0x00000000002B47D4 string=0x00000000002B47D8 "a8!"
 *   insn=0x00000000002B47D8 string=0x00000000002B47DC "-"
 *   insn=0x00000000002B47E0 string=0x00000000002B47E4 "h"
 *   insn=0x00000000002B47EC string=0x00000000002B47F0 "i"
 *   insn=0x00000000002B47F0 string=0x00000000002B47F4 "\nMG"
 *   insn=0x00000000002B47F4 string=0x00000000002B47F8 " "
 *   insn=0x00000000002B47F8 string=0x00000000002B47FC "A"
 *   insn=0x00000000002B47FC string=0x00000000002B4800 "j"
 *   insn=0x00000000002B4808 string=0x00000000002B480C " (#"
 *   insn=0x00000000002B480C string=0x00000000002B4810 "b"
 *   insn=0x00000000002B4818 string=0x00000000002B481C "h"
 *   insn=0x00000000002B4820 string=0x00000000002B4824 "%8""
 *   insn=0x00000000002B4824 string=0x00000000002B4828 "f8 "
 *   insn=0x00000000002B483C string=0x00000000002B4840 "A8!"
 *   insn=0x00000000002B4850 string=0x00000000002B4854 "a"
 *   insn=0x00000000002B4858 string=0x00000000002B485C "#(#"
 *   insn=0x00000000002B485C string=0x00000000002B4860 "A($"
 *   insn=0x00000000002B4860 string=0x00000000002B4864 "c"
 *   insn=0x00000000002B4868 string=0x00000000002B486C "E8#"
 *   insn=0x00000000002B4880 string=0x00000000002B4884 "D"
 *   insn=0x00000000002B4884 string=0x00000000002B4888 "`8""
 *   insn=0x00000000002B4888 string=0x00000000002B488C "!8$"
 *   insn=0x00000000002B4894 string=0x00000000002B4898 "^"
 *   insn=0x00000000002B4898 string=0x00000000002B489C "`"
 *   insn=0x00000000002B4898 string=0x00000000001F8E10 "0'"
 *   insn=0x00000000002B48A0 string=0x00000000002B48A4 " "
 *   insn=0x00000000002B48AC string=0x00000000002B48B0 "("
 *   insn=0x00000000002B48C4 string=0x00000000002B48C8 "7"
 *   insn=0x00000000002B48C8 string=0x00000000002B48CC "a\nW-"
 *   insn=0x00000000002B48D0 string=0x00000000002B48D4 "e("
 *   insn=0x00000000002B48D8 string=0x00000000002B48DC "f("
 *   insn=0x00000000002B48DC string=0x00000000002B48E0 "#8$"
 *   insn=0x00000000002B48E0 string=0x00000000002B48E4 "G8 "
 *   insn=0x00000000002B48E4 string=0x00000000002B48E8 "p#"
 *   insn=0x00000000002B48F0 string=0x00000000002B48F4 "*'"
 *   insn=0x00000000002B48F8 string=0x00000000002B48FC "0*0"
 *   insn=0x00000000002B4910 string=0x00000000002B4920 "j"
 *   insn=0x00000000002B4918 string=0x00000000002B491C "#8$"
 *   insn=0x00000000002B4920 string=0x00000000002B4924 "D"
 *   insn=0x00000000002B4924 string=0x00000000002B4928 "c"
 *   insn=0x00000000002B4928 string=0x00000000002B492C "` $"
 *   insn=0x00000000002B4930 string=0x00000000002B4934 "@8 "
 *   insn=0x00000000002B493C string=0x00000000002B4940 "i"
 *   insn=0x00000000002B4948 string=0x00000000002B494C "\n"
 *   insn=0x00000000002B4954 string=0x00000000001F5DA0 "P'"
 *   insn=0x00000000002B495C string=0x00000000002B4960 "i"
 *   insn=0x00000000002B4960 string=0x00000000002B4964 "("
 *   insn=0x00000000002B4964 string=0x00000000002B4968 ")"
 *   insn=0x00000000002B496C string=0x00000000002B4970 "7"
 *   insn=0x00000000002B4974 string=0x00000000002B4978 "`"
 *   insn=0x00000000002B4984 string=0x00000000002B4988 "e"
 *   insn=0x00000000002B4988 string=0x00000000002B498C "a"
 *   insn=0x00000000002B498C string=0x00000000002B4990 "!(("
 *   insn=0x00000000002B4994 string=0x00000000002B4998 "a"
 *   insn=0x00000000002B49A8 string=0x00000000002B49C8 "B"
 *   insn=0x00000000002B49C8 string=0x00000000001F62D0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

float32x2_t *__fastcall Caver::ElevatorControllerComponent::Update(float32x2_t *this, float a2)
{
  float32x2_t *v2; // x19
  unsigned __int32 v4; // w8
  unsigned __int32 v5; // w8
  float32x2_t *v6; // x20
  float32x2_t v7; // d1
  float v8; // w8
  float v9; // w9
  float v10; // s1
  float v11; // s2
  float v12; // s0
  float v13; // s1
  float v14; // s1
  float v15; // s2
  float v16; // s3
  int v17; // w9
  int v18; // w9
  float v19; // s0
  float v20; // s1
  float *v21; // x8
  float v22; // w9
  float v23; // w10
  float v24; // s0
  float v25; // s1
  float v26; // w9
  float v27; // s2
  float v28; // s0
  float v29; // s1
  float v30; // s3
  float v31; // s3
  float v32; // s1
  float v33; // s2
  float v34; // s4
  unsigned __int64 v35; // x20
  float v36; // s0
  float v37; // s4
  float *v38; // x8
  float v39; // w22
  float *v40; // x9
  float v41; // w23
  float v42; // s1
  float v43; // s2
  float v44; // s5
  float v45; // s6
  float v46; // s3
  int v47; // w10
  unsigned __int64 v48; // x9
  float v49; // s0
  float v50; // s1
  float32x2_t v51[2]; // [xsp+0h] [xbp-40h] BYREF

  v2 = this;
  v51[1] = *(float32x2_t *)(_ReadStatusReg(TPIDR_EL0) + 40);
  v4 = this[19].n64_u32[1];
  switch ( v4 )
  {
    case 0u:
      if ( this[19].n64_u32[0] != 2 )
        goto LABEL_38;
      v18 = this[20].n64_u8[0];
      this[19].n64_u32[1] = 1;
      v6 = (float32x2_t *)this[5].n64_u64[0];
      if ( v18 )
      {
        v19 = this[20].n64_f32[1];
        v20 = this[21].n64_f32[0];
        v21 = (float *)&v6[14] + 1;
      }
      else
      {
        this[20].n64_u8[0] = 1;
        v26 = v6[14].n64_f32[0];
        this[20].n64_f32[1] = v26;
        v21 = (float *)&v6[14] + 1;
        v19 = v26;
        v20 = v6[14].n64_f32[1];
        this[21].n64_f32[0] = v20;
      }
      v27 = v19 + this[21].n64_f32[1];
      v28 = v20 + this[22].n64_f32[0];
      this[23].n64_f32[0] = v27;
      this[23].n64_f32[1] = v28;
      v29 = v6[14].n64_f32[0];
      v30 = *v21;
      if ( (float)((float)((float)(v29 - v27) * (float)(v29 - v27)) + (float)((float)(v30 - v28) * (float)(v30 - v28))) >= 0.0001 )
      {
        v51[0].n64_f32[0] = v27 - v29;
        v51[0].n64_f32[1] = v28 - v30;
LABEL_28:
        this = (float32x2_t *)Caver::Vector2::Normalize((Caver::Vector2 *)v51);
        v6[13].n64_u64[0] = vmul_n_f32(v51[0], v2[22].n64_f32[1]).n64_u64[0];
        goto LABEL_29;
      }
      goto LABEL_29;
    case 2u:
      v6 = (float32x2_t *)this[5].n64_u64[0];
      v14 = v6[14].n64_f32[0];
      v15 = v6[14].n64_f32[1];
      v16 = (float)((float)(v14 - this[23].n64_f32[0]) * (float)(v14 - this[23].n64_f32[0]))
          + (float)((float)(v15 - this[23].n64_f32[1]) * (float)(v15 - this[23].n64_f32[1]));
      if ( this[19].n64_u32[0] == 2 )
      {
        if ( v16 < 0.0001 )
        {
          v17 = this[20].n64_u8[0];
          this[19].n64_u32[1] = 1;
          if ( v17 )
          {
            v14 = this[20].n64_f32[1];
            v15 = this[21].n64_f32[0];
          }
          else
          {
            this[20].n64_u8[0] = 1;
            this[20].n64_f32[1] = v14;
            this[21].n64_f32[0] = v15;
          }
          v31 = v14 + this[21].n64_f32[1];
          v32 = v15 + this[22].n64_f32[0];
          this[23].n64_f32[0] = v31;
          this[23].n64_f32[1] = v32;
          v33 = v6[14].n64_f32[0];
          v34 = v6[14].n64_f32[1];
          if ( (float)((float)((float)(v33 - v31) * (float)(v33 - v31))
                     + (float)((float)(v34 - v32) * (float)(v34 - v32))) >= 0.0001 )
          {
            v12 = v31 - v33;
            v13 = v32 - v34;
            goto LABEL_27;
          }
        }
      }
      else if ( v16 < 0.0001 )
      {
        this[19].n64_u32[1] = 0;
        goto LABEL_38;
      }
LABEL_29:
      if ( !v2[19].n64_u32[1] )
        goto LABEL_38;
      break;
    case 1u:
      v5 = this[19].n64_u32[0];
      if ( v5 == 1 )
      {
        if ( this[25].n64_f32[1] <= 1.0 )
          goto LABEL_29;
      }
      else if ( v5 == 2 )
      {
        v6 = (float32x2_t *)this[5].n64_u64[0];
        v7.n64_u64[0] = vsub_f32(v6[14], this[23]).n64_u64[0];
        if ( vaddv_f32(vmul_f32(v7, v7)) < 0.0001 )
        {
          v8 = this[20].n64_f32[1];
          v9 = this[21].n64_f32[0];
          this[19].n64_u32[1] = 2;
          this[23].n64_f32[0] = v8;
          this[23].n64_f32[1] = v9;
          v10 = v6[14].n64_f32[0];
          v11 = v6[14].n64_f32[1];
          if ( (float)((float)((float)(v10 - v8) * (float)(v10 - v8)) + (float)((float)(v11 - v9) * (float)(v11 - v9))) >= 0.0001 )
          {
            v12 = v8 - v10;
            v13 = v9 - v11;
LABEL_27:
            v51[0].n64_u64[0] = __PAIR64__(LODWORD(v13), LODWORD(v12));
            goto LABEL_28;
          }
        }
        goto LABEL_29;
      }
      v22 = this[20].n64_f32[1];
      v23 = this[21].n64_f32[0];
      v6 = (float32x2_t *)this[5].n64_u64[0];
      this[19].n64_u32[1] = 2;
      this[23].n64_f32[0] = v22;
      this[23].n64_f32[1] = v23;
      v24 = v6[14].n64_f32[0];
      v25 = v6[14].n64_f32[1];
      if ( (float)((float)((float)(v24 - v22) * (float)(v24 - v22)) + (float)((float)(v25 - v23) * (float)(v25 - v23))) < 0.0001 )
        goto LABEL_29;
      v12 = v22 - v24;
      v13 = v23 - v25;
      goto LABEL_27;
  }
  v35 = v2[5].n64_u64[0];
  v37 = *(float *)(v35 + 112);
  v36 = *(float *)(v35 + 116);
  v38 = (float *)(v35 + 104);
  v39 = *(float *)(v35 + 104);
  v40 = (float *)(v35 + 108);
  v41 = *(float *)(v35 + 108);
  v42 = v2[23].n64_f32[0];
  v43 = v2[23].n64_f32[1];
  v44 = v39 * a2;
  v45 = v41 * a2;
  v46 = v42 - v37;
  if ( (float)((float)(v46 * v46) + (float)((float)(v43 - v36) * (float)(v43 - v36))) >= (float)((float)(v44 * v44)
                                                                                               + (float)(v45 * v45)) )
  {
    v42 = v37 + v44;
    v43 = v36 + v45;
    v46 = (float)(v37 + v44) - v37;
  }
  else
  {
    v39 = 0.0;
    v41 = 0.0;
  }
  if ( fabsf(v46) > 0.0001 || fabsf(v43 - v36) > 0.0001 )
  {
    v47 = *(unsigned __int8 *)(v35 + 180);
    *(float *)(v35 + 112) = v42;
    *(float *)(v35 + 116) = v43;
    if ( !v47 )
    {
      this = (float32x2_t *)Caver::SceneObject::RegisterForWorldBoundsUpdate((Caver::SceneObject *)v35);
      *(_BYTE *)(v35 + 180) = 1;
      v48 = v2[5].n64_u64[0];
      v38 = (float *)(v48 + 104);
      v40 = (float *)(v48 + 108);
    }
  }
  *v38 = v39;
  *v40 = v41;
LABEL_38:
  v49 = v2[25].n64_f32[1];
  v50 = 0.0;
  if ( v49 < 0.1 )
    v50 = v2[25].n64_f32[0] + a2;
  v2[25].n64_f32[0] = v50;
  v2[25].n64_f32[1] = v49 + a2;
  return this;
}

