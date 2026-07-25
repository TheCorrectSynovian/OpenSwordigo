/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000049CF4C
 * Mangled: _ZN5Caver9GUISlider12UpdateSpriteEv
 * Demangled: Caver::GUISlider::UpdateSprite(void)
 *
 * Callers: 1
 *   0x00000000001FBF70  Caver::GUISlider::UpdateSprite(void)
 *
 * Callees: 10
 *   0x00000000001F55E0  operator new(ulong)
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F9060  Caver::Texture::SharedPtr(void)
 *   0x00000000001F9730  Caver::Sprite::Init(boost::intrusive_ptr<Caver::Texture> const&,int,int,bool)
 *   0x00000000001F9830  Caver::Sprite::Clear(void)
 *   0x00000000001FBD50  Caver::AddCappedRectToSprite(Caver::Sprite *,boost::intrusive_ptr<Caver::Texture> const&,Caver::Rectangle const&,float)
 *   0x00000000001FDA30  Caver::Vector2::Rounded(void)
 *   0x0000000000200B90  Caver::Sprite::AddRectangle(Caver::Rectangle const&,Caver::Rectangle const&,Caver::Color const&)
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 63
 *   insn=0x000000000049CF64 string=0x000000000049CF68 "V"
 *   insn=0x000000000049CF74 string=0x000000000049CF78 "u"
 *   insn=0x000000000049CF78 string=0x000000000049CF7C "u"
 *   insn=0x000000000049CF7C string=0x000000000049CF80 "`"
 *   insn=0x000000000049CF84 string=0x000000000049D000 "u"
 *   insn=0x000000000049CF8C string=0x00000000001F55E0 "P'"
 *   insn=0x000000000049CFAC string=0x000000000049CFB0 "t"
 *   insn=0x000000000049CFB8 string=0x000000000049CFBC ")p"
 *   insn=0x000000000049CFBC string=0x00000000001F9060 "0'"
 *   insn=0x000000000049CFD4 string=0x00000000001F9730 "0'"
 *   insn=0x000000000049CFDC string=0x000000000049CFE0 "@"
 *   insn=0x000000000049CFDC string=0x000000000049CFFC "`"
 *   insn=0x000000000049CFE0 string=0x000000000049CFE4 ""
 *   insn=0x000000000049CFE4 string=0x000000000049CFE8 ""
 *   insn=0x000000000049CFEC string=0x000000000049CFF0 ""
 *   insn=0x000000000049CFF0 string=0x000000000049CFF4 ""
 *   insn=0x000000000049D000 string=0x000000000049D004 "r"
 *   insn=0x000000000049D004 string=0x00000000001F9830 "0'"
 *   insn=0x000000000049D008 string=0x000000000049D00C ""
 *   insn=0x000000000049D00C string=0x000000000049D010 "`"
 *   insn=0x000000000049D00C string=0x000000000049D02C "t"
 *   insn=0x000000000049D010 string=0x000000000049D014 "t"
 *   insn=0x000000000049D020 string=0x000000000049D024 "K{"
 *   insn=0x000000000049D024 string=0x00000000001FBD50 "0'"
 *   insn=0x000000000049D028 string=0x000000000049D030 "`*A"
 *   insn=0x000000000049D030 string=0x000000000049D034 "a6A"
 *   insn=0x000000000049D034 string=0x000000000049D038 "b:A"
 *   insn=0x000000000049D038 string=0x000000000049D03C "cBH"
 *   insn=0x000000000049D03C string=0x000000000049D040 "h"
 *   insn=0x000000000049D040 string=0x000000000049D044 "j"
 *   insn=0x000000000049D048 string=0x000000000049D04C "A8!"
 *   insn=0x000000000049D04C string=0x000000000049D050 ""
 *   insn=0x000000000049D050 string=0x000000000049D054 "H"
 *   insn=0x000000000049D054 string=0x000000000049D058 "h"
 *   insn=0x000000000049D054 string=0x000000000049D07C "h"
 *   insn=0x000000000049D058 string=0x000000000049D05C ""
 *   insn=0x000000000049D05C string=0x000000000049D060 "`"
 *   insn=0x000000000049D060 string=0x000000000049D064 "a""
 *   insn=0x000000000049D070 string=0x000000000049D074 "7{"
 *   insn=0x000000000049D07C string=0x000000000049D080 "H"
 *   insn=0x000000000049D084 string=0x000000000049D088 "AE"
 *   insn=0x000000000049D08C string=0x000000000049D090 "`( "
 *   insn=0x000000000049D090 string=0x000000000049D094 "!\t!"
 *   insn=0x000000000049D09C string=0x000000000049D0A0 " "
 *   insn=0x000000000049D0A0 string=0x000000000049D0A4 "`"
 *   insn=0x000000000049D0B8 string=0x000000000049D0BC "]"
 *   insn=0x000000000049D0BC string=0x00000000001FDA30 "0'"
 *   insn=0x000000000049D0C4 string=0x000000000049D0C8 "\t"
 *   insn=0x000000000049D0D0 string=0x000000000049D0D4 "h"
 *   insn=0x000000000049D0F4 string=0x000000000049D114 "od"
 *   insn=0x000000000049D114 string=0x00000000001F62D0 "0'"
 *   insn=0x000000000049D11C string=0x000000000049D120 "("
 *   insn=0x000000000049D120 string=0x000000000049D124 "\t\t@"
 *   insn=0x000000000049D124 string=0x000000000049D128 ")"
 *   insn=0x000000000049D128 string=0x000000000049D12C "\t\t"
 *   insn=0x000000000049D130 string=0x000000000049D134 "\t"
 *   insn=0x000000000049D134 string=0x000000000049D138 ")"
 *   insn=0x000000000049D13C string=0x000000000049D140 " "
 *   insn=0x000000000049D164 string=0x000000000049D168 "A8!"
 *   insn=0x000000000049D178 string=0x000000000049D17C "A(#"
 *   insn=0x000000000049D17C string=0x000000000049D180 "!8""
 *   insn=0x000000000049D180 string=0x000000000049D184 "  "
 *   insn=0x000000000049D188 string=0x000000000049D18C "@( "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::GUISlider::UpdateSprite(__int64 this)
{
  __int64 v1; // x19
  __int64 v2; // x21
  Caver::Sprite *v3; // x0
  __int64 v4; // x0
  __int64 v5; // x0
  int v6; // w8
  float32x2_t v7; // d3
  float v8; // s9
  float v9; // s10
  float v10; // s8
  __int64 v11; // x8
  float v12; // s0
  float32x2_t v13; // d8
  float32x2_t v14; // d0
  Caver::Sprite *v15; // x0
  __int64 v16; // x8
  unsigned __int64 v17; // [xsp+0h] [xbp-80h]
  unsigned __int64 v18; // [xsp+18h] [xbp-68h] BYREF
  __int64 v19; // [xsp+20h] [xbp-60h] BYREF
  __int64 v20[3]; // [xsp+28h] [xbp-58h] BYREF

  v1 = this;
  v20[2] = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  v2 = *(_QWORD *)(this + 320);
  if ( v2 )
  {
    v3 = *(Caver::Sprite **)(this + 344);
    if ( !v3 )
    {
      v4 = operator new(0x58u);
      *(_DWORD *)(v4 + 48) = 0;
      *(_QWORD *)(v4 + 32) = 0;
      *(_QWORD *)(v4 + 40) = 0;
      *(_QWORD *)(v4 + 16) = 0;
      *(_QWORD *)(v4 + 24) = 0;
      *(_QWORD *)v4 = 0;
      *(_QWORD *)(v4 + 8) = 0;
      *(_BYTE *)(v4 + 80) = 0;
      *(_QWORD *)(v4 + 64) = 0;
      *(_QWORD *)(v4 + 72) = 0;
      *(_QWORD *)(v4 + 56) = 0;
      *(_QWORD *)(v1 + 344) = v4;
      Caver::Texture::SharedPtr(v20, *(Caver::Texture **)(v2 + 112));
      Caver::Sprite::Init();
      v5 = v20[0];
      if ( v20[0] )
      {
        v6 = *(_DWORD *)(v20[0] + 8) - 1;
        *(_DWORD *)(v20[0] + 8) = v6;
        if ( !v6 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 8LL))(v5);
      }
      v3 = *(Caver::Sprite **)(v1 + 344);
    }
    this = Caver::Sprite::Clear(v3);
    if ( *(_QWORD *)(v1 + 320) )
      this = Caver::AddCappedRectToSprite();
    v7.n64_u64[0] = *(unsigned __int64 *)(v1 + 132);
    v9 = *(float *)(v1 + 140);
    v8 = *(float *)(v1 + 144);
    v10 = (float)(*(float *)(v1 + 296) - *(float *)(v1 + 308)) / (float)(*(float *)(v1 + 312) - *(float *)(v1 + 308));
    if ( *(_QWORD *)(v1 + 328) && !*(_BYTE *)(v1 + 365) )
    {
      v17 = *(_QWORD *)(v1 + 132);
      this = Caver::AddCappedRectToSprite();
      v7.n64_u64[0] = v17;
    }
    v11 = *(_QWORD *)(v1 + 336);
    if ( v11 )
    {
      v12 = v10 * v9;
      v13.n64_u64[0] = *(unsigned __int64 *)(v11 + 84);
      v14.n64_f32[0] = (float)(v7.n64_f32[0] + v12) - v7.n64_f32[0];
      v14.n64_f32[1] = v8 * 0.5;
      v18 = vsub_f32(vadd_f32(v7, v14), vmul_f32(v13, (float32x2_t)0x3F0000003F000000LL)).n64_u64[0];
      Caver::Vector2::Rounded(&v19, (Caver::Vector2 *)&v18);
      v20[1] = v13.n64_i64[0];
      v20[0] = v19;
      v16 = *(_QWORD *)(v1 + 336);
      v15 = *(Caver::Sprite **)(v1 + 344);
      LODWORD(v19) = -1;
      return Caver::Sprite::AddRectangle(
               v15,
               (const Caver::Rectangle *)v20,
               (const Caver::Rectangle *)(v16 + 92),
               (const Caver::Color *)&v19);
    }
  }
  return this;
}

