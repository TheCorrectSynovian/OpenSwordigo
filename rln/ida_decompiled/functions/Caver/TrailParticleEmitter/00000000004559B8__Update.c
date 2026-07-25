/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004559B8
 * Mangled: _ZN5Caver20TrailParticleEmitter6UpdateEf
 * Demangled: Caver::TrailParticleEmitter::Update(float)
 *
 * Callers: 0
 *
 * Callees: 12
 *   0x00000000001F4F60  operator delete[](void *)
 *   0x00000000001F5730  Caver::Vector2::FromAngle(float)
 *   0x00000000001F5D50  Caver::VaryingColor::RandomColor(void)
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000001FB550  Caver::ParticleSystem::AddParticle(Caver::Particle const&)
 *   0x00000000001FCE30  Caver::fastrandom(void)
 *   0x0000000000200F90  Caver::Color::FromFloatColor(Caver::FloatColor const&)
 *   0x0000000000202350  Caver::ParticleEmitter::ConvertLocalParticleToWorld(Caver::Particle *)
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x0000000000456084  Caver::TrailParticleEmitter::type(void)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 170
 *   insn=0x00000000004559E4 string=0x00000000004559E8 "h\t"
 *   insn=0x00000000004559E8 string=0x00000000004559EC "\t"
 *   insn=0x00000000004559EC string=0x00000000004559F0 "V"
 *   insn=0x00000000004559FC string=0x0000000000455A00 " ! "
 *   insn=0x0000000000455A08 string=0x0000000000455A0C "hf@"
 *   insn=0x0000000000455A0C string=0x0000000000455A10 "h"
 *   insn=0x0000000000455A10 string=0x0000000000455A14 ""
 *   insn=0x0000000000455A10 string=0x0000000000455A1C "h"
 *   insn=0x0000000000455A14 string=0x0000000000455A18 ""
 *   insn=0x0000000000455A18 string=0x0000000000455A34 "`"
 *   insn=0x0000000000455A24 string=0x0000000000455A28 ""
 *   insn=0x0000000000455A2C string=0x0000000000455A30 ""
 *   insn=0x0000000000455A3C string=0x0000000000455A40 "`"
 *   insn=0x0000000000455A44 string=0x0000000000455A48 "h\t"
 *   insn=0x0000000000455A50 string=0x0000000000455A54 "y"
 *   insn=0x0000000000455A54 string=0x0000000000455A58 "9"
 *   insn=0x0000000000455A5C string=0x0000000000455A60 "!"
 *   insn=0x0000000000455A60 string=0x0000000000455A64 "i\t"
 *   insn=0x0000000000455A64 string=0x0000000000455A68 "h\t"
 *   insn=0x0000000000455A70 string=0x0000000000455A74 "!"
 *   insn=0x0000000000455A74 string=0x0000000000455A78 "h\t"
 *   insn=0x0000000000455A78 string=0x0000000000455A7C "\t\n"
 *   insn=0x0000000000455A7C string=0x0000000000455A80 "xt"
 *   insn=0x0000000000455A88 string=0x0000000000455A8C "h\t"
 *   insn=0x0000000000455A8C string=0x0000000000455A90 "t"
 *   insn=0x0000000000455A98 string=0x0000000000455A9C "!qG"
 *   insn=0x0000000000455A9C string=0x0000000000455AA0 "i\t"
 *   insn=0x0000000000455AB0 string=0x0000000000455AB4 "h\t"
 *   insn=0x0000000000455AB8 string=0x0000000000455ABC "!"
 *   insn=0x0000000000455ABC string=0x0000000000455AC0 "\t\n"
 *   insn=0x0000000000455AC0 string=0x0000000000455AC4 "/uG"
 *   insn=0x0000000000455AD0 string=0x0000000000455AD4 "{"
 *   insn=0x0000000000455AD8 string=0x0000000000455ADC "`"
 *   insn=0x0000000000455AE0 string=0x0000000000455AF0 "hf@"
 *   insn=0x0000000000455AE4 string=0x0000000000455AE8 ""
 *   insn=0x0000000000455AF4 string=0x0000000000455B08 "h"
 *   insn=0x0000000000455AF8 string=0x0000000000455AFC "`"
 *   insn=0x0000000000455AFC string=0x0000000000455B00 "5"
 *   insn=0x0000000000455B04 string=0x0000000000455B54 "hf@"
 *   insn=0x0000000000455B08 string=0x0000000000455B0C ""
 *   insn=0x0000000000455B18 string=0x0000000000455B1C "`"
 *   insn=0x0000000000455B24 string=0x0000000000455B28 ""
 *   insn=0x0000000000455B2C string=0x0000000000455B30 "!"
 *   insn=0x0000000000455B38 string=0x0000000000455B3C "\t@"
 *   insn=0x0000000000455B44 string=0x0000000000455B48 ""
 *   insn=0x0000000000455B54 string=0x0000000000455B58 "("
 *   insn=0x0000000000455B58 string=0x0000000000455B5C "\t"
 *   insn=0x0000000000455B58 string=0x0000000000455B7C "h"
 *   insn=0x0000000000455B68 string=0x0000000000455B6C "@"
 *   insn=0x0000000000455B70 string=0x0000000000455B74 "hf@"
 *   insn=0x0000000000455B74 string=0x0000000000455B78 "("
 *   insn=0x0000000000455B84 string=0x0000000000455B88 ""
 *   insn=0x0000000000455B8C string=0x0000000000455B90 "hf@"
 *   insn=0x0000000000455B90 string=0x0000000000455B94 "\t"
 *   insn=0x0000000000455B94 string=0x0000000000455B98 "h"
 *   insn=0x0000000000455B98 string=0x0000000000455B9C "\n\t@"
 *   insn=0x0000000000455B98 string=0x0000000000455BA4 "h"
 *   insn=0x0000000000455B9C string=0x0000000000455BA0 "\t"
 *   insn=0x0000000000455BAC string=0x0000000000455BB0 ""
 *   insn=0x0000000000455BB4 string=0x0000000000455BB8 "hf@"
 *   insn=0x0000000000455BB8 string=0x0000000000455BBC "\n"
 *   insn=0x0000000000455BC0 string=0x0000000000455EB8 "h"
 *   insn=0x0000000000455BC4 string=0x0000000000455BC8 ""
 *   insn=0x0000000000455BE4 string=0x0000000000455BE8 "h&B"
 *   insn=0x0000000000455BF0 string=0x0000000000455C20 "h"
 *   insn=0x0000000000455BF4 string=0x0000000000455BF8 "h&B"
 *   insn=0x0000000000455BF4 string=0x00000000001FCE30 "0'"
 *   insn=0x0000000000455BF8 string=0x0000000000455BFC "\n|@"
 *   insn=0x0000000000455BFC string=0x0000000000455C00 ")"
 *   insn=0x0000000000455C00 string=0x0000000000455C04 ")"
 *   insn=0x0000000000455C04 string=0x0000000000455C08 "K\t"
 *   insn=0x0000000000455C08 string=0x0000000000455C0C "i"
 *   insn=0x0000000000455C0C string=0x0000000000455C10 "yi"
 *   insn=0x0000000000455C14 string=0x0000000000455C18 "h"
 *   insn=0x0000000000455C18 string=0x0000000000455C64 "s"
 *   insn=0x0000000000455C20 string=0x0000000000455C24 "\t"
 *   insn=0x0000000000455C24 string=0x0000000000455C28 ""
 *   insn=0x0000000000455C28 string=0x0000000000455C2C ""
 *   insn=0x0000000000455C2C string=0x0000000000455C30 "}"
 *   insn=0x0000000000455C38 string=0x0000000000455C3C "}"
 *   insn=0x0000000000455C38 string=0x0000000000455EF4 ""
 *   insn=0x0000000000455C3C string=0x0000000000455C40 "h"
 *   insn=0x0000000000455C40 string=0x0000000000455C44 "\t"
 *   insn=0x0000000000455C44 string=0x0000000000455C48 ""
 *   insn=0x0000000000455C48 string=0x0000000000455C4C ""
 *   insn=0x0000000000455C4C string=0x0000000000455C50 "}"
 *   insn=0x0000000000455C50 string=0x0000000000455C54 "\t"
 *   insn=0x0000000000455C54 string=0x0000000000455C58 "("
 *   insn=0x0000000000455C64 string=0x0000000000455C68 " "
 *   insn=0x0000000000455C70 string=0x0000000000455C74 " "
 *   insn=0x0000000000455C7C string=0x0000000000455C80 "@b"
 *   insn=0x0000000000455C80 string=0x0000000000455C84 "k"
 *   insn=0x0000000000455C84 string=0x0000000000455C88 " "
 *   insn=0x0000000000455C94 string=0x0000000000455C98 " "
 *   insn=0x0000000000455CB4 string=0x00000000001F5730 "P'"
 *   insn=0x0000000000455CC8 string=0x0000000000455CCC "##"
 *   insn=0x0000000000455CD8 string=0x0000000000455CDC "!"
 *   insn=0x0000000000455CF8 string=0x00000000001F5D50 "P'"
 *   insn=0x0000000000455D0C string=0x0000000000455D10 "H"
 *   insn=0x0000000000455D10 string=0x0000000000455D14 " "
 *   insn=0x0000000000455D1C string=0x0000000000455D20 " "
 *   insn=0x0000000000455D30 string=0x0000000000455D34 "?"
 *   insn=0x0000000000455D34 string=0x0000000000455D38 " "
 *   insn=0x0000000000455D44 string=0x0000000000455D48 " "
 *   insn=0x0000000000455D60 string=0x0000000000455D64 "3"
 *   insn=0x0000000000455D64 string=0x0000000000455D68 " "
 *   insn=0x0000000000455D78 string=0x0000000000455D7C " "
 *   insn=0x0000000000455D90 string=0x0000000000455D94 " \t "
 *   insn=0x0000000000455D9C string=0x0000000000455DA0 "`\t "
 *   insn=0x0000000000455DA4 string=0x0000000000455DA8 "j"
 *   insn=0x0000000000455DA8 string=0x0000000000455DAC "k*@"
 *   insn=0x0000000000455DAC string=0x0000000000455DB0 "hf@"
 *   insn=0x0000000000455DB0 string=0x0000000000455DB4 "jZ@"
 *   insn=0x0000000000455DB8 string=0x0000000000455DCC "h"
 *   insn=0x0000000000455DBC string=0x0000000000455DC0 "I"
 *   insn=0x0000000000455DC0 string=0x0000000000455DC4 "l"
 *   insn=0x0000000000455DC4 string=0x0000000000455DC8 ""
 *   insn=0x0000000000455DD4 string=0x0000000000455DD8 ""
 *   insn=0x0000000000455DDC string=0x0000000000455DE0 "l*@"
 *   insn=0x0000000000455DE0 string=0x0000000000455DE4 "iZ@"
 *   insn=0x0000000000455DE8 string=0x0000000000455DEC "b"
 *   insn=0x0000000000455DEC string=0x0000000000455DF0 "@\t "
 *   insn=0x0000000000455DF0 string=0x0000000000455DF4 "A"
 *   insn=0x0000000000455E04 string=0x0000000000455E08 "\n"
 *   insn=0x0000000000455E08 string=0x0000000000455E0C " "
 *   insn=0x0000000000455E18 string=0x0000000000455E1C " "
 *   insn=0x0000000000455E2C string=0x0000000000455E30 "!"
 *   insn=0x0000000000455E38 string=0x0000000000455E3C " \t "
 *   insn=0x0000000000455E44 string=0x0000000000455E48 "`"
 *   insn=0x0000000000455E50 string=0x0000000000455E54 ""
 *   insn=0x0000000000455E60 string=0x0000000000455E64 "5"
 *   insn=0x0000000000455E60 string=0x00000000001FB550 "0'"
 *   insn=0x0000000000455E64 string=0x0000000000455EA8 "`"
 *   insn=0x0000000000455E68 string=0x0000000000455E6C ""
 *   insn=0x0000000000455E7C string=0x0000000000455E80 "\t@"
 *   insn=0x0000000000455E88 string=0x0000000000455E8C ""
 *   insn=0x0000000000455E9C string=0x0000000000455EA0 "@"
 *   insn=0x0000000000455EAC string=0x0000000000455EB0 ","
 *   insn=0x0000000000455EC0 string=0x0000000000455EC4 ""
 *   insn=0x0000000000455EC8 string=0x0000000000455ECC "hf@"
 *   insn=0x0000000000455ED4 string=0x0000000000455ED8 "h"
 *   insn=0x0000000000455EE0 string=0x0000000000455EE4 ""
 *   insn=0x0000000000455EE8 string=0x0000000000455EEC ""
 *   insn=0x0000000000455EEC string=0x0000000000455EF0 "7"
 *   insn=0x0000000000455F3C string=0x00000000001F62D0 "0'"
 *   insn=0x0000000000455F48 string=0x0000000000455F4C ""
 *   insn=0x0000000000455F58 string=0x0000000000455F5C "\t@"
 *   insn=0x0000000000455F68 string=0x0000000000455F6C ""
 *   insn=0x0000000000455F78 string=0x0000000000455F7C "@"
 *   insn=0x0000000000455F8C string=0x0000000000455F90 "5"
 *   insn=0x0000000000455F94 string=0x0000000000455F98 ""
 *   insn=0x0000000000455FA4 string=0x0000000000455FA8 "\t@"
 *   insn=0x0000000000455FB4 string=0x0000000000455FB8 ""
 *   insn=0x0000000000455FC4 string=0x0000000000455FC8 "@"
 *   insn=0x0000000000455FD4 string=0x0000000000455FD8 ";"
 *   insn=0x0000000000455FF0 string=0x0000000000455FF4 "`f@"
 *   insn=0x0000000000455FF4 string=0x0000000000455FF8 ""
 *   insn=0x0000000000455FF8 string=0x0000000000455FFC "A"
 *   insn=0x0000000000455FFC string=0x0000000000456000 "h"
 *   insn=0x0000000000456000 string=0x0000000000456004 "@"
 *   insn=0x0000000000456004 string=0x000000000045600C "`"
 *   insn=0x0000000000456008 string=0x00000000001F4F60 "P'"
 *   insn=0x000000000045600C string=0x0000000000456010 "@"
 *   insn=0x0000000000456010 string=0x0000000000456018 "t\n@"
 *   insn=0x0000000000456014 string=0x00000000001F72B0 "0'"
 *   insn=0x0000000000456018 string=0x000000000045601C "4"
 *   insn=0x0000000000456020 string=0x0000000000456024 ""
 *   insn=0x0000000000456030 string=0x0000000000456034 "\t@"
 *   insn=0x0000000000456040 string=0x0000000000456044 ""
 *   insn=0x0000000000456050 string=0x0000000000456054 "@"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::TrailParticleEmitter::Update(float **this, float a2)
{
  Caver::TrailParticleEmitter *v3; // x19
  float *v4; // x8
  float v5; // s8
  float v6; // s0
  _QWORD *v7; // x21
  __int64 v8; // x27
  __int64 v9; // x8
  __int64 v10; // x8
  __int64 v11; // x8
  __int64 v12; // x8
  float v13; // s9
  int v14; // s10
  long double v15; // q0
  long double v16; // q0
  float v17; // s12
  float v18; // s11
  Caver *v19; // x0
  Caver *v20; // x0
  float v21; // s13
  Caver::Vector2 *v22; // x0
  float v23; // s12
  Caver *v24; // x0
  Caver *v25; // x0
  float v26; // s0
  Caver *v27; // x0
  float v28; // s0
  int v29; // w0
  Caver *v30; // x0
  float32x2_t v31; // d11
  __int64 v32; // x8
  float v33; // s10
  float v34; // s0
  float v35; // s9
  float32x2_t v36; // d12
  float v37; // s0
  _QWORD *v38; // x21
  __int64 v39; // x8
  __int64 v40; // x8
  long double v41; // q0
  float32x2_t v42[2]; // [xsp+68h] [xbp-F8h] BYREF
  int v43; // [xsp+7Ch] [xbp-E4h]
  __int128 v44; // [xsp+80h] [xbp-E0h]
  float32x2_t v45; // [xsp+90h] [xbp-D0h]
  unsigned __int64 v46; // [xsp+98h] [xbp-C8h]
  __int128 v47; // [xsp+A0h] [xbp-C0h]
  __int128 v48; // [xsp+B0h] [xbp-B0h]
  int v49; // [xsp+C0h] [xbp-A0h]
  __int64 v50; // [xsp+C8h] [xbp-98h]

  v3 = (Caver::TrailParticleEmitter *)this;
  v50 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  if ( a2 >= 0.0001 )
  {
    v4 = this[25];
    if ( v4 )
      v5 = *v4;
    else
      LODWORD(v5) = COERCE_UNSIGNED_INT128(((long double (__fastcall *)(float **, _QWORD))*((_QWORD *)*this + 4))(this, 0));
    v6 = *((float *)v3 + 54) + a2;
    for ( *((float *)v3 + 54) = v6; v6 > v5; v6 = *((float *)v3 + 54) )
    {
      v8 = *((_QWORD *)v3 + 1);
      v7 = (_QWORD *)*((_QWORD *)v3 + 2);
      *((float *)v3 + 54) = v6 - v5;
      if ( v7 )
        ++v7[1];
      v9 = *((_QWORD *)v3 + 25);
      if ( v9 )
      {
        *(_DWORD *)(v8 + 164) = *(_DWORD *)(v9 + 24);
        if ( !v7 )
          goto LABEL_14;
      }
      else
      {
        *(float *)(v8 + 164) = (*(float (__fastcall **)(Caver::TrailParticleEmitter *, __int64))(*(_QWORD *)v3 + 32LL))(
                                 v3,
                                 6);
        if ( !v7 )
          goto LABEL_14;
      }
      v10 = v7[1] - 1LL;
      v7[1] = v10;
      if ( v10
        || (this = (float **)(*(__int64 (__fastcall **)(_QWORD *))(*v7 + 16LL))(v7),
            v11 = v7[2] - 1LL,
            (v7[2] = v11) != 0) )
      {
LABEL_14:
        v12 = *((_QWORD *)v3 + 25);
        if ( v12 )
          goto LABEL_15;
        goto LABEL_17;
      }
      this = (float **)(*(__int64 (__fastcall **)(_QWORD *))(*v7 + 24LL))(v7);
      v12 = *((_QWORD *)v3 + 25);
      if ( v12 )
      {
LABEL_15:
        v13 = *(float *)(v12 + 4);
        v14 = *(_DWORD *)(v12 + 8);
LABEL_20:
        v17 = *(float *)(v12 + 12);
        goto LABEL_21;
      }
LABEL_17:
      v15 = ((long double (__fastcall *)(Caver::TrailParticleEmitter *, __int64))*(_QWORD *)(*(_QWORD *)v3 + 32LL))(
              v3,
              1);
      v12 = *((_QWORD *)v3 + 25);
      v13 = *(float *)&v15;
      if ( v12 )
      {
        v14 = *(_DWORD *)(v12 + 8);
        goto LABEL_20;
      }
      v16 = ((long double (__fastcall *)(Caver::TrailParticleEmitter *, __int64))*(_QWORD *)(*(_QWORD *)v3 + 32LL))(
              v3,
              2);
      v12 = *((_QWORD *)v3 + 25);
      v14 = LODWORD(v16);
      if ( v12 )
        goto LABEL_20;
      v41 = ((long double (__fastcall *)(Caver::TrailParticleEmitter *, __int64))*(_QWORD *)(*(_QWORD *)v3 + 32LL))(
              v3,
              3);
      v12 = *((_QWORD *)v3 + 25);
      v17 = *(float *)&v41;
      if ( !v12 )
      {
        LODWORD(v18) = COERCE_UNSIGNED_INT128(
                         ((long double (__fastcall *)(Caver::TrailParticleEmitter *, __int64))*(_QWORD *)(*(_QWORD *)v3 + 32LL))(
                           v3,
                           5));
        goto LABEL_22;
      }
LABEL_21:
      v18 = *(float *)(v12 + 20);
LABEL_22:
      v44 = 0u;
      v45.n64_u64[0] = 0;
      v46 = 0xFFFFFFFF00000000LL;
      v49 = 0;
      v47 = xmmword_583800;
      v48 = xmmword_589600;
      if ( *((_QWORD *)v3 + 4) == *((_QWORD *)v3 + 5) )
      {
        if ( (int)(-1171354717
                 * ((*(_QWORD *)(*((_QWORD *)v3 + 1) + 16LL) - *(_QWORD *)(*((_QWORD *)v3 + 1) + 8LL)) >> 3)) <= 0 )
          return;
        v19 = (Caver *)Caver::fastrandom((Caver *)this);
        LODWORD(v44) = (int)v19
                     % (int)(-1171354717
                           * ((*(_QWORD *)(*((_QWORD *)v3 + 1) + 16LL) - *(_QWORD *)(*((_QWORD *)v3 + 1) + 8LL)) >> 3));
        if ( (v44 & 0x80000000) != 0 )
          return;
      }
      else
      {
        v19 = (Caver *)Caver::fastrandom((Caver *)this);
        LODWORD(v44) = *(_DWORD *)(*((_QWORD *)v3 + 4)
                                 + 4
                                 * ((int)v19
                                  % (unsigned __int64)((__int64)(*((_QWORD *)v3 + 5) - *((_QWORD *)v3 + 4)) >> 2)));
        if ( (v44 & 0x80000000) != 0 )
          return;
      }
      v20 = (Caver *)Caver::fastrandom(v19);
      v21 = (float)((float)(int)v20 / (float)Caver::FASTRANDOM_MAX) * 6.28318531;
      v22 = (Caver::Vector2 *)Caver::fastrandom(v20);
      v23 = v17 * (float)((float)((float)((float)(int)v22 / (float)Caver::FASTRANDOM_MAX) * 0.4) + 0.6);
      Caver::Vector2::FromAngle((__int64 *)v42, v22, v21);
      v45.n64_u64[0] = vneg_f32(vmul_n_f32(v42[0], v23 / v13)).n64_u64[0];
      *(float *)&v46 = (float)(v23 / v13) * -0.0;
      *(_QWORD *)((char *)&v44 + 4) = __PAIR64__(
                                        COERCE_UNSIGNED_INT(vmuls_lane_f32(v23, v42[0], 1)),
                                        COERCE_UNSIGNED_INT(vmuls_n_f32(v23, v42[0].n64_f32[0])));
      *((float *)&v44 + 3) = v23 * 0.0;
      Caver::VaryingColor::RandomColor((__int64 *)v42, (Caver::TrailParticleEmitter *)((char *)v3 + 168));
      Caver::Color::FromFloatColor();
      HIDWORD(v46) = v43;
      v25 = (Caver *)Caver::fastrandom(v24);
      v26 = (float)((float)(int)v25 / (float)Caver::FASTRANDOM_MAX) * 6.28318531;
      *(float *)&v47 = v26;
      v27 = (Caver *)Caver::fastrandom(v25);
      HIDWORD(v47) = v14;
      v28 = (float)((float)((float)(int)v27 / (float)Caver::FASTRANDOM_MAX) * 0.3) * 6.28318531;
      *((float *)&v47 + 1) = v28;
      v29 = Caver::fastrandom(v27);
      DWORD2(v48) = 1065353216;
      *((float *)&v48 + 3) = v13 * (float)((float)((float)((float)v29 / (float)Caver::FASTRANDOM_MAX) * 0.2) + 0.8);
      *((float *)&v47 + 2) = v18 * *((float *)&v47 + 3);
      Caver::ParticleEmitter::ConvertLocalParticleToWorld();
      v31.n64_u64[0] = *(_QWORD *)((unsigned __int64)v3 + 80);
      v32 = *((_QWORD *)v3 + 25);
      v33 = *((float *)v3 + 22);
      if ( v32 )
      {
        v34 = *(float *)(v32 + 16);
        v35 = *((float *)v3 + 22);
        v36.n64_u64[0] = *(_QWORD *)((unsigned __int64)v3 + 80);
      }
      else
      {
        v30 = (Caver *)(*(__int64 (__fastcall **)(Caver::TrailParticleEmitter *, __int64))(*(_QWORD *)v3 + 32LL))(v3, 4);
        v36.n64_u64[0] = *(_QWORD *)((unsigned __int64)v3 + 80);
        v35 = *((float *)v3 + 22);
      }
      v45.n64_u64[0] = vadd_f32(vmul_n_f32(v31, v34), v45).n64_u64[0];
      *(float *)&v46 = (float)(v33 * v34) + *(float *)&v46;
      v37 = (float)((float)((float)(int)Caver::fastrandom(v30) / (float)Caver::FASTRANDOM_MAX) + -0.5) * 0.033333;
      *(float32x2_t *)((char *)&v44 + 4) = vadd_f32(*(float32x2_t *)((char *)&v44 + 4), vmul_n_f32(v36, v37));
      *((float *)&v44 + 3) = (float)(v35 * v37) + *((float *)&v44 + 3);
      v38 = (_QWORD *)*((_QWORD *)v3 + 2);
      if ( v38 )
        ++v38[1];
      Caver::ParticleSystem::AddParticle();
      if ( v38 )
      {
        v39 = v38[1] - 1LL;
        v38[1] = v39;
        if ( !v39 )
        {
          this = (float **)(*(__int64 (__fastcall **)(_QWORD *))(*v38 + 16LL))(v38);
          v40 = v38[2] - 1LL;
          v38[2] = v40;
          if ( !v40 )
            this = (float **)(*(__int64 (__fastcall **)(_QWORD *))(*v38 + 24LL))(v38);
        }
      }
    }
  }
}

