/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000003062C4
 * Mangled: _ZNK5Caver5Proto22GroundPolygonComponent3NewEv
 * Demangled: Caver::Proto::GroundPolygonComponent::New(void)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000001F55E0  operator new(ulong)
 *
 * Referenced strings: 8
 *   insn=0x00000000003062D0 string=0x00000000003062D4 ""
 *   insn=0x00000000003062D0 string=0x00000000001F55E0 "P'"
 *   insn=0x00000000003062DC string=0x00000000003062E0 "("
 *   insn=0x00000000003062E4 string=0x00000000003062E8 "`"
 *   insn=0x00000000003062E8 string=0x00000000003062EC ""
 *   insn=0x00000000003062EC string=0x00000000003062F0 ""
 *   insn=0x00000000003062FC string=0x0000000000306300 "A"
 *   insn=0x0000000000306308 string=0x000000000030630C ""
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Proto::GroundPolygonComponent::New(Caver::Proto::GroundPolygonComponent *this)
{
  __int64 result; // x0

  result = operator new(0x70u);
  *(_QWORD *)(result + 16) = 0;
  *(_QWORD *)(result + 24) = result + 48;
  *(_DWORD *)(result + 40) = 4;
  *(_BYTE *)(result + 88) = 1;
  *(_QWORD *)(result + 32) = 0;
  *(_DWORD *)(result + 8) = 0;
  *(_QWORD *)(result + 80) = 0;
  *(_DWORD *)(result + 108) = 0;
  *(_QWORD *)(result + 97) = 0;
  *(_QWORD *)result = off_6C77B8;
  *(_QWORD *)(result + 92) = 0;
  return result;
}

