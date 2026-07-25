/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004B2BAC
 * Mangled: _ZN5Caver7Vector3C2ERKNS_7Vector4E
 * Demangled: Caver::Vector3::Vector3(Caver::Vector4 const&)
 *
 * Callers: 1
 *   0x00000000001F71D0  Caver::Vector3::Vector3(Caver::Vector4 const&)
 *
 * Callees: 0
 *
 * Referenced strings: 3
 *   insn=0x00000000004B2BAC string=0x00000000004B2BB0 ""
 *   insn=0x00000000004B2BB0 string=0x00000000004B2BB4 "(@"
 *   insn=0x00000000004B2BB4 string=0x00000000004B2BB8 ""
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Vector3::Vector3(__int64 result, __int64 a2)
{
  *(_QWORD *)result = *(_QWORD *)a2;
  *(_DWORD *)(result + 8) = *(_DWORD *)(a2 + 8);
  return result;
}

