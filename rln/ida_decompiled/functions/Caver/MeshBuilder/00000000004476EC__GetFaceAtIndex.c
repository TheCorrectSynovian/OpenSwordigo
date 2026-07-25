/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004476EC
 * Mangled: _ZNK5Caver11MeshBuilder14GetFaceAtIndexEiPNS0_6VertexES2_S2_
 * Demangled: Caver::MeshBuilder::GetFaceAtIndex(int,Caver::MeshBuilder::Vertex *,Caver::MeshBuilder::Vertex *,Caver::MeshBuilder::Vertex *)
 *
 * Callers: 2
 *   0x0000000000201070  Caver::MeshBuilder::GetFaceAtIndex(int,Caver::MeshBuilder::Vertex *,Caver::MeshBuilder::Vertex *,Caver::MeshBuilder::Vertex *)
 *   0x0000000000447498  Caver::MeshBuilder::InitWithMeshBuilderFaceSubset(Caver::MeshBuilder const&,int *,int)
 *
 * Callees: 0
 *
 * Referenced strings: 40
 *   insn=0x00000000004476F0 string=0x00000000004476F4 "( )"
 *   insn=0x00000000004476F8 string=0x00000000004476FC "@"
 *   insn=0x0000000000447700 string=0x0000000000447704 "@"
 *   insn=0x0000000000447704 string=0x0000000000447708 "\t!@"
 *   insn=0x0000000000447708 string=0x000000000044770C "I "
 *   insn=0x0000000000447710 string=0x0000000000447714 "@@"
 *   insn=0x0000000000447714 string=0x0000000000447718 "\t5@"
 *   insn=0x0000000000447718 string=0x000000000044771C "I4"
 *   insn=0x000000000044771C string=0x0000000000447720 "\t9@"
 *   insn=0x0000000000447720 string=0x0000000000447724 "I8"
 *   insn=0x0000000000447724 string=0x0000000000447728 "\t=@"
 *   insn=0x0000000000447728 string=0x000000000044772C "I<"
 *   insn=0x000000000044772C string=0x0000000000447730 "A@"
 *   insn=0x0000000000447730 string=0x0000000000447734 ")"
 *   insn=0x0000000000447734 string=0x0000000000447738 "*}@"
 *   insn=0x0000000000447738 string=0x000000000044773C "I"
 *   insn=0x000000000044773C string=0x0000000000447740 "H@"
 *   insn=0x0000000000447740 string=0x0000000000447744 ""
 *   insn=0x0000000000447744 string=0x0000000000447748 ")"
 *   insn=0x0000000000447748 string=0x000000000044774C ""
 *   insn=0x0000000000447750 string=0x0000000000447754 "`"
 *   insn=0x0000000000447758 string=0x000000000044775C "`"
 *   insn=0x000000000044775C string=0x0000000000447760 "\ne@"
 *   insn=0x0000000000447760 string=0x0000000000447764 "j "
 *   insn=0x0000000000447768 string=0x000000000044776C "`@"
 *   insn=0x000000000044776C string=0x0000000000447770 "\ny@"
 *   insn=0x0000000000447770 string=0x0000000000447774 "j4"
 *   insn=0x0000000000447774 string=0x0000000000447778 "\n}@"
 *   insn=0x0000000000447778 string=0x000000000044777C "j8"
 *   insn=0x000000000044777C string=0x0000000000447780 "\n"
 *   insn=0x0000000000447780 string=0x0000000000447784 "j<"
 *   insn=0x0000000000447784 string=0x0000000000447788 ""
 *   insn=0x0000000000447788 string=0x000000000044778C "h@"
 *   insn=0x000000000044778C string=0x0000000000447790 ""
 *   insn=0x0000000000447790 string=0x0000000000447794 ""
 *   insn=0x00000000004477A4 string=0x00000000004477A8 "\t"
 *   insn=0x00000000004477B4 string=0x00000000004477B8 "\t"
 *   insn=0x00000000004477BC string=0x00000000004477C0 "\t"
 *   insn=0x00000000004477C4 string=0x00000000004477C8 "\t"
 *   insn=0x00000000004477CC string=0x00000000004477D0 ""
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

long double __fastcall Caver::MeshBuilder::GetFaceAtIndex(__int64 a1, int a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 v5; // x8
  __int64 v6; // x9
  __int64 v7; // x8
  __int64 v8; // x8
  long double result; // q0

  v5 = *(_QWORD *)(a1 + 24) + 204LL * a2;
  *(_OWORD *)a3 = *(_OWORD *)v5;
  *(_OWORD *)(a3 + 16) = *(_OWORD *)(v5 + 16);
  *(_DWORD *)(a3 + 32) = *(_DWORD *)(v5 + 32);
  *(_OWORD *)(a3 + 36) = *(_OWORD *)(v5 + 36);
  *(_DWORD *)(a3 + 52) = *(_DWORD *)(v5 + 52);
  *(_DWORD *)(a3 + 56) = *(_DWORD *)(v5 + 56);
  *(_DWORD *)(a3 + 60) = *(_DWORD *)(v5 + 60);
  *(_DWORD *)(a3 + 64) = *(_DWORD *)(v5 + 64);
  v6 = 204LL * a2;
  v7 = *(_QWORD *)(a1 + 24) + v6;
  *(_OWORD *)a4 = *(_OWORD *)(v7 + 68);
  *(_OWORD *)(a4 + 16) = *(_OWORD *)(v7 + 84);
  *(_DWORD *)(a4 + 32) = *(_DWORD *)(v7 + 100);
  *(_OWORD *)(a4 + 36) = *(_OWORD *)(v7 + 104);
  *(_DWORD *)(a4 + 52) = *(_DWORD *)(v7 + 120);
  *(_DWORD *)(a4 + 56) = *(_DWORD *)(v7 + 124);
  *(_DWORD *)(a4 + 60) = *(_DWORD *)(v7 + 128);
  *(_DWORD *)(a4 + 64) = *(_DWORD *)(v7 + 132);
  v8 = *(_QWORD *)(a1 + 24) + v6;
  *(_OWORD *)a5 = *(_OWORD *)(v8 + 136);
  *(_OWORD *)(a5 + 16) = *(_OWORD *)(v8 + 152);
  *(_DWORD *)(a5 + 32) = *(_DWORD *)(v8 + 168);
  result = *(long double *)(v8 + 172);
  *(long double *)(a5 + 36) = result;
  *(_DWORD *)(a5 + 52) = *(_DWORD *)(v8 + 188);
  *(_DWORD *)(a5 + 56) = *(_DWORD *)(v8 + 192);
  *(_DWORD *)(a5 + 60) = *(_DWORD *)(v8 + 196);
  *(_DWORD *)(a5 + 64) = *(_DWORD *)(v8 + 200);
  return result;
}

