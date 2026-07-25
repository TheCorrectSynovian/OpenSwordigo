/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000003E0E08
 * Mangled: _ZN5Caver17OverlayMenuButton12SetSparklingEb
 * Demangled: Caver::OverlayMenuButton::SetSparkling(bool)
 *
 * Callers: 1
 *   0x00000000003E0C4C  Caver::OverlayMenuButton::SetMenuTab(std::string const&)
 *
 * Callees: 23
 *   0x00000000001F3BC0  Caver::FloatColor::GetHSLComponents(float *)
 *   0x00000000001F3ED0  boost::shared_ptr<Caver::FountainParticleEmitter>::shared_ptr<Caver::FountainParticleEmitter>(Caver::FountainParticleEmitter *)
 *   0x00000000001F41A0  Caver::FloatColor::FromHSLA(float,float,float,float)
 *   0x00000000001F4F60  operator delete[](void *)
 *   0x00000000001F55E0  operator new(ulong)
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F7070  boost::detail::shared_count::shared_count<Caver::ParticleSystem>(Caver::ParticleSystem *)
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000001F8570  operator new[](ulong)
 *   0x00000000001F8600  Caver::GUIView::AddPopupAnimation(void)
 *   0x00000000001FA350  Caver::TextureLibrary::sharedLibrary(void)
 *   0x00000000001FD5E0  Caver::FountainParticleEmitter::FountainParticleEmitter(void)
 *   0x00000000001FF5B0  Caver::TextureLibrary::TextureForName(std::string const&,bool)
 *   0x0000000000200390  Caver::ParticleSystem::ParticleSystem(void)
 *   0x0000000000200C20  Caver::ParticleSystem::InitWithMaxParticles(int)
 *   0x0000000000202950  boost::detail::sp_enable_shared_from_this(...)
 *   0x0000000000203BB0  Caver::ParticleSystem::AddParticleType(boost::intrusive_ptr<Caver::Texture> const&,Caver::Rectangle const&)
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x00000000003E15F8  Caver::OverlayMenuButton::Update(float)
 *   0x0000000000566BB8  sub_566BB8
 *   0x000000000056A3A4  operator delete(void *)
 *   0x00000000005818C4  sub_5818C4
 *   0x00000000006FE668  pthread_create
 *
 * Referenced strings: 167
 *   insn=0x00000000003E0E1C string=0x00000000003E0E20 "W"
 *   insn=0x00000000003E0E30 string=0x00000000003E0E34 "h"
 *   insn=0x00000000003E0E40 string=0x00000000001F55E0 "P'"
 *   insn=0x00000000003E0E44 string=0x00000000003E0E48 "R}"
 *   insn=0x00000000003E0E5C string=0x00000000001F7070 "0'"
 *   insn=0x00000000003E0E6C string=0x00000000003E0E70 "h"
 *   insn=0x00000000003E0E78 string=0x00000000003E0E7C "i"
 *   insn=0x00000000003E0E80 string=0x00000000003E0E84 "u"
 *   insn=0x00000000003E0E84 string=0x00000000003E0E88 "h"
 *   insn=0x00000000003E0E8C string=0x00000000003E0E90 "5"
 *   insn=0x00000000003E0E90 string=0x00000000003E0ED4 "`"
 *   insn=0x00000000003E0E94 string=0x00000000003E0E98 ""
 *   insn=0x00000000003E0EA8 string=0x00000000003E0EAC "\t@"
 *   insn=0x00000000003E0EB4 string=0x00000000003E0EB8 ""
 *   insn=0x00000000003E0EC8 string=0x00000000003E0ECC "@"
 *   insn=0x00000000003E0ED8 string=0x00000000003E0EDC "Q"
 *   insn=0x00000000003E0EDC string=0x00000000003E0EE0 "u"
 *   insn=0x00000000003E0EE0 string=0x00000000003E0EE4 "e"
 *   insn=0x00000000003E0EE4 string=0x00000000001FA350 "0'"
 *   insn=0x00000000003E0EEC string=0x0000000000592AF0 "particle_fure_1"
 *   insn=0x00000000003E0EF8 string=0x00000000003E0EFC "/"
 *   insn=0x00000000003E0F28 string=0x00000000003E0F2C "!"
 *   insn=0x00000000003E0F34 string=0x00000000003E0F38 "@"
 *   insn=0x00000000003E0F38 string=0x00000000003E0F3C ""
 *   insn=0x00000000003E0F3C string=0x00000000003E0F40 ""
 *   insn=0x00000000003E0F44 string=0x00000000003E0F48 ""
 *   insn=0x00000000003E0F48 string=0x00000000003E0F4C ""
 *   insn=0x00000000003E0F54 string=0x00000000003E0F58 ")"
 *   insn=0x00000000003E0F58 string=0x00000000003E0F5C ")"
 *   insn=0x00000000003E0F68 string=0x00000000003E14A4 "\t"
 *   insn=0x00000000003E0F78 string=0x00000000001FD5E0 "0'"
 *   insn=0x00000000003E0F84 string=0x00000000003E0F88 "h\nA"
 *   insn=0x00000000003E0F84 string=0x00000000001F3ED0 "P'"
 *   insn=0x00000000003E0F90 string=0x00000000003E0F94 "i\n"
 *   insn=0x00000000003E0F98 string=0x00000000003E0F9C "u"
 *   insn=0x00000000003E0F9C string=0x00000000003E0FA0 "h"
 *   insn=0x00000000003E0FA4 string=0x00000000003E0FA8 "5"
 *   insn=0x00000000003E0FA8 string=0x00000000003E0FEC "h\nA"
 *   insn=0x00000000003E0FAC string=0x00000000003E0FB0 ""
 *   insn=0x00000000003E0FC0 string=0x00000000003E0FC4 "\t@"
 *   insn=0x00000000003E0FCC string=0x00000000003E0FD0 ""
 *   insn=0x00000000003E0FE0 string=0x00000000003E0FE4 "@"
 *   insn=0x00000000003E0FEC string=0x00000000003E0FF0 "u"
 *   insn=0x00000000003E0FF0 string=0x00000000003E0FF4 "i"
 *   insn=0x00000000003E0FFC string=0x00000000003E1000 "J\t"
 *   insn=0x00000000003E1008 string=0x00000000003E100C "\t"
 *   insn=0x00000000003E100C string=0x00000000003E1010 "6"
 *   insn=0x00000000003E1010 string=0x00000000003E1054 "5"
 *   insn=0x00000000003E1014 string=0x00000000003E1018 ""
 *   insn=0x00000000003E1024 string=0x00000000003E1028 "\t@"
 *   insn=0x00000000003E1034 string=0x00000000003E1038 ""
 *   insn=0x00000000003E1044 string=0x00000000003E1048 "@"
 *   insn=0x00000000003E1054 string=0x00000000003E1098 "`"
 *   insn=0x00000000003E1058 string=0x00000000003E105C ""
 *   insn=0x00000000003E106C string=0x00000000003E1070 "\t@"
 *   insn=0x00000000003E1078 string=0x00000000003E107C ""
 *   insn=0x00000000003E108C string=0x00000000003E1090 "@"
 *   insn=0x00000000003E1098 string=0x00000000003E109C "aBH"
 *   insn=0x00000000003E109C string=0x00000000003E10A0 "u\nA"
 *   insn=0x00000000003E10A8 string=0x00000000003E10AC " "
 *   insn=0x00000000003E10B0 string=0x00000000003E10B4 "\t"
 *   insn=0x00000000003E10B4 string=0x00000000003E10B8 "\n"
 *   insn=0x00000000003E10B8 string=0x0000000000584430 "333?"
 *   insn=0x00000000003E10C0 string=0x00000000003E10C4 "!iO"
 *   insn=0x00000000003E10C4 string=0x00000000003E10C8 "B1D"
 *   insn=0x00000000003E10D4 string=0x00000000003E10D8 "2L"
 *   insn=0x00000000003E10D8 string=0x00000000001F41A0 "P'"
 *   insn=0x00000000003E10E4 string=0x00000000001F3BC0 "P'"
 *   insn=0x00000000003E10E8 string=0x00000000003E10EC "I3"
 *   insn=0x00000000003E10EC string=0x00000000003E10F4 " "
 *   insn=0x00000000003E10F8 string=0x00000000003E10FC "u\nA"
 *   insn=0x00000000003E1108 string=0x00000000003E110C "h"
 *   insn=0x00000000003E1114 string=0x00000000003E1118 "@"
 *   insn=0x00000000003E1128 string=0x00000000001F8570 "0'"
 *   insn=0x00000000003E1130 string=0x00000000003E1134 "h"
 *   insn=0x00000000003E113C string=0x00000000001F4F60 "P'"
 *   insn=0x00000000003E1150 string=0x00000000003E1154 ""
 *   insn=0x00000000003E1178 string=0x00000000003E117C "\t"
 *   insn=0x00000000003E117C string=0x00000000003E1180 "u\nA"
 *   insn=0x00000000003E1184 string=0x00000000003E1188 "h"
 *   insn=0x00000000003E1190 string=0x00000000003E1194 "@"
 *   insn=0x00000000003E11AC string=0x00000000003E11B0 "h"
 *   insn=0x00000000003E11B4 string=0x00000000003E11B8 "jO"
 *   insn=0x00000000003E11CC string=0x00000000003E11D0 ""
 *   insn=0x00000000003E11F4 string=0x00000000003E11F8 "u\nA"
 *   insn=0x00000000003E11FC string=0x00000000003E1200 "h"
 *   insn=0x00000000003E1200 string=0x00000000003E126C "\t4"
 *   insn=0x00000000003E1208 string=0x00000000003E120C "@"
 *   insn=0x00000000003E1224 string=0x00000000003E1228 "h"
 *   insn=0x00000000003E122C string=0x00000000003E1230 "LO"
 *   insn=0x00000000003E1244 string=0x00000000003E1248 ""
 *   insn=0x00000000003E126C string=0x00000000003E1270 "\t"
 *   insn=0x00000000003E1270 string=0x00000000003E1274 "u\nA"
 *   insn=0x00000000003E1278 string=0x00000000003E127C "h"
 *   insn=0x00000000003E1284 string=0x00000000003E1288 "@"
 *   insn=0x00000000003E12A0 string=0x00000000003E12A4 "h"
 *   insn=0x00000000003E12A8 string=0x00000000003E12AC "-O"
 *   insn=0x00000000003E12C0 string=0x00000000003E12C4 ""
 *   insn=0x00000000003E12E8 string=0x00000000003E12EC "\t!"
 *   insn=0x00000000003E12EC string=0x00000000003E12F0 "u\nA"
 *   insn=0x00000000003E12F4 string=0x00000000003E12F8 "h"
 *   insn=0x00000000003E1300 string=0x00000000003E1304 "@"
 *   insn=0x00000000003E131C string=0x00000000003E1320 "h"
 *   insn=0x00000000003E133C string=0x00000000003E1340 ""
 *   insn=0x00000000003E1364 string=0x00000000003E1368 "\t1"
 *   insn=0x00000000003E1368 string=0x00000000003E136C "u\nA"
 *   insn=0x00000000003E1370 string=0x00000000003E1374 "h"
 *   insn=0x00000000003E1374 string=0x00000000003E13E0 "\t4"
 *   insn=0x00000000003E137C string=0x00000000003E1380 "@"
 *   insn=0x00000000003E138C string=0x00000000003E1390 "x\"
 *   insn=0x00000000003E1398 string=0x00000000003E139C "h"
 *   insn=0x00000000003E13B8 string=0x00000000003E13BC ""
 *   insn=0x00000000003E13E0 string=0x00000000003E13E4 "\t"
 *   insn=0x00000000003E13E4 string=0x00000000003E13E8 "u\nA"
 *   insn=0x00000000003E13EC string=0x00000000003E13F0 "h"
 *   insn=0x00000000003E13F8 string=0x00000000003E13FC "@"
 *   insn=0x00000000003E1408 string=0x00000000003E140C "Y\"
 *   insn=0x00000000003E1414 string=0x00000000003E1418 "h"
 *   insn=0x00000000003E1434 string=0x00000000003E1438 ""
 *   insn=0x00000000003E145C string=0x00000000003E1464 "\t-"
 *   insn=0x00000000003E1468 string=0x00000000003E146C "h"
 *   insn=0x00000000003E146C string=0x00000000003E1470 "t"
 *   insn=0x00000000003E1474 string=0x00000000003E1478 "b\"
 *   insn=0x00000000003E1478 string=0x00000000001F8600 "0'"
 *   insn=0x00000000003E1488 string=0x00000000003E14E8 "zS"
 *   insn=0x00000000003E14A4 string=0x00000000003E14A8 ")=G"
 *   insn=0x00000000003E14A8 string=0x00000000003E14AC "!"
 *   insn=0x00000000003E14B0 string=0x00000000003E14B4 "\t"
 *   insn=0x00000000003E14B0 string=0x00000000003E14C8 "\t"
 *   insn=0x00000000003E14B4 string=0x00000000003E14B8 "*"
 *   insn=0x00000000003E14B8 string=0x00000000003E14BC "\n"
 *   insn=0x00000000003E14C4 string=0x00000000003E14D4 "?"
 *   insn=0x00000000003E14C8 string=0x00000000003E14CC "*"
 *   insn=0x00000000003E14CC string=0x00000000003E14D0 "\n"
 *   insn=0x00000000003E14E8 string=0x00000000001F62D0 "0'"
 *   insn=0x00000000003E14F4 string=0x00000000003E14F8 ""
 *   insn=0x00000000003E1504 string=0x00000000003E1508 "\t@"
 *   insn=0x00000000003E1514 string=0x00000000003E1518 ""
 *   insn=0x00000000003E1524 string=0x00000000003E1528 "@"
 *   insn=0x00000000003E1530 string=0x00000000003E1534 "/"
 *   insn=0x00000000003E1540 string=0x00000000003E1544 "H"
 *   insn=0x00000000003E1544 string=0x00000000003E1548 "\t\t@"
 *   insn=0x00000000003E1548 string=0x00000000003E154C ")"
 *   insn=0x00000000003E154C string=0x00000000003E1550 "\t\t"
 *   insn=0x00000000003E1554 string=0x00000000003E1558 "\t"
 *   insn=0x00000000003E1558 string=0x00000000003E155C ")"
 *   insn=0x00000000003E1560 string=0x00000000003E1564 " "
 *   insn=0x00000000003E1564 string=0x00000000003E1568 "\t"
 *   insn=0x00000000003E1578 string=0x00000000003E157C "MW"
 *   insn=0x00000000003E157C string=0x00000000001F72B0 "0'"
 *   insn=0x00000000003E158C string=0x00000000003E1590 ")"
 *   insn=0x00000000003E1590 string=0x00000000003E1594 ")"
 *   insn=0x00000000003E15A0 string=0x00000000003E15A4 "\t"
 *   insn=0x00000000003E15A4 string=0x00000000003E15A8 ")=G"
 *   insn=0x00000000003E15A8 string=0x00000000003E15AC "!"
 *   insn=0x00000000003E15AC string=0x00000000003E15B0 "i"
 *   insn=0x00000000003E15B0 string=0x00000000003E15B4 "\t"
 *   insn=0x00000000003E15B0 string=0x00000000003E15DC "\t"
 *   insn=0x00000000003E15B4 string=0x00000000003E15B8 "*"
 *   insn=0x00000000003E15B8 string=0x00000000003E15BC "\n"
 *   insn=0x00000000003E15C0 string=0x00000000003E15C4 "?"
 *   insn=0x00000000003E15C4 string=0x00000000003E15C8 "L"
 *   insn=0x00000000003E15CC string=0x00000000003E15D0 "u#"
 *   insn=0x00000000003E15DC string=0x00000000003E15E0 "*"
 *   insn=0x00000000003E15E0 string=0x00000000003E15E4 "\n"
 *   insn=0x00000000003E15E4 string=0x00000000003E15E8 "?"
 *   insn=0x00000000003E15E8 string=0x00000000003E15EC ""
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::OverlayMenuButton::SetSparkling(Caver::OverlayMenuButton *this, char a2)
{
  Caver::ParticleSystem *v4; // x21
  _QWORD *v5; // x21
  __int64 v6; // x8
  __int64 v7; // x8
  Caver::TextureLibrary *v8; // x0
  __int64 v9; // x0
  int v10; // w8
  void *v11; // x0
  Caver::FountainParticleEmitter *v12; // x0
  Caver::FloatColor *v13; // x0
  __int64 v14; // x9
  _QWORD *v15; // x21
  __int64 v16; // x8
  __int64 v17; // x8
  __int64 v18; // x8
  _QWORD *v19; // x21
  __int64 v20; // x9
  _QWORD *v21; // x22
  __int64 v22; // x8
  __int64 v23; // x8
  __int64 v24; // x8
  __int64 v25; // x8
  __int64 v26; // x21
  int32x2_t *v27; // x21
  _DWORD *v28; // x8
  __int64 v29; // x24
  __int64 v30; // x0
  void *v31; // x8
  __int64 i; // x22
  float v33; // s0
  _QWORD *v34; // x21
  __int64 v35; // x8
  __int64 v36; // x24
  __int64 v37; // x0
  void *v38; // x8
  __int64 j; // x22
  float v40; // s0
  _QWORD *v41; // x21
  __int64 v42; // x8
  __int64 v43; // x24
  __int64 v44; // x0
  void *v45; // x8
  __int64 k; // x22
  float v47; // s0
  _QWORD *v48; // x21
  __int64 v49; // x8
  __int64 v50; // x24
  __int64 v51; // x0
  void *v52; // x8
  __int64 m; // x22
  float v54; // s0
  _QWORD *v55; // x21
  __int64 v56; // x8
  __int64 v57; // x24
  __int64 v58; // x0
  void *v59; // x8
  __int64 n; // x22
  float v61; // s0
  _QWORD *v62; // x21
  __int64 v63; // x8
  __int64 v64; // x24
  __int64 v65; // x0
  void *v66; // x8
  __int64 ii; // x22
  float v68; // s0
  _QWORD *v69; // x21
  __int64 v70; // x8
  __int64 v71; // x24
  __int64 v72; // x0
  void *v73; // x8
  __int64 jj; // x22
  float v75; // s0
  unsigned int *v76; // x8
  int v77; // w9
  __int64 v78; // [xsp+10h] [xbp-60h] BYREF
  __int64 v79; // [xsp+18h] [xbp-58h]
  __int128 v80; // [xsp+20h] [xbp-50h] BYREF
  __int64 v81; // [xsp+38h] [xbp-38h]

  v81 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  if ( !*((_QWORD *)this + 64) )
  {
    v4 = (Caver::ParticleSystem *)operator new(0xC0u);
    Caver::ParticleSystem::ParticleSystem(v4);
    *(_QWORD *)&v80 = v4;
    boost::detail::shared_count::shared_count<Caver::ParticleSystem>();
    boost::detail::sp_enable_shared_from_this();
    *(_QWORD *)&v80 = *((_QWORD *)this + 64);
    *((_QWORD *)this + 64) = v4;
    v5 = (_QWORD *)*((_QWORD *)this + 65);
    *((_QWORD *)this + 65) = *((_QWORD *)&v80 + 1);
    *((_QWORD *)&v80 + 1) = v5;
    if ( v5 )
    {
      v6 = v5[1] - 1LL;
      v5[1] = v6;
      if ( !v6 )
      {
        (*(void (__fastcall **)(_QWORD *))(*v5 + 16LL))(v5);
        v7 = v5[2] - 1LL;
        v5[2] = v7;
        if ( !v7 )
          (*(void (__fastcall **)(_QWORD *))(*v5 + 24LL))(v5);
      }
    }
    v8 = (Caver::TextureLibrary *)Caver::ParticleSystem::InitWithMaxParticles(
                                    *((Caver::ParticleSystem **)this + 64),
                                    40);
    Caver::TextureLibrary::sharedLibrary(v8);
    sub_566BB8((int)&v78, "particle_fure_1");
    Caver::TextureLibrary::TextureForName();
    v80 = xmmword_592930;
    Caver::ParticleSystem::AddParticleType();
    v9 = v79;
    if ( v79 )
    {
      v10 = *(_DWORD *)(v79 + 8) - 1;
      *(_DWORD *)(v79 + 8) = v10;
      if ( !v10 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 8LL))(v9);
    }
    v11 = (void *)(v78 - 24);
    if ( (__int64 *)(v78 - 24) != &qword_6FD2E0 )
    {
      v76 = (unsigned int *)(v78 - 8);
      if ( &pthread_create )
      {
        do
          v77 = __ldaxr(v76);
        while ( __stlxr(v77 - 1, v76) );
      }
      else
      {
        v77 = (*v76)--;
      }
      if ( v77 <= 0 )
        operator delete(v11);
    }
    v12 = (Caver::FountainParticleEmitter *)operator new(0xE0u);
    Caver::FountainParticleEmitter::FountainParticleEmitter(v12);
    v13 = (Caver::FloatColor *)boost::shared_ptr<Caver::FountainParticleEmitter>::shared_ptr<Caver::FountainParticleEmitter>();
    v14 = v80;
    *(_QWORD *)&v80 = *((_QWORD *)this + 66);
    *((_QWORD *)this + 66) = v14;
    v15 = (_QWORD *)*((_QWORD *)this + 67);
    *((_QWORD *)this + 67) = *((_QWORD *)&v80 + 1);
    *((_QWORD *)&v80 + 1) = v15;
    if ( v15 )
    {
      v16 = v15[1] - 1LL;
      v15[1] = v16;
      if ( !v16 )
      {
        v13 = (Caver::FloatColor *)(*(__int64 (__fastcall **)(_QWORD *))(*v15 + 16LL))(v15);
        v17 = v15[2] - 1LL;
        v15[2] = v17;
        if ( !v17 )
          v13 = (Caver::FloatColor *)(*(__int64 (__fastcall **)(_QWORD *))(*v15 + 24LL))(v15);
      }
    }
    v18 = *((_QWORD *)this + 66);
    v19 = (_QWORD *)*((_QWORD *)this + 65);
    v20 = *((_QWORD *)this + 64);
    if ( v19 )
      v19[1] += 2LL;
    v21 = *(_QWORD **)(v18 + 16);
    *(_QWORD *)(v18 + 8) = v20;
    *(_QWORD *)(v18 + 16) = v19;
    if ( v21 )
    {
      v22 = v21[1] - 1LL;
      v21[1] = v22;
      if ( !v22 )
      {
        v13 = (Caver::FloatColor *)(*(__int64 (__fastcall **)(_QWORD *))(*v21 + 16LL))(v21);
        v23 = v21[2] - 1LL;
        v21[2] = v23;
        if ( !v23 )
          v13 = (Caver::FloatColor *)(*(__int64 (__fastcall **)(_QWORD *))(*v21 + 24LL))(v21);
      }
    }
    if ( v19 )
    {
      v24 = v19[1] - 1LL;
      v19[1] = v24;
      if ( !v24 )
      {
        v13 = (Caver::FloatColor *)(*(__int64 (__fastcall **)(_QWORD *))(*v19 + 16LL))(v19);
        v25 = v19[2] - 1LL;
        v19[2] = v25;
        if ( !v25 )
          v13 = (Caver::FloatColor *)(*(__int64 (__fastcall **)(_QWORD *))(*v19 + 24LL))(v19);
      }
    }
    v26 = *((_QWORD *)this + 66);
    *(float32x2_t *)(v26 + 68) = vadd_f32(
                                   *(float32x2_t *)((char *)this + 132),
                                   vmul_f32(*(float32x2_t *)((char *)this + 140), (float32x2_t)0x3F0000003F000000LL));
    *(_DWORD *)(v26 + 76) = 0;
    Caver::FloatColor::FromHSLA((__int64 *)&v80, v13, 0.13, 0.3, 0.7, 0.0);
    Caver::FloatColor::GetHSLComponents((Caver::FloatColor *)&v80, (float *)(v26 + 168));
    *(_DWORD *)(v26 + 180) = HIDWORD(v80);
    v27 = (int32x2_t *)*((_QWORD *)this + 66);
    v28 = (_DWORD *)v27[25].n64_u64[0];
    v27[23].n64_u64[0] = vdup_n_s32(0x3E99999Au).n64_u64[0];
    v27[24].n64_u32[0] = 1050253722;
    if ( !v28 )
    {
      v29 = (*(unsigned int (__fastcall **)(int32x2_t *))(v27->n64_u64[0] + 24))(v27);
      v30 = operator new[](4 * v29);
      v31 = (void *)v27[25].n64_u64[0];
      v27[25].n64_u64[0] = v30;
      if ( v31 )
        operator delete[](v31);
      if ( (_DWORD)v29 )
      {
        for ( i = 0; i != v29; ++i )
        {
          v33 = (*(float (__fastcall **)(int32x2_t *, _QWORD))(v27->n64_u64[0] + 32))(v27, (unsigned int)i);
          v28 = (_DWORD *)v27[25].n64_u64[0];
          *(float *)&v28[i] = v33;
        }
      }
      else
      {
        v28 = (_DWORD *)v27[25].n64_u64[0];
      }
    }
    *v28 = 1119092736;
    v34 = (_QWORD *)*((_QWORD *)this + 66);
    v35 = v34[25];
    if ( !v35 )
    {
      v36 = (*(unsigned int (__fastcall **)(_QWORD))(*v34 + 24LL))(*((_QWORD *)this + 66));
      v37 = operator new[](4 * v36);
      v38 = (void *)v34[25];
      v34[25] = v37;
      if ( v38 )
        operator delete[](v38);
      if ( (_DWORD)v36 )
      {
        for ( j = 0; j != v36; ++j )
        {
          v40 = (*(float (__fastcall **)(_QWORD *, _QWORD))(*v34 + 32LL))(v34, (unsigned int)j);
          v35 = v34[25];
          *(float *)(v35 + 4 * j) = v40;
        }
      }
      else
      {
        v35 = v34[25];
      }
    }
    *(_DWORD *)(v35 + 4) = 0;
    v41 = (_QWORD *)*((_QWORD *)this + 66);
    v42 = v41[25];
    if ( !v42 )
    {
      v43 = (*(unsigned int (__fastcall **)(_QWORD))(*v41 + 24LL))(*((_QWORD *)this + 66));
      v44 = operator new[](4 * v43);
      v45 = (void *)v41[25];
      v41[25] = v44;
      if ( v45 )
        operator delete[](v45);
      if ( (_DWORD)v43 )
      {
        for ( k = 0; k != v43; ++k )
        {
          v47 = (*(float (__fastcall **)(_QWORD *, _QWORD))(*v41 + 32LL))(v41, (unsigned int)k);
          v42 = v41[25];
          *(float *)(v42 + 4 * k) = v47;
        }
      }
      else
      {
        v42 = v41[25];
      }
    }
    *(_DWORD *)(v42 + 12) = 1101004800;
    v48 = (_QWORD *)*((_QWORD *)this + 66);
    v49 = v48[25];
    if ( !v49 )
    {
      v50 = (*(unsigned int (__fastcall **)(_QWORD))(*v48 + 24LL))(*((_QWORD *)this + 66));
      v51 = operator new[](4 * v50);
      v52 = (void *)v48[25];
      v48[25] = v51;
      if ( v52 )
        operator delete[](v52);
      if ( (_DWORD)v50 )
      {
        for ( m = 0; m != v50; ++m )
        {
          v54 = (*(float (__fastcall **)(_QWORD *, _QWORD))(*v48 + 32LL))(v48, (unsigned int)m);
          v49 = v48[25];
          *(float *)(v49 + 4 * m) = v54;
        }
      }
      else
      {
        v49 = v48[25];
      }
    }
    *(_DWORD *)(v49 + 32) = 1056964608;
    v55 = (_QWORD *)*((_QWORD *)this + 66);
    v56 = v55[25];
    if ( !v56 )
    {
      v57 = (*(unsigned int (__fastcall **)(_QWORD))(*v55 + 24LL))(*((_QWORD *)this + 66));
      v58 = operator new[](4 * v57);
      v59 = (void *)v55[25];
      v55[25] = v58;
      if ( v59 )
        operator delete[](v59);
      if ( (_DWORD)v57 )
      {
        for ( n = 0; n != v57; ++n )
        {
          v61 = (*(float (__fastcall **)(_QWORD *, _QWORD))(*v55 + 32LL))(v55, (unsigned int)n);
          v56 = v55[25];
          *(float *)(v56 + 4 * n) = v61;
        }
      }
      else
      {
        v56 = v55[25];
      }
    }
    *(_DWORD *)(v56 + 48) = 1065353216;
    v62 = (_QWORD *)*((_QWORD *)this + 66);
    v63 = v62[25];
    if ( !v63 )
    {
      v64 = (*(unsigned int (__fastcall **)(_QWORD))(*v62 + 24LL))(*((_QWORD *)this + 66));
      v65 = operator new[](4 * v64);
      v66 = (void *)v62[25];
      v62[25] = v65;
      if ( v66 )
        operator delete[](v66);
      if ( (_DWORD)v64 )
      {
        for ( ii = 0; ii != v64; ++ii )
        {
          v68 = (*(float (__fastcall **)(_QWORD *, _QWORD))(*v62 + 32LL))(v62, (unsigned int)ii);
          v63 = v62[25];
          *(float *)(v63 + 4 * ii) = v68;
        }
      }
      else
      {
        v63 = v62[25];
      }
    }
    *(_DWORD *)(v63 + 20) = 1101004800;
    v69 = (_QWORD *)*((_QWORD *)this + 66);
    v70 = v69[25];
    if ( !v70 )
    {
      v71 = (*(unsigned int (__fastcall **)(_QWORD))(*v69 + 24LL))(*((_QWORD *)this + 66));
      v72 = operator new[](4 * v71);
      v73 = (void *)v69[25];
      v69[25] = v72;
      if ( v73 )
        operator delete[](v73);
      if ( (_DWORD)v71 )
      {
        for ( jj = 0; jj != v71; ++jj )
        {
          v75 = (*(float (__fastcall **)(_QWORD *, _QWORD))(*v69 + 32LL))(v69, (unsigned int)jj);
          v70 = v69[25];
          *(float *)(v70 + 4 * jj) = v75;
        }
      }
      else
      {
        v70 = v69[25];
      }
    }
    *(_DWORD *)(v70 + 44) = 1020054733;
  }
  *((_BYTE *)this + 504) = a2 & 1;
  if ( (a2 & 1) != 0 )
    Caver::GUIView::AddPopupAnimation(this);
}

