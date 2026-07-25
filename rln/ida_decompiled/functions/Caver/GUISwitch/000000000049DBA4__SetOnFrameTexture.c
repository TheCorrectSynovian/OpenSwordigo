/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000049DBA4
 * Mangled: _ZN5Caver9GUISwitch17SetOnFrameTextureERKN5boost13intrusive_ptrINS_7TextureEEE
 * Demangled: Caver::GUISwitch::SetOnFrameTexture(boost::intrusive_ptr<Caver::Texture> const&)
 *
 * Callers: 1
 *   0x00000000001F7B60  Caver::GUISwitch::SetOnFrameTexture(boost::intrusive_ptr<Caver::Texture> const&)
 *
 * Callees: 3
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001FB170  Caver::GUIView::SetFrame(Caver::Rectangle const&)
 *   0x0000000000201F70  Caver::GUIFrameView::SetFrameTexture(boost::intrusive_ptr<Caver::Texture> const&,bool)
 *
 * Referenced strings: 18
 *   insn=0x000000000049DBB4 string=0x000000000049DBB8 "U"
 *   insn=0x000000000049DBD0 string=0x000000000049DBD4 "iBG"
 *   insn=0x000000000049DBD4 string=0x000000000049DBD8 "AE"
 *   insn=0x000000000049DBDC string=0x000000000049DBE0 "du"
 *   insn=0x000000000049DBE0 string=0x00000000001FB170 "0'"
 *   insn=0x000000000049DBE4 string=0x000000000049DBE8 "t"
 *   insn=0x000000000049DBEC string=0x000000000049DBF0 "\t\t@"
 *   insn=0x000000000049DBF0 string=0x000000000049DBF4 ")"
 *   insn=0x000000000049DBF4 string=0x000000000049DBF8 "\t\t"
 *   insn=0x000000000049DC04 string=0x000000000049DC08 "@"
 *   insn=0x000000000049DC04 string=0x000000000049DC24 "h"E9`"
 *   insn=0x000000000049DC08 string=0x000000000049DC0C ""
 *   insn=0x000000000049DC0C string=0x000000000049DC10 ""
 *   insn=0x000000000049DC14 string=0x000000000049DC18 ""
 *   insn=0x000000000049DC18 string=0x000000000049DC1C ""
 *   insn=0x000000000049DC24 string=0x000000000049DC28 "`"
 *   insn=0x000000000049DC2C string=0x000000000049DC3C "a"
 *   insn=0x000000000049DC6C string=0x00000000001F62D0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::GUISwitch::SetOnFrameTexture(__int64 a1, __int64 a2)
{
  __int64 v4; // x8
  _DWORD *v5; // x8
  _DWORD **v6; // x20
  _DWORD *v7; // x0
  int v8; // w8
  _QWORD v10[3]; // [xsp+8h] [xbp-38h] BYREF

  v10[2] = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  v4 = *(_QWORD *)(*(_QWORD *)a2 + 84LL);
  v10[0] = *(_QWORD *)(a1 + 116);
  v10[1] = v4;
  Caver::GUIView::SetFrame((Caver::GUIView *)a1, (const Caver::Rectangle *)v10);
  v5 = *(_DWORD **)a2;
  v6 = (_DWORD **)(a1 + 296);
  if ( v5 )
    ++v5[2];
  v7 = *v6;
  *v6 = v5;
  if ( v7 )
  {
    v8 = v7[2] - 1;
    v7[2] = v8;
    if ( !v8 )
      (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v7 + 8LL))(v7);
  }
  return Caver::GUIFrameView::SetFrameTexture();
}

