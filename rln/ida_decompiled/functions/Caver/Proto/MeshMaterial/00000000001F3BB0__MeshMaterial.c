/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F3BB0
 * Mangled: ._ZN5Caver5Proto12MeshMaterialC2Ev
 * Demangled: Caver::Proto::MeshMaterial::MeshMaterial(void)
 *
 * Callers: 1
 *   0x0000000000444C48  Caver::Mesh::SaveToProtobufMessage(Caver::Proto::Mesh *)
 *
 * Callees: 1
 *   0x0000000000338270  Caver::Proto::MeshData::GetTypeName(void)
 *
 * Referenced strings: 2
 *   insn=0x00000000001F3BB4 string=0x00000000003382C8 "h"
 *   insn=0x00000000001F3BB8 string=0x00000000001F3BBC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void __fastcall Caver::Proto::MeshMaterial::MeshMaterial(Caver::Proto::MeshMaterial *this)
{
  JUMPOUT(0x3382C8);
}

