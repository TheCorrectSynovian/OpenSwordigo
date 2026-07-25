/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F5150
 * Mangled: ._ZN5Caver18TriangulatePolygonEPKNS_7Vector2EiPt
 * Demangled: Caver::TriangulatePolygon(Caver::Vector2 const*,int,ushort *)
 *
 * Callers: 2
 *   0x00000000002B8F94  Caver::Mesh::~Mesh()
 *   0x00000000002BB564  Caver::GroundMeshGenerator::GenerateFrontMesh(void)
 *
 * Callees: 1
 *   0x00000000002C1CC4  Caver::TriangulatePolygon(Caver::Vector2 const*,int,ushort *)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F5158 string=0x00000000001F515C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::TriangulatePolygon(Caver *this, const Caver::Vector2 *a2, int a3, unsigned __int16 *a4)
{
  return _ZN5Caver18TriangulatePolygonEPKNS_7Vector2EiPt(this, a2, a3, a4);
}

