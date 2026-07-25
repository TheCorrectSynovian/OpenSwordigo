/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002868F4
 * Mangled: _ZN5Caver23MagicExplosionComponentC2Ev
 * Demangled: Caver::MagicExplosionComponent::MagicExplosionComponent(void)
 *
 * Callers: 2
 *   0x00000000001F42E0  Caver::MagicExplosionComponent::MagicExplosionComponent(void)
 *   0x00000000001FE960  Caver::MagicExplosionComponent::MagicExplosionComponent(void)
 *
 * Callees: 10
 *   0x00000000001F4F60  operator delete[](void *)
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
 * Referenced strings: 133
 *   insn=0x0000000000286918 string=0x000000000028691C "Z"
 *   insn=0x000000000028691C string=0x0000000000286920 "{"
 *   insn=0x0000000000286920 string=0x0000000000286924 ")qF"
 *   insn=0x000000000028692C string=0x0000000000286930 "J"
 *   insn=0x0000000000286930 string=0x0000000000286934 "+"
 *   insn=0x0000000000286940 string=0x0000000000286944 "a"
 *   insn=0x0000000000286944 string=0x0000000000286948 "+"
 *   insn=0x0000000000286950 string=0x0000000000286954 "a"
 *   insn=0x0000000000286958 string=0x000000000028695C "jc"
 *   insn=0x000000000028695C string=0x0000000000286960 "j"
 *   insn=0x0000000000286964 string=0x0000000000286968 "a"
 *   insn=0x0000000000286974 string=0x0000000000286978 ")A"
 *   insn=0x0000000000286978 string=0x000000000028697C "h"
 *   insn=0x000000000028698C string=0x0000000000286990 "i"
 *   insn=0x0000000000286990 string=0x0000000000286994 "\t"
 *   insn=0x00000000002869B4 string=0x00000000002869B8 "a."
 *   insn=0x00000000002869B8 string=0x00000000002869BC "!"
 *   insn=0x00000000002869C0 string=0x00000000002869C4 "h"
 *   insn=0x00000000002869C4 string=0x00000000002869C8 "h"
 *   insn=0x00000000002869C8 string=0x00000000002869CC "y""
 *   insn=0x00000000002869D0 string=0x00000000002869D4 "ar"
 *   insn=0x00000000002869DC string=0x00000000002869E0 "hb"
 *   insn=0x00000000002869E8 string=0x00000000002869EC " "
 *   insn=0x0000000000286A04 string=0x0000000000588A18 "particleEmitter"
 *   insn=0x0000000000286A10 string=0x0000000000286A14 "i"
 *   insn=0x0000000000286A2C string=0x00000000001F6CE0 "0'"
 *   insn=0x0000000000286A3C string=0x0000000000286A40 "a"
 *   insn=0x0000000000286A40 string=0x0000000000594D27 "sound"
 *   insn=0x0000000000286A4C string=0x0000000000286A50 "Z"
 *   insn=0x0000000000286A78 string=0x0000000000286A7C "H"
 *   insn=0x0000000000286A84 string=0x0000000000286A88 "a"
 *   insn=0x0000000000286AAC string=0x0000000000286AB0 ")=G"
 *   insn=0x0000000000286AB0 string=0x0000000000286AB4 "!"
 *   insn=0x0000000000286AB8 string=0x0000000000286ABC "\t"
 *   insn=0x0000000000286AB8 string=0x0000000000286AF4 "\t"
 *   insn=0x0000000000286ABC string=0x0000000000286AC0 "*"
 *   insn=0x0000000000286AC0 string=0x0000000000286AC4 "\n"
 *   insn=0x0000000000286AC8 string=0x0000000000286ACC ""
 *   insn=0x0000000000286ACC string=0x0000000000286B00 "?"
 *   insn=0x0000000000286AD0 string=0x0000000000286AD4 ")=G"
 *   insn=0x0000000000286AD4 string=0x0000000000286AD8 "!"
 *   insn=0x0000000000286ADC string=0x0000000000286AE0 "\t"
 *   insn=0x0000000000286ADC string=0x0000000000286B14 "\t"
 *   insn=0x0000000000286AE0 string=0x0000000000286AE4 "*"
 *   insn=0x0000000000286AE4 string=0x0000000000286AE8 "\n"
 *   insn=0x0000000000286AF0 string=0x0000000000286B20 "?"
 *   insn=0x0000000000286AF4 string=0x0000000000286AF8 "*"
 *   insn=0x0000000000286AF8 string=0x0000000000286AFC "\n"
 *   insn=0x0000000000286B08 string=0x0000000000286B0C "&"
 *   insn=0x0000000000286B14 string=0x0000000000286B18 "*"
 *   insn=0x0000000000286B18 string=0x0000000000286B1C "\n"
 *   insn=0x0000000000286B34 string=0x00000000001F62D0 "0'"
 *   insn=0x0000000000286B3C string=0x0000000000286B40 "(a"
 *   insn=0x0000000000286B44 string=0x0000000000286B48 "@"
 *   insn=0x0000000000286B48 string=0x0000000000286BF0 "`"
 *   insn=0x0000000000286B4C string=0x0000000000286B50 "J=G"
 *   insn=0x0000000000286B50 string=0x0000000000286B54 ")!"
 *   insn=0x0000000000286B58 string=0x0000000000286B5C "*"
 *   insn=0x0000000000286B58 string=0x0000000000286BD4 "*"
 *   insn=0x0000000000286B5C string=0x0000000000286B60 "K"
 *   insn=0x0000000000286B60 string=0x0000000000286B64 "+"
 *   insn=0x0000000000286B6C string=0x0000000000286BB4 "_"
 *   insn=0x0000000000286B70 string=0x0000000000286B74 "`"
 *   insn=0x0000000000286B78 string=0x0000000000286B7C "&"
 *   insn=0x0000000000286B78 string=0x0000000000286BF8 "@"
 *   insn=0x0000000000286B7C string=0x0000000000286C14 "`"
 *   insn=0x0000000000286B84 string=0x0000000000286B88 "(a"
 *   insn=0x0000000000286B94 string=0x0000000000286B98 "J=G"
 *   insn=0x0000000000286B98 string=0x0000000000286B9C ")!"
 *   insn=0x0000000000286BA0 string=0x0000000000286BA4 "*"
 *   insn=0x0000000000286BA4 string=0x0000000000286BA8 "K"
 *   insn=0x0000000000286BA8 string=0x0000000000286BAC "+"
 *   insn=0x0000000000286BC4 string=0x0000000000286BC8 "`"
 *   insn=0x0000000000286BC8 string=0x0000000000286BCC "`"
 *   insn=0x0000000000286BD4 string=0x0000000000286BD8 "K"
 *   insn=0x0000000000286BD8 string=0x0000000000286BDC "+"
 *   insn=0x0000000000286BDC string=0x0000000000286BE0 "_"
 *   insn=0x0000000000286BF8 string=0x0000000000286BFC ""
 *   insn=0x0000000000286BFC string=0x0000000000286C00 ""
 *   insn=0x0000000000286C04 string=0x0000000000286C08 ""
 *   insn=0x0000000000286C08 string=0x0000000000286C0C ""
 *   insn=0x0000000000286C14 string=0x0000000000286C18 "z"
 *   insn=0x0000000000286C18 string=0x0000000000286C1C "@"
 *   insn=0x0000000000286C1C string=0x0000000000286C24 "@"
 *   insn=0x0000000000286C20 string=0x00000000001F4F60 "P'"
 *   insn=0x0000000000286C24 string=0x0000000000286C28 "z"
 *   insn=0x0000000000286C2C string=0x0000000000286C30 "@"
 *   insn=0x0000000000286C30 string=0x0000000000286C34 " "
 *   insn=0x0000000000286C34 string=0x0000000000286C38 "`"
 *   insn=0x0000000000286C38 string=0x0000000000286C3C "@"
 *   insn=0x0000000000286C3C string=0x0000000000286C40 " "
 *   insn=0x0000000000286C40 string=0x0000000000286C44 "`"
 *   insn=0x0000000000286C44 string=0x0000000000286C70 "@"
 *   insn=0x0000000000286C48 string=0x0000000000286C8C "`V@"
 *   insn=0x0000000000286C4C string=0x0000000000286C50 "@"
 *   insn=0x0000000000286C50 string=0x0000000000286C54 " "
 *   insn=0x0000000000286C58 string=0x0000000000286C5C "`"
 *   insn=0x0000000000286C64 string=0x0000000000286C68 " "
 *   insn=0x0000000000286C70 string=0x0000000000286C74 ""
 *   insn=0x0000000000286C74 string=0x0000000000286C78 ""
 *   insn=0x0000000000286C7C string=0x0000000000286C80 ""
 *   insn=0x0000000000286C80 string=0x0000000000286C84 ""
 *   insn=0x0000000000286C90 string=0x0000000000286C94 "@"
 *   insn=0x0000000000286C90 string=0x0000000000286CB0 "`R@"
 *   insn=0x0000000000286C94 string=0x0000000000286C98 ""
 *   insn=0x0000000000286C98 string=0x0000000000286C9C ""
 *   insn=0x0000000000286CA0 string=0x0000000000286CA4 ""
 *   insn=0x0000000000286CA4 string=0x0000000000286CA8 ""
 *   insn=0x0000000000286CB4 string=0x0000000000286CB8 "@"
 *   insn=0x0000000000286CB8 string=0x0000000000286CBC ""
 *   insn=0x0000000000286CBC string=0x0000000000286CC0 ""
 *   insn=0x0000000000286CC4 string=0x0000000000286CC8 ""
 *   insn=0x0000000000286CC8 string=0x0000000000286CCC ""
 *   insn=0x0000000000286CE0 string=0x0000000000286CE4 "@"
 *   insn=0x0000000000286CE0 string=0x0000000000286D00 "`B@"
 *   insn=0x0000000000286CE4 string=0x0000000000286CE8 ""
 *   insn=0x0000000000286CE8 string=0x0000000000286CEC ""
 *   insn=0x0000000000286CF0 string=0x0000000000286CF4 ""
 *   insn=0x0000000000286CF4 string=0x0000000000286CF8 ""
 *   insn=0x0000000000286D04 string=0x0000000000286D08 "h:"
 *   insn=0x0000000000286D0C string=0x0000000000286D10 "@"
 *   insn=0x0000000000286D10 string=0x0000000000286D14 ""
 *   insn=0x0000000000286D14 string=0x0000000000286D18 ""
 *   insn=0x0000000000286D1C string=0x0000000000286D20 ""
 *   insn=0x0000000000286D20 string=0x0000000000286D24 ""
 *   insn=0x0000000000286D30 string=0x00000000001FA4D0 "0'"
 *   insn=0x0000000000286D4C string=0x0000000000286D50 "h"@"
 *   insn=0x0000000000286D54 string=0x0000000000286D58 "a"
 *   insn=0x0000000000286D60 string=0x0000000000286D64 "Q"
 *   insn=0x0000000000286D64 string=0x0000000000286D68 "hz@"
 *   insn=0x0000000000286D6C string=0x0000000000286D70 "`."
 *   insn=0x0000000000286D74 string=0x0000000000286D78 "hr@"
 *   insn=0x0000000000286D7C string=0x0000000000286D80 "h"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::MagicExplosionComponent::MagicExplosionComponent(Caver::MagicExplosionComponent *this)
{
  __int128 v1; // q1
  void *v7; // x0
  void *v8; // x0
  unsigned int *v9; // x8
  int v10; // w9
  unsigned int *v11; // x8
  int v12; // w9
  _QWORD v13[3]; // [xsp+28h] [xbp-68h] BYREF

  *(_QWORD *)&v1 = &off_6C0908;
  *((_QWORD *)&v1 + 1) = &off_6C0948;
  v13[2] = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  *((_QWORD *)this + 7) = &byte_6FD2F8;
  *((_DWORD *)this + 2) = 0;
  *((_OWORD *)this + 1) = v1;
  *((_OWORD *)this + 2) = 0u;
  *((_BYTE *)this + 48) = 0;
  *(_OWORD *)((char *)this + 72) = 0u;
  *((_QWORD *)this + 11) = (char *)this + 72;
  *((_QWORD *)this + 12) = (char *)this + 72;
  __asm { FMOV            V1.4S, #1.0 }
  *(_QWORD *)this = off_6C07F0;
  *((_QWORD *)this + 13) = 0;
  *((_QWORD *)this + 14) = off_6C0268;
  *((_DWORD *)this + 30) = 0;
  *((_QWORD *)this + 16) = 0;
  *((_QWORD *)this + 17) = off_6BE248;
  *((_DWORD *)this + 36) = 0;
  *(_OWORD *)((char *)this + 152) = 0u;
  *((_OWORD *)this + 11) = _Q1;
  *((_DWORD *)this + 58) = 1125515264;
  *((_QWORD *)this + 21) = 0;
  *((_QWORD *)this + 28) = 0x3E99999A42C80000LL;
  *((_BYTE *)this + 242) = 0;
  *(_OWORD *)((char *)this + 296) = 0u;
  *((_DWORD *)this + 78) = 0;
  *(_OWORD *)((char *)this + 280) = 0u;
  *(_OWORD *)((char *)this + 264) = 0u;
  *((_BYTE *)this + 344) = 0;
  *((_QWORD *)this + 41) = 0;
  *((_QWORD *)this + 42) = 0;
  *((_QWORD *)this + 40) = 0;
  *((_QWORD *)this + 48) = 0;
  *((_QWORD *)this + 45) = 0;
  *((_QWORD *)this + 46) = 0;
  sub_566BB8((int)v13, "particleEmitter");
  Caver::Component::BindOutlet();
  v7 = (void *)(v13[0] - 24LL);
  if ( (__int64 *)(v13[0] - 24LL) != &qword_6FD2E0 )
  {
    v9 = (unsigned int *)(v13[0] - 8LL);
    if ( &pthread_create )
    {
      do
        v10 = __ldaxr(v9);
      while ( __stlxr(v10 - 1, v9) );
    }
    else
    {
      v10 = (*v9)--;
    }
    if ( v10 <= 0 )
      operator delete(v7);
  }
  sub_566BB8((int)v13, "sound");
  Caver::Component::BindOutlet();
  v8 = (void *)(v13[0] - 24LL);
  if ( (__int64 *)(v13[0] - 24LL) != &qword_6FD2E0 )
  {
    v11 = (unsigned int *)(v13[0] - 8LL);
    if ( &pthread_create )
    {
      do
        v12 = __ldaxr(v11);
      while ( __stlxr(v12 - 1, v11) );
    }
    else
    {
      v12 = (*v11)--;
    }
    if ( v12 <= 0 )
      operator delete(v8);
  }
}

