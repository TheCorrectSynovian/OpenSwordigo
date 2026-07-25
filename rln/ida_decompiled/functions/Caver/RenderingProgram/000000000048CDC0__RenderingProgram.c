/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000048CDC0
 * Mangled: _ZN5Caver16RenderingProgramC2EPNS_16RenderingContextERKSs
 * Demangled: Caver::RenderingProgram::RenderingProgram(Caver::RenderingContext *,std::string const&)
 *
 * Callers: 1
 *   0x00000000001FBF00  Caver::RenderingProgram::RenderingProgram(Caver::RenderingContext *,std::string const&)
 *
 * Callees: 1
 *   0x000000000056A528  sub_56A528
 *
 * Referenced strings: 6
 *   insn=0x000000000048CDCC string=0x000000000048CDD0 "a"
 *   insn=0x000000000048CDD0 string=0x000000000048CDD4 "`""
 *   insn=0x000000000048CDDC string=0x000000000048CDE0 ""
 *   insn=0x000000000048CDF8 string=0x000000000048CDFC "h""
 *   insn=0x000000000048CDFC string=0x000000000048CE00 "h""
 *   insn=0x000000000048CE00 string=0x000000000048CE04 "h""
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::RenderingProgram::RenderingProgram(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 result; // x0

  *(_QWORD *)a1 = a2;
  result = sub_56A528(a1 + 8, a3);
  *(_DWORD *)(a1 + 16) = 0;
  *(_BYTE *)(a1 + 20) = 0;
  *(_DWORD *)(a1 + 24) = 0;
  *(_QWORD *)(a1 + 32) = 0;
  *(_QWORD *)(a1 + 40) = 0;
  *(_QWORD *)(a1 + 128) = 0;
  *(_QWORD *)(a1 + 136) = 0;
  *(_QWORD *)(a1 + 112) = 0;
  *(_QWORD *)(a1 + 120) = 0;
  *(_QWORD *)(a1 + 96) = -1;
  *(_QWORD *)(a1 + 104) = -1;
  *(_QWORD *)(a1 + 80) = -1;
  *(_QWORD *)(a1 + 88) = -1;
  *(_QWORD *)(a1 + 64) = -1;
  *(_QWORD *)(a1 + 72) = -1;
  *(_QWORD *)(a1 + 48) = 0;
  *(_QWORD *)(a1 + 56) = -1;
  return result;
}

