/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002018C0
 * Mangled: ._ZN5Caver12MeshMaterial23LoadFromProtobufMessageERKNS_5Proto12MeshMaterialE
 * Demangled: Caver::MeshMaterial::LoadFromProtobufMessage(Caver::Proto::MeshMaterial const&)
 *
 * Callers: 1
 *   0x0000000000444214  Caver::Mesh::LoadFromProtobufMessage(Caver::Proto::Mesh const&)
 *
 * Callees: 1
 *   0x0000000000443F08  Caver::MeshMaterial::LoadFromProtobufMessage(Caver::Proto::MeshMaterial const&)
 *
 * Referenced strings: 1
 *   insn=0x00000000002018C8 string=0x00000000002018CC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::MeshMaterial::LoadFromProtobufMessage(
        Caver::MeshMaterial *this,
        const Caver::Proto::MeshMaterial *a2)
{
  return _ZN5Caver12MeshMaterial23LoadFromProtobufMessageERKNS_5Proto12MeshMaterialE(this, a2);
}

