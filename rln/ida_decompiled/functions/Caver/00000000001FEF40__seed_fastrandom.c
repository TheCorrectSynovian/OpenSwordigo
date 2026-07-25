/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FEF40
 * Mangled: ._ZN5Caver15seed_fastrandomEi
 * Demangled: Caver::seed_fastrandom(int)
 *
 * Callers: 1
 *   0x00000000002BC4E8  Caver::GroundMeshGeneratorComponent::GenerateMesh(void)
 *
 * Callees: 1
 *   0x000000000047D248  Caver::seed_fastrandom(int)
 *
 * Referenced strings: 2
 *   insn=0x00000000001FEF44 string=0x000000000047D248 "i"
 *   insn=0x00000000001FEF48 string=0x00000000001FEF4C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::seed_fastrandom(Caver *this, int a2)
{
  return _ZN5Caver15seed_fastrandomEi(this, a2);
}

