/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F9B30
 * Mangled: ._ZN5Caver9PODLoader10CreateMeshEi
 * Demangled: Caver::PODLoader::CreateMesh(int)
 *
 * Callers: 1
 *   0x000000000044E094  Caver::PODLoader::CreateModel(void)
 *
 * Callees: 1
 *   0x000000000044EEB8  Caver::PODLoader::CreateMesh(int)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F9B38 string=0x00000000001F9B3C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::PODLoader::CreateMesh(Caver::PODLoader *this, int a2)
{
  return _ZN5Caver9PODLoader10CreateMeshEi(this, a2);
}

