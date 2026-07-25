/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000003386EC
 * Mangled: _ZN5Caver5Proto12MeshMaterialD0Ev
 * Demangled: Caver::Proto::MeshMaterial::~MeshMaterial()
 *
 * Callers: 0
 *
 * Callees: 4
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000001FB680  Caver::Proto::MeshMaterial::~MeshMaterial()
 *   0x0000000000338724  Caver::Proto::MeshMaterial::SetCachedSize(int)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 3
 *   insn=0x00000000003386FC string=0x00000000001FB680 "0'"
 *   insn=0x000000000033870C string=0x00000000001F72B0 "0'"
 *   insn=0x000000000033871C string=0x0000000000338720 "i$\t"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::Proto::MeshMaterial::~MeshMaterial(Caver::Proto::MeshMaterial *this)
{
  Caver::Proto::MeshMaterial::~MeshMaterial(this);
  operator delete(this);
}

