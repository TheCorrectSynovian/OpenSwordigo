/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004C78A4
 * Mangled: _ZN5Caver6Sprite20AddGradientRectangleERKNS_9RectangleES3_RKN5boost10shared_ptrINS_13GradientColorEEE
 * Demangled: Caver::Sprite::AddGradientRectangle(Caver::Rectangle const&,Caver::Rectangle const&,boost::shared_ptr<Caver::GradientColor> const&)
 *
 * Callers: 1
 *   0x00000000001F60F0  Caver::Sprite::AddGradientRectangle(Caver::Rectangle const&,Caver::Rectangle const&,boost::shared_ptr<Caver::GradientColor> const&)
 *
 * Callees: 3
 *   0x00000000001F4C90  Caver::Sprite::AddQuad(Caver::Vector2 const*,Caver::Vector2 const*,Caver::Color const*)
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F6E00  Caver::Rectangle::ExpandToincludeRectangle(Caver::Rectangle const&)
 *
 * Referenced strings: 42
 *   insn=0x00000000004C78BC string=0x00000000004C78C0 "X"
 *   insn=0x00000000004C78C0 string=0x00000000004C78C4 ""
 *   insn=0x00000000004C78CC string=0x00000000004C78D0 "!5G"
 *   insn=0x00000000004C78CC string=0x0000000000583734 "o"
 *   insn=0x00000000004C78FC string=0x00000000004C7908 "h"
 *   insn=0x00000000004C7900 string=0x00000000004C7904 "?"
 *   insn=0x00000000004C7904 string=0x00000000001F6E00 "0'"
 *   insn=0x00000000004C7908 string=0x00000000004C790C "\t"
 *   insn=0x00000000004C790C string=0x00000000004C7910 "?\t"
 *   insn=0x00000000004C7920 string=0x00000000004C7924 "\t"
 *   insn=0x00000000004C7930 string=0x00000000004C7934 ")"
 *   insn=0x00000000004C793C string=0x00000000004C7940 "0E@-"
 *   insn=0x00000000004C7944 string=0x00000000004C7948 ""
 *   insn=0x00000000004C7948 string=0x00000000004C794C "!('"
 *   insn=0x00000000004C794C string=0x00000000004C7950 "g"
 *   insn=0x00000000004C7958 string=0x00000000004C795C "\n""
 *   insn=0x00000000004C795C string=0x00000000004C7960 ""\n""
 *   insn=0x00000000004C796C string=0x00000000004C7970 "0\n%"
 *   insn=0x00000000004C7970 string=0x00000000004C7974 "e(%"
 *   insn=0x00000000004C7974 string=0x00000000004C7978 "I"
 *   insn=0x00000000004C797C string=0x00000000004C7980 "*"
 *   insn=0x00000000004C7980 string=0x00000000004C7984 ","
 *   insn=0x00000000004C7984 string=0x00000000004C7988 "-\t@9.@9/"
 *   insn=0x00000000004C7988 string=0x00000000004C798C ".@9/"
 *   insn=0x00000000004C798C string=0x00000000004C7990 "/"
 *   insn=0x00000000004C7990 string=0x00000000004C7994 "0"
 *   insn=0x00000000004C7994 string=0x00000000004C7998 "1"
 *   insn=0x00000000004C7998 string=0x00000000004C799C ")"
 *   insn=0x00000000004C79B4 string=0x00000000004C79B8 "a(&"
 *   insn=0x00000000004C79BC string=0x00000000004C79C0 "!8%"
 *   insn=0x00000000004C79C0 string=0x00000000004C79C4 "@( "
 *   insn=0x00000000004C79D8 string=0x00000000004C79DC "Z"
 *   insn=0x00000000004C7A48 string=0x00000000004C7A4C "h"
 *   insn=0x00000000004C7A48 string=0x00000000001F4C90 "P'"
 *   insn=0x00000000004C7A50 string=0x00000000004C7A54 "9"
 *   insn=0x00000000004C7A54 string=0x00000000004C7A58 "\t"
 *   insn=0x00000000004C7A58 string=0x00000000004C7A5C ")"
 *   insn=0x00000000004C7A5C string=0x00000000004C7A60 "_"
 *   insn=0x00000000004C7A60 string=0x00000000004C7A64 ""
 *   insn=0x00000000004C7A68 string=0x00000000004C7A70 ""
 *   insn=0x00000000004C7A78 string=0x00000000004C7A7C "!"
 *   insn=0x00000000004C7AA0 string=0x00000000001F62D0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Sprite::AddGradientRectangle(Caver::Sprite *this, Caver::Rectangle *a2, float *a3, int **a4)
{
  float v5; // s0
  Caver::Rectangle *v9; // x0
  int *v10; // x8
  __int64 v11; // x25
  __int64 v12; // x26
  unsigned int v13; // w23
  __int64 v14; // x9
  __int64 v15; // x10
  int v16; // w8
  float v17; // s0
  float v18; // w11
  float *v19; // x9
  float v20; // s2
  float v21; // s3
  float v22; // s17
  float v23; // s5
  float v24; // s1
  float v25; // s4
  float v26; // s7
  float v27; // s6
  float v28; // s16
  float v29; // s5
  _BYTE *v30; // x9
  char v31; // w12
  char v32; // w13
  char v33; // w14
  char v34; // w15
  char v35; // w16
  char v36; // w17
  _BYTE v38[16]; // [xsp+8h] [xbp-98h] BYREF
  float v39; // [xsp+18h] [xbp-88h] BYREF
  float v40; // [xsp+1Ch] [xbp-84h]
  float v41; // [xsp+20h] [xbp-80h]
  float v42; // [xsp+24h] [xbp-7Ch]
  float v43; // [xsp+28h] [xbp-78h]
  float v44; // [xsp+2Ch] [xbp-74h]
  float v45; // [xsp+30h] [xbp-70h]
  float v46; // [xsp+34h] [xbp-6Ch]
  int v47; // [xsp+38h] [xbp-68h] BYREF
  float v48; // [xsp+3Ch] [xbp-64h]
  float v49; // [xsp+40h] [xbp-60h]
  float v50; // [xsp+44h] [xbp-5Ch]
  float v51; // [xsp+48h] [xbp-58h]
  float v52; // [xsp+4Ch] [xbp-54h]
  int v53; // [xsp+50h] [xbp-50h]
  float v54; // [xsp+54h] [xbp-4Ch]
  __int64 v55; // [xsp+58h] [xbp-48h]

  v55 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  v5 = *((float *)this + 4);
  v9 = (Caver::Sprite *)((char *)this + 8);
  if ( v5 >= 0.001 )
    Caver::Rectangle::ExpandToincludeRectangle(v9, a2);
  else
    *(_OWORD *)v9 = *(_OWORD *)a2;
  v10 = *a4;
  if ( **a4 < 2 )
  {
    return 0;
  }
  else
  {
    v11 = 0;
    v12 = 0;
    v13 = 0;
    do
    {
      v14 = *((_QWORD *)v10 + 1);
      v15 = *((_QWORD *)v10 + 2);
      v16 = *(_DWORD *)a2;
      v17 = *((float *)a2 + 1);
      v18 = *a3;
      v19 = (float *)(v14 + v11);
      v20 = *((float *)a2 + 3);
      v21 = a3[1];
      v22 = v19[1];
      v23 = a3[3];
      v24 = *((float *)a2 + 2) + *(float *)a2;
      v25 = a3[2] + *a3;
      v26 = (float)(v17 + v20) - (float)(*v19 * v20);
      v27 = *v19 * v23;
      v28 = v22 * v23;
      v29 = v21 + v23;
      v30 = (_BYTE *)(v15 + v11);
      LOBYTE(v15) = *(_BYTE *)(v15 + v11);
      v31 = v30[1];
      v32 = v30[2];
      v33 = v30[3];
      v34 = v30[4];
      v35 = v30[5];
      v36 = v30[6];
      LOBYTE(v30) = v30[7];
      v48 = (float)(v17 + v20) - (float)(v22 * v20);
      v49 = v24;
      v50 = v48;
      v51 = v24;
      ++v12;
      v47 = v16;
      v39 = v18;
      v38[0] = v34;
      v38[1] = v35;
      v38[2] = v36;
      v38[3] = (_BYTE)v30;
      v38[4] = v34;
      v38[5] = v35;
      v38[6] = v36;
      v38[7] = (_BYTE)v30;
      v38[8] = v15;
      v38[9] = v31;
      v38[10] = v32;
      v38[11] = v33;
      v38[12] = v15;
      v38[13] = v31;
      v38[14] = v32;
      v40 = v29 - v28;
      v41 = v25;
      v42 = v29 - v28;
      v43 = v25;
      v52 = v48 + (float)((float)(v17 + (float)(v26 - v17)) - v48);
      v53 = v16;
      v54 = v52;
      v44 = v40 + (float)((float)(v21 + (float)((float)(v29 - v27) - v21)) - v40);
      v45 = v18;
      v46 = v44;
      v38[15] = v33;
      Caver::Sprite::AddQuad(
        this,
        (const Caver::Vector2 *)&v47,
        (const Caver::Vector2 *)&v39,
        (const Caver::Color *)v38);
      v10 = *a4;
      v13 += 2;
      v11 += 4;
    }
    while ( v12 < **a4 - 1LL );
  }
  return v13;
}

