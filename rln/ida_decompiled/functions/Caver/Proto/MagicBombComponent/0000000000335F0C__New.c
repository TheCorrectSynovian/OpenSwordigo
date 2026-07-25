/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000335F0C
 * Mangled: _ZNK5Caver5Proto18MagicBombComponent3NewEv
 * Demangled: Caver::Proto::MagicBombComponent::New(void)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000001F55E0  operator new(ulong)
 *
 * Referenced strings: 4
 *   insn=0x0000000000335F18 string=0x00000000001F55E0 "P'"
 *   insn=0x0000000000335F1C string=0x0000000000335F20 ""
 *   insn=0x0000000000335F2C string=0x0000000000335F30 "A"
 *   insn=0x0000000000335F30 string=0x0000000000335F34 ""
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Proto::MagicBombComponent::New(Caver::Proto::MagicBombComponent *this)
{
  __int64 result; // x0

  result = operator new(0x20u);
  *(_DWORD *)(result + 8) = 0;
  *(_QWORD *)(result + 16) = 0;
  *(_DWORD *)(result + 24) = 0;
  *(_QWORD *)result = off_6C99F0;
  return result;
}

