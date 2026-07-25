/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004A7914
 * Mangled: _ZN5Caver16GUIPropertyValue17InterpolatedValueERKS0_S2_f
 * Demangled: Caver::GUIPropertyValue::InterpolatedValue(Caver::GUIPropertyValue const&,Caver::GUIPropertyValue const&,float)
 *
 * Callers: 2
 *   0x00000000001FAAD0  Caver::GUIPropertyValue::InterpolatedValue(Caver::GUIPropertyValue const&,Caver::GUIPropertyValue const&,float)
 *   0x00000000004A77D8  Caver::GUIEffectView::~GUIEffectView()
 *
 * Callees: 6
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F8090  Caver::GUIPropertyValue::ValueWithFloat(float)
 *   0x00000000001F8910  Caver::GUIPropertyValue::ValueWithVector2(Caver::Vector2 const&)
 *   0x0000000000202FC0  Caver::GUIPropertyValue::ValueWithRectangle(Caver::Rectangle const&)
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 87
 *   insn=0x00000000004A7924 string=0x00000000004A7928 "U"
 *   insn=0x00000000004A793C string=0x00000000004A7940 ""
 *   insn=0x00000000004A7944 string=0x00000000004A7948 " \n"
 *   insn=0x00000000004A7948 string=0x00000000004A7A8C ""
 *   insn=0x00000000004A7950 string=0x00000000004A79F0 ""
 *   insn=0x00000000004A7958 string=0x00000000004A795C ""
 *   insn=0x00000000004A795C string=0x00000000004A7960 ")"
 *   insn=0x00000000004A7964 string=0x00000000004A7968 "c8 "
 *   insn=0x00000000004A796C string=0x00000000004A7970 """
 *   insn=0x00000000004A7970 string=0x00000000004A7974 "a!"
 *   insn=0x00000000004A7974 string=0x00000000004A7978 "@ "
 *   insn=0x00000000004A7978 string=0x00000000004A797C " ( "
 *   insn=0x00000000004A7988 string=0x00000000001F8090 "0'"
 *   insn=0x00000000004A7998 string=0x00000000004A799C "i"
 *   insn=0x00000000004A799C string=0x00000000004A79A0 ")"
 *   insn=0x00000000004A79A0 string=0x00000000004A79A4 "i"
 *   insn=0x00000000004A79AC string=0x00000000004A79B0 ""
 *   insn=0x00000000004A79B0 string=0x00000000004A79B4 "h"
 *   insn=0x00000000004A79B8 string=0x00000000004A79BC "h"
 *   insn=0x00000000004A79BC string=0x00000000004A79C0 "\t@"
 *   insn=0x00000000004A79C8 string=0x00000000004A79CC "h\n@"
 *   insn=0x00000000004A79CC string=0x00000000004A79D0 ""
 *   insn=0x00000000004A79D0 string=0x00000000004A79D4 "h\n"
 *   insn=0x00000000004A79D8 string=0x00000000004A79DC "h"
 *   insn=0x00000000004A79DC string=0x00000000004A79E0 "@"
 *   insn=0x00000000004A79E8 string=0x00000000004A79EC "S"
 *   insn=0x00000000004A79F0 string=0x00000000004A79F4 ")"
 *   insn=0x00000000004A79F8 string=0x00000000004A79FC "c8 "
 *   insn=0x00000000004A7A00 string=0x00000000004A7A04 """
 *   insn=0x00000000004A7A04 string=0x00000000004A7A08 "!"
 *   insn=0x00000000004A7A08 string=0x00000000004A7A0C "@"
 *   insn=0x00000000004A7A0C string=0x00000000004A7A10 " "
 *   insn=0x00000000004A7A24 string=0x00000000001F8910 "0'"
 *   insn=0x00000000004A7A34 string=0x00000000004A7A38 "i"
 *   insn=0x00000000004A7A38 string=0x00000000004A7A3C ")"
 *   insn=0x00000000004A7A3C string=0x00000000004A7A40 "i"
 *   insn=0x00000000004A7A48 string=0x00000000004A7A4C ""
 *   insn=0x00000000004A7A4C string=0x00000000004A7A50 "h"
 *   insn=0x00000000004A7A50 string=0x00000000004A7A54 "!"
 *   insn=0x00000000004A7A54 string=0x00000000004A7A58 "h"
 *   insn=0x00000000004A7A58 string=0x00000000004A7A5C "\t@"
 *   insn=0x00000000004A7A64 string=0x00000000004A7A68 "h\n@"
 *   insn=0x00000000004A7A68 string=0x00000000004A7A6C ""
 *   insn=0x00000000004A7A6C string=0x00000000004A7A70 "h\n"
 *   insn=0x00000000004A7A70 string=0x00000000004A7A74 "!"
 *   insn=0x00000000004A7A74 string=0x00000000004A7A78 "h"
 *   insn=0x00000000004A7A78 string=0x00000000004A7A7C "@"
 *   insn=0x00000000004A7A84 string=0x00000000004A7A88 ","
 *   insn=0x00000000004A7A8C string=0x00000000004A7A90 ")"
 *   insn=0x00000000004A7A94 string=0x00000000004A7A98 "!8 "
 *   insn=0x00000000004A7A9C string=0x00000000004A7AA0 "$"
 *   insn=0x00000000004A7AA0 string=0x00000000004A7AA4 "B"
 *   insn=0x00000000004A7AA4 string=0x00000000004A7AA8 "a"
 *   insn=0x00000000004A7AB0 string=0x00000000004A7AB4 "B"
 *   insn=0x00000000004A7AB4 string=0x00000000004A7AB8 " "
 *   insn=0x00000000004A7AC8 string=0x00000000004A7ACC "=m"
 *   insn=0x00000000004A7ADC string=0x00000000004A7AE0 "i"
 *   insn=0x00000000004A7AE0 string=0x00000000004A7AE4 ")"
 *   insn=0x00000000004A7AE4 string=0x00000000004A7AE8 "i"
 *   insn=0x00000000004A7AF0 string=0x00000000004A7AF4 ""
 *   insn=0x00000000004A7AF4 string=0x00000000004A7AF8 "h"
 *   insn=0x00000000004A7AFC string=0x00000000004A7B00 "h"
 *   insn=0x00000000004A7B00 string=0x00000000004A7B04 "\t@"
 *   insn=0x00000000004A7B0C string=0x00000000004A7B10 "h\n@"
 *   insn=0x00000000004A7B10 string=0x00000000004A7B14 ""
 *   insn=0x00000000004A7B14 string=0x00000000004A7B18 "h\n"
 *   insn=0x00000000004A7B1C string=0x00000000004A7B20 "h"
 *   insn=0x00000000004A7B20 string=0x00000000004A7B24 "@"
 *   insn=0x00000000004A7B5C string=0x00000000001F62D0 "0'"
 *   insn=0x00000000004A7B64 string=0x00000000004A7B80 "h"
 *   insn=0x00000000004A7B78 string=0x00000000004A7B7C "3"
 *   insn=0x00000000004A7B80 string=0x00000000004A7B84 ""
 *   insn=0x00000000004A7B84 string=0x00000000004A7B88 "h"
 *   insn=0x00000000004A7B8C string=0x00000000004A7B90 "h"
 *   insn=0x00000000004A7B90 string=0x00000000004A7B94 "\t@"
 *   insn=0x00000000004A7B9C string=0x00000000004A7BA0 "h\n@"
 *   insn=0x00000000004A7BA0 string=0x00000000004A7BA4 ""
 *   insn=0x00000000004A7BA4 string=0x00000000004A7BA8 "h\n"
 *   insn=0x00000000004A7BAC string=0x00000000004A7BB0 "h"
 *   insn=0x00000000004A7BB0 string=0x00000000004A7BB4 "@"
 *   insn=0x00000000004A7BC0 string=0x00000000004A7BC4 "@g"
 *   insn=0x00000000004A7BCC string=0x00000000004A7BD0 ""
 *   insn=0x00000000004A7BDC string=0x00000000004A7BE0 "a"
 *   insn=0x00000000004A7BE0 string=0x00000000004A7BE4 "|"
 *   insn=0x00000000004A7BE4 string=0x00000000004A7BE8 "?"
 *   insn=0x00000000004A7BF0 string=0x00000000004A7BF4 "\t "
 *   insn=0x00000000004A7BF8 string=0x00000000004A7BFC "4"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __usercall Caver::GUIPropertyValue::InterpolatedValue(
        Caver::GUIPropertyValue *this@<X0>,
        float **a2@<X1>,
        float a3@<S0>,
        __int64 a4@<X8>)
{
  int v6; // w8
  __int64 v7; // x8
  _QWORD *v8; // x19
  __int64 v9; // x9
  __int64 v10; // x8
  __int64 v11; // x9
  __int64 v12; // x8
  __int64 v13; // x9
  __int64 v14; // x8
  __int64 v15; // [xsp+10h] [xbp-40h] BYREF
  __int64 v16; // [xsp+18h] [xbp-38h]
  _QWORD *v17; // [xsp+20h] [xbp-30h]
  __int64 v18; // [xsp+28h] [xbp-28h]

  v18 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  *(_DWORD *)a4 = 0;
  *(_QWORD *)(a4 + 8) = 0;
  *(_QWORD *)(a4 + 16) = 0;
  v6 = *(_DWORD *)this;
  if ( *(_DWORD *)this == 3 )
  {
    Caver::GUIPropertyValue::ValueWithRectangle();
    v7 = v16;
    v8 = v17;
    *(_DWORD *)a4 = v15;
    if ( v8 )
    {
      v13 = v8[1] + 1LL;
      v8[1] = v13;
      *(_QWORD *)(a4 + 8) = v7;
      *(_QWORD *)(a4 + 16) = v8;
      v8[1] = v13 - 1;
      if ( v13 != 1 )
        return;
      (*(void (__fastcall **)(_QWORD *))(*v8 + 16LL))(v8);
      v14 = v8[2] - 1LL;
      v8[2] = v14;
      if ( v14 )
        return;
LABEL_11:
      (*(void (__fastcall **)(_QWORD *))(*v8 + 24LL))(v8);
      return;
    }
LABEL_16:
    *(_QWORD *)(a4 + 8) = v7;
    *(_QWORD *)(a4 + 16) = v8;
    return;
  }
  if ( v6 == 2 )
  {
    Caver::GUIPropertyValue::ValueWithVector2();
    v7 = v16;
    v8 = v17;
    *(_DWORD *)a4 = v15;
    if ( v8 )
    {
      v11 = v8[1] + 1LL;
      v8[1] = v11;
      *(_QWORD *)(a4 + 8) = v7;
      *(_QWORD *)(a4 + 16) = v8;
      v8[1] = v11 - 1;
      if ( v11 != 1 )
        return;
      (*(void (__fastcall **)(_QWORD *))(*v8 + 16LL))(v8);
      v12 = v8[2] - 1LL;
      v8[2] = v12;
      if ( v12 )
        return;
      goto LABEL_11;
    }
    goto LABEL_16;
  }
  if ( v6 != 1 )
    return;
  Caver::GUIPropertyValue::ValueWithFloat(
    &v15,
    this,
    (float)((float)(1.0 - a3) * **((float **)this + 1)) + (float)(*a2[1] * a3));
  v7 = v16;
  v8 = v17;
  *(_DWORD *)a4 = v15;
  if ( !v8 )
    goto LABEL_16;
  v9 = v8[1] + 1LL;
  v8[1] = v9;
  *(_QWORD *)(a4 + 8) = v7;
  *(_QWORD *)(a4 + 16) = v8;
  v8[1] = v9 - 1;
  if ( v9 == 1 )
  {
    (*(void (__fastcall **)(_QWORD *))(*v8 + 16LL))(v8);
    v10 = v8[2] - 1LL;
    v8[2] = v10;
    if ( !v10 )
      (*(void (__fastcall **)(_QWORD *))(*v8 + 24LL))(v8);
  }
}

