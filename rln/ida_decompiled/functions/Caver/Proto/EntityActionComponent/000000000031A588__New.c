/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000031A588
 * Mangled: _ZNK5Caver5Proto21EntityActionComponent3NewEv
 * Demangled: Caver::Proto::EntityActionComponent::New(void)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000001F55E0  operator new(ulong)
 *
 * Referenced strings: 5
 *   insn=0x000000000031A594 string=0x000000000031A598 "H"
 *   insn=0x000000000031A594 string=0x00000000001F55E0 "P'"
 *   insn=0x000000000031A598 string=0x000000000031A59C "\tE"
 *   insn=0x000000000031A5A8 string=0x000000000031A5AC "A"
 *   insn=0x000000000031A5AC string=0x000000000031A5B0 ""
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Proto::EntityActionComponent::New(Caver::Proto::EntityActionComponent *this)
{
  __int64 result; // x0

  result = operator new(0x20u);
  *(_DWORD *)(result + 8) = 0;
  *(_QWORD *)(result + 16) = 0;
  *(_DWORD *)(result + 24) = 0;
  *(_QWORD *)result = off_6C8460;
  return result;
}

