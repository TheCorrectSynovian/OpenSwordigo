/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000003358A8
 * Mangled: _ZNK5Caver5Proto29ProjectileControllerComponent3NewEv
 * Demangled: Caver::Proto::ProjectileControllerComponent::New(void)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000001F55E0  operator new(ulong)
 *
 * Referenced strings: 5
 *   insn=0x00000000003358B0 string=0x00000000003358B4 "K"
 *   insn=0x00000000003358B4 string=0x00000000001F55E0 "P'"
 *   insn=0x00000000003358B8 string=0x00000000003358BC ""
 *   insn=0x00000000003358C8 string=0x00000000003358CC "A"
 *   insn=0x00000000003358CC string=0x00000000003358D0 ""
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Proto::ProjectileControllerComponent::New(Caver::Proto::ProjectileControllerComponent *this)
{
  __int64 result; // x0

  result = operator new(0x18u);
  *(_DWORD *)(result + 8) = 0;
  *(_WORD *)(result + 12) = 0;
  *(_DWORD *)(result + 16) = 0;
  *(_QWORD *)result = off_6C9978;
  return result;
}

