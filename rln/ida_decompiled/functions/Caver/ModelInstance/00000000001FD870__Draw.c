/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FD870
 * Mangled: ._ZN5Caver13ModelInstance4DrawEPNS_16RenderingContextE
 * Demangled: Caver::ModelInstance::Draw(Caver::RenderingContext *)
 *
 * Callers: 1
 *   0x0000000000225D00  Caver::ModelComponent::Draw(Caver::RenderingContext *,Caver::Matrix4 const&,bool)
 *
 * Callees: 1
 *   0x000000000044B14C  Caver::ModelInstance::Draw(Caver::RenderingContext *)
 *
 * Referenced strings: 1
 *   insn=0x00000000001FD878 string=0x00000000001FD87C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::ModelInstance::Draw(Caver::ModelInstance *this, Caver::RenderingContext *a2)
{
  return _ZN5Caver13ModelInstance4DrawEPNS_16RenderingContextE(this, a2);
}

