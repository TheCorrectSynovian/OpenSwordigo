/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004A9208
 * Mangled: _ZN5Caver17GUIAnimatedSprite6UpdateEf
 * Demangled: Caver::GUIAnimatedSprite::Update(float)
 *
 * Callers: 1
 *   0x00000000001FDE70  Caver::GUIAnimatedSprite::Update(float)
 *
 * Callees: 10
 *   0x00000000001F55E0  operator new(ulong)
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000001F9470  Caver::Rectangle::Translate(Caver::Vector2 const&)
 *   0x00000000001F9630  Caver::GUIAnimation::Update(float)
 *   0x00000000001FDD00  Caver::Rectangle::Scale(Caver::Vector2 const&)
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x000000000052A9AC  sub_52A9AC
 *   0x000000000052A9C8  sub_52A9C8
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 131
 *   insn=0x00000000004A9224 string=0x00000000004A9228 "W"
 *   insn=0x00000000004A9230 string=0x00000000004A9234 ""
 *   insn=0x00000000004A9238 string=0x00000000004A923C "h"
 *   insn=0x00000000004A923C string=0x00000000004A9240 "h"
 *   insn=0x00000000004A925C string=0x00000000004A9354 "h"
 *   insn=0x00000000004A9268 string=0x00000000004A9278 "PA9h"
 *   insn=0x00000000004A926C string=0x00000000004A9270 ""
 *   insn=0x00000000004A9278 string=0x00000000004A927C "h"
 *   insn=0x00000000004A927C string=0x00000000004A9280 ""
 *   insn=0x00000000004A9294 string=0x00000000004A9298 "6"
 *   insn=0x00000000004A929C string=0x00000000004A92A0 ""
 *   insn=0x00000000004A92AC string=0x00000000004A92B0 "\t@"
 *   insn=0x00000000004A92BC string=0x00000000004A92C0 ""
 *   insn=0x00000000004A92CC string=0x00000000004A92D0 "@"
 *   insn=0x00000000004A92E0 string=0x00000000001F72B0 "0'"
 *   insn=0x00000000004A92E4 string=0x00000000004A92F4 "y"
 *   insn=0x00000000004A92F0 string=0x00000000001F9630 "0'"
 *   insn=0x00000000004A9300 string=0x00000000004A9304 ""
 *   insn=0x00000000004A9308 string=0x00000000004A930C "!"
 *   insn=0x00000000004A9314 string=0x00000000004A9318 "\t@"
 *   insn=0x00000000004A9320 string=0x00000000004A9324 ""
 *   insn=0x00000000004A9334 string=0x00000000004A9338 ""
 *   insn=0x00000000004A9340 string=0x00000000004A9344 "@"
 *   insn=0x00000000004A9358 string=0x00000000004A935C "v"
 *   insn=0x00000000004A935C string=0x00000000004A9360 "`"
 *   insn=0x00000000004A9360 string=0x00000000004A9364 "h"
 *   insn=0x00000000004A9368 string=0x00000000004A936C "`B"
 *   insn=0x00000000004A936C string=0x00000000004A9370 "hF"
 *   insn=0x00000000004A9374 string=0x00000000004A9378 "t"
 *   insn=0x00000000004A9380 string=0x00000000004A9384 ""
 *   insn=0x00000000004A9390 string=0x00000000004A9394 "q"
 *   insn=0x00000000004A9394 string=0x00000000004A9558 "_"
 *   insn=0x00000000004A9398 string=0x00000000004A939C "U"
 *   insn=0x00000000004A939C string=0x00000000004A93A0 ","
 *   insn=0x00000000004A93A0 string=0x00000000004A9450 "\t!@)"
 *   insn=0x00000000004A93A4 string=0x00000000004A93A8 "u"
 *   insn=0x00000000004A93AC string=0x00000000004A95E8 "\t"
 *   insn=0x00000000004A93B0 string=0x00000000004A93B4 "\t1@"
 *   insn=0x00000000004A93B4 string=0x00000000004A93B8 "?"
 *   insn=0x00000000004A93B8 string=0x00000000004A93BC "!\t"
 *   insn=0x00000000004A93C4 string=0x00000000004A9414 "\t"
 *   insn=0x00000000004A93CC string=0x00000000004A9428 "_"
 *   insn=0x00000000004A93DC string=0x00000000004A93E0 "\t@"
 *   insn=0x00000000004A93E8 string=0x00000000004A93EC ""
 *   insn=0x00000000004A93FC string=0x00000000004A9400 "@"
 *   insn=0x00000000004A9404 string=0x00000000004A9408 "_"
 *   insn=0x00000000004A9408 string=0x00000000004A940C " "
 *   insn=0x00000000004A940C string=0x00000000004A9410 "4"
 *   insn=0x00000000004A9420 string=0x00000000004A9424 "u"
 *   insn=0x00000000004A9430 string=0x00000000004A9434 "\t"
 *   insn=0x00000000004A9438 string=0x00000000004A943C ""
 *   insn=0x00000000004A9438 string=0x00000000004A95B4 "\t"
 *   insn=0x00000000004A9444 string=0x00000000004A9448 ")"
 *   insn=0x00000000004A9454 string=0x00000000004A9458 "5"
 *   insn=0x00000000004A9458 string=0x00000000004A949C "`"
 *   insn=0x00000000004A945C string=0x00000000004A9460 ""
 *   insn=0x00000000004A9470 string=0x00000000004A9474 "\t@"
 *   insn=0x00000000004A947C string=0x00000000004A9480 ""
 *   insn=0x00000000004A9490 string=0x00000000004A9494 "@"
 *   insn=0x00000000004A949C string=0x00000000004A94A0 "aBC"
 *   insn=0x00000000004A94AC string=0x00000000004A94B0 " "
 *   insn=0x00000000004A94C0 string=0x00000000001F9470 "0'"
 *   insn=0x00000000004A94C8 string=0x00000000004A94CC "R"
 *   insn=0x00000000004A94CC string=0x00000000001FDD00 "0'"
 *   insn=0x00000000004A94D8 string=0x00000000004A94DC "`"
 *   insn=0x00000000004A94E0 string=0x00000000004A94E4 "\t1@"
 *   insn=0x00000000004A94E4 string=0x00000000004A94E8 "?\t"
 *   insn=0x00000000004A94F4 string=0x00000000004A9544 "\t"
 *   insn=0x00000000004A950C string=0x00000000004A9510 "\t@"
 *   insn=0x00000000004A9518 string=0x00000000004A951C ""
 *   insn=0x00000000004A952C string=0x00000000004A9530 "@"
 *   insn=0x00000000004A9534 string=0x00000000004A9538 "_"
 *   insn=0x00000000004A9538 string=0x00000000004A953C " "
 *   insn=0x00000000004A953C string=0x00000000004A9540 "G"
 *   insn=0x00000000004A9544 string=0x00000000004A9548 "\t"
 *   insn=0x00000000004A9550 string=0x00000000004A9554 "u"
 *   insn=0x00000000004A9560 string=0x00000000004A9564 "\t"
 *   insn=0x00000000004A9568 string=0x00000000004A956C ""
 *   insn=0x00000000004A9568 string=0x00000000004A95D8 "\t"
 *   insn=0x00000000004A9574 string=0x00000000004A9578 "\t"
 *   insn=0x00000000004A957C string=0x00000000004A95EC "`"
 *   insn=0x00000000004A9584 string=0x00000000004A9588 "\t@"
 *   insn=0x00000000004A9590 string=0x00000000004A9594 ""
 *   insn=0x00000000004A95A4 string=0x00000000004A95A8 "@"
 *   insn=0x00000000004A95B4 string=0x00000000004A95B8 "\t"
 *   insn=0x00000000004A95B8 string=0x00000000004A95BC "UI"
 *   insn=0x00000000004A95B8 string=0x00000000004A9398 ""
 *   insn=0x00000000004A95BC string=0x00000000004A95C0 "5"
 *   insn=0x00000000004A95D8 string=0x00000000004A95DC "I"
 *   insn=0x00000000004A95DC string=0x00000000004A95E0 "UI"
 *   insn=0x00000000004A95DC string=0x00000000004A93A4 ""
 *   insn=0x00000000004A95EC string=0x00000000004A95F0 "a"
 *   insn=0x00000000004A95F0 string=0x00000000004A95F4 "b"
 *   insn=0x00000000004A95F4 string=0x00000000004A95F8 "c"
 *   insn=0x00000000004A95FC string=0x00000000004A9600 "!"
 *   insn=0x00000000004A9600 string=0x00000000004A9604 " \t "
 *   insn=0x00000000004A9604 string=0x00000000004A9608 "B"
 *   insn=0x00000000004A9608 string=0x00000000004A960C "!\t!"
 *   insn=0x00000000004A960C string=0x00000000004A9610 ""
 *   insn=0x00000000004A9610 string=0x00000000004A9614 "c"
 *   insn=0x00000000004A9614 string=0x00000000004A9618 ""\t""
 *   insn=0x00000000004A9618 string=0x00000000004A961C ")"
 *   insn=0x00000000004A9620 string=0x00000000004A9624 "#\t#"
 *   insn=0x00000000004A9624 string=0x00000000004A9628 "J"
 *   insn=0x00000000004A9628 string=0x00000000004A962C ""
 *   insn=0x00000000004A962C string=0x00000000004A9630 "?"
 *   insn=0x00000000004A9630 string=0x00000000004A9634 "k"
 *   insn=0x00000000004A9634 string=0x00000000004A9638 ")"
 *   insn=0x00000000004A9638 string=0x00000000004A963C "_"
 *   insn=0x00000000004A963C string=0x00000000004A9640 "J"
 *   insn=0x00000000004A9644 string=0x00000000004A9648 "("
 *   insn=0x00000000004A9648 string=0x00000000004A964C "i"
 *   insn=0x00000000004A964C string=0x00000000004A9650 "H"
 *   insn=0x00000000004A9650 string=0x00000000004A9654 "("
 *   insn=0x00000000004A9654 string=0x00000000004A9658 "hF"
 *   insn=0x00000000004A9660 string=0x00000000004A9664 "a"
 *   insn=0x00000000004A9670 string=0x00000000004A9674 "!"
 *   insn=0x00000000004A9698 string=0x00000000001F62D0 "0'"
 *   insn=0x00000000004A969C string=0x00000000004A96A0 "4"
 *   insn=0x00000000004A96A4 string=0x00000000004A96A8 ""
 *   insn=0x00000000004A96B4 string=0x00000000004A96B8 "\t@"
 *   insn=0x00000000004A96C4 string=0x00000000004A96C8 ""
 *   insn=0x00000000004A96D4 string=0x00000000004A96D8 "@"
 *   insn=0x00000000004A96E4 string=0x00000000004A96E8 "w`"
 *   insn=0x00000000004A9708 string=0x00000000001F55E0 "P'"
 *   insn=0x00000000004A970C string=0x00000000004A9710 ""
 *   insn=0x00000000004A9714 string=0x00000000004A9718 ""
 *   insn=0x00000000004A971C string=0x00000000004A9720 "\t"
 *   insn=0x00000000004A9720 string=0x00000000004A9724 ")"
 *   insn=0x00000000004A9724 string=0x00000000004A9728 "\t"
 *   insn=0x00000000004A9738 string=0x000000000052A9AC """
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::GUIAnimatedSprite::Update(
        Caver::GUIAnimatedSprite *this,
        float a2,
        float a3,
        float a4,
        float a5)
{
  char **v7; // x21
  char *v8; // x24
  Caver::GUIAnimation *v9; // x0
  char *v10; // x20
  char *v11; // x26
  char *v12; // x22
  __int64 v13; // x8
  __int64 v14; // x8
  __int64 v15; // x8
  __int64 v16; // x8
  char *v17; // x22
  __int128 v18; // q0
  int v19; // w8
  _QWORD *v20; // x21
  int v21; // w26
  int *v22; // x8
  _QWORD *v23; // x21
  __int64 v24; // t2
  float *v25; // x8
  _QWORD *v26; // x21
  __int64 v27; // t2
  __int64 v28; // x8
  int v29; // w26
  _QWORD *v30; // x21
  __int64 v31; // x8
  __int64 v32; // x8
  __int64 v33; // t2
  int v34; // w8
  int v35; // w9
  __int64 v36; // x8
  __int64 v37; // x8
  __int64 v38; // x8
  __int64 v39; // x8
  __int64 v40; // x8
  __int64 v41; // t2
  float v42; // s9
  __int64 v43; // x8
  __int64 v44; // t2
  __int64 v45; // t2
  int v46; // w8
  int v47; // w9
  int v48; // w10
  unsigned __int16 v49; // w8
  unsigned __int8 v50; // w9
  unsigned __int64 v51; // [xsp+20h] [xbp-70h] BYREF
  float32x2_t v52; // [xsp+28h] [xbp-68h] BYREF
  _DWORD v53[2]; // [xsp+30h] [xbp-60h] BYREF
  __int64 v54; // [xsp+38h] [xbp-58h]

  v54 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  if ( *((_BYTE *)this + 48) )
    *((_BYTE *)this + 48) = 0;
  else
    *((_BYTE *)this + 49) = 0;
  v8 = (char *)this + 32;
  v7 = (char **)*((_QWORD *)this + 4);
  if ( v7 != (char **)((char *)this + 32) )
  {
    while ( 1 )
    {
      v9 = (Caver::GUIAnimation *)v7[2];
      v10 = v7[3];
      if ( v10 )
        ++*((_QWORD *)v10 + 1);
      if ( *((_BYTE *)v9 + 84) )
      {
        v11 = *v7;
        if ( !*((_BYTE *)v9 + 184) )
          goto LABEL_16;
        sub_52A9C8(v7);
        v12 = v7[3];
        if ( v12 )
        {
          v13 = *((_QWORD *)v12 + 1) - 1LL;
          *((_QWORD *)v12 + 1) = v13;
          if ( !v13 )
          {
            (*(void (__fastcall **)(char *))(*(_QWORD *)v12 + 16LL))(v12);
            v14 = *((_QWORD *)v12 + 2) - 1LL;
            *((_QWORD *)v12 + 2) = v14;
            if ( !v14 )
              (*(void (__fastcall **)(char *))(*(_QWORD *)v12 + 24LL))(v12);
          }
        }
        operator delete(v7);
      }
      else
      {
        v11 = *v7;
        Caver::GUIAnimation::Update(v9, a2);
      }
      *((_BYTE *)this + 49) = 1;
LABEL_16:
      v7 = (char **)v11;
      if ( !v10
        || (v15 = *((_QWORD *)v10 + 1) - 1LL, (*((_QWORD *)v10 + 1) = v15) != 0)
        || ((*(void (__fastcall **)(char *))(*(_QWORD *)v10 + 16LL))(v10),
            v16 = *((_QWORD *)v10 + 2) - 1LL,
            (*((_QWORD *)v10 + 2) = v16) != 0) )
      {
        if ( v8 == v11 )
          break;
      }
      else
      {
        (*(void (__fastcall **)(char *))(*(_QWORD *)v10 + 24LL))(v10);
        if ( v8 == v11 )
          break;
      }
    }
  }
  if ( *((_BYTE *)this + 49) )
  {
    v17 = (char *)*((_QWORD *)this + 4);
    v18 = *(_OWORD *)((char *)this + 8);
    v19 = *((_DWORD *)this + 6);
    *(_OWORD *)((char *)this + 52) = v18;
    *((_DWORD *)this + 17) = v19;
    while ( v8 != v17 )
    {
      v28 = *((_QWORD *)v17 + 2);
      if ( *(_DWORD *)(v28 + 48) != 1 )
        goto LABEL_49;
      v29 = *(_DWORD *)(v28 + 160);
      if ( v29 )
      {
        v30 = *(_QWORD **)(v28 + 176);
        if ( !v30 )
          goto LABEL_40;
      }
      else if ( *(_BYTE *)(v28 + 100) )
      {
        v30 = *(_QWORD **)(v28 + 152);
        v29 = *(_DWORD *)(v28 + 136);
        if ( !v30 )
          goto LABEL_40;
      }
      else
      {
        v30 = *(_QWORD **)(v28 + 128);
        v29 = *(_DWORD *)(v28 + 112);
        if ( !v30 )
          goto LABEL_40;
      }
      if ( !v30[1] )
      {
        (*(void (__fastcall **)(_QWORD *))(*v30 + 16LL))(v30);
        v31 = v30[2] - 1LL;
        v30[2] = v31;
        if ( !v31 )
        {
          (*(void (__fastcall **)(_QWORD *))(*v30 + 24LL))(v30);
          if ( v29 == 2 )
            goto LABEL_41;
          goto LABEL_49;
        }
      }
LABEL_40:
      if ( v29 == 2 )
      {
LABEL_41:
        v32 = *((_QWORD *)v17 + 2);
        if ( *(_DWORD *)(v32 + 160) )
        {
          v33 = v32 + 168;
          v22 = *(int **)(v32 + 168);
          v23 = *(_QWORD **)(v33 + 8);
          if ( v23 )
            goto LABEL_43;
        }
        else if ( *(_BYTE *)(v32 + 100) )
        {
          v44 = v32 + 144;
          v22 = *(int **)(v32 + 144);
          v23 = *(_QWORD **)(v44 + 8);
          if ( v23 )
LABEL_43:
            ++v23[1];
        }
        else
        {
          v24 = v32 + 120;
          v22 = *(int **)(v32 + 120);
          v23 = *(_QWORD **)(v24 + 8);
          if ( v23 )
            goto LABEL_43;
        }
        v35 = *v22;
        v34 = v22[1];
        v53[0] = v35;
        v53[1] = v34;
        if ( v23 )
        {
          v36 = v23[1] - 1LL;
          v23[1] = v36;
          if ( !v36 )
          {
            (*(void (__fastcall **)(_QWORD *))(*v23 + 16LL))(v23);
            v37 = v23[2] - 1LL;
            v23[2] = v37;
            if ( !v37 )
              (*(void (__fastcall **)(_QWORD *))(*v23 + 24LL))(v23);
          }
        }
        v52.n64_u64[0] = vadd_f32(
                           *(float32x2_t *)((char *)this + 52),
                           vmul_f32(*(float32x2_t *)((char *)this + 60), (float32x2_t)0x3F0000003F000000LL)).n64_u64[0];
        v51 = vneg_f32(v52).n64_u64[0];
        Caver::Rectangle::Translate((Caver::GUIAnimatedSprite *)((char *)this + 52), (const Caver::Vector2 *)&v51);
        Caver::Rectangle::Scale((Caver::GUIAnimatedSprite *)((char *)this + 52), (const Caver::Vector2 *)v53);
        Caver::Rectangle::Translate((Caver::GUIAnimatedSprite *)((char *)this + 52), (const Caver::Vector2 *)&v52);
        goto LABEL_82;
      }
LABEL_49:
      v38 = *((_QWORD *)v17 + 2);
      if ( *(_DWORD *)(v38 + 48) != 2 )
        goto LABEL_82;
      v21 = *(_DWORD *)(v38 + 160);
      if ( v21 )
      {
        v20 = *(_QWORD **)(v38 + 176);
        if ( !v20 )
          goto LABEL_58;
      }
      else if ( *(_BYTE *)(v38 + 100) )
      {
        v20 = *(_QWORD **)(v38 + 152);
        v21 = *(_DWORD *)(v38 + 136);
        if ( !v20 )
          goto LABEL_58;
      }
      else
      {
        v20 = *(_QWORD **)(v38 + 128);
        v21 = *(_DWORD *)(v38 + 112);
        if ( !v20 )
          goto LABEL_58;
      }
      if ( !v20[1] )
      {
        (*(void (__fastcall **)(_QWORD *))(*v20 + 16LL))(v20);
        v39 = v20[2] - 1LL;
        v20[2] = v39;
        if ( !v39 )
        {
          (*(void (__fastcall **)(_QWORD *))(*v20 + 24LL))(v20);
          if ( v21 == 1 )
            goto LABEL_59;
          goto LABEL_82;
        }
      }
LABEL_58:
      if ( v21 == 1 )
      {
LABEL_59:
        v40 = *((_QWORD *)v17 + 2);
        if ( *(_DWORD *)(v40 + 160) )
        {
          v41 = v40 + 168;
          v25 = *(float **)(v40 + 168);
          v26 = *(_QWORD **)(v41 + 8);
          if ( v26 )
            goto LABEL_61;
LABEL_71:
          v42 = *v25;
        }
        else
        {
          if ( !*(_BYTE *)(v40 + 100) )
          {
            v27 = v40 + 120;
            v25 = *(float **)(v40 + 120);
            v26 = *(_QWORD **)(v27 + 8);
            if ( v26 )
              goto LABEL_61;
            goto LABEL_71;
          }
          v45 = v40 + 144;
          v25 = *(float **)(v40 + 144);
          v26 = *(_QWORD **)(v45 + 8);
          if ( !v26 )
            goto LABEL_71;
LABEL_61:
          v42 = *v25;
          if ( !v26[1] )
          {
            (*(void (__fastcall **)(_QWORD *))(*v26 + 16LL))(v26);
            v43 = v26[2] - 1LL;
            v26[2] = v43;
            if ( !v43 )
              (*(void (__fastcall **)(_QWORD *))(*v26 + 24LL))(v26);
          }
        }
        LOBYTE(v18) = *((_BYTE *)this + 68);
        LOBYTE(a3) = *((_BYTE *)this + 69);
        LOBYTE(a4) = *((_BYTE *)this + 70);
        LOBYTE(a5) = *((_BYTE *)this + 71);
        *(float *)&v18 = v42 * (float)(unsigned int)v18;
        a3 = v42 * (float)LODWORD(a3);
        v46 = (int)*(float *)&v18;
        a4 = v42 * (float)LODWORD(a4);
        v47 = (int)a3;
        a5 = v42 * (float)LODWORD(a5);
        v48 = (int)a4;
        if ( (int)*(float *)&v18 >= 255 )
          LOBYTE(v46) = -1;
        if ( v47 >= 255 )
          LOBYTE(v47) = -1;
        if ( v48 >= 255 )
          LOBYTE(v48) = -1;
        v49 = (unsigned __int8)v46 | ((unsigned __int8)v47 << 8);
        if ( (int)a5 >= 255 )
          v50 = -1;
        else
          v50 = (int)a5;
        *((_DWORD *)this + 17) = v49 | ((unsigned __int8)v48 << 16) & 0xFFFFFF | (v50 << 24);
      }
LABEL_82:
      v17 = *(char **)v17;
    }
  }
}

