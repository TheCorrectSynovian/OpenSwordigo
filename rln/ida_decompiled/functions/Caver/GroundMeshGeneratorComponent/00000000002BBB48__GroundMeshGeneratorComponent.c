/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002BBB48
 * Mangled: _ZN5Caver28GroundMeshGeneratorComponentC2Ev
 * Demangled: Caver::GroundMeshGeneratorComponent::GroundMeshGeneratorComponent(void)
 *
 * Callers: 2
 *   0x00000000001FB500  Caver::GroundMeshGeneratorComponent::GroundMeshGeneratorComponent(void)
 *   0x0000000000201D30  Caver::GroundMeshGeneratorComponent::GroundMeshGeneratorComponent(void)
 *
 * Callees: 9
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F6CE0  Caver::Component::BindOutlet(int,std::string const&,Caver::ComponentOutletBase *,bool)
 *   0x00000000001FA4D0  Caver::Component::~Component()
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x0000000000566BB8  sub_566BB8
 *   0x000000000056A3A4  operator delete(void *)
 *   0x000000000056A6A8  sub_56A6A8
 *   0x00000000005818C4  sub_5818C4
 *   0x00000000006FE668  pthread_create
 *
 * Referenced strings: 200
 *   insn=0x00000000002BBB64 string=0x00000000002BBB68 "\!"
 *   insn=0x00000000002BBB68 string=0x00000000002BBB6C "i!"
 *   insn=0x00000000002BBB6C string=0x00000000002BBB70 "["
 *   insn=0x00000000002BBB74 string=0x00000000002BBB78 ")"
 *   insn=0x00000000002BBB78 string=0x00000000002BBB7C "X!"
 *   insn=0x00000000002BBB7C string=0x00000000002BBB80 "y!"
 *   insn=0x00000000002BBB84 string=0x00000000002BBB88 "9"
 *   insn=0x00000000002BBB88 string=0x00000000002BBB8C "k"
 *   insn=0x00000000002BBB8C string=0x00000000002BBB90 "Z!"
 *   insn=0x00000000002BBB90 string=0x00000000002BBB94 "*"
 *   insn=0x00000000002BBB94 string=0x00000000002BBB98 "Z?D"
 *   insn=0x00000000002BBB9C string=0x00000000002BBBA0 "@"
 *   insn=0x00000000002BBBA0 string=0x00000000002BBBA4 "*"
 *   insn=0x00000000002BBBA8 string=0x00000000002BBBAC "@"
 *   insn=0x00000000002BBBB0 string=0x00000000002BBBB4 ")A"
 *   insn=0x00000000002BBBBC string=0x00000000002BBBC0 "j"
 *   insn=0x00000000002BBBC0 string=0x00000000002BBBC4 "j"
 *   insn=0x00000000002BBBD4 string=0x00000000002BBBD8 "i"
 *   insn=0x00000000002BBBD8 string=0x00000000002BBBDC "\tC"
 *   insn=0x00000000002BBBE0 string=0x00000000002BBBE4 "`"
 *   insn=0x00000000002BBBE4 string=0x00000000002BBBE8 "@"
 *   insn=0x00000000002BBBEC string=0x00000000002BBBF0 "h"
 *   insn=0x00000000002BBBF0 string=0x00000000002BBBF4 "(C"
 *   insn=0x00000000002BBC00 string=0x00000000002BBC04 "IC"
 *   insn=0x00000000002BBC24 string=0x00000000002BBC28 "Y"
 *   insn=0x00000000002BBC44 string=0x00000000002BBC48 "A"
 *   insn=0x00000000002BBC48 string=0x00000000005847F1 "polygon"
 *   insn=0x00000000002BBC70 string=0x00000000001F6CE0 "0'"
 *   insn=0x00000000002BBC7C string=0x00000000002BBC80 "A"
 *   insn=0x00000000002BBC80 string=0x00000000002BBC84 "a"
 *   insn=0x00000000002BBC80 string=0x00000000002BBD68 "I!"
 *   insn=0x00000000002BBC84 string=0x0000000000589E48 "targetMesh"
 *   insn=0x00000000002BBCA8 string=0x00000000002BBCAC ""
 *   insn=0x00000000002BBCBC string=0x00000000002BBCC0 "a"
 *   insn=0x00000000002BBCBC string=0x00000000002BBD8C "I!"
 *   insn=0x00000000002BBCC0 string=0x0000000000589E53 "frontTexMap"
 *   insn=0x00000000002BBCF8 string=0x00000000002BBCFC "a"
 *   insn=0x00000000002BBCF8 string=0x00000000002BBDB0 "I!"
 *   insn=0x00000000002BBCFC string=0x0000000000589E5F "surfaceTexMap"
 *   insn=0x00000000002BBD34 string=0x00000000002BBD38 "h"
 *   insn=0x00000000002BBD34 string=0x00000000002BBDD4 "I!"
 *   insn=0x00000000002BBD68 string=0x00000000002BBD6C ")=G"
 *   insn=0x00000000002BBD6C string=0x00000000002BBD70 "!"
 *   insn=0x00000000002BBD70 string=0x00000000002BBD74 ")"
 *   insn=0x00000000002BBD74 string=0x00000000002BBD78 "\t"
 *   insn=0x00000000002BBD74 string=0x00000000002BBDF8 "\t"
 *   insn=0x00000000002BBD78 string=0x00000000002BBD7C "*"
 *   insn=0x00000000002BBD7C string=0x00000000002BBD80 "\n"
 *   insn=0x00000000002BBD88 string=0x00000000002BBE04 "?"
 *   insn=0x00000000002BBD8C string=0x00000000002BBD90 ")=G"
 *   insn=0x00000000002BBD90 string=0x00000000002BBD94 "!"
 *   insn=0x00000000002BBD94 string=0x00000000002BBD98 "\t"
 *   insn=0x00000000002BBD98 string=0x00000000002BBD9C "\t"
 *   insn=0x00000000002BBD98 string=0x00000000002BBE18 "\t"
 *   insn=0x00000000002BBD9C string=0x00000000002BBDA0 "*"
 *   insn=0x00000000002BBDA0 string=0x00000000002BBDA4 "\n"
 *   insn=0x00000000002BBDAC string=0x00000000002BBE24 "?"
 *   insn=0x00000000002BBDB0 string=0x00000000002BBDB4 ")=G"
 *   insn=0x00000000002BBDB4 string=0x00000000002BBDB8 "!"
 *   insn=0x00000000002BBDBC string=0x00000000002BBDC0 "\t"
 *   insn=0x00000000002BBDBC string=0x00000000002BBE38 "\t"
 *   insn=0x00000000002BBDC0 string=0x00000000002BBDC4 "*"
 *   insn=0x00000000002BBDC4 string=0x00000000002BBDC8 "\n"
 *   insn=0x00000000002BBDD0 string=0x00000000002BBE44 "?"
 *   insn=0x00000000002BBDD4 string=0x00000000002BBDD8 ")=G"
 *   insn=0x00000000002BBDD8 string=0x00000000002BBDDC "!"
 *   insn=0x00000000002BBDE0 string=0x00000000002BBDE4 "\t"
 *   insn=0x00000000002BBDE0 string=0x00000000002BBE58 "\t"
 *   insn=0x00000000002BBDE4 string=0x00000000002BBDE8 "*"
 *   insn=0x00000000002BBDE8 string=0x00000000002BBDEC "\n"
 *   insn=0x00000000002BBDF4 string=0x00000000002BBE64 "?"
 *   insn=0x00000000002BBDF8 string=0x00000000002BBDFC "*"
 *   insn=0x00000000002BBDFC string=0x00000000002BBE00 "\n"
 *   insn=0x00000000002BBE0C string=0x00000000002BBE10 "e"
 *   insn=0x00000000002BBE18 string=0x00000000002BBE1C "*"
 *   insn=0x00000000002BBE1C string=0x00000000002BBE20 "\n"
 *   insn=0x00000000002BBE2C string=0x00000000002BBE30 "]"
 *   insn=0x00000000002BBE38 string=0x00000000002BBE3C "*"
 *   insn=0x00000000002BBE3C string=0x00000000002BBE40 "\n"
 *   insn=0x00000000002BBE4C string=0x00000000002BBE50 "U"
 *   insn=0x00000000002BBE58 string=0x00000000002BBE5C "*"
 *   insn=0x00000000002BBE5C string=0x00000000002BBE60 "\n"
 *   insn=0x00000000002BBE6C string=0x00000000002BBE70 "M"
 *   insn=0x00000000002BBE78 string=0x00000000001F62D0 "0'"
 *   insn=0x00000000002BBE80 string=0x00000000002BBE84 "(a"
 *   insn=0x00000000002BBE88 string=0x00000000002BBE8C "`"
 *   insn=0x00000000002BBE8C string=0x00000000002BBE90 "J!"
 *   insn=0x00000000002BBE8C string=0x00000000002BBF98 "`f@"
 *   insn=0x00000000002BBE90 string=0x00000000002BBE94 "J=G"
 *   insn=0x00000000002BBE94 string=0x00000000002BBE98 ")!"
 *   insn=0x00000000002BBE98 string=0x00000000002BBE9C "\n"
 *   insn=0x00000000002BBE9C string=0x00000000002BBEA0 "*"
 *   insn=0x00000000002BBE9C string=0x00000000002BBF7C "*"
 *   insn=0x00000000002BBEA0 string=0x00000000002BBEA4 "K"
 *   insn=0x00000000002BBEA4 string=0x00000000002BBEA8 "+"
 *   insn=0x00000000002BBEAC string=0x00000000002BBEB0 "-"
 *   insn=0x00000000002BBEB0 string=0x00000000002BBF64 "_"
 *   insn=0x00000000002BBEBC string=0x00000000002BBEC0 "(a"
 *   insn=0x00000000002BBEC8 string=0x00000000002BBECC "J!"
 *   insn=0x00000000002BBECC string=0x00000000002BBED0 "J=G"
 *   insn=0x00000000002BBED0 string=0x00000000002BBED4 ")!"
 *   insn=0x00000000002BBED4 string=0x00000000002BBED8 "*"
 *   insn=0x00000000002BBED8 string=0x00000000002BBEDC "*"
 *   insn=0x00000000002BBEDC string=0x00000000002BBEE0 "K"
 *   insn=0x00000000002BBEE0 string=0x00000000002BBEE4 "+"
 *   insn=0x00000000002BBEF8 string=0x00000000002BBEFC "(a"
 *   insn=0x00000000002BBF04 string=0x00000000002BBF08 "J!"
 *   insn=0x00000000002BBF08 string=0x00000000002BBF0C "J=G"
 *   insn=0x00000000002BBF0C string=0x00000000002BBF10 ")!"
 *   insn=0x00000000002BBF10 string=0x00000000002BBF14 "J"
 *   insn=0x00000000002BBF14 string=0x00000000002BBF18 "*"
 *   insn=0x00000000002BBF18 string=0x00000000002BBF1C "K"
 *   insn=0x00000000002BBF1C string=0x00000000002BBF20 "+"
 *   insn=0x00000000002BBF34 string=0x00000000002BBF38 "(a"
 *   insn=0x00000000002BBF40 string=0x00000000002BBF44 "J!"
 *   insn=0x00000000002BBF44 string=0x00000000002BBF48 "J=G"
 *   insn=0x00000000002BBF48 string=0x00000000002BBF4C ")!"
 *   insn=0x00000000002BBF4C string=0x00000000002BBF50 "j"
 *   insn=0x00000000002BBF50 string=0x00000000002BBF54 "*"
 *   insn=0x00000000002BBF54 string=0x00000000002BBF58 "K"
 *   insn=0x00000000002BBF58 string=0x00000000002BBF5C "+"
 *   insn=0x00000000002BBF74 string=0x00000000002BBF78 ""
 *   insn=0x00000000002BBF7C string=0x00000000002BBF80 "K"
 *   insn=0x00000000002BBF80 string=0x00000000002BBF84 "+"
 *   insn=0x00000000002BBF84 string=0x00000000002BBF88 "_"
 *   insn=0x00000000002BBF88 string=0x00000000002BBF8C ""
 *   insn=0x00000000002BBF98 string=0x00000000002BBF9C "UC"
 *   insn=0x00000000002BBF9C string=0x00000000002BBFA0 "u^"
 *   insn=0x00000000002BBFA4 string=0x00000000002BBFA8 "@"
 *   insn=0x00000000002BBFA4 string=0x00000000002BBFC4 "`Z@"
 *   insn=0x00000000002BBFA8 string=0x00000000002BBFAC ""
 *   insn=0x00000000002BBFAC string=0x00000000002BBFB0 ""
 *   insn=0x00000000002BBFB4 string=0x00000000002BBFB8 ""
 *   insn=0x00000000002BBFB8 string=0x00000000002BBFBC ""
 *   insn=0x00000000002BBFC4 string=0x00000000002BBFC8 "uR"
 *   insn=0x00000000002BBFCC string=0x00000000002BBFD0 "@"
 *   insn=0x00000000002BBFCC string=0x00000000002BBFEC "`N@"
 *   insn=0x00000000002BBFD0 string=0x00000000002BBFD4 ""
 *   insn=0x00000000002BBFD4 string=0x00000000002BBFD8 ""
 *   insn=0x00000000002BBFDC string=0x00000000002BBFE0 ""
 *   insn=0x00000000002BBFE0 string=0x00000000002BBFE4 ""
 *   insn=0x00000000002BBFEC string=0x00000000002BBFF0 "(C"
 *   insn=0x00000000002BBFF0 string=0x00000000002BBFF4 "hF"
 *   insn=0x00000000002BBFF8 string=0x00000000002BBFFC "@"
 *   insn=0x00000000002BBFF8 string=0x00000000002BC018 "`B@"
 *   insn=0x00000000002BBFFC string=0x00000000002BC000 ""
 *   insn=0x00000000002BC000 string=0x00000000002BC004 ""
 *   insn=0x00000000002BC008 string=0x00000000002BC00C ""
 *   insn=0x00000000002BC00C string=0x00000000002BC010 ""
 *   insn=0x00000000002BC018 string=0x00000000002BC01C "C"
 *   insn=0x00000000002BC01C string=0x00000000002BC020 "h:"
 *   insn=0x00000000002BC024 string=0x00000000002BC028 "@"
 *   insn=0x00000000002BC028 string=0x00000000002BC02C ""
 *   insn=0x00000000002BC02C string=0x00000000002BC030 ""
 *   insn=0x00000000002BC034 string=0x00000000002BC038 ""
 *   insn=0x00000000002BC038 string=0x00000000002BC03C ""
 *   insn=0x00000000002BC044 string=0x00000000002BC048 """
 *   insn=0x00000000002BC048 string=0x00000000001FA4D0 "0'"
 *   insn=0x00000000002BC070 string=0x00000000002BC074 "`"
 *   insn=0x00000000002BC074 string=0x00000000002BC078 "h""
 *   insn=0x00000000002BC080 string=0x00000000002BC084 "iz@"
 *   insn=0x00000000002BC084 string=0x00000000002BC088 "?"
 *   insn=0x00000000002BC08C string=0x00000000002BC090 "`B@"
 *   insn=0x00000000002BC090 string=0x00000000002BC094 "hz"
 *   insn=0x00000000002BC09C string=0x00000000002BC0A0 "@"
 *   insn=0x00000000002BC0A0 string=0x00000000002BC0A4 ""
 *   insn=0x00000000002BC0A4 string=0x00000000002BC0A8 ""
 *   insn=0x00000000002BC0AC string=0x00000000002BC0B0 ""
 *   insn=0x00000000002BC0B0 string=0x00000000002BC0B4 ""
 *   insn=0x00000000002BC0BC string=0x00000000002BC0C0 "i"
 *   insn=0x00000000002BC0C0 string=0x00000000002BC0C4 "?"
 *   insn=0x00000000002BC0C8 string=0x00000000002BC0CC "`N@"
 *   insn=0x00000000002BC0CC string=0x00000000002BC0D0 "h"
 *   insn=0x00000000002BC0D8 string=0x00000000002BC0DC "@"
 *   insn=0x00000000002BC0DC string=0x00000000002BC0E0 ""
 *   insn=0x00000000002BC0E0 string=0x00000000002BC0E4 ""
 *   insn=0x00000000002BC0E8 string=0x00000000002BC0EC ""
 *   insn=0x00000000002BC0EC string=0x00000000002BC0F0 ""
 *   insn=0x00000000002BC0F8 string=0x00000000002BC0FC "i"
 *   insn=0x00000000002BC0FC string=0x00000000002BC100 "?"
 *   insn=0x00000000002BC104 string=0x00000000002BC108 "`Z@"
 *   insn=0x00000000002BC108 string=0x00000000002BC10C "h"
 *   insn=0x00000000002BC114 string=0x00000000002BC118 "@"
 *   insn=0x00000000002BC118 string=0x00000000002BC11C ""
 *   insn=0x00000000002BC11C string=0x00000000002BC120 ""
 *   insn=0x00000000002BC124 string=0x00000000002BC128 ""
 *   insn=0x00000000002BC128 string=0x00000000002BC12C ""
 *   insn=0x00000000002BC134 string=0x00000000002BC138 "i"
 *   insn=0x00000000002BC138 string=0x00000000002BC13C "?"
 *   insn=0x00000000002BC140 string=0x00000000002BC144 "`f@"
 *   insn=0x00000000002BC144 string=0x00000000002BC148 "h"
 *   insn=0x00000000002BC150 string=0x00000000002BC154 "@"
 *   insn=0x00000000002BC154 string=0x00000000002BC158 ""
 *   insn=0x00000000002BC158 string=0x00000000002BC15C ""
 *   insn=0x00000000002BC160 string=0x00000000002BC164 ""
 *   insn=0x00000000002BC164 string=0x00000000002BC168 ""
 *   insn=0x00000000002BC170 string=0x00000000002BC174 "`6"
 *   insn=0x00000000002BC178 string=0x00000000002BC17C "h"
 *   insn=0x00000000002BC180 string=0x00000000002BC184 "h"
 *   insn=0x00000000002BC188 string=0x00000000002BC18C "h"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::GroundMeshGeneratorComponent::GroundMeshGeneratorComponent(
        Caver::GroundMeshGeneratorComponent *this)
{
  __int128 v1; // q0
  void *v2; // x0
  void *v3; // x0
  void *v4; // x0
  void *v5; // x0
  unsigned int *v6; // x8
  int v7; // w9
  unsigned int *v8; // x8
  int v9; // w9
  unsigned int *v10; // x8
  int v11; // w9
  unsigned int *v12; // x8
  int v13; // w9
  _QWORD v14[3]; // [xsp+28h] [xbp-68h] BYREF

  *(_QWORD *)&v1 = &off_6C4CA8;
  *((_QWORD *)&v1 + 1) = &off_6C4CE8;
  v14[2] = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  *((_QWORD *)this + 7) = &byte_6FD2F8;
  *((_DWORD *)this + 2) = 0;
  *((_QWORD *)this + 4) = 0;
  *((_QWORD *)this + 5) = 0;
  *((_BYTE *)this + 48) = 0;
  *((_QWORD *)this + 9) = 0;
  *(_QWORD *)this = off_6C4B90;
  *((_OWORD *)this + 1) = v1;
  *((_QWORD *)this + 11) = (char *)this + 72;
  *((_QWORD *)this + 12) = (char *)this + 72;
  *((_QWORD *)this + 10) = 0;
  *((_QWORD *)this + 13) = 0;
  *((_QWORD *)this + 14) = off_6C3D28;
  *((_DWORD *)this + 30) = 0;
  *((_QWORD *)this + 16) = 0;
  *((_QWORD *)this + 17) = &off_6C4D28;
  *((_DWORD *)this + 36) = 0;
  *((_QWORD *)this + 23) = off_6C3CD8;
  *((_QWORD *)this + 19) = 0;
  *((_QWORD *)this + 20) = off_6C3CD8;
  *((_DWORD *)this + 42) = 0;
  *((_QWORD *)this + 22) = 0;
  *((_DWORD *)this + 48) = 0;
  *((_QWORD *)this + 25) = 0;
  *((_DWORD *)this + 52) = 0;
  *(_QWORD *)((char *)this + 212) = 1120403456;
  *(_OWORD *)((char *)this + 220) = xmmword_589E00;
  sub_566BB8((int)v14, "polygon");
  Caver::Component::BindOutlet();
  v2 = (void *)(v14[0] - 24LL);
  if ( (__int64 *)(v14[0] - 24LL) != &qword_6FD2E0 )
  {
    v6 = (unsigned int *)(v14[0] - 8LL);
    if ( &pthread_create )
    {
      do
        v7 = __ldaxr(v6);
      while ( __stlxr(v7 - 1, v6) );
    }
    else
    {
      v7 = (*v6)--;
    }
    if ( v7 <= 0 )
      operator delete(v2);
  }
  sub_566BB8((int)v14, "targetMesh");
  Caver::Component::BindOutlet();
  v3 = (void *)(v14[0] - 24LL);
  if ( (__int64 *)(v14[0] - 24LL) != &qword_6FD2E0 )
  {
    v8 = (unsigned int *)(v14[0] - 8LL);
    if ( &pthread_create )
    {
      do
        v9 = __ldaxr(v8);
      while ( __stlxr(v9 - 1, v8) );
    }
    else
    {
      v9 = (*v8)--;
    }
    if ( v9 <= 0 )
      operator delete(v3);
  }
  sub_566BB8((int)v14, "frontTexMap");
  Caver::Component::BindOutlet();
  v4 = (void *)(v14[0] - 24LL);
  if ( (__int64 *)(v14[0] - 24LL) != &qword_6FD2E0 )
  {
    v10 = (unsigned int *)(v14[0] - 8LL);
    if ( &pthread_create )
    {
      do
        v11 = __ldaxr(v10);
      while ( __stlxr(v11 - 1, v10) );
    }
    else
    {
      v11 = (*v10)--;
    }
    if ( v11 <= 0 )
      operator delete(v4);
  }
  sub_566BB8((int)v14, "surfaceTexMap");
  Caver::Component::BindOutlet();
  v5 = (void *)(v14[0] - 24LL);
  if ( (__int64 *)(v14[0] - 24LL) != &qword_6FD2E0 )
  {
    v12 = (unsigned int *)(v14[0] - 8LL);
    if ( &pthread_create )
    {
      do
        v13 = __ldaxr(v12);
      while ( __stlxr(v13 - 1, v12) );
    }
    else
    {
      v13 = (*v12)--;
    }
    if ( v13 <= 0 )
      operator delete(v5);
  }
}

