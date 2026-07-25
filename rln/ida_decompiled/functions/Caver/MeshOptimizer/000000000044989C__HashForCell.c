/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000044989C
 * Mangled: _ZN5Caver13MeshOptimizer11HashForCellERKNS0_4CellE
 * Demangled: Caver::MeshOptimizer::HashForCell(Caver::MeshOptimizer::Cell const&)
 *
 * Callers: 0
 *
 * Callees: 0
 *
 * Referenced strings: 15
 *   insn=0x00000000004498A0 string=0x00000000004498A8 "+@"
 *   insn=0x00000000004498A8 string=0x00000000004498AC "}\t)"
 *   insn=0x00000000004498AC string=0x00000000004498B0 ")"
 *   insn=0x00000000004498B0 string=0x00000000004498B8 "I}\t*"
 *   insn=0x00000000004498B8 string=0x00000000004498BC "*"
 *   insn=0x00000000004498BC string=0x00000000004498C4 "j}\n"
 *   insn=0x00000000004498C4 string=0x00000000004498C8 ""
 *   insn=0x00000000004498CC string=0x00000000004498D0 "1"
 *   insn=0x00000000004498D0 string=0x00000000004498D4 "+"
 *   insn=0x00000000004498D4 string=0x00000000004498D8 "?"
 *   insn=0x00000000004498D8 string=0x00000000004498DC ")1"
 *   insn=0x00000000004498DC string=0x00000000004498E0 "K"
 *   insn=0x00000000004498E0 string=0x00000000004498E4 "_"
 *   insn=0x00000000004498E4 string=0x00000000004498E8 "("
 *   insn=0x00000000004498E8 string=0x00000000004498EC "I1"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::MeshOptimizer::HashForCell(__int64 a1, _DWORD *a2)
{
  unsigned int v2; // w8
  unsigned int v3; // w9
  unsigned int v4; // w10
  unsigned int v5; // w8
  int v6; // w9

  v2 = 1500450271 * *a2;
  v3 = 795028841 * a2[1];
  v4 = -1323752223 * a2[2];
  if ( v2 >= 0xFFFFFFFB )
    v2 += 5;
  if ( v3 >= 0xFFFFFFFB )
    v3 += 5;
  v5 = v3 + v2;
  if ( v4 >= 0xFFFFFFFB )
    v6 = v4 + 5;
  else
    v6 = -1323752223 * a2[2];
  return v5 + v6;
}

