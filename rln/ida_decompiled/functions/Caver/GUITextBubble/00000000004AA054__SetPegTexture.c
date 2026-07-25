/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004AA054
 * Mangled: _ZN5Caver13GUITextBubble13SetPegTextureERKN5boost13intrusive_ptrINS_7TextureEEERKNS_5ColorE
 * Demangled: Caver::GUITextBubble::SetPegTexture(boost::intrusive_ptr<Caver::Texture> const&,Caver::Color const&)
 *
 * Callers: 2
 *   0x00000000001F7DE0  Caver::GUITextBubble::SetPegTexture(boost::intrusive_ptr<Caver::Texture> const&,Caver::Color const&)
 *   0x00000000004A9EB4  Caver::GUITextBubble::SetFrameTexture(boost::intrusive_ptr<Caver::Texture> const&,Caver::Color const&)
 *
 * Callees: 6
 *   0x00000000001F55E0  operator new(ulong)
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F9730  Caver::Sprite::Init(boost::intrusive_ptr<Caver::Texture> const&,int,int,bool)
 *   0x00000000001FCB10  boost::detail::shared_count::shared_count<Caver::Sprite>(Caver::Sprite *)
 *   0x0000000000200B90  Caver::Sprite::AddRectangle(Caver::Rectangle const&,Caver::Rectangle const&,Caver::Color const&)
 *   0x0000000000202950  boost::detail::sp_enable_shared_from_this(...)
 *
 * Referenced strings: 27
 *   insn=0x00000000004AA068 string=0x00000000004AA06C "W"
 *   insn=0x00000000004AA080 string=0x00000000004AA084 "v&@"
 *   insn=0x00000000004AA088 string=0x00000000004AA08C "6"
 *   insn=0x00000000004AA090 string=0x00000000004AA094 ""
 *   insn=0x00000000004AA0A4 string=0x00000000004AA0A8 "\t@"
 *   insn=0x00000000004AA0B0 string=0x00000000004AA0B4 ""
 *   insn=0x00000000004AA0C4 string=0x00000000004AA0C8 "@"
 *   insn=0x00000000004AA0D0 string=0x00000000004AA0D4 "("
 *   insn=0x00000000004AA0D8 string=0x00000000004AA0DC "A-"
 *   insn=0x00000000004AA0DC string=0x00000000001F55E0 "P'"
 *   insn=0x00000000004AA110 string=0x00000000001FCB10 "0'"
 *   insn=0x00000000004AA120 string=0x00000000004AA124 "hZD"
 *   insn=0x00000000004AA130 string=0x00000000004AA134 "i""
 *   insn=0x00000000004AA138 string=0x00000000004AA13C "6"
 *   insn=0x00000000004AA13C string=0x00000000004AA180 "`"@"
 *   insn=0x00000000004AA140 string=0x00000000004AA144 ""
 *   insn=0x00000000004AA154 string=0x00000000004AA158 "\t@"
 *   insn=0x00000000004AA160 string=0x00000000004AA164 ""
 *   insn=0x00000000004AA174 string=0x00000000004AA178 "@"
 *   insn=0x00000000004AA190 string=0x00000000004AA194 "g="
 *   insn=0x00000000004AA194 string=0x00000000001F9730 "0'"
 *   insn=0x00000000004AA198 string=0x00000000004AA19C "`"@"
 *   insn=0x00000000004AA1A4 string=0x00000000004AA1A8 "\tAE"
 *   insn=0x00000000004AA1B0 string=0x00000000004AA1B4 "wZ"
 *   insn=0x00000000004AA1B8 string=0x00000000004AA1BC "h"
 *   insn=0x00000000004AA1CC string=0x00000000004AA1E8 ":0"
 *   insn=0x00000000004AA1E8 string=0x00000000001F62D0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::GUITextBubble::SetPegTexture(__int64 result, __int64 a2, const Caver::Color *a3)
{
  __int64 v3; // x19
  _QWORD *v6; // x22
  __int64 v7; // x8
  __int64 v8; // x8
  __int64 v9; // x0
  _QWORD *v10; // x22
  __int64 v11; // x9
  _QWORD *v12; // x8
  __int64 v13; // x8
  __int64 v14; // x8
  Caver::Sprite *v15; // x0
  _QWORD *v16; // x9
  const Caver::Rectangle *v17; // x2
  __int64 v18; // [xsp+8h] [xbp-48h] BYREF
  _QWORD *v19; // [xsp+10h] [xbp-40h]
  __int64 v20; // [xsp+18h] [xbp-38h]

  v3 = result;
  v20 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  v6 = *(_QWORD **)(result + 72);
  *(_QWORD *)(result + 64) = 0;
  *(_QWORD *)(result + 72) = 0;
  if ( v6 )
  {
    v7 = v6[1] - 1LL;
    v6[1] = v7;
    if ( !v7 )
    {
      result = (*(__int64 (__fastcall **)(_QWORD *))(*v6 + 16LL))(v6);
      v8 = v6[2] - 1LL;
      v6[2] = v8;
      if ( !v8 )
        result = (*(__int64 (__fastcall **)(_QWORD *))(*v6 + 24LL))(v6);
    }
  }
  if ( *(_QWORD *)a2 )
  {
    v9 = operator new(0x58u);
    *(_QWORD *)(v9 + 32) = 0;
    *(_QWORD *)(v9 + 40) = 0;
    *(_QWORD *)(v9 + 16) = 0;
    *(_QWORD *)(v9 + 24) = 0;
    *(_QWORD *)v9 = 0;
    *(_QWORD *)(v9 + 8) = 0;
    *(_DWORD *)(v9 + 48) = 0;
    *(_QWORD *)(v9 + 64) = 0;
    *(_QWORD *)(v9 + 72) = 0;
    *(_QWORD *)(v9 + 56) = 0;
    *(_BYTE *)(v9 + 80) = 0;
    v18 = v9;
    boost::detail::shared_count::shared_count<Caver::Sprite>();
    boost::detail::sp_enable_shared_from_this();
    v10 = *(_QWORD **)(v3 + 72);
    v11 = v18;
    v18 = *(_QWORD *)(v3 + 64);
    v12 = v19;
    *(_QWORD *)(v3 + 64) = v11;
    *(_QWORD *)(v3 + 72) = v12;
    v19 = v10;
    if ( v10 )
    {
      v13 = v10[1] - 1LL;
      v10[1] = v13;
      if ( !v13 )
      {
        (*(void (__fastcall **)(_QWORD *))(*v10 + 16LL))(v10);
        v14 = v10[2] - 1LL;
        v10[2] = v14;
        if ( !v14 )
          (*(void (__fastcall **)(_QWORD *))(*v10 + 24LL))(v10);
      }
    }
    Caver::Sprite::Init();
    v15 = *(Caver::Sprite **)(v3 + 64);
    v16 = *(_QWORD **)(*(_QWORD *)a2 + 84LL);
    v17 = (const Caver::Rectangle *)(*(_QWORD *)a2 + 92LL);
    v18 = 0;
    v19 = v16;
    result = Caver::Sprite::AddRectangle(v15, (const Caver::Rectangle *)&v18, v17, a3);
  }
  *(_BYTE *)(v3 + 32) = 1;
  return result;
}

