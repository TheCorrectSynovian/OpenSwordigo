/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004D3160
 * Mangled: _ZN5Caver22RenderingProgramShaderC2EPNS_16RenderingContextERKSsNS_26RenderingProgramShaderTypeEPKc
 * Demangled: Caver::RenderingProgramShader::RenderingProgramShader(Caver::RenderingContext *,std::string const&,Caver::RenderingProgramShaderType,char const*)
 *
 * Callers: 1
 *   0x0000000000202AC0  Caver::RenderingProgramShader::RenderingProgramShader(Caver::RenderingContext *,std::string const&,Caver::RenderingProgramShaderType,char const*)
 *
 * Callees: 1
 *   0x000000000056A528  sub_56A528
 *
 * Referenced strings: 0
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::RenderingProgramShader::RenderingProgramShader(__int64 a1, __int64 a2, __int64 a3, int a4)
{
  __int64 result; // x0

  *(_QWORD *)a1 = a2;
  result = sub_56A528(a1 + 8, a3);
  *(_DWORD *)(a1 + 20) = 0;
  *(_DWORD *)(a1 + 24) = 0;
  *(_DWORD *)(a1 + 16) = a4;
  *(_QWORD *)(a1 + 40) = 0;
  *(_QWORD *)(a1 + 48) = 0;
  *(_QWORD *)(a1 + 32) = 0;
  *(_BYTE *)(a1 + 56) = 0;
  return result;
}

