/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000478CE8
 * Mangled: Java_com_touchfoo_swordigo_Native_drawApplication
 * Demangled: Java_com_touchfoo_swordigo_Native_drawApplication
 *
 * Callers: 0
 *
 * Callees: 6
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F6EC0  Caver::RenderingContext::SetViewport(Caver::Rectangle const&)
 *   0x00000000001FBDC0  Caver::RenderingContext::SetProjectionMatrix(Caver::Matrix4 const&)
 *   0x0000000000200F10  Caver::Matrix4::Ortho(float,float,float,float,float,float)
 *   0x0000000000202770  Caver::RenderingContext::SetDepthTestEnabled(bool)
 *   0x0000000000203620  Caver::RenderingContext::FillRect(Caver::Rectangle const&,Caver::Color const&,float)
 *
 * Referenced strings: 24
 *   insn=0x0000000000478D00 string=0x0000000000478D04 "V"
 *   insn=0x0000000000478D14 string=0x0000000000478D18 "("
 *   insn=0x0000000000478D2C string=0x0000000000478D30 "d"
 *   insn=0x0000000000478D30 string=0x00000000001F6EC0 "0'"
 *   insn=0x0000000000478D38 string=0x0000000000478D3C ""
 *   insn=0x0000000000478D3C string=0x0000000000478D40 "9@"
 *   insn=0x0000000000478D54 string=0x0000000000478D58 "Z"
 *   insn=0x0000000000478D6C string=0x0000000000478D70 "a(!"
 *   insn=0x0000000000478D78 string=0x0000000000478D7C "e "
 *   insn=0x0000000000478D88 string=0x00000000001FBDC0 "0'"
 *   insn=0x0000000000478D90 string=0x0000000000478D94 "w&"
 *   insn=0x0000000000478D94 string=0x0000000000478D98 "`"
 *   insn=0x0000000000478D98 string=0x0000000000478D9C ""
 *   insn=0x0000000000478DAC string=0x0000000000478DDC "b\n@"
 *   insn=0x0000000000478DE0 string=0x0000000000478DE4 "\t"
 *   insn=0x0000000000478DE8 string=0x0000000000478DEC ""()"
 *   insn=0x0000000000478DF4 string=0x0000000000478E24 "`"
 *   insn=0x0000000000478DFC string=0x0000000000478E00 "!8 "
 *   insn=0x0000000000478E28 string=0x0000000000478E2C "m"
 *   insn=0x0000000000478E2C string=0x0000000000478E58 "b"
 *   insn=0x0000000000478E50 string=0x0000000000478E54 "`"
 *   insn=0x0000000000478E60 string=0x0000000000478E64 ""()"
 *   insn=0x0000000000478E74 string=0x0000000000478E78 "!8 "
 *   insn=0x0000000000478EC8 string=0x00000000001F62D0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void Java_com_touchfoo_swordigo_Native_drawApplication()
{
  Caver::Matrix4 *v0; // x0
  Caver::RenderingContext *v1; // x21
  float v2; // s0
  float v3; // s0
  float v4; // s0
  float v5; // s0
  int v6; // [xsp+0h] [xbp-90h] BYREF
  __int64 v7; // [xsp+8h] [xbp-88h] BYREF
  float v8; // [xsp+10h] [xbp-80h]
  float v9; // [xsp+14h] [xbp-7Ch]
  __int64 v10; // [xsp+48h] [xbp-48h]

  v10 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  if ( qword_6E9C20 )
  {
    Caver::RenderingContext::SetViewport(
      (Caver::RenderingContext *)qword_6E9C10,
      (const Caver::Rectangle *)&qword_6E9C90);
    (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)qword_6E9C20 + 112LL))(qword_6E9C20, qword_6E9C10);
    v0 = (Caver::Matrix4 *)Caver::RenderingContext::SetViewport(
                             (Caver::RenderingContext *)qword_6E9C10,
                             (const Caver::Rectangle *)&qword_6E9C80);
    v1 = (Caver::RenderingContext *)qword_6E9C10;
    Caver::Matrix4::Ortho(
      &v7,
      v0,
      *(float *)&qword_6E9C80,
      *((float *)&qword_6E9C80 + 1) + *((float *)&qword_6E9C88 + 1),
      *(float *)&qword_6E9C80 + *(float *)&qword_6E9C88,
      *((float *)&qword_6E9C80 + 1),
      -1.0,
      1.0);
    Caver::RenderingContext::SetProjectionMatrix(v1, (const Caver::Matrix4 *)&v7);
    Caver::RenderingContext::SetDepthTestEnabled((Caver::RenderingContext *)qword_6E9C10, 0);
    v2 = *(float *)&qword_6E9C90;
    v6 = -16777216;
    if ( *(float *)&qword_6E9C90 > 0.5 )
    {
      v8 = *(float *)&qword_6E9C90;
      v7 = 0;
      v9 = *((float *)&qword_6E9C88 + 1);
      Caver::RenderingContext::FillRect(
        (Caver::RenderingContext *)qword_6E9C10,
        (const Caver::Rectangle *)&v7,
        (const Caver::Color *)&v6,
        0.0);
      v2 = *(float *)&qword_6E9C90;
    }
    v3 = v2 + *(float *)&qword_6E9C98;
    if ( v3 < (float)(*(float *)&qword_6E9C88 + -0.5) )
    {
      v7 = LODWORD(v3);
      v8 = *(float *)&qword_6E9C88 - v3;
      v9 = *((float *)&qword_6E9C88 + 1);
      Caver::RenderingContext::FillRect(
        (Caver::RenderingContext *)qword_6E9C10,
        (const Caver::Rectangle *)&v7,
        (const Caver::Color *)&v6,
        0.0);
    }
    v4 = *((float *)&qword_6E9C90 + 1);
    if ( *((float *)&qword_6E9C90 + 1) > 0.5 )
    {
      v9 = *((float *)&qword_6E9C90 + 1);
      v7 = 0;
      v8 = *(float *)&qword_6E9C88;
      Caver::RenderingContext::FillRect(
        (Caver::RenderingContext *)qword_6E9C10,
        (const Caver::Rectangle *)&v7,
        (const Caver::Color *)&v6,
        0.0);
      v4 = *((float *)&qword_6E9C90 + 1);
    }
    v5 = v4 + *((float *)&qword_6E9C98 + 1);
    if ( v5 < (float)(*((float *)&qword_6E9C88 + 1) + -0.5) )
    {
      *((float *)&v7 + 1) = v5;
      LODWORD(v7) = 0;
      v8 = *(float *)&qword_6E9C88;
      v9 = *((float *)&qword_6E9C88 + 1) - v5;
      Caver::RenderingContext::FillRect(
        (Caver::RenderingContext *)qword_6E9C10,
        (const Caver::Rectangle *)&v7,
        (const Caver::Color *)&v6,
        0.0);
    }
  }
}

