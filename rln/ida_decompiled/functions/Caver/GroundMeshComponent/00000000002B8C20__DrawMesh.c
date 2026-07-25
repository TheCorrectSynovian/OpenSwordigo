/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002B8C20
 * Mangled: _ZNK5Caver19GroundMeshComponent8DrawMeshEPNS_16RenderingContextEPNS_12MeshInstanceE
 * Demangled: Caver::GroundMeshComponent::DrawMesh(Caver::RenderingContext *,Caver::MeshInstance *)
 *
 * Callers: 0
 *
 * Callees: 2
 *   0x00000000001F69F0  Caver::MeshInstance::Draw(Caver::RenderingContext *)
 *   0x0000000000202E40  Caver::RenderingContext::BindTexture(Caver::Texture *)
 *
 * Referenced strings: 5
 *   insn=0x00000000002B8C2C string=0x00000000002B8C30 "h"
 *   insn=0x00000000002B8C34 string=0x00000000002B8C38 "m@"
 *   insn=0x00000000002B8C44 string=0x00000000002B8C48 "~("
 *   insn=0x00000000002B8C58 string=0x00000000002B8C5C "e"
 *   insn=0x00000000002B8C5C string=0x00000000001F69F0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::GroundMeshComponent::DrawMesh(
        Caver::GroundMeshComponent *this,
        Caver::RenderingContext *a2,
        Caver::MeshInstance *a3)
{
  if ( *(_QWORD *)(*(_QWORD *)a3 + 216LL) )
    Caver::RenderingContext::BindTexture(a2, *(Caver::Texture **)(*(_QWORD *)a3 + 216LL));
  return Caver::MeshInstance::Draw(a3, a2);
}

