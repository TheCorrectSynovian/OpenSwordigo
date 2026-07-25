/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000045525C
 * Mangled: _ZN5Caver20SparkParticleEmitter6UpdateEf
 * Demangled: Caver::SparkParticleEmitter::Update(float)
 *
 * Callers: 1
 *   0x00000000001F35E0  Caver::SparkParticleEmitter::Update(float)
 *
 * Callees: 12
 *   0x00000000001F41A0  Caver::FloatColor::FromHSLA(float,float,float,float)
 *   0x00000000001F4F60  operator delete[](void *)
 *   0x00000000001F5730  Caver::Vector2::FromAngle(float)
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000001FB550  Caver::ParticleSystem::AddParticle(Caver::Particle const&)
 *   0x00000000001FCE30  Caver::fastrandom(void)
 *   0x0000000000200F90  Caver::Color::FromFloatColor(Caver::FloatColor const&)
 *   0x0000000000202350  Caver::ParticleEmitter::ConvertLocalParticleToWorld(Caver::Particle *)
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x000000000045577C  Caver::SparkParticleEmitter::type(void)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 116
 *   insn=0x0000000000455288 string=0x000000000045528C "h\t"
 *   insn=0x000000000045528C string=0x0000000000455290 "T"
 *   insn=0x00000000004552A8 string=0x00000000004552AC "hf@"
 *   insn=0x00000000004552B0 string=0x00000000004552B4 "h"
 *   insn=0x00000000004552B4 string=0x00000000004552B8 ""
 *   insn=0x00000000004552B4 string=0x00000000004552C0 "h"
 *   insn=0x00000000004552B8 string=0x00000000004552BC "\t"
 *   insn=0x00000000004552C8 string=0x00000000004552CC ""
 *   insn=0x00000000004552D0 string=0x00000000004552D4 "hf@"
 *   insn=0x00000000004552D4 string=0x00000000004552D8 ""
 *   insn=0x00000000004552DC string=0x00000000004555D4 "h"
 *   insn=0x00000000004552FC string=0x0000000000455300 "i\t"
 *   insn=0x0000000000455300 string=0x0000000000455304 "x"
 *   insn=0x0000000000455304 string=0x0000000000455308 "`"
 *   insn=0x0000000000455310 string=0x0000000000455314 " "
 *   insn=0x000000000045531C string=0x0000000000455320 "h\t"
 *   insn=0x0000000000455324 string=0x0000000000455328 "@"
 *   insn=0x0000000000455330 string=0x0000000000455334 ""
 *   insn=0x000000000045533C string=0x0000000000455340 "zt"
 *   insn=0x0000000000455350 string=0x0000000000455354 ""
 *   insn=0x000000000045535C string=0x0000000000455360 ""
 *   insn=0x000000000045535C string=0x00000000001FCE30 "0'"
 *   insn=0x0000000000455380 string=0x0000000000455384 "\t"
 *   insn=0x000000000045538C string=0x0000000000455390 "h&B"
 *   insn=0x0000000000455398 string=0x00000000004553C8 "h"
 *   insn=0x000000000045539C string=0x00000000004553A0 "h&B"
 *   insn=0x00000000004553A0 string=0x00000000004553A4 "\n|@"
 *   insn=0x00000000004553A4 string=0x00000000004553A8 ")"
 *   insn=0x00000000004553A8 string=0x00000000004553AC ")"
 *   insn=0x00000000004553AC string=0x00000000004553B0 "K\t"
 *   insn=0x00000000004553B0 string=0x00000000004553B4 "i"
 *   insn=0x00000000004553B4 string=0x00000000004553B8 "yi"
 *   insn=0x00000000004553BC string=0x00000000004553C0 "h"
 *   insn=0x00000000004553C8 string=0x00000000004553CC "\t"
 *   insn=0x00000000004553CC string=0x00000000004553D0 ""
 *   insn=0x00000000004553D0 string=0x00000000004553D4 ""
 *   insn=0x00000000004553D4 string=0x00000000004553D8 "}"
 *   insn=0x00000000004553DC string=0x00000000004553E0 "m"
 *   insn=0x00000000004553E0 string=0x000000000045562C ""
 *   insn=0x00000000004553E4 string=0x00000000004553E8 "h"
 *   insn=0x00000000004553E8 string=0x00000000004553EC "\t"
 *   insn=0x00000000004553EC string=0x00000000004553F0 ""
 *   insn=0x00000000004553F0 string=0x00000000004553F4 ""
 *   insn=0x00000000004553F4 string=0x00000000004553F8 "}"
 *   insn=0x00000000004553F8 string=0x00000000004553FC "\t"
 *   insn=0x00000000004553FC string=0x0000000000455400 "("
 *   insn=0x0000000000455404 string=0x0000000000455408 "h"
 *   insn=0x0000000000455410 string=0x0000000000455414 "a"
 *   insn=0x0000000000455418 string=0x000000000045541C "#"
 *   insn=0x0000000000455424 string=0x0000000000455428 "B"
 *   insn=0x0000000000455428 string=0x000000000045542C "\t,"
 *   insn=0x000000000045542C string=0x0000000000455430 "@(!"
 *   insn=0x0000000000455440 string=0x0000000000455444 "@b"
 *   insn=0x0000000000455448 string=0x000000000045544C "`"
 *   insn=0x0000000000455450 string=0x0000000000455454 "h"
 *   insn=0x0000000000455450 string=0x00000000001F5730 "P'"
 *   insn=0x0000000000455460 string=0x0000000000455464 ")"
 *   insn=0x000000000045546C string=0x0000000000455470 ""
 *   insn=0x0000000000455470 string=0x0000000000455474 ")),"
 *   insn=0x0000000000455474 string=0x0000000000455478 "(!"
 *   insn=0x0000000000455478 string=0x000000000045547C ")B-4"
 *   insn=0x000000000045547C string=0x0000000000455480 "4"
 *   insn=0x0000000000455484 string=0x0000000000455488 ""
 *   insn=0x0000000000455498 string=0x000000000045549C "\t@"
 *   insn=0x00000000004554A4 string=0x00000000004554A8 ""
 *   insn=0x00000000004554B8 string=0x00000000004554BC "@"
 *   insn=0x00000000004554E4 string=0x00000000004554E8 "`"
 *   insn=0x00000000004554E8 string=0x00000000004554EC "b"
 *   insn=0x00000000004554EC string=0x00000000004554F0 ",{"
 *   insn=0x00000000004554F0 string=0x00000000001F41A0 "P'"
 *   insn=0x0000000000455510 string=0x0000000000455514 "!"
 *   insn=0x0000000000455520 string=0x0000000000455524 "C"
 *   insn=0x0000000000455538 string=0x000000000045553C " "
 *   insn=0x000000000045554C string=0x0000000000455550 "  "
 *   insn=0x000000000045555C string=0x0000000000455560 "|"
 *   insn=0x0000000000455560 string=0x0000000000455564 "`"
 *   insn=0x000000000045556C string=0x0000000000455570 ""
 *   insn=0x000000000045557C string=0x0000000000455580 "4"
 *   insn=0x000000000045557C string=0x00000000001FB550 "0'"
 *   insn=0x0000000000455584 string=0x0000000000455588 ""
 *   insn=0x0000000000455598 string=0x000000000045559C "\t@"
 *   insn=0x00000000004555A4 string=0x00000000004555A8 ""
 *   insn=0x00000000004555B8 string=0x00000000004555BC "@"
 *   insn=0x00000000004555DC string=0x00000000004555E0 ""
 *   insn=0x00000000004555E4 string=0x00000000004555E8 "hf@"
 *   insn=0x00000000004555F0 string=0x00000000004555F4 "h"
 *   insn=0x00000000004555FC string=0x0000000000455600 ""
 *   insn=0x0000000000455604 string=0x0000000000455608 "hf@"
 *   insn=0x000000000045560C string=0x0000000000455610 ""
 *   insn=0x0000000000455610 string=0x0000000000455614 "h"
 *   insn=0x000000000045561C string=0x0000000000455620 ""
 *   insn=0x0000000000455624 string=0x0000000000455628 "3"
 *   insn=0x0000000000455638 string=0x000000000045563C "hb"
 *   insn=0x0000000000455680 string=0x00000000001F62D0 "0'"
 *   insn=0x0000000000455684 string=0x0000000000455688 "4"
 *   insn=0x000000000045568C string=0x0000000000455690 ""
 *   insn=0x000000000045569C string=0x00000000004556A0 "\t@"
 *   insn=0x00000000004556AC string=0x00000000004556B0 ""
 *   insn=0x00000000004556BC string=0x00000000004556C0 "@"
 *   insn=0x00000000004556CC string=0x00000000004556D0 "}"
 *   insn=0x00000000004556E8 string=0x00000000004556EC "`f@"
 *   insn=0x00000000004556EC string=0x00000000004556F0 ""
 *   insn=0x00000000004556F0 string=0x00000000004556F4 "A"
 *   insn=0x00000000004556F4 string=0x00000000004556F8 "h"
 *   insn=0x00000000004556F8 string=0x00000000004556FC "@"
 *   insn=0x00000000004556FC string=0x0000000000455704 "`"
 *   insn=0x0000000000455700 string=0x00000000001F4F60 "P'"
 *   insn=0x0000000000455704 string=0x0000000000455708 "@"
 *   insn=0x0000000000455708 string=0x0000000000455710 "t\n@"
 *   insn=0x000000000045570C string=0x00000000001F72B0 "0'"
 *   insn=0x0000000000455710 string=0x0000000000455714 "4"
 *   insn=0x0000000000455718 string=0x000000000045571C ""
 *   insn=0x0000000000455728 string=0x000000000045572C "\t@"
 *   insn=0x0000000000455738 string=0x000000000045573C ""
 *   insn=0x0000000000455748 string=0x000000000045574C "@"
 *   insn=0x0000000000455774 string=0x0000000000455778 "S"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::SparkParticleEmitter::Update(Caver::SparkParticleEmitter *this, long double a2)
{
  Caver::SparkParticleEmitter *v2; // x19
  __int64 v3; // x8
  float v4; // s11
  float32x2_t v5; // d15
  int v6; // w23
  Caver *v7; // x0
  int v8; // s11
  int v9; // w20
  Caver *v10; // x0
  int v11; // s9
  int v12; // w21
  Caver::Vector2 *v13; // x0
  float v14; // s2
  float v15; // s9
  float v16; // s11
  Caver::FloatColor *v17; // x0
  __int64 v18; // x8
  _QWORD *v19; // x20
  float32x2_t v20; // d14
  float v21; // s9
  __int64 v22; // x8
  float v23; // s8
  float v24; // s10
  __int64 v25; // x8
  __int64 v26; // x8
  Caver *v27; // x0
  _QWORD *v28; // x20
  __int64 v29; // x8
  __int64 v30; // x8
  float v31; // [xsp+34h] [xbp-12Ch]
  float v32; // [xsp+38h] [xbp-128h]
  float v33; // [xsp+3Ch] [xbp-124h]
  float v34; // [xsp+64h] [xbp-FCh]
  __int64 v35[2]; // [xsp+68h] [xbp-F8h] BYREF
  int v36; // [xsp+7Ch] [xbp-E4h]
  __int128 v37; // [xsp+80h] [xbp-E0h]
  unsigned __int64 v38; // [xsp+90h] [xbp-D0h]
  unsigned __int64 v39; // [xsp+98h] [xbp-C8h]
  __int128 v40; // [xsp+A0h] [xbp-C0h]
  __int128 v41; // [xsp+B0h] [xbp-B0h]
  int v42; // [xsp+C0h] [xbp-A0h]
  __int64 v43; // [xsp+C8h] [xbp-98h]

  v2 = this;
  v43 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  if ( *(float *)&a2 < 0.0001 )
    return;
  v3 = *((_QWORD *)this + 25);
  if ( v3 )
  {
    v4 = *(float *)v3;
LABEL_5:
    v34 = *(float *)(v3 + 4);
LABEL_6:
    v33 = *(float *)(v3 + 8);
    goto LABEL_7;
  }
  a2 = ((long double (__fastcall *)(Caver::SparkParticleEmitter *, _QWORD))*(_QWORD *)(*(_QWORD *)this + 32LL))(this, 0);
  v3 = *((_QWORD *)v2 + 25);
  v4 = *(float *)&a2;
  if ( v3 )
    goto LABEL_5;
  *(float *)&a2 = (*(float (__fastcall **)(Caver::SparkParticleEmitter *, __int64))(*(_QWORD *)v2 + 32LL))(v2, 1);
  v3 = *((_QWORD *)v2 + 25);
  v34 = *(float *)&a2;
  if ( v3 )
    goto LABEL_6;
  *(float *)&a2 = (*(float (__fastcall **)(Caver::SparkParticleEmitter *, __int64))(*(_QWORD *)v2 + 32LL))(v2, 2);
  v3 = *((_QWORD *)v2 + 25);
  v33 = *(float *)&a2;
  if ( !v3 )
  {
    this = (Caver::SparkParticleEmitter *)(*(__int64 (__fastcall **)(Caver::SparkParticleEmitter *, __int64))(*(_QWORD *)v2 + 32LL))(
                                            v2,
                                            3);
    goto LABEL_8;
  }
LABEL_7:
  LODWORD(a2) = *(_DWORD *)(v3 + 12);
LABEL_8:
  v32 = *(float *)&a2;
  *(float *)&a2 = v4 / v34;
  v5.n64_u64[0] = vdup_lane_s32(*(int32x2_t *)&a2, 0).n64_u64[0];
  v31 = (float)(v4 / v34) * 0.0;
  v6 = -1;
  while ( 1 )
  {
    v7 = (Caver *)Caver::fastrandom(this);
    v8 = Caver::FASTRANDOM_MAX;
    v9 = (int)v7;
    v10 = (Caver *)Caver::fastrandom(v7);
    v37 = 0u;
    v38 = 0;
    v39 = 0xFFFFFFFF00000000LL;
    v42 = 0;
    v40 = xmmword_583800;
    v11 = Caver::FASTRANDOM_MAX;
    v12 = (int)v10;
    v41 = xmmword_589600;
    if ( *((_QWORD *)v2 + 4) == *((_QWORD *)v2 + 5) )
      break;
    v13 = (Caver::Vector2 *)Caver::fastrandom(v10);
    LODWORD(v37) = *(_DWORD *)(*((_QWORD *)v2 + 4)
                             + 4
                             * ((int)v13 % (unsigned __int64)((__int64)(*((_QWORD *)v2 + 5) - *((_QWORD *)v2 + 4)) >> 2)));
    if ( (v37 & 0x80000000) != 0 )
      goto LABEL_32;
LABEL_14:
    v14 = (float)v12 / (float)v11;
    v15 = (float)((float)v9 / (float)v8) * 0.5;
    v16 = (float)((float)(v14 + (float)(v6 + 1)) / 7.0) * 6.28318531;
    v17 = (Caver::FloatColor *)Caver::Vector2::FromAngle(v35, v13, v16);
    v18 = *((_QWORD *)v2 + 1);
    v19 = (_QWORD *)*((_QWORD *)v2 + 2);
    v20.n64_u64[0] = v35[0];
    if ( v19 )
      ++v19[1];
    v21 = v15 + 0.5;
    v22 = *(_QWORD *)(v18 + 8) + 88LL * (int)v37;
    v23 = *(float *)(v22 + 16);
    v24 = *(float *)(v22 + 20);
    if ( v19 )
    {
      v25 = v19[1] - 1LL;
      v19[1] = v25;
      if ( !v25 )
      {
        v17 = (Caver::FloatColor *)(*(__int64 (__fastcall **)(_QWORD *))(*v19 + 16LL))(v19);
        v26 = v19[2] - 1LL;
        v19[2] = v26;
        if ( !v26 )
          v17 = (Caver::FloatColor *)(*(__int64 (__fastcall **)(_QWORD *))(*v19 + 24LL))(v19);
      }
    }
    v38 = vmul_f32(v5, v20).n64_u64[0];
    *(_QWORD *)((char *)&v37 + 4) = Caver::Vector3Zero;
    HIDWORD(v37) = dword_6E9F38;
    *(float *)&v39 = v31;
    Caver::FloatColor::FromHSLA(
      v35,
      v17,
      *((float *)v2 + 42),
      *((float *)v2 + 43),
      *((float *)v2 + 44),
      *((float *)v2 + 45));
    Caver::Color::FromFloatColor();
    *(_QWORD *)&v40 = LODWORD(v16);
    HIDWORD(v39) = v36;
    *((float *)&v40 + 3) = v21;
    *(float *)&v41 = v32 / v23;
    *((float *)&v41 + 1) = v33 / v24;
    *((float *)&v41 + 3) = v34
                         * (float)((float)((float)((float)(int)Caver::fastrandom(v27) / (float)Caver::FASTRANDOM_MAX)
                                         * 0.5)
                                 + 0.5);
    DWORD2(v40) = HIDWORD(v40);
    DWORD2(v41) = 1065353216;
    Caver::ParticleEmitter::ConvertLocalParticleToWorld();
    v28 = (_QWORD *)*((_QWORD *)v2 + 2);
    if ( v28 )
      ++v28[1];
    Caver::ParticleSystem::AddParticle();
    if ( v28 )
    {
      v29 = v28[1] - 1LL;
      v28[1] = v29;
      if ( !v29 )
      {
        this = (Caver::SparkParticleEmitter *)(*(__int64 (__fastcall **)(_QWORD *))(*v28 + 16LL))(v28);
        v30 = v28[2] - 1LL;
        v28[2] = v30;
        if ( !v30 )
          this = (Caver::SparkParticleEmitter *)(*(__int64 (__fastcall **)(_QWORD *))(*v28 + 24LL))(v28);
      }
    }
    if ( (unsigned int)++v6 >= 6 )
      goto LABEL_32;
  }
  if ( (int)(-1171354717 * ((*(_QWORD *)(*((_QWORD *)v2 + 1) + 16LL) - *(_QWORD *)(*((_QWORD *)v2 + 1) + 8LL)) >> 3)) > 0 )
  {
    v13 = (Caver::Vector2 *)Caver::fastrandom(v10);
    LODWORD(v37) = (int)v13
                 % (int)(-1171354717
                       * ((*(_QWORD *)(*((_QWORD *)v2 + 1) + 16LL) - *(_QWORD *)(*((_QWORD *)v2 + 1) + 8LL)) >> 3));
    if ( (v37 & 0x80000000) != 0 )
      goto LABEL_32;
    goto LABEL_14;
  }
  LODWORD(v37) = -1;
LABEL_32:
  *((_BYTE *)v2 + 24) = 1;
}

