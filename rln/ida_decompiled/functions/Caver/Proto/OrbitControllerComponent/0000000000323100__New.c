/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000323100
 * Mangled: _ZNK5Caver5Proto24OrbitControllerComponent3NewEv
 * Demangled: Caver::Proto::OrbitControllerComponent::New(void)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000001F55E0  operator new(ulong)
 *
 * Referenced strings: 6
 *   insn=0x0000000000323108 string=0x000000000032310C "5I"
 *   insn=0x000000000032310C string=0x0000000000323110 ""
 *   insn=0x000000000032310C string=0x00000000001F55E0 "P'"
 *   insn=0x0000000000323110 string=0x0000000000323114 ""
 *   insn=0x0000000000323120 string=0x0000000000323124 "A"
 *   insn=0x0000000000323124 string=0x0000000000323128 ""
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Proto::OrbitControllerComponent::New(Caver::Proto::OrbitControllerComponent *this)
{
  __int64 result; // x0

  result = operator new(0x28u);
  *(_DWORD *)(result + 8) = 0;
  *(_QWORD *)(result + 16) = 0;
  *(_QWORD *)(result + 24) = 0;
  *(_DWORD *)(result + 32) = 0;
  *(_QWORD *)result = off_6C8A00;
  return result;
}

