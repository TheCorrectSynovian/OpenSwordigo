/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004789F0
 * Mangled: Java_com_touchfoo_swordigo_Native_setApplicationViewSize
 * Demangled: Java_com_touchfoo_swordigo_Native_setApplicationViewSize
 *
 * Callers: 0
 *
 * Callees: 5
 *   0x00000000001FE130  Caver::SetCurrentDeviceType(Caver::DeviceType)
 *   0x00000000002005A0  Caver::CaverShell::UpdateViewSize(void)
 *   0x0000000000200FF0  Caver::OnlineController_Android::HandleGoogleSignInCompleted(bool)
 *   0x00000000002014E0  Caver::FWShellPreferences::Set(Caver::FWShellFloatPrefsEnum,float)
 *   0x0000000000202220  Caver::FWShellPreferences::Set(Caver::FWShellIntPrefsEnum,int)
 *
 * Referenced strings: 55
 *   insn=0x0000000000478A28 string=0x0000000000478A2C "j"
 *   insn=0x0000000000478A2C string=0x0000000000478A30 ""
 *   insn=0x0000000000478A30 string=0x0000000000478A34 ""
 *   insn=0x0000000000478A58 string=0x0000000000595FDC "9"
 *   insn=0x0000000000478A5C string=0x0000000000478A60 "H"
 *   insn=0x0000000000478A60 string=0x0000000000583734 "o"
 *   insn=0x0000000000478A64 string=0x0000000000478A68 "!"
 *   insn=0x0000000000478A70 string=0x0000000000478A74 "@"
 *   insn=0x0000000000478A74 string=0x0000000000478A78 "D"
 *   insn=0x0000000000478A7C string=0x0000000000478A80 "cX!"
 *   insn=0x0000000000478A80 string=0x0000000000478A84 "a(%"
 *   insn=0x0000000000478A8C string=0x0000000000478A90 "a"
 *   insn=0x0000000000478A94 string=0x0000000000478A98 ""
 *   insn=0x0000000000478A98 string=0x0000000000478A9C "a"
 *   insn=0x0000000000478A9C string=0x0000000000478AA0 "A"
 *   insn=0x0000000000478AAC string=0x0000000000478AB0 "a "
 *   insn=0x0000000000478AAC string=0x0000000000478ABC "H"
 *   insn=0x0000000000478AB0 string=0x0000000000478AB4 "!@%"
 *   insn=0x0000000000478AB4 string=0x0000000000478AB8 "$"
 *   insn=0x0000000000478ABC string=0x00000000005837A4 "o"
 *   insn=0x0000000000478AC0 string=0x0000000000478AC4 "e(%"
 *   insn=0x0000000000478AC8 string=0x0000000000478ACC "e"
 *   insn=0x0000000000478ACC string=0x0000000000478AD0 " "
 *   insn=0x0000000000478ADC string=0x0000000000478AE0 "%"
 *   insn=0x0000000000478AEC string=0x0000000000478AF0 "B"
 *   insn=0x0000000000478AF8 string=0x0000000000478AFC "B"
 *   insn=0x0000000000478AFC string=0x0000000000478B00 "$"
 *   insn=0x0000000000478B04 string=0x0000000000478B08 "9C2"
 *   insn=0x0000000000478B08 string=0x0000000000478B0C "B"
 *   insn=0x0000000000478B0C string=0x0000000000478B10 "!"
 *   insn=0x0000000000478B10 string=0x0000000000478B14 "B"
 *   insn=0x0000000000478B1C string=0x0000000000478B20 """
 *   insn=0x0000000000478B20 string=0x0000000000478B24 """
 *   insn=0x0000000000478B24 string=0x0000000000478B28 "#"
 *   insn=0x0000000000478B28 string=0x0000000000478B2C "@ $"
 *   insn=0x0000000000478B30 string=0x0000000000478B34 "`L "
 *   insn=0x0000000000478B38 string=0x0000000000478B3C " "
 *   insn=0x0000000000478B4C string=0x0000000000478B50 " "
 *   insn=0x0000000000478B70 string=0x0000000000478B74 " @"
 *   insn=0x0000000000478B90 string=0x0000000000478B94 " "
 *   insn=0x0000000000478BC0 string=0x0000000000478BC4 "G""
 *   insn=0x0000000000478BE4 string=0x0000000000478BE8 "`"
 *   insn=0x0000000000478C08 string=0x0000000000478C0C "\tF"
 *   insn=0x0000000000478C10 string=0x0000000000478C14 "\tY"
 *   insn=0x0000000000478C14 string=0x0000000000478C18 ""
 *   insn=0x0000000000478C20 string=0x0000000000478C3C ""
 *   insn=0x0000000000478C34 string=0x0000000000478C38 "Z"
 *   insn=0x0000000000478C3C string=0x0000000000478C40 ")@"
 *   insn=0x0000000000478C4C string=0x0000000000478C50 ""
 *   insn=0x0000000000478C50 string=0x0000000000478C54 "5@"
 *   insn=0x0000000000478C5C string=0x0000000000478C60 ""
 *   insn=0x0000000000478C7C string=0x0000000000478C80 ""
 *   insn=0x0000000000478C84 string=0x0000000000478C88 "a"
 *   insn=0x0000000000478C98 string=0x0000000000478C9C ""
 *   insn=0x0000000000478CAC string=0x0000000000478CB0 "@"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Java_com_touchfoo_swordigo_Native_setApplicationViewSize(
        __int64 a1,
        __int64 a2,
        signed int a3,
        signed int a4,
        __int64 a5,
        int a6,
        int a7)
{
  float32x2_t v11; // d2
  float v12; // s0
  float v13; // s4
  float v14; // s3
  float v15; // s1
  float32x2_t v16; // d5
  float v17; // s0

  if ( qword_6E9C20 && (a3 >= a4 || (byte_6E9C79 & 1) == 0) )
  {
    Caver::SetCurrentDeviceType();
    *(float *)&dword_6E9CA0 = (float)a6;
    v11.n64_u64[0] = vcvt_f32_s32((int32x2_t)__PAIR64__(a4, a3)).n64_u64[0];
    v12 = v11.n64_f32[1];
    v13 = v11.n64_f32[0] / v11.n64_f32[1];
    v14 = fminf(fmaxf(v11.n64_f32[0] / v11.n64_f32[1], 1.3333), 3.5556);
    *(float *)&dword_6E9CA4 = (float)a7;
    v15 = v11.n64_f32[0];
    qword_6E9C80 = 0;
    qword_6E9C88 = v11.n64_u64[0];
    if ( (float)(v11.n64_f32[0] / v11.n64_f32[1]) > (float)(v14 + 0.001) )
    {
      v15 = floorf(v14 * v11.n64_f32[1]);
      v13 = v15 / v11.n64_f32[1];
    }
    if ( v13 < (float)(v14 + -0.001) )
      v12 = floorf(v15 / v14);
    v16.n64_u64[0] = __PAIR64__(LODWORD(v12), LODWORD(v15));
    *(float *)&qword_6E9C98 = v15;
    *((float *)&qword_6E9C98 + 1) = v12;
    v17 = v12 / 320.0;
    qword_6E9C90 = vrnda_f32(
                     vsub_f32(
                       vadd_f32(vmul_f32(v11, (float32x2_t)0x3F0000003F000000LL), 0),
                       vmul_f32(v16, (float32x2_t)0x3F0000003F000000LL))).n64_i64[0];
    if ( (float)(v15 / v17) < 480.0 )
      v17 = v15 / 480.0;
    dword_6E9CA8 = LODWORD(v17);
    Caver::FWShellPreferences::Set();
    Caver::FWShellPreferences::Set();
    Caver::FWShellPreferences::Set();
    Caver::FWShellPreferences::Set();
    Caver::FWShellPreferences::Set();
    Caver::FWShellPreferences::Set();
    Caver::FWShellPreferences::Set();
    *(_DWORD *)(qword_6E9C10 + 88) = dword_6E9CA8;
    if ( (byte_6E9C79 & 1) != 0 )
    {
      Caver::CaverShell::UpdateViewSize((Caver::CaverShell *)qword_6E9C20);
    }
    else
    {
      (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_6E9C20 + 80LL))(qword_6E9C20);
      (*(void (__fastcall **)(__int64, float))(*(_QWORD *)qword_6E9C20 + 104LL))(qword_6E9C20, 0.0);
      byte_6E9C79 = 1;
      if ( byte_6E9C7C )
        Caver::OnlineController_Android::HandleGoogleSignInCompleted((Caver::OnlineController_Android *)qword_6E9C30, 1);
      if ( byte_6E9C7A == 1 )
        (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)qword_6E9C20 + 64LL))(qword_6E9C20, 1);
    }
  }
}

