/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FB680
 * Mangled: ._ZN5Caver5Proto12MeshMaterialD2Ev
 * Demangled: Caver::Proto::MeshMaterial::~MeshMaterial()
 *
 * Callers: 1
 *   0x00000000003386EC  Caver::Proto::MeshMaterial::~MeshMaterial()
 *
 * Callees: 1
 *   0x0000000000338310  Caver::Proto::MeshMaterial::MeshMaterial(Caver::Proto::MeshMaterial const&)
 *
 * Referenced strings: 1
 *   insn=0x00000000001FB688 string=0x00000000001FB68C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void __fastcall Caver::Proto::MeshMaterial::~MeshMaterial(Caver::Proto::MeshMaterial *this)
{
  JUMPOUT(0x3385B8);
}

