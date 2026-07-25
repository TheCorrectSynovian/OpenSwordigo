/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F3F30
 * Mangled: ._ZN5Caver16RenderingContext5ClearEbbb
 * Demangled: Caver::RenderingContext::Clear(bool,bool,bool)
 *
 * Callers: 2
 *   0x0000000000211014  Caver::CaverShell::Render(Caver::RenderingContext *)
 *   0x00000000004A28BC  Caver::GUIWindow::DrawRect(Caver::RenderingContext *,Caver::Rectangle const&,Caver::Matrix4 const&)
 *
 * Callees: 1
 *   0x000000000048B15C  Caver::RenderingContext::Clear(bool,bool,bool)
 *
 * Referenced strings: 2
 *   insn=0x00000000001F3F34 string=0x000000000048B15C "?"
 *   insn=0x00000000001F3F38 string=0x00000000001F3F3C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::RenderingContext::Clear(Caver::RenderingContext *this, bool a2, bool a3, bool a4)
{
  return _ZN5Caver16RenderingContext5ClearEbbb(this, a2, a3, a4);
}

