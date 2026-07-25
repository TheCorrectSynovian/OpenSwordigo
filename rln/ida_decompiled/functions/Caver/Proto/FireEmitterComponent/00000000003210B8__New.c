/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000003210B8
 * Mangled: _ZNK5Caver5Proto20FireEmitterComponent3NewEv
 * Demangled: Caver::Proto::FireEmitterComponent::New(void)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000001F55E0  operator new(ulong)
 *
 * Referenced strings: 6
 *   insn=0x00000000003210C0 string=0x00000000003210C4 "GQ"
 *   insn=0x00000000003210C4 string=0x00000000003210C8 "("
 *   insn=0x00000000003210C4 string=0x00000000001F55E0 "P'"
 *   insn=0x00000000003210C8 string=0x00000000003210CC ""
 *   insn=0x00000000003210D8 string=0x00000000003210DC "A"
 *   insn=0x00000000003210E0 string=0x00000000003210E4 "|"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Proto::FireEmitterComponent::New(Caver::Proto::FireEmitterComponent *this)
{
  __int64 result; // x0

  result = operator new(0x48u);
  *(_DWORD *)(result + 16) = 0;
  *(_QWORD *)(result + 48) = 0;
  *(_QWORD *)(result + 56) = 0;
  *(_QWORD *)(result + 32) = 0;
  *(_QWORD *)(result + 40) = 0;
  *(_QWORD *)(result + 24) = 0;
  *(_QWORD *)result = off_6C8898;
  *(_QWORD *)(result + 8) = 0;
  *(_DWORD *)(result + 64) = 0;
  return result;
}

