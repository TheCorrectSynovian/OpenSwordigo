/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000022E5C8
 * Mangled: _ZN5Caver20OverlayTextComponent12UpdateSpriteEv
 * Demangled: Caver::OverlayTextComponent::UpdateSprite(void)
 *
 * Callers: 2
 *   0x00000000001F6950  Caver::OverlayTextComponent::UpdateSprite(void)
 *   0x000000000022E30C  Caver::OverlayTextComponent::UpdateText(void)
 *
 * Callees: 21
 *   0x00000000001F3820  Caver::RenderingContext::SetDefaultBlendFunc(void)
 *   0x00000000001F4F60  operator delete[](void *)
 *   0x00000000001F55E0  operator new(ulong)
 *   0x00000000001F5ED0  Caver::RenderingContext::UseProgram(uint)
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F6950  Caver::OverlayTextComponent::UpdateSprite(void)
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000001FA350  Caver::TextureLibrary::sharedLibrary(void)
 *   0x00000000001FA470  Caver::RenderingContext::SetAlpha(float)
 *   0x00000000001FB1A0  Caver::RenderingContext::SetColor(Caver::Color const&)
 *   0x00000000001FC450  Caver::RenderingContext::SetBlendingEnabled(bool)
 *   0x00000000001FC610  Caver::FontText::Draw(Caver::RenderingContext *)
 *   0x00000000001FCDA0  Caver::Sprite::Draw(Caver::RenderingContext *)
 *   0x00000000001FD140  Caver::Camera::ScreenPointFromWorldPosition(Caver::Vector3 const&,Caver::Rectangle const&,float *)
 *   0x00000000001FD5B0  Caver::Sprite::InitWithTexture(boost::intrusive_ptr<Caver::Texture> const&,Caver::Rectangle const&)
 *   0x00000000001FDA30  Caver::Vector2::Rounded(void)
 *   0x00000000001FEBA0  Caver::RenderingContext::SetMatrix(Caver::Matrix4 const&)
 *   0x00000000001FF5B0  Caver::TextureLibrary::TextureForName(std::string const&,bool)
 *   0x0000000000202080  Caver::OverlayTextComponent::UpdateText(void)
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 96
 *   insn=0x000000000022E5DC string=0x000000000022E5E0 "V"
 *   insn=0x000000000022E5F8 string=0x000000000022E5FC ""
 *   insn=0x000000000022E5FC string=0x000000000022E600 "H"
 *   insn=0x000000000022E600 string=0x000000000022E604 "S/"
 *   insn=0x000000000022E600 string=0x000000000022E6E8 "tR@"
 *   insn=0x000000000022E604 string=0x00000000001FA350 "0'"
 *   insn=0x000000000022E61C string=0x000000000022E73C "tR@"
 *   insn=0x000000000022E624 string=0x00000000001F55E0 "P'"
 *   insn=0x000000000022E644 string=0x000000000022E648 "uR@"
 *   insn=0x000000000022E648 string=0x000000000022E64C "tR"
 *   insn=0x000000000022E654 string=0x000000000022E658 "@"
 *   insn=0x000000000022E658 string=0x000000000022E65C "A"
 *   insn=0x000000000022E65C string=0x00000000001F4F60 "P'"
 *   insn=0x000000000022E660 string=0x000000000022E664 "@"
 *   insn=0x000000000022E664 string=0x000000000022E668 ">"
 *   insn=0x000000000022E670 string=0x000000000022E674 "@"
 *   insn=0x000000000022E674 string=0x000000000022E678 ""
 *   insn=0x000000000022E678 string=0x000000000022E67C ""
 *   insn=0x000000000022E680 string=0x000000000022E684 ""
 *   insn=0x000000000022E684 string=0x000000000022E688 ""
 *   insn=0x000000000022E690 string=0x000000000022E694 "#"
 *   insn=0x000000000022E694 string=0x000000000022E698 "tR@"
 *   insn=0x000000000022E694 string=0x00000000001F72B0 "0'"
 *   insn=0x000000000022E6B8 string=0x00000000001FDA30 "0'"
 *   insn=0x000000000022E6C0 string=0x000000000022E6C4 "AE"
 *   insn=0x000000000022E6E0 string=0x000000000022E6E4 "*"
 *   insn=0x000000000022E6E0 string=0x00000000001FD5B0 "0'"
 *   insn=0x000000000022E6F4 string=0x000000000022E6F8 "@"
 *   insn=0x000000000022E700 string=0x000000000022E704 "@"
 *   insn=0x000000000022E710 string=0x000000000022E714 "@"
 *   insn=0x000000000022E714 string=0x000000000022E718 ""
 *   insn=0x000000000022E718 string=0x000000000022E71C ""
 *   insn=0x000000000022E720 string=0x000000000022E724 ""
 *   insn=0x000000000022E724 string=0x000000000022E728 ""
 *   insn=0x000000000022E740 string=0x000000000022E744 "T"
 *   insn=0x000000000022E748 string=0x000000000022E74C "@"
 *   insn=0x000000000022E754 string=0x000000000022E758 "@"
 *   insn=0x000000000022E764 string=0x000000000022E768 "@"
 *   insn=0x000000000022E768 string=0x000000000022E76C ""
 *   insn=0x000000000022E76C string=0x000000000022E770 ""
 *   insn=0x000000000022E774 string=0x000000000022E778 ""
 *   insn=0x000000000022E778 string=0x000000000022E77C ""
 *   insn=0x000000000022E790 string=0x000000000022E794 "@"
 *   insn=0x000000000022E794 string=0x000000000022E798 ""
 *   insn=0x000000000022E798 string=0x000000000022E79C ""
 *   insn=0x000000000022E7A0 string=0x000000000022E7A4 ""
 *   insn=0x000000000022E7A4 string=0x000000000022E7A8 ""
 *   insn=0x000000000022E7D8 string=0x00000000001F62D0 "0'"
 *   insn=0x000000000022E7E0 string=0x000000000022E7E4 ""
 *   insn=0x000000000022E7F4 string=0x000000000022E7F8 "3L"
 *   insn=0x000000000022E80C string=0x000000000022E810 ""
 *   insn=0x000000000022E80C string=0x000000000022E828 "@"
 *   insn=0x000000000022E828 string=0x000000000022E82C ""
 *   insn=0x000000000022E82C string=0x000000000022E830 ""
 *   insn=0x000000000022E834 string=0x000000000022E838 ""
 *   insn=0x000000000022E838 string=0x000000000022E83C ""
 *   insn=0x000000000022E864 string=0x000000000022E868 "W"
 *   insn=0x000000000022E884 string=0x000000000022E888 "h"
 *   insn=0x000000000022E894 string=0x000000000022E898 "h"
 *   insn=0x000000000022E89C string=0x000000000022E8A0 ", "
 *   insn=0x000000000022E8A0 string=0x00000000001F6950 "0'"
 *   insn=0x000000000022E8A4 string=0x000000000022E8A8 ""
 *   insn=0x000000000022E8B8 string=0x000000000022E8BC "\t9@"
 *   insn=0x000000000022E8BC string=0x000000000022E8C0 "y@"
 *   insn=0x000000000022E8D0 string=0x000000000022E8D4 ":"
 *   insn=0x000000000022E8D4 string=0x00000000001FD140 "0'"
 *   insn=0x000000000022E8EC string=0x000000000022E8F0 "A(#"
 *   insn=0x000000000022E91C string=0x00000000001FC450 "0'"
 *   insn=0x000000000022E924 string=0x00000000001F3820 "P'"
 *   insn=0x000000000022E92C string=0x000000000022E930 "h"
 *   insn=0x000000000022E930 string=0x00000000001F5ED0 "P'"
 *   insn=0x000000000022E958 string=0x000000000022E95C "\t"
 *   insn=0x000000000022E95C string=0x000000000022E960 "?"
 *   insn=0x000000000022E960 string=0x000000000022E964 "("
 *   insn=0x000000000022E964 string=0x000000000022E968 ""
 *   insn=0x000000000022E96C string=0x000000000022E970 "}\t"
 *   insn=0x000000000022E974 string=0x000000000022E978 "\n2"
 *   insn=0x000000000022E978 string=0x00000000001FB1A0 "0'"
 *   insn=0x000000000022E980 string=0x000000000022E984 "9"
 *   insn=0x000000000022E984 string=0x00000000001FCDA0 "0'"
 *   insn=0x000000000022E988 string=0x000000000022E98C ""
 *   insn=0x000000000022E99C string=0x000000000022E9A0 "\t9@"
 *   insn=0x000000000022E9A0 string=0x000000000022E9A4 "y@"
 *   insn=0x000000000022E9F4 string=0x000000000022E9F8 "!(""
 *   insn=0x000000000022EA00 string=0x000000000022EA04 "!$"
 *   insn=0x000000000022EA08 string=0x000000000022EA0C "!@&"
 *   insn=0x000000000022EA0C string=0x000000000022EA10 "a8!"
 *   insn=0x000000000022EA18 string=0x000000000022EA1C "!($"
 *   insn=0x000000000022EA28 string=0x000000000022EA2C "@%"
 *   insn=0x000000000022EA30 string=0x000000000022EA34 "A"
 *   insn=0x000000000022EA48 string=0x000000000022EA4C "@"
 *   insn=0x000000000022EA60 string=0x000000000022EA64 "O@"
 *   insn=0x000000000022EA70 string=0x00000000001FA470 "0'"
 *   insn=0x000000000022EA7C string=0x00000000001FC610 "0'"
 *   insn=0x000000000022EA84 string=0x000000000022EA88 "z."
 *   insn=0x000000000022EA98 string=0x000000000022EAB4 ""
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::OverlayTextComponent::UpdateSprite(Caver::OverlayTextComponent *this)
{
  __int64 v2; // x8
  __int64 v3; // x23
  __int64 v4; // x20
  _QWORD *v5; // x21
  void *v6; // x0
  void *v7; // x0
  _DWORD *v8; // x0
  int v9; // w8
  __int64 v10; // x8
  _QWORD *v11; // x20
  void *v12; // x0
  void *v13; // x0
  _DWORD *v14; // x0
  int v15; // w8
  _QWORD *v16; // x20
  void *v17; // x0
  void *v18; // x0
  _DWORD *v19; // x0
  int v20; // w8
  __int64 v21; // x0
  int v22; // w8
  float32x2_t v23; // [xsp+A0h] [xbp-60h] BYREF
  _QWORD v24[3]; // [xsp+A8h] [xbp-58h] BYREF
  __int64 v25; // [xsp+C0h] [xbp-40h]
  __int64 v26; // [xsp+C8h] [xbp-38h]

  v26 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  v2 = *((_QWORD *)this + 18);
  *((_BYTE *)this + 168) = 0;
  if ( *(_QWORD *)(v2 - 24) )
  {
    Caver::TextureLibrary::sharedLibrary(this);
    Caver::TextureLibrary::TextureForName();
    v3 = v25;
    if ( v25 )
    {
      v4 = operator new(0x58u);
      *(_DWORD *)(v4 + 48) = 0;
      *(_BYTE *)(v4 + 80) = 0;
      *(_OWORD *)(v4 + 16) = 0u;
      *(_OWORD *)(v4 + 32) = 0u;
      *(_OWORD *)v4 = 0u;
      *(_OWORD *)(v4 + 64) = 0u;
      *(_QWORD *)(v4 + 56) = 0;
      v5 = (_QWORD *)*((_QWORD *)this + 20);
      *((_QWORD *)this + 20) = v4;
      if ( v5 )
      {
        v6 = (void *)v5[7];
        if ( v6 )
          operator delete[](v6);
        v7 = (void *)v5[4];
        if ( v7 )
          operator delete[](v7);
        v8 = (_DWORD *)*v5;
        if ( *v5 )
        {
          v9 = v8[2] - 1;
          v8[2] = v9;
          if ( !v9 )
            (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v8 + 8LL))(v8);
        }
        operator delete(v5);
        v4 = *((_QWORD *)this + 20);
        v3 = v25;
      }
      v24[0] = vmul_f32(*(float32x2_t *)(v3 + 84), (float32x2_t)0x3F0000003F000000LL).n64_u64[0];
      Caver::Vector2::Rounded((__int64 *)&v23, (Caver::Vector2 *)v24);
      v10 = *(_QWORD *)(v25 + 84);
      v24[1] = vneg_f32(v23).n64_u64[0];
      v24[2] = v10;
      Caver::Sprite::InitWithTexture((Caver::Sprite *)v4);
    }
    else
    {
      v16 = (_QWORD *)*((_QWORD *)this + 20);
      *((_QWORD *)this + 20) = 0;
      if ( v16 )
      {
        v17 = (void *)v16[7];
        if ( v17 )
          operator delete[](v17);
        v18 = (void *)v16[4];
        if ( v18 )
          operator delete[](v18);
        v19 = (_DWORD *)*v16;
        if ( *v16 )
        {
          v20 = v19[2] - 1;
          v19[2] = v20;
          if ( !v20 )
            (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v19 + 8LL))(v19);
        }
        operator delete(v16);
      }
    }
    v21 = v25;
    if ( v25 )
    {
      v22 = *(_DWORD *)(v25 + 8) - 1;
      *(_DWORD *)(v25 + 8) = v22;
      if ( !v22 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v21 + 8LL))(v21);
    }
  }
  else
  {
    v11 = (_QWORD *)*((_QWORD *)this + 20);
    *((_QWORD *)this + 20) = 0;
    if ( v11 )
    {
      v12 = (void *)v11[7];
      if ( v12 )
        operator delete[](v12);
      v13 = (void *)v11[4];
      if ( v13 )
        operator delete[](v13);
      v14 = (_DWORD *)*v11;
      if ( *v11 )
      {
        v15 = v14[2] - 1;
        v14[2] = v15;
        if ( !v15 )
          (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v14 + 8LL))(v14);
      }
      operator delete(v11);
    }
  }
}

