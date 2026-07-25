/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004C7614
 * Mangled: _ZN5Caver6Sprite23AddTransformedRectangleERKNS_9RectangleES3_RKNS_7Matrix4ERKNS_5ColorE
 * Demangled: Caver::Sprite::AddTransformedRectangle(Caver::Rectangle const&,Caver::Rectangle const&,Caver::Matrix4 const&,Caver::Color const&)
 *
 * Callers: 1
 *   0x00000000001FEDB0  Caver::Sprite::AddTransformedRectangle(Caver::Rectangle const&,Caver::Rectangle const&,Caver::Matrix4 const&,Caver::Color const&)
 *
 * Callees: 6
 *   0x00000000001F4C90  Caver::Sprite::AddQuad(Caver::Vector2 const*,Caver::Vector2 const*,Caver::Color const*)
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F71D0  Caver::Vector3::Vector3(Caver::Vector4 const&)
 *   0x00000000001F9E30  Caver::Rectangle::ExpandToIncludePoint(Caver::Vector2 const&)
 *   0x0000000000202F90  C_Matrix4Vector4Mul(float const*,float const*,float *)
 *   0x0000000000202FD0  Caver::Vector2::Vector2(Caver::Vector3 const&)
 *
 * Referenced strings: 27
 *   insn=0x00000000004C762C string=0x00000000004C7630 "W"
 *   insn=0x00000000004C7638 string=0x00000000004C763C "hq@"
 *   insn=0x00000000004C7644 string=0x00000000004C7648 "($@)"
 *   insn=0x00000000004C7650 string=0x00000000004C7654 "u""
 *   insn=0x00000000004C7658 string=0x00000000004C765C " @"
 *   insn=0x00000000004C7664 string=0x00000000004C7668 """
 *   insn=0x00000000004C7670 string=0x00000000004C7674 "!"
 *   insn=0x00000000004C7680 string=0x00000000004C7684 " (""
 *   insn=0x00000000004C768C string=0x00000000004C7690 "H$@)"
 *   insn=0x00000000004C7698 string=0x00000000004C769C "@@"
 *   insn=0x00000000004C76A4 string=0x00000000004C76A8 """
 *   insn=0x00000000004C76B0 string=0x00000000004C76B4 "A"
 *   insn=0x00000000004C76C0 string=0x00000000004C76C4 " (""
 *   insn=0x00000000004C7734 string=0x00000000001F71D0 "0'"
 *   insn=0x00000000004C773C string=0x00000000004C7740 "$"
 *   insn=0x00000000004C7748 string=0x00000000004C774C "A5G"
 *   insn=0x00000000004C7748 string=0x0000000000583734 "o"
 *   insn=0x00000000004C7750 string=0x00000000004C7754 "`"
 *   insn=0x00000000004C775C string=0x00000000004C7760 "h&"
 *   insn=0x00000000004C7774 string=0x00000000001F9E30 "0'"
 *   insn=0x00000000004C77AC string=0x00000000004C77B0 ""
 *   insn=0x00000000004C77EC string=0x00000000004C77F0 "x"
 *   insn=0x00000000004C7838 string=0x00000000004C783C "e"
 *   insn=0x00000000004C7858 string=0x00000000004C785C "u"
 *   insn=0x00000000004C786C string=0x00000000004C7870 ""
 *   insn=0x00000000004C7870 string=0x00000000001F4C90 "P'"
 *   insn=0x00000000004C78A0 string=0x00000000001F62D0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Sprite::AddTransformedRectangle(
        Caver::Sprite *this,
        const Caver::Rectangle *a2,
        const Caver::Rectangle *a3,
        const Caver::Matrix4 *a4,
        const Caver::Color *a5)
{
  float v6; // w9
  float v8; // s0
  float v9; // s1
  float v10; // w9
  float v11; // s0
  float v12; // s1
  char v13; // w13
  int v14; // w9
  __int64 v16; // [xsp+0h] [xbp-D0h] BYREF
  __int64 v17; // [xsp+8h] [xbp-C8h]
  float v18[4]; // [xsp+10h] [xbp-C0h] BYREF
  _BYTE v19[16]; // [xsp+20h] [xbp-B0h] BYREF
  __int64 v20; // [xsp+30h] [xbp-A0h] BYREF
  __int16 v21; // [xsp+38h] [xbp-98h] BYREF
  char v22; // [xsp+3Ah] [xbp-96h]
  char v23; // [xsp+3Bh] [xbp-95h]
  __int16 v24; // [xsp+3Ch] [xbp-94h]
  char v25; // [xsp+3Eh] [xbp-92h]
  char v26; // [xsp+3Fh] [xbp-91h]
  __int16 v27; // [xsp+40h] [xbp-90h]
  char v28; // [xsp+42h] [xbp-8Eh]
  char v29; // [xsp+43h] [xbp-8Dh]
  __int16 v30; // [xsp+44h] [xbp-8Ch]
  char v31; // [xsp+46h] [xbp-8Ah]
  char v32; // [xsp+47h] [xbp-89h]
  float v33[8]; // [xsp+48h] [xbp-88h] BYREF
  __int64 v34; // [xsp+68h] [xbp-68h] BYREF
  __int64 v35; // [xsp+70h] [xbp-60h] BYREF
  __int64 v36; // [xsp+78h] [xbp-58h] BYREF
  _QWORD v37[2]; // [xsp+80h] [xbp-50h] BYREF

  v37[1] = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  v6 = *((float *)a2 + 1);
  LODWORD(v34) = *(_DWORD *)a2;
  *((float *)&v34 + 1) = v6;
  v8 = *((float *)a2 + 2);
  *((float *)&v35 + 1) = v6;
  *(float *)&v35 = v8 + *(float *)&v34;
  v9 = *((float *)a2 + 3);
  *(float *)&v36 = v8 + *(float *)&v34;
  LODWORD(v37[0]) = v34;
  *((float *)&v36 + 1) = v9 + v6;
  *((float *)v37 + 1) = v9 + v6;
  v10 = *((float *)a3 + 1);
  v33[0] = *(float *)a3;
  v33[1] = v10;
  v11 = *((float *)a3 + 2);
  v33[3] = v10;
  v33[2] = v11 + v33[0];
  v12 = *((float *)a3 + 3);
  v33[4] = v11 + v33[0];
  v33[6] = v33[0];
  v33[5] = v12 + v10;
  v33[7] = v12 + v10;
  v21 = *(_WORD *)a5;
  v22 = *((_BYTE *)a5 + 2);
  v13 = *((_BYTE *)a5 + 3);
  v16 = v34;
  v24 = v21;
  v23 = v13;
  v25 = v22;
  v26 = v13;
  v27 = v21;
  v28 = v22;
  v29 = v13;
  v30 = v21;
  v31 = v22;
  v32 = v13;
  v17 = 0x3F80000000000000LL;
  C_Matrix4Vector4Mul((const float *)a4, (const float *)&v16, v18);
  Caver::Vector3::Vector3((Caver::Vector3 *)v19, (const Caver::Vector4 *)v18);
  Caver::Vector2::Vector2((Caver::Vector2 *)&v20, (const Caver::Vector3 *)v19);
  v14 = HIDWORD(v20);
  v34 = v20;
  if ( *((float *)this + 4) >= 0.001 )
  {
    Caver::Rectangle::ExpandToIncludePoint((Caver::Sprite *)((char *)this + 8), (const Caver::Vector2 *)&v34);
  }
  else
  {
    *((_DWORD *)this + 2) = v20;
    *((_DWORD *)this + 3) = v14;
    *((_QWORD *)this + 2) = 0;
  }
  v16 = v35;
  v17 = 0x3F80000000000000LL;
  C_Matrix4Vector4Mul((const float *)a4, (const float *)&v16, v18);
  Caver::Vector3::Vector3((Caver::Vector3 *)v19, (const Caver::Vector4 *)v18);
  Caver::Vector2::Vector2((Caver::Vector2 *)&v20, (const Caver::Vector3 *)v19);
  v35 = v20;
  Caver::Rectangle::ExpandToIncludePoint((Caver::Sprite *)((char *)this + 8), (const Caver::Vector2 *)&v35);
  v16 = v36;
  v17 = 0x3F80000000000000LL;
  C_Matrix4Vector4Mul((const float *)a4, (const float *)&v16, v18);
  Caver::Vector3::Vector3((Caver::Vector3 *)v19, (const Caver::Vector4 *)v18);
  Caver::Vector2::Vector2((Caver::Vector2 *)&v20, (const Caver::Vector3 *)v19);
  v36 = v20;
  Caver::Rectangle::ExpandToIncludePoint((Caver::Sprite *)((char *)this + 8), (const Caver::Vector2 *)&v36);
  v16 = v37[0];
  v17 = 0x3F80000000000000LL;
  C_Matrix4Vector4Mul((const float *)a4, (const float *)&v16, v18);
  Caver::Vector3::Vector3((Caver::Vector3 *)v19, (const Caver::Vector4 *)v18);
  Caver::Vector2::Vector2((Caver::Vector2 *)&v20, (const Caver::Vector3 *)v19);
  v37[0] = v20;
  Caver::Rectangle::ExpandToIncludePoint((Caver::Sprite *)((char *)this + 8), (const Caver::Vector2 *)v37);
  return Caver::Sprite::AddQuad(
           this,
           (const Caver::Vector2 *)&v34,
           (const Caver::Vector2 *)v33,
           (const Caver::Color *)&v21);
}

