/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004A9EB4
 * Mangled: _ZN5Caver13GUITextBubble15SetFrameTextureERKN5boost13intrusive_ptrINS_7TextureEEERKNS_5ColorE
 * Demangled: Caver::GUITextBubble::SetFrameTexture(boost::intrusive_ptr<Caver::Texture> const&,Caver::Color const&)
 *
 * Callers: 1
 *   0x00000000001F51E0  Caver::GUITextBubble::SetFrameTexture(boost::intrusive_ptr<Caver::Texture> const&,Caver::Color const&)
 *
 * Callees: 10
 *   0x00000000001F55E0  operator new(ulong)
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F64D0  Caver::GUIRoundedRect::SetColor(Caver::Color)
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000001F7380  boost::detail::shared_count::shared_count<Caver::GUIRoundedRect>(Caver::GUIRoundedRect *)
 *   0x00000000001F9E10  Caver::GUIRoundedRect::InitWithTexture(boost::intrusive_ptr<Caver::Texture> const&)
 *   0x0000000000200A70  Caver::GUIRoundedRect::GUIRoundedRect(void)
 *   0x0000000000202950  boost::detail::sp_enable_shared_from_this(...)
 *   0x00000000004AA054  Caver::GUITextBubble::SetPegTexture(boost::intrusive_ptr<Caver::Texture> const&,Caver::Color const&)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 27
 *   insn=0x00000000004A9EC8 string=0x00000000004A9ECC "W"
 *   insn=0x00000000004A9EE0 string=0x00000000004A9EE4 "v"
 *   insn=0x00000000004A9EF0 string=0x00000000004A9EF4 ""
 *   insn=0x00000000004A9EF8 string=0x00000000004A9EFC "!"
 *   insn=0x00000000004A9F04 string=0x00000000004A9F08 "\t@"
 *   insn=0x00000000004A9F10 string=0x00000000004A9F14 ""
 *   insn=0x00000000004A9F18 string=0x00000000004A9F1C " "
 *   insn=0x00000000004A9F20 string=0x00000000004A9F24 "h"
 *   insn=0x00000000004A9F2C string=0x00000000001F55E0 "P'"
 *   insn=0x00000000004A9F48 string=0x00000000001F7380 "0'"
 *   insn=0x00000000004A9F54 string=0x00000000004A9F58 "~b"
 *   insn=0x00000000004A9F58 string=0x00000000004A9F5C "hZC"
 *   insn=0x00000000004A9F68 string=0x00000000004A9F6C "i""
 *   insn=0x00000000004A9F70 string=0x00000000004A9F74 "6"
 *   insn=0x00000000004A9F74 string=0x00000000004A9FB8 "`"
 *   insn=0x00000000004A9F78 string=0x00000000004A9F7C ""
 *   insn=0x00000000004A9F8C string=0x00000000004A9F90 "\t@"
 *   insn=0x00000000004A9F98 string=0x00000000004A9F9C ""
 *   insn=0x00000000004A9FAC string=0x00000000004A9FB0 "@"
 *   insn=0x00000000004A9FC0 string=0x00000000001F9E10 "0'"
 *   insn=0x00000000004A9FC4 string=0x00000000004A9FC8 "`"
 *   insn=0x00000000004A9FE8 string=0x00000000004A9FEC "91"
 *   insn=0x00000000004A9FEC string=0x00000000001F64D0 "0'"
 *   insn=0x00000000004A9FF0 string=0x00000000004A9FF4 "h"
 *   insn=0x00000000004AA024 string=0x00000000004AA028 "@"
 *   insn=0x00000000004AA03C string=0x00000000001F62D0 "0'"
 *   insn=0x00000000004AA048 string=0x00000000001F72B0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::GUITextBubble::SetFrameTexture(__int64 result, _QWORD *a2)
{
  __int64 v2; // x19
  _QWORD *v4; // x22
  __int64 v5; // x8
  __int64 v6; // x8
  Caver::GUIRoundedRect *v7; // x22
  _QWORD *v8; // x22
  __int64 v9; // x8
  __int64 v10; // x8
  Caver::GUIRoundedRect *v11; // [xsp+8h] [xbp-48h]
  __int64 v12; // [xsp+10h] [xbp-40h]

  v2 = result;
  _ReadStatusReg(TPIDR_EL0);
  v4 = *(_QWORD **)(result + 56);
  *(_QWORD *)(result + 48) = 0;
  *(_QWORD *)(result + 56) = 0;
  if ( !v4
    || (v5 = v4[1] - 1LL, (v4[1] = v5) != 0)
    || (result = (*(__int64 (__fastcall **)(_QWORD *))(*v4 + 16LL))(v4), v6 = v4[2] - 1LL, (v4[2] = v6) != 0) )
  {
    if ( !*a2 )
      goto LABEL_10;
  }
  else
  {
    result = (*(__int64 (__fastcall **)(_QWORD *))(*v4 + 24LL))(v4);
    if ( !*a2 )
      goto LABEL_10;
  }
  v7 = (Caver::GUIRoundedRect *)operator new(0xA8u);
  Caver::GUIRoundedRect::GUIRoundedRect(v7);
  v11 = v7;
  boost::detail::shared_count::shared_count<Caver::GUIRoundedRect>();
  boost::detail::sp_enable_shared_from_this();
  v8 = *(_QWORD **)(v2 + 56);
  *(_QWORD *)(v2 + 48) = v11;
  *(_QWORD *)(v2 + 56) = v12;
  if ( v8 )
  {
    v9 = v8[1] - 1LL;
    v8[1] = v9;
    if ( !v9 )
    {
      (*(void (__fastcall **)(_QWORD *))(*v8 + 16LL))(v8);
      v10 = v8[2] - 1LL;
      v8[2] = v10;
      if ( !v10 )
        (*(void (__fastcall **)(_QWORD *))(*v8 + 24LL))(v8);
    }
  }
  Caver::GUIRoundedRect::InitWithTexture();
  result = Caver::GUIRoundedRect::SetColor();
LABEL_10:
  *(_BYTE *)(v2 + 32) = 1;
  return result;
}

