/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FCC30
 * Mangled: ._ZN5Caver22BasicRenderingPrograms12AddToContextEPNS_16RenderingContextE
 * Demangled: Caver::BasicRenderingPrograms::AddToContext(Caver::RenderingContext *)
 *
 * Callers: 1
 *   0x000000000048AFB0  Caver::RenderingContext::RenderingContext(Caver::RenderingAPI)
 *
 * Callees: 1
 *   0x000000000048DB54  Caver::BasicRenderingPrograms::AddToContext(Caver::RenderingContext *)
 *
 * Referenced strings: 1
 *   insn=0x00000000001FCC38 string=0x00000000001FCC3C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::BasicRenderingPrograms::AddToContext(
        Caver::BasicRenderingPrograms *this,
        Caver::RenderingContext *a2)
{
  return _ZN5Caver22BasicRenderingPrograms12AddToContextEPNS_16RenderingContextE(this, a2);
}

