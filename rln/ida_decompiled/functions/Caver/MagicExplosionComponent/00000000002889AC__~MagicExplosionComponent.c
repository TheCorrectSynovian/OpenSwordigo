/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002889AC
 * Mangled: _ZN5Caver23MagicExplosionComponentD2Ev
 * Demangled: Caver::MagicExplosionComponent::~MagicExplosionComponent()
 *
 * Callers: 1
 *   0x00000000001FD120  Caver::MagicExplosionComponent::~MagicExplosionComponent()
 *
 * Callees: 7
 *   0x00000000001F4F60  operator delete[](void *)
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000001FA4D0  Caver::Component::~Component()
 *   0x00000000001FD120  Caver::MagicExplosionComponent::~MagicExplosionComponent()
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x0000000000288CCC  Caver::MagicExplosionComponent::Clone(void)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 119
 *   insn=0x00000000002889B8 string=0x00000000002889BC "qF"
 *   insn=0x00000000002889C0 string=0x00000000002889C4 "`"
 *   insn=0x00000000002889C4 string=0x00000000002889C8 "\n"
 *   insn=0x00000000002889C8 string=0x00000000002889CC "\tA"
 *   insn=0x00000000002889CC string=0x00000000002889D0 "@"
 *   insn=0x00000000002889D0 string=0x00000000002889D4 ""
 *   insn=0x00000000002889D8 string=0x00000000002889DC "i"
 *   insn=0x00000000002889DC string=0x00000000002889E0 "`"
 *   insn=0x00000000002889E4 string=0x00000000002889E8 "@"
 *   insn=0x00000000002889E4 string=0x0000000000288A04 "`"
 *   insn=0x00000000002889E8 string=0x00000000002889EC ""
 *   insn=0x00000000002889EC string=0x00000000002889F0 ""
 *   insn=0x00000000002889F4 string=0x00000000002889F8 ""
 *   insn=0x00000000002889F8 string=0x00000000002889FC ""
 *   insn=0x0000000000288A04 string=0x0000000000288A08 "@"
 *   insn=0x0000000000288A08 string=0x0000000000288A0C "U"
 *   insn=0x0000000000288A08 string=0x0000000000288A10 "`"
 *   insn=0x0000000000288A0C string=0x00000000001F4F60 "P'"
 *   insn=0x0000000000288A10 string=0x0000000000288A14 "@"
 *   insn=0x0000000000288A14 string=0x0000000000288A18 "R"
 *   insn=0x0000000000288A14 string=0x0000000000288A1C "`"
 *   insn=0x0000000000288A1C string=0x0000000000288A20 "@"
 *   insn=0x0000000000288A20 string=0x0000000000288A24 "O"
 *   insn=0x0000000000288A20 string=0x0000000000288A28 "`"
 *   insn=0x0000000000288A28 string=0x0000000000288A2C "@"
 *   insn=0x0000000000288A2C string=0x0000000000288A30 "L"
 *   insn=0x0000000000288A2C string=0x0000000000288A34 "`"
 *   insn=0x0000000000288A38 string=0x0000000000288A3C "@"
 *   insn=0x0000000000288A38 string=0x0000000000288A58 "`V@"
 *   insn=0x0000000000288A3C string=0x0000000000288A40 ""
 *   insn=0x0000000000288A40 string=0x0000000000288A44 ""
 *   insn=0x0000000000288A48 string=0x0000000000288A4C ""
 *   insn=0x0000000000288A4C string=0x0000000000288A50 ""
 *   insn=0x0000000000288A5C string=0x0000000000288A60 "@"
 *   insn=0x0000000000288A5C string=0x0000000000288A7C "`R@"
 *   insn=0x0000000000288A60 string=0x0000000000288A64 ""
 *   insn=0x0000000000288A64 string=0x0000000000288A68 ""
 *   insn=0x0000000000288A6C string=0x0000000000288A70 ""
 *   insn=0x0000000000288A70 string=0x0000000000288A74 ""
 *   insn=0x0000000000288A80 string=0x0000000000288A84 "@"
 *   insn=0x0000000000288A84 string=0x0000000000288A88 ""
 *   insn=0x0000000000288A88 string=0x0000000000288A8C ""
 *   insn=0x0000000000288A90 string=0x0000000000288A94 ""
 *   insn=0x0000000000288A94 string=0x0000000000288A98 ""
 *   insn=0x0000000000288AA0 string=0x0000000000288AA4 "`N@"
 *   insn=0x0000000000288AA4 string=0x0000000000288AA8 ")E"
 *   insn=0x0000000000288AA8 string=0x0000000000288AAC "A"
 *   insn=0x0000000000288AAC string=0x0000000000288AB0 "hF"
 *   insn=0x0000000000288AB4 string=0x0000000000288AB8 "@"
 *   insn=0x0000000000288AB8 string=0x0000000000288ABC ""
 *   insn=0x0000000000288ABC string=0x0000000000288AC0 ""
 *   insn=0x0000000000288AC4 string=0x0000000000288AC8 ""
 *   insn=0x0000000000288AC8 string=0x0000000000288ACC ""
 *   insn=0x0000000000288AD4 string=0x0000000000288AD8 "`B@"
 *   insn=0x0000000000288AD8 string=0x0000000000288ADC "mB"
 *   insn=0x0000000000288ADC string=0x0000000000288AE0 "A"
 *   insn=0x0000000000288AE0 string=0x0000000000288AE4 "h:"
 *   insn=0x0000000000288AE8 string=0x0000000000288AEC "@"
 *   insn=0x0000000000288AEC string=0x0000000000288AF0 ""
 *   insn=0x0000000000288AF0 string=0x0000000000288AF4 ""
 *   insn=0x0000000000288AF8 string=0x0000000000288AFC ""
 *   insn=0x0000000000288AFC string=0x0000000000288B00 ""
 *   insn=0x0000000000288B10 string=0x0000000000288B14 "o"
 *   insn=0x0000000000288B14 string=0x00000000001FA4D0 "0'"
 *   insn=0x0000000000288B18 string=0x0000000000288B1C "Y"
 *   insn=0x0000000000288B20 string=0x0000000000288B24 "J"
 *   insn=0x0000000000288B28 string=0x0000000000288B2C ";"
 *   insn=0x0000000000288B30 string=0x0000000000288B34 "`R@"
 *   insn=0x0000000000288B34 string=0x0000000000288B38 " "
 *   insn=0x0000000000288B38 string=0x0000000000288B3C "7"
 *   insn=0x0000000000288B38 string=0x0000000000288BFC "@"
 *   insn=0x0000000000288B40 string=0x0000000000288B44 "`V@"
 *   insn=0x0000000000288B48 string=0x0000000000288B4C "*"
 *   insn=0x0000000000288B48 string=0x0000000000288BD8 "@"
 *   insn=0x0000000000288B4C string=0x0000000000288BF4 "`R@"
 *   insn=0x0000000000288B54 string=0x0000000000288B58 "H"
 *   insn=0x0000000000288B58 string=0x0000000000288B5C "`"
 *   insn=0x0000000000288B60 string=0x0000000000288B64 "`"
 *   insn=0x0000000000288B68 string=0x0000000000288B6C "`"
 *   insn=0x0000000000288B70 string=0x0000000000288B74 "`"
 *   insn=0x0000000000288B78 string=0x0000000000288BB4 "@"
 *   insn=0x0000000000288B7C string=0x0000000000288BD0 "`V@"
 *   insn=0x0000000000288B84 string=0x0000000000288B88 "`"
 *   insn=0x0000000000288B90 string=0x0000000000288B94 "`"
 *   insn=0x0000000000288B9C string=0x0000000000288BA0 "`"
 *   insn=0x0000000000288BA8 string=0x0000000000288BAC "`"
 *   insn=0x0000000000288BB4 string=0x0000000000288BB8 ""
 *   insn=0x0000000000288BB8 string=0x0000000000288BBC ""
 *   insn=0x0000000000288BC0 string=0x0000000000288BC4 ""
 *   insn=0x0000000000288BC4 string=0x0000000000288BC8 ""
 *   insn=0x0000000000288BD8 string=0x0000000000288BDC ""
 *   insn=0x0000000000288BDC string=0x0000000000288BE0 ""
 *   insn=0x0000000000288BE4 string=0x0000000000288BE8 ""
 *   insn=0x0000000000288BE8 string=0x0000000000288BEC ""
 *   insn=0x0000000000288BFC string=0x0000000000288C00 ""
 *   insn=0x0000000000288C00 string=0x0000000000288C04 ""
 *   insn=0x0000000000288C08 string=0x0000000000288C0C ""
 *   insn=0x0000000000288C0C string=0x0000000000288C10 ""
 *   insn=0x0000000000288C18 string=0x0000000000288C1C "`N@"
 *   insn=0x0000000000288C1C string=0x0000000000288C20 ")E"
 *   insn=0x0000000000288C20 string=0x0000000000288C24 "A"
 *   insn=0x0000000000288C24 string=0x0000000000288C28 "hF"
 *   insn=0x0000000000288C2C string=0x0000000000288C30 "@"
 *   insn=0x0000000000288C30 string=0x0000000000288C34 ""
 *   insn=0x0000000000288C34 string=0x0000000000288C38 ""
 *   insn=0x0000000000288C3C string=0x0000000000288C40 ""
 *   insn=0x0000000000288C40 string=0x0000000000288C44 ""
 *   insn=0x0000000000288C4C string=0x0000000000288C50 "`B@"
 *   insn=0x0000000000288C50 string=0x0000000000288C54 "mB"
 *   insn=0x0000000000288C54 string=0x0000000000288C58 "A"
 *   insn=0x0000000000288C58 string=0x0000000000288C5C "h:"
 *   insn=0x0000000000288C60 string=0x0000000000288C64 "@"
 *   insn=0x0000000000288C64 string=0x0000000000288C68 ""
 *   insn=0x0000000000288C68 string=0x0000000000288C6C ""
 *   insn=0x0000000000288C70 string=0x0000000000288C74 ""
 *   insn=0x0000000000288C74 string=0x0000000000288C78 ""
 *   insn=0x0000000000288CA4 string=0x00000000001FD120 "0'"
 *   insn=0x0000000000288CB4 string=0x00000000001F72B0 "0'"
 *   insn=0x0000000000288CBC string=0x0000000000288CC0 "|"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::MagicExplosionComponent::~MagicExplosionComponent(Caver::MagicExplosionComponent *this)
{
  _DWORD *v2; // x0
  __int128 v3; // q0
  int v4; // w8
  void *v5; // x0
  void *v6; // x0
  void *v7; // x0
  void *v8; // x0
  _DWORD *v9; // x0
  int v10; // w8
  _DWORD *v11; // x0
  int v12; // w8
  _DWORD *v13; // x0
  int v14; // w8
  _DWORD *v15; // x0
  int v16; // w8
  _DWORD *v17; // x0
  int v18; // w8

  v2 = (_DWORD *)*((_QWORD *)this + 48);
  *(_QWORD *)&v3 = &off_6C0908;
  *((_QWORD *)&v3 + 1) = &off_6C0948;
  *(_QWORD *)this = off_6C07F0;
  *((_OWORD *)this + 1) = v3;
  if ( v2 )
  {
    v4 = v2[2] - 1;
    v2[2] = v4;
    if ( !v4 )
      (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v2 + 8LL))(v2);
  }
  v5 = (void *)*((_QWORD *)this + 46);
  if ( v5 )
    operator delete[](v5);
  v6 = (void *)*((_QWORD *)this + 45);
  if ( v6 )
    operator delete[](v6);
  v7 = (void *)*((_QWORD *)this + 40);
  if ( v7 )
    operator delete[](v7);
  v8 = (void *)*((_QWORD *)this + 37);
  if ( v8 )
    operator delete[](v8);
  v9 = (_DWORD *)*((_QWORD *)this + 33);
  if ( v9 )
  {
    v10 = v9[2] - 1;
    v9[2] = v10;
    if ( !v10 )
      (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v9 + 8LL))(v9);
  }
  v11 = (_DWORD *)*((_QWORD *)this + 21);
  if ( v11 )
  {
    v12 = v11[2] - 1;
    v11[2] = v12;
    if ( !v12 )
      (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v11 + 8LL))(v11);
  }
  v13 = (_DWORD *)*((_QWORD *)this + 20);
  if ( v13 )
  {
    v14 = v13[2] - 1;
    v13[2] = v14;
    if ( !v14 )
      (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v13 + 8LL))(v13);
  }
  v15 = (_DWORD *)*((_QWORD *)this + 19);
  *((_QWORD *)this + 17) = off_6BE248;
  if ( v15 )
  {
    v16 = v15[2] - 1;
    v15[2] = v16;
    if ( !v16 )
      (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v15 + 8LL))(v15);
  }
  v17 = (_DWORD *)*((_QWORD *)this + 16);
  *((_QWORD *)this + 14) = off_6C0268;
  if ( v17 )
  {
    v18 = v17[2] - 1;
    v17[2] = v18;
    if ( !v18 )
      (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v17 + 8LL))(v17);
  }
  Caver::Component::~Component(this);
}

