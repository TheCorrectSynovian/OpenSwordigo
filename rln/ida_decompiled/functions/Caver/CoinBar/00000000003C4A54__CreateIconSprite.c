/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000003C4A54
 * Mangled: _ZN5Caver7CoinBar16CreateIconSpriteEv
 * Demangled: Caver::CoinBar::CreateIconSprite(void)
 *
 * Callers: 1
 *   0x0000000000200270  Caver::CoinBar::CreateIconSprite(void)
 *
 * Callees: 10
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F9730  Caver::Sprite::Init(boost::intrusive_ptr<Caver::Texture> const&,int,int,bool)
 *   0x00000000001FA350  Caver::TextureLibrary::sharedLibrary(void)
 *   0x00000000001FF5B0  Caver::TextureLibrary::TextureForName(std::string const&,bool)
 *   0x0000000000200B90  Caver::Sprite::AddRectangle(Caver::Rectangle const&,Caver::Rectangle const&,Caver::Color const&)
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x0000000000566BB8  sub_566BB8
 *   0x000000000056A3A4  operator delete(void *)
 *   0x00000000005818C4  sub_5818C4
 *   0x00000000006FE668  pthread_create
 *
 * Referenced strings: 57
 *   insn=0x00000000003C4A68 string=0x00000000003C4A6C "U"
 *   insn=0x00000000003C4A78 string=0x00000000003C4A7C "5"
 *   insn=0x00000000003C4A7C string=0x00000000001FA350 "0'"
 *   insn=0x00000000003C4A80 string=0x00000000003C4A84 "a"
 *   insn=0x00000000003C4A84 string=0x0000000000592091 "ui_inventory_coin"
 *   insn=0x00000000003C4A90 string=0x00000000003C4A94 "I"
 *   insn=0x00000000003C4AAC string=0x00000000003C4AB0 "\t"
 *   insn=0x00000000003C4AB0 string=0x00000000003C4AB4 ")"
 *   insn=0x00000000003C4ABC string=0x00000000003C4AC0 "A"
 *   insn=0x00000000003C4AC0 string=0x00000000003C4B88 "\t"
 *   insn=0x00000000003C4AC4 string=0x00000000003C4AC8 "t"
 *   insn=0x00000000003C4AE4 string=0x00000000003C4AE8 "`"
 *   insn=0x00000000003C4AE4 string=0x00000000001F9730 "0'"
 *   insn=0x00000000003C4AF0 string=0x00000000003C4AF4 "B!"
 *   insn=0x00000000003C4AF8 string=0x00000000003C4AFC "a"
 *   insn=0x00000000003C4AFC string=0x00000000003C4B00 "h"
 *   insn=0x00000000003C4B08 string=0x00000000003C4B0C " ( "
 *   insn=0x00000000003C4B14 string=0x00000000003C4B18 ""
 *   insn=0x00000000003C4B1C string=0x00000000003C4B20 ""q"
 *   insn=0x00000000003C4B40 string=0x00000000003C4B44 "@"
 *   insn=0x00000000003C4B44 string=0x00000000003C4B48 ""
 *   insn=0x00000000003C4B48 string=0x00000000003C4B4C ""
 *   insn=0x00000000003C4B50 string=0x00000000003C4B54 ""
 *   insn=0x00000000003C4B54 string=0x00000000003C4B58 ""
 *   insn=0x00000000003C4B88 string=0x00000000003C4B8C ")=G"
 *   insn=0x00000000003C4B8C string=0x00000000003C4B90 "!"
 *   insn=0x00000000003C4B94 string=0x00000000003C4B98 "\t"
 *   insn=0x00000000003C4B94 string=0x00000000003C4BAC "\t"
 *   insn=0x00000000003C4B98 string=0x00000000003C4B9C "*"
 *   insn=0x00000000003C4B9C string=0x00000000003C4BA0 "\n"
 *   insn=0x00000000003C4BA8 string=0x00000000003C4BB8 "?"
 *   insn=0x00000000003C4BAC string=0x00000000003C4BB0 "*"
 *   insn=0x00000000003C4BB0 string=0x00000000003C4BB4 "\n"
 *   insn=0x00000000003C4BB8 string=0x00000000003C4BBC "L"
 *   insn=0x00000000003C4BCC string=0x00000000001F62D0 "0'"
 *   insn=0x00000000003C4BDC string=0x00000000003C4BE0 "@"
 *   insn=0x00000000003C4BE0 string=0x00000000003C4BE4 ""
 *   insn=0x00000000003C4BE4 string=0x00000000003C4BE8 ""
 *   insn=0x00000000003C4BE8 string=0x00000000003C4BEC "!"
 *   insn=0x00000000003C4BEC string=0x00000000003C4BF0 ""
 *   insn=0x00000000003C4BF0 string=0x00000000003C4BF4 ""
 *   insn=0x00000000003C4C04 string=0x00000000003C4C08 "\n"
 *   insn=0x00000000003C4C08 string=0x00000000003C4C0C "J"
 *   insn=0x00000000003C4C10 string=0x00000000003C4C14 "(a"
 *   insn=0x00000000003C4C1C string=0x00000000003C4C20 "\n"
 *   insn=0x00000000003C4C20 string=0x00000000003C4C24 "J=G"
 *   insn=0x00000000003C4C24 string=0x00000000003C4C28 ")!"
 *   insn=0x00000000003C4C2C string=0x00000000003C4C30 "*"
 *   insn=0x00000000003C4C2C string=0x00000000003C4C5C "*"
 *   insn=0x00000000003C4C30 string=0x00000000003C4C34 "K"
 *   insn=0x00000000003C4C34 string=0x00000000003C4C38 "+"
 *   insn=0x00000000003C4C3C string=0x00000000003C4C40 "_"
 *   insn=0x00000000003C4C40 string=0x00000000003C4C44 "l"
 *   insn=0x00000000003C4C54 string=0x00000000003C4C58 ""
 *   insn=0x00000000003C4C5C string=0x00000000003C4C60 "K"
 *   insn=0x00000000003C4C60 string=0x00000000003C4C64 "+"
 *   insn=0x00000000003C4C64 string=0x00000000003C4C68 "_"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::CoinBar::CreateIconSprite(Caver::CoinBar *this)
{
  void *v2; // x0
  int v3; // w22
  float v4; // w23
  float v5; // s0
  float v6; // s1
  unsigned int v7; // w8
  __int64 result; // x0
  int v9; // w8
  unsigned int *v10; // x8
  int v11; // w9
  int v12; // [xsp+0h] [xbp-60h] BYREF
  unsigned __int64 v13; // [xsp+8h] [xbp-58h] BYREF
  int v14; // [xsp+10h] [xbp-50h]
  float v15; // [xsp+14h] [xbp-4Ch]
  __int64 v16; // [xsp+20h] [xbp-40h]
  __int64 v17; // [xsp+28h] [xbp-38h]

  v17 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  Caver::TextureLibrary::sharedLibrary(this);
  sub_566BB8((int)&v13, "ui_inventory_coin");
  Caver::TextureLibrary::TextureForName();
  v2 = (void *)(v13 - 24);
  if ( (__int64 *)(v13 - 24) != &qword_6FD2E0 )
  {
    v10 = (unsigned int *)(v13 - 8);
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
      operator delete(v2);
  }
  v3 = *(_DWORD *)(v16 + 84);
  v4 = *(float *)(v16 + 88);
  Caver::Sprite::Init();
  v5 = *((float *)this + 36) * 0.5;
  v6 = *((float *)this + 34);
  v7 = *((_DWORD *)this + 33);
  v14 = v3;
  v15 = v4;
  v13 = __PAIR64__(COERCE_UNSIGNED_INT(roundf((float)(v6 + v5) - (float)(v4 * 0.5))), v7);
  v12 = -1;
  Caver::Sprite::AddRectangle(
    (Caver::CoinBar *)((char *)this + 248),
    (const Caver::Rectangle *)&v13,
    (const Caver::Rectangle *)(v16 + 92),
    (const Caver::Color *)&v12);
  result = v16;
  if ( v16 )
  {
    v9 = *(_DWORD *)(v16 + 8) - 1;
    *(_DWORD *)(v16 + 8) = v9;
    if ( !v9 )
      return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)result + 8LL))(result);
  }
  return result;
}

