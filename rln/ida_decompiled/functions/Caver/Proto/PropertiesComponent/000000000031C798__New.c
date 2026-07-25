/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000031C798
 * Mangled: _ZNK5Caver5Proto19PropertiesComponent3NewEv
 * Demangled: Caver::Proto::PropertiesComponent::New(void)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000001F55E0  operator new(ulong)
 *
 * Referenced strings: 5
 *   insn=0x000000000031C7A4 string=0x000000000031C7A8 "H"
 *   insn=0x000000000031C7A4 string=0x00000000001F55E0 "P'"
 *   insn=0x000000000031C7A8 string=0x000000000031C7AC "QG"
 *   insn=0x000000000031C7B8 string=0x000000000031C7BC "A"
 *   insn=0x000000000031C7BC string=0x000000000031C7C0 ""
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Proto::PropertiesComponent::New(Caver::Proto::PropertiesComponent *this)
{
  __int64 result; // x0

  result = operator new(0x20u);
  *(_DWORD *)(result + 8) = 0;
  *(_QWORD *)(result + 16) = 0;
  *(_DWORD *)(result + 24) = 0;
  *(_QWORD *)result = off_6C86B8;
  return result;
}

