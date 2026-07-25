/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000003CC32C
 * Mangled: _ZN5Caver16DebugInfoOverlay8DrawRectEPNS_16RenderingContextERKNS_9RectangleERKNS_7Matrix4E
 * Demangled: Caver::DebugInfoOverlay::DrawRect(Caver::RenderingContext *,Caver::Rectangle const&,Caver::Matrix4 const&)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000001F9850  Caver::GUIView::DrawRect(Caver::RenderingContext *,Caver::Rectangle const&,Caver::Matrix4 const&)
 *
 * Referenced strings: 7
 *   insn=0x00000000003CC32C string=0x00000000003CC330 "H"
 *   insn=0x00000000003CC330 string=0x00000000003CC334 "G"
 *   insn=0x00000000003CC330 string=0x00000000003CC338 "LA"
 *   insn=0x00000000003CC334 string=0x00000000001F9850 "0'"
 *   insn=0x00000000003CC338 string=0x00000000003CC33C ""
 *   insn=0x00000000003CC33C string=0x00000000003CC340 "L"
 *   insn=0x00000000003CC340 string=0x00000000003CC344 "C"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::DebugInfoOverlay::DrawRect(__int64 a1)
{
  if ( !*(_DWORD *)(a1 + 356) )
    ++*(_DWORD *)(a1 + 332);
  Caver::GUIView::DrawRect();
}

