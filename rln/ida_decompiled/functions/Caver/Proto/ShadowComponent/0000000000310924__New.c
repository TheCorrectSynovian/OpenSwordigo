/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000310924
 * Mangled: _ZNK5Caver5Proto15ShadowComponent3NewEv
 * Demangled: Caver::Proto::ShadowComponent::New(void)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000001F55E0  operator new(ulong)
 *
 * Referenced strings: 5
 *   insn=0x000000000031092C string=0x0000000000310930 ","
 *   insn=0x0000000000310930 string=0x00000000001F55E0 "P'"
 *   insn=0x0000000000310934 string=0x0000000000310938 "MG"
 *   insn=0x0000000000310944 string=0x0000000000310948 "A"
 *   insn=0x0000000000310948 string=0x000000000031094C "|"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Proto::ShadowComponent::New(Caver::Proto::ShadowComponent *this)
{
  __int64 result; // x0

  result = operator new(0x28u);
  *(_DWORD *)(result + 16) = 0;
  *(_QWORD *)(result + 24) = 0;
  *(_DWORD *)(result + 32) = 0;
  *(_QWORD *)result = off_6C7D58;
  *(_QWORD *)(result + 8) = 0;
  return result;
}

