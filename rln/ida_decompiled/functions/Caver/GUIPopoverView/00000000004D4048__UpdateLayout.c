/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004D4048
 * Mangled: _ZN5Caver14GUIPopoverView12UpdateLayoutEv
 * Demangled: Caver::GUIPopoverView::UpdateLayout(void)
 *
 * Callers: 1
 *   0x0000000000203970  Caver::GUIPopoverView::UpdateLayout(void)
 *
 * Callees: 4
 *   0x00000000001F3C90  Caver::Rectangle::RectangleByOutsetting(float)
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001FB170  Caver::GUIView::SetFrame(Caver::Rectangle const&)
 *   0x00000000001FC470  Caver::GUIRoundedRect::CreateWithInnerBounds(Caver::Rectangle const&,float)
 *
 * Referenced strings: 175
 *   insn=0x00000000004D4054 string=0x00000000004D4058 "T"
 *   insn=0x00000000004D4064 string=0x00000000004D4068 "h"
 *   insn=0x00000000004D406C string=0x00000000004D4070 "\t"
 *   insn=0x00000000004D4078 string=0x00000000004D407C "j"
 *   insn=0x00000000004D407C string=0x00000000004D4080 "!"
 *   insn=0x00000000004D4084 string=0x00000000004D4088 "j"
 *   insn=0x00000000004D4088 string=0x00000000004D408C "k.@"
 *   insn=0x00000000004D408C string=0x00000000004D4090 "b"
 *   insn=0x00000000004D4090 string=0x00000000004D4094 "e"
 *   insn=0x00000000004D4094 string=0x00000000004D4098 "c"
 *   insn=0x00000000004D4098 string=0x00000000004D409C "d"
 *   insn=0x00000000004D409C string=0x00000000004D40A0 "B(%"
 *   insn=0x00000000004D40A0 string=0x00000000004D40A4 "c($"
 *   insn=0x00000000004D40A4 string=0x00000000004D40A8 "c8""
 *   insn=0x00000000004D40A8 string=0x00000000004D40AC "` !"
 *   insn=0x00000000004D40AC string=0x00000000004D40B0 "-"
 *   insn=0x00000000004D40B4 string=0x00000000004D40B8 "A(!"
 *   insn=0x00000000004D40BC string=0x00000000004D40C0 "!@&"
 *   insn=0x00000000004D40C0 string=0x00000000004D40C4 "j"
 *   insn=0x00000000004D40C8 string=0x00000000004D40CC "a"
 *   insn=0x00000000004D40CC string=0x00000000004D40D0 "b"
 *   insn=0x00000000004D40D8 string=0x00000000004D40DC "!#"
 *   insn=0x00000000004D40DC string=0x00000000004D40E0 "A(!"
 *   insn=0x00000000004D40E0 string=0x00000000004D40E4 "!8$"
 *   insn=0x00000000004D40E4 string=0x00000000004D40E8 ""@&"
 *   insn=0x00000000004D40EC string=0x00000000004D40F0 "c"
 *   insn=0x00000000004D40F0 string=0x00000000004D40F4 "d"
 *   insn=0x00000000004D40FC string=0x00000000004D4100 "a(!"
 *   insn=0x00000000004D4100 string=0x00000000004D4104 "  ""
 *   insn=0x00000000004D4104 string=0x00000000004D4108 "c($"
 *   insn=0x00000000004D4108 string=0x00000000004D410C "$"
 *   insn=0x00000000004D410C string=0x00000000004D4110 "c(%"
 *   insn=0x00000000004D4118 string=0x00000000004D411C "c8 "
 *   insn=0x00000000004D411C string=0x00000000004D4120 "c"
 *   insn=0x00000000004D4120 string=0x00000000004D4124 " "
 *   insn=0x00000000004D4124 string=0x00000000004D4128 "b"
 *   insn=0x00000000004D4128 string=0x00000000004D412C "` !"
 *   insn=0x00000000004D4130 string=0x00000000004D4134 "`( "
 *   insn=0x00000000004D4138 string=0x00000000004D413C ""
 *   insn=0x00000000004D413C string=0x00000000004D4140 """
 *   insn=0x00000000004D414C string=0x00000000004D4150 "v"
 *   insn=0x00000000004D4154 string=0x00000000004D4158 "j"
 *   insn=0x00000000004D4158 string=0x00000000004D415C "i"
 *   insn=0x00000000004D4158 string=0x00000000004D4164 "*"
 *   insn=0x00000000004D416C string=0x00000000004D4170 "i.@"
 *   insn=0x00000000004D4170 string=0x00000000004D4174 "`"
 *   insn=0x00000000004D4174 string=0x00000000004D4178 """
 *   insn=0x00000000004D417C string=0x00000000004D4180 "@ !"
 *   insn=0x00000000004D4180 string=0x00000000004D4184 "-"
 *   insn=0x00000000004D4198 string=0x00000000004D419C "j"
 *   insn=0x00000000004D41A0 string=0x00000000004D41A4 "a"
 *   insn=0x00000000004D41A4 string=0x00000000004D41A8 "b"
 *   insn=0x00000000004D41B0 string=0x00000000004D41B4 "!#"
 *   insn=0x00000000004D41B8 string=0x00000000004D41BC "A(!"
 *   insn=0x00000000004D41BC string=0x00000000004D41C0 "!8$"
 *   insn=0x00000000004D41C0 string=0x00000000004D41C4 ""@&"
 *   insn=0x00000000004D41C8 string=0x00000000004D41CC "#"
 *   insn=0x00000000004D41CC string=0x00000000004D41D0 "$"
 *   insn=0x00000000004D41D8 string=0x00000000004D41DC "a(!"
 *   insn=0x00000000004D41DC string=0x00000000004D41E0 "  ""
 *   insn=0x00000000004D41E0 string=0x00000000004D41E4 "c($"
 *   insn=0x00000000004D41E4 string=0x00000000004D41E8 "$"
 *   insn=0x00000000004D41E8 string=0x00000000004D41EC "c(%"
 *   insn=0x00000000004D41F4 string=0x00000000004D41F8 "c8 "
 *   insn=0x00000000004D41F8 string=0x00000000004D41FC "c"
 *   insn=0x00000000004D41FC string=0x00000000004D4200 " "
 *   insn=0x00000000004D4200 string=0x00000000004D4204 "b"
 *   insn=0x00000000004D4204 string=0x00000000004D4208 "` !"
 *   insn=0x00000000004D420C string=0x00000000004D4210 "`( "
 *   insn=0x00000000004D4214 string=0x00000000004D4218 ""
 *   insn=0x00000000004D4218 string=0x00000000004D421C """
 *   insn=0x00000000004D4228 string=0x00000000004D422C "h.@"
 *   insn=0x00000000004D422C string=0x00000000004D4230 "b"
 *   insn=0x00000000004D4230 string=0x00000000004D4234 "c"
 *   insn=0x00000000004D423C string=0x00000000004D4240 "C(#"
 *   insn=0x00000000004D4240 string=0x00000000004D4244 "B8$"
 *   insn=0x00000000004D424C string=0x00000000004D4250 "` ""
 *   insn=0x00000000004D4258 string=0x00000000004D425C "h"
 *   insn=0x00000000004D4260 string=0x00000000004D4268 "b"
 *   insn=0x00000000004D4268 string=0x00000000004D426C "f"
 *   insn=0x00000000004D4270 string=0x00000000004D4274 "!%"
 *   insn=0x00000000004D4280 string=0x00000000004D4284 "%@&"
 *   insn=0x00000000004D4284 string=0x00000000004D4288 "c"
 *   insn=0x00000000004D428C string=0x00000000004D4290 "i.@"
 *   insn=0x00000000004D4294 string=0x00000000004D4298 "$"
 *   insn=0x00000000004D42A0 string=0x00000000004D42A4 "E"
 *   insn=0x00000000004D42B0 string=0x00000000004D42B4 "B8 "
 *   insn=0x00000000004D42B0 string=0x00000000004D42EC "A(#"
 *   insn=0x00000000004D42B8 string=0x00000000004D42BC "B(#"
 *   insn=0x00000000004D42BC string=0x00000000004D42C0 "B@&"
 *   insn=0x00000000004D42C4 string=0x00000000004D42C8 "#"
 *   insn=0x00000000004D42C8 string=0x00000000004D42CC "a(!"
 *   insn=0x00000000004D42CC string=0x00000000004D42D0 "@ !"
 *   insn=0x00000000004D42D4 string=0x00000000004D42D8 "@( "
 *   insn=0x00000000004D42F0 string=0x00000000004D42F4 "!(""
 *   insn=0x00000000004D42F4 string=0x00000000004D42F8 "!@&"
 *   insn=0x00000000004D42FC string=0x00000000004D4300 """
 *   insn=0x00000000004D4300 string=0x00000000004D4304 "#"
 *   insn=0x00000000004D4304 string=0x00000000004D4308 "$( "
 *   insn=0x00000000004D4308 string=0x00000000004D430C "@(#"
 *   insn=0x00000000004D4318 string=0x00000000004D431C "m"
 *   insn=0x00000000004D4330 string=0x00000000004D4334 "W~"
 *   insn=0x00000000004D4334 string=0x00000000001F3C90 "P'"
 *   insn=0x00000000004D4340 string=0x00000000001FB170 "0'"
 *   insn=0x00000000004D4344 string=0x00000000004D4348 "aBG"
 *   insn=0x00000000004D4354 string=0x00000000004D4358 "`"
 *   insn=0x00000000004D435C string=0x00000000004D4360 "h"
 *   insn=0x00000000004D4360 string=0x00000000004D4364 "`"
 *   insn=0x00000000004D436C string=0x00000000004D4370 "@"
 *   insn=0x00000000004D4370 string=0x00000000004D4374 "`"
 *   insn=0x00000000004D4370 string=0x00000000001FC470 "0'"
 *   insn=0x00000000004D4374 string=0x00000000004D4378 "j"
 *   insn=0x00000000004D4378 string=0x00000000004D437C "av@"
 *   insn=0x00000000004D437C string=0x00000000004D4380 "h"
 *   insn=0x00000000004D4380 string=0x00000000004D4384 "_"
 *   insn=0x00000000004D438C string=0x00000000004D4390 "a"
 *   insn=0x00000000004D438C string=0x00000000004D446C "i"
 *   insn=0x00000000004D4390 string=0x00000000004D4394 "bz@"
 *   insn=0x00000000004D4394 string=0x00000000004D4398 "i"
 *   insn=0x00000000004D4398 string=0x00000000004D439C "_!"
 *   insn=0x00000000004D439C string=0x00000000004D43A0 "!8""
 *   insn=0x00000000004D43A4 string=0x00000000004D43A8 "_\t"
 *   insn=0x00000000004D43A4 string=0x00000000004D4404 "h"
 *   insn=0x00000000004D43A8 string=0x00000000004D43AC "!\t"
 *   insn=0x00000000004D43AC string=0x00000000004D43B0 "h"
 *   insn=0x00000000004D43AC string=0x00000000004D44D0 "i"
 *   insn=0x00000000004D43B0 string=0x00000000004D43B4 " "
 *   insn=0x00000000004D43CC string=0x00000000004D43D0 "B(#"
 *   insn=0x00000000004D43D0 string=0x00000000004D43D4 "b"
 *   insn=0x00000000004D43E0 string=0x00000000004D43E4 "A(!"
 *   insn=0x00000000004D43E8 string=0x00000000004D43EC "!L "
 *   insn=0x00000000004D43F0 string=0x00000000004D43F4 "B(#"
 *   insn=0x00000000004D43F8 string=0x00000000004D43FC "B(#"
 *   insn=0x00000000004D4400 string=0x00000000004D445C "  ""
 *   insn=0x00000000004D4404 string=0x00000000004D4408 "#"
 *   insn=0x00000000004D440C string=0x00000000004D4410 "c$"
 *   insn=0x00000000004D4418 string=0x00000000004D441C "a(!"
 *   insn=0x00000000004D442C string=0x00000000004D4430 "`"
 *   insn=0x00000000004D4438 string=0x00000000004D443C "("
 *   insn=0x00000000004D4450 string=0x00000000004D4454 "  #"
 *   insn=0x00000000004D4454 string=0x00000000004D4458 "aL!"
 *   insn=0x00000000004D445C string=0x00000000004D4460 "!L""
 *   insn=0x00000000004D4460 string=0x00000000004D4464 "a"
 *   insn=0x00000000004D4464 string=0x00000000004D4468 "1"
 *   insn=0x00000000004D4468 string=0x00000000004D452C "`""
 *   insn=0x00000000004D4474 string=0x00000000004D4478 "c$"
 *   insn=0x00000000004D4478 string=0x00000000004D447C "!"
 *   insn=0x00000000004D447C string=0x00000000004D4480 """
 *   insn=0x00000000004D4480 string=0x00000000004D4484 "`( "
 *   insn=0x00000000004D4488 string=0x00000000004D448C "!(""
 *   insn=0x00000000004D4490 string=0x00000000004D4494 "!(""
 *   insn=0x00000000004D4494 string=0x00000000004D4498 "a"
 *   insn=0x00000000004D4498 string=0x00000000004D449C "!"
 *   insn=0x00000000004D449C string=0x00000000004D44A0 ""%@"
 *   insn=0x00000000004D44A0 string=0x00000000004D44A4 "#(#"
 *   insn=0x00000000004D44A4 string=0x00000000004D44A8 "!(""
 *   insn=0x00000000004D44B0 string=0x00000000004D44B4 "!(""
 *   insn=0x00000000004D44B4 string=0x00000000004D44B8 "`L "
 *   insn=0x00000000004D44C0 string=0x00000000004D44C4 "`"
 *   insn=0x00000000004D44D8 string=0x00000000004D44DC "!#"
 *   insn=0x00000000004D44DC string=0x00000000004D44E0 """
 *   insn=0x00000000004D44E4 string=0x00000000004D44E8 " ( "
 *   insn=0x00000000004D44EC string=0x00000000004D44F0 "B(#"
 *   insn=0x00000000004D44F0 string=0x00000000004D44F4 "b"
 *   insn=0x00000000004D44F4 string=0x00000000004D44F8 """
 *   insn=0x00000000004D44F8 string=0x00000000004D44FC "#%@"
 *   insn=0x00000000004D4500 string=0x00000000004D4504 "A(!"
 *   insn=0x00000000004D4508 string=0x00000000004D450C "B(#"
 *   insn=0x00000000004D4510 string=0x00000000004D4514 "!L "
 *   insn=0x00000000004D4518 string=0x00000000004D451C "B(#"
 *   insn=0x00000000004D451C string=0x00000000004D4520 "  ""
 *   insn=0x00000000004D4520 string=0x00000000004D4524 "!L""
 *   insn=0x00000000004D4524 string=0x00000000004D4528 "a"
 *   insn=0x00000000004D453C string=0x00000000004D4550 "`"
 *   insn=0x00000000004D4550 string=0x00000000001F62D0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::GUIPopoverView::UpdateLayout(Caver::GUIPopoverView *this)
{
  __int64 v2; // x8
  float v3; // w8
  float v4; // w9
  int v5; // w10
  float v6; // s1
  float v7; // s0
  float *v8; // x11
  float v9; // s2
  float v10; // s2
  float v11; // s3
  float v12; // s1
  float v13; // s3
  float v14; // s4
  float v15; // s3
  bool v16; // cc
  float v17; // s3
  char v19; // w9
  float *v20; // x9
  float v21; // s0
  float v22; // s2
  float v23; // s3
  float v24; // s1
  float v25; // s3
  float v26; // s4
  float v27; // s3
  bool v28; // cc
  float v29; // s3
  int v31; // w8
  float v32; // s2
  float v33; // s3
  float *v34; // x9
  float v35; // s2
  float v36; // s1
  float v37; // s1
  float v38; // s4
  float v39; // s0
  __int64 result; // x0
  int v41; // w10
  float v42; // w8
  float v43; // s0
  float v44; // w9
  float v45; // s1
  float *v46; // x8
  float v47; // s0
  float v48; // s2
  float v49; // s1
  int v50; // s0
  float v51; // s2
  float *v52; // x8
  float v53; // s0
  float v54; // s3
  float *v55; // x9
  float v56; // s0
  float v57; // s1
  float v58; // s3
  float v59; // s1
  float *v60; // x9
  float v61; // s0
  float v62; // s2
  float v63; // s1
  bool v64; // nf
  float v65; // s2
  float v66; // s2
  __int64 v67[2]; // [xsp+8h] [xbp-38h] BYREF
  float32x2_t v68; // [xsp+18h] [xbp-28h] BYREF
  float v69; // [xsp+20h] [xbp-20h]
  float v70; // [xsp+24h] [xbp-1Ch]
  __int64 v71; // [xsp+28h] [xbp-18h]

  v71 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  v2 = *((_QWORD *)this + 32);
  *((_DWORD *)this + 69) = 0;
  v4 = *(float *)(v2 + 124);
  v3 = *(float *)(v2 + 128);
  v68.n64_u64[0] = 0;
  v69 = v4;
  v70 = v3;
  v5 = *((_DWORD *)this + 68);
  v6 = v4;
  v7 = v3;
  if ( (v5 & 2) != 0 )
  {
    v8 = (float *)*((_QWORD *)this + 11);
    v9 = *((float *)this + 59) + *((float *)this + 61);
    if ( (float)((float)(v8[33] + v8[35]) - v9) > v4 )
    {
      *((_DWORD *)this + 69) = 2;
      v68.n64_u32[0] = roundf(v9 + 15.0);
      v10 = roundf((float)(*((float *)this + 60) + (float)(*((float *)this + 62) * 0.5)) - (float)(v3 * 0.5));
      v68.n64_f32[1] = v10;
      v11 = v8[34];
      v12 = v11 + 10.0;
      v16 = (float)(v11 + 10.0) <= v10;
      v13 = v11 + v8[36];
      if ( v16 )
        v14 = v10;
      else
        v14 = v12;
      v15 = v13 + -10.0;
      v16 = (float)(v14 + v3) <= v15;
      v17 = v15 - v3;
      if ( v16 )
        v17 = v14;
      if ( !v16 || v12 > v10 )
        v10 = v17;
      if ( v17 < v12 )
      {
        v3 = (float)(v17 + v3) - v12;
        v10 = v12;
      }
      v68.n64_f32[1] = v10;
      v69 = v4;
LABEL_17:
      v70 = v3;
      goto LABEL_49;
    }
  }
  v19 = 1;
  if ( (v5 & 1) != 0 )
  {
    *((_DWORD *)this + 69) = 1;
    v19 = 0;
  }
  if ( (v5 & 4) != 0 )
  {
    if ( (v19 & 1) != 0
      || (float)((float)(*(float *)(*((_QWORD *)this + 11) + 136LL) + *(float *)(*((_QWORD *)this + 11) + 144LL))
               - (float)(*((float *)this + 60) + *((float *)this + 62))) > (float)(*((float *)this + 60)
                                                                                 - *(float *)(*((_QWORD *)this + 11)
                                                                                            + 136LL)) )
    {
      v31 = 4;
      *((_DWORD *)this + 69) = 4;
LABEL_42:
      v32 = *((float *)this + 60);
      v33 = *((float *)this + 62);
      v68.n64_u32[0] = roundf((float)(*((float *)this + 59) + (float)(*((float *)this + 61) * 0.5)) - (float)(v6 * 0.5));
      v34 = (float *)*((_QWORD *)this + 11);
      if ( v68.n64_f32[0] < (float)(v34[33] + 10.0) )
        v68.n64_f32[0] = v34[33] + 10.0;
      if ( v31 == 1 )
      {
        v35 = roundf((float)(v32 - v7) + -15.0);
        v68.n64_f32[1] = v35;
        v36 = v34[34] + 10.0;
        if ( v35 < v36 )
        {
          v70 = (float)(v35 + v7) - v36;
          v68.n64_f32[1] = v36;
        }
      }
      else
      {
        v37 = roundf((float)(v32 + v33) + 15.0);
        v68.n64_f32[1] = v37;
        v38 = v37 + v7;
        v39 = (float)(v34[34] + v34[36]) + -10.0;
        if ( v38 > v39 )
          v70 = v39 - v37;
      }
      goto LABEL_49;
    }
LABEL_41:
    v31 = 1;
    goto LABEL_42;
  }
  if ( (v19 & 1) == 0 )
    goto LABEL_41;
  if ( (v5 & 8) != 0 )
  {
    v20 = (float *)*((_QWORD *)this + 11);
    v21 = *((float *)this + 59);
    if ( (float)(v21 - v20[33]) > v6 )
    {
      *((_DWORD *)this + 69) = 8;
      v68.n64_u32[0] = roundf((float)(v21 - v6) + -15.0);
      v22 = roundf((float)(*((float *)this + 60) + (float)(*((float *)this + 62) * 0.5)) - (float)(v3 * 0.5));
      v68.n64_f32[1] = v22;
      v23 = v20[34];
      v24 = v23 + 10.0;
      v16 = (float)(v23 + 10.0) <= v22;
      v25 = v23 + v20[36];
      if ( v16 )
        v26 = v22;
      else
        v26 = v24;
      v27 = v25 + -10.0;
      v28 = (float)(v26 + v3) <= v27;
      v29 = v27 - v3;
      if ( v28 )
        v29 = v26;
      if ( !v28 || v24 > v22 )
        v22 = v29;
      if ( v29 < v24 )
      {
        v3 = (float)(v29 + v3) - v24;
        v22 = v24;
      }
      v68.n64_f32[1] = v22;
      goto LABEL_17;
    }
  }
LABEL_49:
  Caver::Rectangle::RectangleByOutsetting(v67, (Caver::Rectangle *)&v68, 10.0);
  Caver::GUIView::SetFrame(this, (const Caver::Rectangle *)v67);
  v68.n64_u64[0] = vsub_f32(v68, *(float32x2_t *)((char *)this + 116)).n64_u64[0];
  Caver::GUIView::SetFrame(*((Caver::GUIView **)this + 32), (const Caver::Rectangle *)&v68);
  result = Caver::GUIRoundedRect::CreateWithInnerBounds(
             *((Caver::GUIRoundedRect **)this + 37),
             (const Caver::Rectangle *)(*((_QWORD *)this + 32) + 116LL),
             5.0);
  v41 = *((_DWORD *)this + 69);
  v42 = *((float *)this + 61);
  v43 = *((float *)this + 59) - *((float *)this + 29);
  if ( v41 == 1 )
  {
    v55 = (float *)*((_QWORD *)this + 37);
    v56 = (float)(v42 * 0.5) + v43;
    *((float *)this + 71) = (float)(v55[4] + v55[6]) + -4.5;
    v57 = v55[7];
    v58 = v57 + 8.0;
    v59 = (float)(v57 + v55[9]) + -8.0;
    if ( v56 < v58 )
      v56 = v58;
    if ( v56 >= v59 )
      v56 = v59;
    *((float *)this + 70) = v56;
    v50 = 0;
  }
  else
  {
    v44 = *((float *)this + 62);
    v45 = *((float *)this + 60) - *((float *)this + 30);
    if ( v41 == 8 )
    {
      v52 = (float *)*((_QWORD *)this + 37);
      v49 = (float)(v44 * 0.5) + v45;
      *((float *)this + 70) = (float)(v52[3] + v52[5]) + -4.5;
      v53 = v52[8];
      v54 = v53 + 8.0;
      v51 = (float)(v53 + v52[10]) + -8.0;
      v50 = -1077342245;
      if ( v49 < v54 )
        v49 = v54;
      goto LABEL_57;
    }
    if ( v41 == 2 )
    {
      v46 = (float *)*((_QWORD *)this + 37);
      v47 = (float)(v44 * 0.5) + v45;
      *((float *)this + 70) = v46[3] + 4.5;
      v48 = v46[8];
      v49 = v48 + 8.0;
      if ( v47 >= (float)(v48 + 8.0) )
        v49 = v47;
      v50 = 1070141403;
      v51 = (float)(v48 + v46[10]) + -8.0;
LABEL_57:
      if ( v49 >= v51 )
        v49 = v51;
      *((float *)this + 71) = v49;
      goto LABEL_70;
    }
    v60 = (float *)*((_QWORD *)this + 37);
    v61 = (float)(v42 * 0.5) + v43;
    *((float *)this + 71) = v60[4] + 4.5;
    v62 = v60[7];
    v63 = v62 + 8.0;
    v64 = v61 < (float)(v62 + 8.0);
    v65 = v62 + v60[9];
    if ( !v64 )
      v63 = v61;
    v50 = 1078530011;
    v66 = v65 + -8.0;
    if ( v63 >= v66 )
      v63 = v66;
    *((float *)this + 70) = v63;
  }
LABEL_70:
  *((_DWORD *)this + 72) = v50;
  return result;
}

