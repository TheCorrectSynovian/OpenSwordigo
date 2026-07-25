/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F79A0
 * Mangled: ._ZN5Caver16RenderingContext13SetClearColorERKNS_5ColorE
 * Demangled: Caver::RenderingContext::SetClearColor(Caver::Color const&)
 *
 * Callers: 1
 *   0x0000000000211014  Caver::CaverShell::Render(Caver::RenderingContext *)
 *
 * Callees: 1
 *   0x000000000048B11C  Caver::RenderingContext::SetClearColor(Caver::Color const&)
 *
 * Referenced strings: 2
 *   insn=0x00000000001F79A4 string=0x000000000048B11C " "
 *   insn=0x00000000001F79A8 string=0x00000000001F79AC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::RenderingContext::SetClearColor(Caver::RenderingContext *this, const Caver::Color *a2)
{
  return _ZN5Caver16RenderingContext13SetClearColorERKNS_5ColorE(this, a2);
}

