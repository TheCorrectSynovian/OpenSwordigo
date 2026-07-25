/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000049DC98
 * Mangled: _ZN5Caver9GUISwitch18SetOffFrameTextureERKN5boost13intrusive_ptrINS_7TextureEEE
 * Demangled: Caver::GUISwitch::SetOffFrameTexture(boost::intrusive_ptr<Caver::Texture> const&)
 *
 * Callers: 1
 *   0x00000000001F4AA0  Caver::GUISwitch::SetOffFrameTexture(boost::intrusive_ptr<Caver::Texture> const&)
 *
 * Callees: 1
 *   0x0000000000201F70  Caver::GUIFrameView::SetFrameTexture(boost::intrusive_ptr<Caver::Texture> const&,bool)
 *
 * Referenced strings: 11
 *   insn=0x000000000049DCA0 string=0x000000000049DCA4 "("
 *   insn=0x000000000049DCB0 string=0x000000000049DCB4 "\t\t@"
 *   insn=0x000000000049DCB0 string=0x000000000049DCC0 "`"
 *   insn=0x000000000049DCB4 string=0x000000000049DCB8 ")"
 *   insn=0x000000000049DCB8 string=0x000000000049DCBC "\t\t"
 *   insn=0x000000000049DCC0 string=0x000000000049DCC4 "h"
 *   insn=0x000000000049DCC8 string=0x000000000049DCCC "@"
 *   insn=0x000000000049DCCC string=0x000000000049DCD0 ""
 *   insn=0x000000000049DCD0 string=0x000000000049DCD4 ""
 *   insn=0x000000000049DCD8 string=0x000000000049DCDC ""
 *   insn=0x000000000049DCDC string=0x000000000049DCE0 ""
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::GUISwitch::SetOffFrameTexture(__int64 a1, _QWORD *a2)
{
  _DWORD *v2; // x8
  _DWORD **v3; // x19
  _DWORD *v4; // x0
  int v5; // w8

  v2 = (_DWORD *)*a2;
  v3 = (_DWORD **)(a1 + 304);
  if ( *a2 )
    ++v2[2];
  v4 = *v3;
  *v3 = v2;
  if ( v4 )
  {
    v5 = v4[2] - 1;
    v4[2] = v5;
    if ( !v5 )
      (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v4 + 8LL))(v4);
  }
  return Caver::GUIFrameView::SetFrameTexture();
}

