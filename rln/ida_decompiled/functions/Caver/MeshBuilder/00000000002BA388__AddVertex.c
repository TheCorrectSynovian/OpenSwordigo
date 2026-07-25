/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002BA388
 * Mangled: _ZN5Caver11MeshBuilder9AddVertexERKNS0_6VertexE
 * Demangled: Caver::MeshBuilder::AddVertex(Caver::MeshBuilder::Vertex const&)
 *
 * Callers: 1
 *   0x00000000001F6B80  Caver::MeshBuilder::AddVertex(Caver::MeshBuilder::Vertex const&)
 *
 * Callees: 1
 *   0x0000000000201CE0  std::vector<Caver::MeshBuilder::Vertex,std::allocator<Caver::MeshBuilder::Vertex>>::_M_insert_aux(__gnu_cxx::__normal_iterator<Caver::MeshBuilder::Vertex*,std::vector<Caver::MeshBuilder::Vertex,std::allocator<Caver::MeshBuilder::Vertex>>>,Caver::MeshBuilder::Vertex const&)
 *
 * Referenced strings: 30
 *   insn=0x00000000002BA394 string=0x00000000002BA398 "h&B"
 *   insn=0x00000000002BA3A4 string=0x00000000002BA3A8 " "
 *   insn=0x00000000002BA3A4 string=0x00000000002BA3F4 "`b"
 *   insn=0x00000000002BA3AC string=0x00000000002BA3B0 " "
 *   insn=0x00000000002BA3B4 string=0x00000000002BA3B8 "*"
 *   insn=0x00000000002BA3B8 string=0x00000000002BA3BC "\n"
 *   insn=0x00000000002BA3BC string=0x00000000002BA3C0 "*"
 *   insn=0x00000000002BA3C0 string=0x00000000002BA3C4 "\n"
 *   insn=0x00000000002BA3C4 string=0x00000000002BA3C8 "*"
 *   insn=0x00000000002BA3C8 string=0x00000000002BA3CC "\n"
 *   insn=0x00000000002BA3CC string=0x00000000002BA3D0 "*"
 *   insn=0x00000000002BA3D0 string=0x00000000002BA3D4 "\n"
 *   insn=0x00000000002BA3D4 string=0x00000000002BA3D8 " A"
 *   insn=0x00000000002BA3DC string=0x00000000002BA3E0 " A"
 *   insn=0x00000000002BA3E0 string=0x00000000002BA3E4 "\t"
 *   insn=0x00000000002BA3E8 string=0x00000000002BA3EC "i"
 *   insn=0x00000000002BA3F0 string=0x00000000002BA404 "h"
 *   insn=0x00000000002BA3FC string=0x00000000002BA400 "8"
 *   insn=0x00000000002BA408 string=0x00000000002BA410 ""
 *   insn=0x00000000002BA410 string=0x00000000002BA414 "\t})"
 *   insn=0x00000000002BA414 string=0x00000000002BA418 "*"
 *   insn=0x00000000002BA418 string=0x00000000002BA41C ")"
 *   insn=0x00000000002BA41C string=0x00000000002BA420 ")"
 *   insn=0x00000000002BA420 string=0x00000000002BA424 ")"
 *   insn=0x00000000002BA428 string=0x00000000002BA42C "h"
 *   insn=0x00000000002BA430 string=0x00000000002BA434 "h"
 *   insn=0x00000000002BA434 string=0x00000000002BA438 "@"
 *   insn=0x00000000002BA440 string=0x00000000002BA444 "hR@"
 *   insn=0x00000000002BA444 string=0x00000000002BA448 ""
 *   insn=0x00000000002BA448 string=0x00000000002BA44C "hR"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::MeshBuilder::AddVertex(__int64 result, __int64 a2)
{
  _DWORD *v2; // x19
  __int64 v3; // x8
  int v4; // w8

  v2 = (_DWORD *)result;
  v3 = *(_QWORD *)(result + 32);
  if ( v3 == *(_QWORD *)(result + 40) )
  {
    result = std::vector<Caver::MeshBuilder::Vertex>::_M_insert_aux();
  }
  else
  {
    *(_OWORD *)v3 = *(_OWORD *)a2;
    *(_OWORD *)(v3 + 16) = *(_OWORD *)(a2 + 16);
    *(_BYTE *)(v3 + 32) = *(_BYTE *)(a2 + 32);
    *(_BYTE *)(v3 + 33) = *(_BYTE *)(a2 + 33);
    *(_BYTE *)(v3 + 34) = *(_BYTE *)(a2 + 34);
    *(_BYTE *)(v3 + 35) = *(_BYTE *)(a2 + 35);
    *(_OWORD *)(v3 + 36) = *(_OWORD *)(a2 + 36);
    *(_OWORD *)(v3 + 52) = *(_OWORD *)(a2 + 52);
    *(_QWORD *)(result + 32) = v3 + 68;
  }
  v4 = v2[4] + 1;
  v2[4] = v4;
  if ( v4 == 3 * (v4 / 3) && *(int *)(*(_QWORD *)v2 + 12LL) <= 0 )
    ++v2[20];
  return result;
}

