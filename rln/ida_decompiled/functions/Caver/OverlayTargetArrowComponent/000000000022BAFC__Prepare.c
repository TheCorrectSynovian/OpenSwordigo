/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000022BAFC
 * Mangled: _ZN5Caver27OverlayTargetArrowComponent7PrepareEv
 * Demangled: Caver::OverlayTargetArrowComponent::Prepare(void)
 *
 * Callers: 0
 *
 * Callees: 16
 *   0x00000000001F4F60  operator delete[](void *)
 *   0x00000000001F55E0  operator new(ulong)
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000001F81D0  Caver::SceneObject::SetAlwaysActive(bool)
 *   0x00000000001F9730  Caver::Sprite::Init(boost::intrusive_ptr<Caver::Texture> const&,int,int,bool)
 *   0x00000000001FA350  Caver::TextureLibrary::sharedLibrary(void)
 *   0x00000000001FDA30  Caver::Vector2::Rounded(void)
 *   0x00000000001FF5B0  Caver::TextureLibrary::TextureForName(std::string const&,bool)
 *   0x0000000000200B90  Caver::Sprite::AddRectangle(Caver::Rectangle const&,Caver::Rectangle const&,Caver::Color const&)
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x000000000022BEF8  Caver::OverlayTargetArrowComponent::AddTargetObject(boost::intrusive_ptr<Caver::SceneObject> const&)
 *   0x0000000000566BB8  sub_566BB8
 *   0x000000000056A3A4  operator delete(void *)
 *   0x00000000005818C4  sub_5818C4
 *   0x00000000006FE668  pthread_create
 *
 * Referenced strings: 84
 *   insn=0x000000000022BB10 string=0x000000000022BB14 "U"
 *   insn=0x000000000022BB24 string=0x000000000022BB28 "`"
 *   insn=0x000000000022BB2C string=0x000000000022BB30 ":"
 *   insn=0x000000000022BB2C string=0x00000000001F81D0 "0'"
 *   insn=0x000000000022BB30 string=0x00000000001FA350 "0'"
 *   insn=0x000000000022BB38 string=0x000000000058432C "ui_guide_arrow"
 *   insn=0x000000000022BB64 string=0x000000000022BB68 ")"
 *   insn=0x000000000022BB70 string=0x000000000022BB74 "a\t"
 *   insn=0x000000000022BB78 string=0x000000000022BB7C "AE"
 *   insn=0x000000000022BB84 string=0x00000000001F55E0 "P'"
 *   insn=0x000000000022BBA0 string=0x000000000022BBA4 "tR@"
 *   insn=0x000000000022BBA4 string=0x000000000022BBA8 "`R"
 *   insn=0x000000000022BBA8 string=0x000000000022BBAC "t"
 *   insn=0x000000000022BBB0 string=0x000000000022BBB4 "@"
 *   insn=0x000000000022BBB8 string=0x00000000001F4F60 "P'"
 *   insn=0x000000000022BBBC string=0x000000000022BBC0 "@"
 *   insn=0x000000000022BBCC string=0x000000000022BBD0 "@"
 *   insn=0x000000000022BBD0 string=0x000000000022BBD4 ""
 *   insn=0x000000000022BBD4 string=0x000000000022BBD8 ""
 *   insn=0x000000000022BBDC string=0x000000000022BBE0 ""
 *   insn=0x000000000022BBE0 string=0x000000000022BBE4 ""
 *   insn=0x000000000022BBF0 string=0x000000000022BBF4 "`R@"
 *   insn=0x000000000022BBF0 string=0x00000000001F72B0 "0'"
 *   insn=0x000000000022BC08 string=0x000000000022BC0C "sR@"
 *   insn=0x000000000022BC08 string=0x00000000001F9730 "0'"
 *   insn=0x000000000022BC24 string=0x00000000001FDA30 "0'"
 *   insn=0x000000000022BC2C string=0x000000000022BC30 "\n"
 *   insn=0x000000000022BC38 string=0x000000000022BC3C ""q"
 *   insn=0x000000000022BC58 string=0x000000000022BC5C "@"
 *   insn=0x000000000022BC5C string=0x000000000022BC60 ""
 *   insn=0x000000000022BC60 string=0x000000000022BC64 ""
 *   insn=0x000000000022BC68 string=0x000000000022BC6C ""
 *   insn=0x000000000022BC6C string=0x000000000022BC70 ""
 *   insn=0x000000000022BC84 string=0x000000000022BCE4 "{)"
 *   insn=0x000000000022BCA0 string=0x000000000022BCA4 ")=G"
 *   insn=0x000000000022BCA4 string=0x000000000022BCA8 "!"
 *   insn=0x000000000022BCAC string=0x000000000022BCB0 "\t"
 *   insn=0x000000000022BCAC string=0x000000000022BCC4 "\t"
 *   insn=0x000000000022BCB0 string=0x000000000022BCB4 "*"
 *   insn=0x000000000022BCB4 string=0x000000000022BCB8 "\n"
 *   insn=0x000000000022BCC0 string=0x000000000022BCD0 "?"
 *   insn=0x000000000022BCC4 string=0x000000000022BCC8 "*"
 *   insn=0x000000000022BCC8 string=0x000000000022BCCC "\n"
 *   insn=0x000000000022BCD0 string=0x000000000022BCD4 ","
 *   insn=0x000000000022BCE4 string=0x00000000001F62D0 "0'"
 *   insn=0x000000000022BCEC string=0x000000000022BCF0 "p-"
 *   insn=0x000000000022BCF8 string=0x000000000022BCFC "*"
 *   insn=0x000000000022BCF8 string=0x000000000022BD88 "@"
 *   insn=0x000000000022BD0C string=0x000000000022BD10 "J"
 *   insn=0x000000000022BD14 string=0x000000000022BD18 "(a"
 *   insn=0x000000000022BD1C string=0x000000000022BD20 " "
 *   insn=0x000000000022BD24 string=0x000000000022BD28 "J=G"
 *   insn=0x000000000022BD28 string=0x000000000022BD2C ")!"
 *   insn=0x000000000022BD30 string=0x000000000022BD34 "*"
 *   insn=0x000000000022BD30 string=0x000000000022BD60 "*"
 *   insn=0x000000000022BD34 string=0x000000000022BD38 "K"
 *   insn=0x000000000022BD38 string=0x000000000022BD3C "+"
 *   insn=0x000000000022BD40 string=0x000000000022BD44 "_"
 *   insn=0x000000000022BD60 string=0x000000000022BD64 "K"
 *   insn=0x000000000022BD64 string=0x000000000022BD68 "+"
 *   insn=0x000000000022BD68 string=0x000000000022BD6C "_"
 *   insn=0x000000000022BD88 string=0x000000000022BD8C ""
 *   insn=0x000000000022BD8C string=0x000000000022BD90 ""
 *   insn=0x000000000022BD94 string=0x000000000022BD98 ""
 *   insn=0x000000000022BD98 string=0x000000000022BD9C ""
 *   insn=0x000000000022BDA8 string=0x000000000022BDAC "h"
 *   insn=0x000000000022BDC4 string=0x000000000022BDC8 "V"
 *   insn=0x000000000022BDDC string=0x000000000022BDE0 "h"
 *   insn=0x000000000022BDE0 string=0x000000000022BDE4 "AE"
 *   insn=0x000000000022BE0C string=0x000000000022BE10 "u"
 *   insn=0x000000000022BE14 string=0x000000000022BE18 "@"
 *   insn=0x000000000022BE18 string=0x000000000022BE1C "Q$"
 *   insn=0x000000000022BE20 string=0x000000000022BE24 "@"
 *   insn=0x000000000022BE24 string=0x000000000022BE28 "N$"
 *   insn=0x000000000022BE30 string=0x000000000022BE34 "@"
 *   insn=0x000000000022BE34 string=0x000000000022BE38 ""
 *   insn=0x000000000022BE38 string=0x000000000022BE3C ""
 *   insn=0x000000000022BE40 string=0x000000000022BE44 ""
 *   insn=0x000000000022BE44 string=0x000000000022BE48 ""
 *   insn=0x000000000022BE68 string=0x000000000022BE6C "16"
 *   insn=0x000000000022BE90 string=0x000000000022BE94 "\t"
 *   insn=0x000000000022BE9C string=0x000000000022BEA0 "h"
 *   insn=0x000000000022BEB0 string=0x000000000022BEB4 "7S"
 *   insn=0x000000000022BEF0 string=0x000000000022BEF4 "tV"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::OverlayTargetArrowComponent::Prepare(Caver::SceneObject **this)
{
  Caver::TextureLibrary *v2; // x0
  void *v3; // x0
  float32x2_t v4; // d8
  __int64 v5; // x0
  Caver::SceneObject *v6; // x20
  void *v7; // x0
  void *v8; // x0
  _DWORD *v9; // x0
  int v10; // w8
  Caver::Sprite *v11; // x19
  __int64 result; // x0
  int v13; // w8
  unsigned int *v14; // x8
  int v15; // w9
  int v16; // [xsp+74h] [xbp-58h] BYREF
  unsigned __int64 v17; // [xsp+7Ch] [xbp-50h] BYREF
  __int64 v18; // [xsp+84h] [xbp-48h] BYREF
  _QWORD v19[2]; // [xsp+8Ch] [xbp-40h] BYREF
  __int64 v20; // [xsp+9Ch] [xbp-30h]
  __int64 v21; // [xsp+A4h] [xbp-28h]

  v21 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  Caver::SceneObject::SetAlwaysActive(this[5]);
  Caver::TextureLibrary::sharedLibrary(v2);
  sub_566BB8((int)v19, "ui_guide_arrow");
  Caver::TextureLibrary::TextureForName();
  v3 = (void *)(v19[0] - 24LL);
  if ( (__int64 *)(v19[0] - 24LL) != &qword_6FD2E0 )
  {
    v14 = (unsigned int *)(v19[0] - 8LL);
    if ( &pthread_create )
    {
      do
        v15 = __ldaxr(v14);
      while ( __stlxr(v15 - 1, v14) );
    }
    else
    {
      v15 = (*v14)--;
    }
    if ( v15 <= 0 )
      operator delete(v3);
  }
  v4.n64_u64[0] = *(unsigned __int64 *)(v20 + 84);
  v5 = operator new(0x58u);
  *(_DWORD *)(v5 + 48) = 0;
  *(_BYTE *)(v5 + 80) = 0;
  *(_OWORD *)(v5 + 16) = 0u;
  *(_OWORD *)(v5 + 32) = 0u;
  *(_OWORD *)v5 = 0u;
  *(_OWORD *)(v5 + 64) = 0u;
  *(_QWORD *)(v5 + 56) = 0;
  v6 = this[20];
  this[20] = (Caver::SceneObject *)v5;
  if ( v6 )
  {
    v7 = (void *)*((_QWORD *)v6 + 7);
    if ( v7 )
      operator delete[](v7);
    v8 = (void *)*((_QWORD *)v6 + 4);
    if ( v8 )
      operator delete[](v8);
    v9 = *(_DWORD **)v6;
    if ( *(_QWORD *)v6 )
    {
      v10 = v9[2] - 1;
      v9[2] = v10;
      if ( !v10 )
        (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v9 + 8LL))(v9);
    }
    operator delete(v6);
  }
  Caver::Sprite::Init();
  v11 = this[20];
  v17 = vmul_f32(v4, (float32x2_t)0xBF000000BF000000LL).n64_u64[0];
  Caver::Vector2::Rounded(&v18, (Caver::Vector2 *)&v17);
  v19[1] = v4.n64_u64[0];
  v19[0] = v18;
  v16 = -1;
  Caver::Sprite::AddRectangle(
    v11,
    (const Caver::Rectangle *)v19,
    (const Caver::Rectangle *)(v20 + 92),
    (const Caver::Color *)&v16);
  result = v20;
  if ( v20 )
  {
    v13 = *(_DWORD *)(v20 + 8) - 1;
    *(_DWORD *)(v20 + 8) = v13;
    if ( !v13 )
      return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)result + 8LL))(result);
  }
  return result;
}

