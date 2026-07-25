/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000318510
 * Mangled: _ZNK5Caver5Proto22PhysicsObjectComponent3NewEv
 * Demangled: Caver::Proto::PhysicsObjectComponent::New(void)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000001F55E0  operator new(ulong)
 *
 * Referenced strings: 8
 *   insn=0x0000000000318518 string=0x000000000031851C "1t"
 *   insn=0x000000000031851C string=0x0000000000318520 "h"
 *   insn=0x000000000031851C string=0x00000000001F55E0 "P'"
 *   insn=0x0000000000318520 string=0x0000000000318524 ""
 *   insn=0x0000000000318530 string=0x0000000000318534 "A"
 *   insn=0x0000000000318540 string=0x0000000000318544 "\t0"
 *   insn=0x0000000000318544 string=0x0000000000318548 "\n"
 *   insn=0x0000000000318548 string=0x000000000031854C ""
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Proto::PhysicsObjectComponent::New(Caver::Proto::PhysicsObjectComponent *this)
{
  __int64 result; // x0

  result = operator new(0x38u);
  *(_DWORD *)(result + 8) = 0;
  *(_QWORD *)(result + 16) = 0;
  *(_QWORD *)(result + 44) = 0;
  *(_QWORD *)(result + 33) = 0;
  *(_BYTE *)(result + 12) = 1;
  *(_DWORD *)(result + 24) = 1065353216;
  *(_QWORD *)result = off_6C82F8;
  *(_QWORD *)(result + 28) = 0;
  return result;
}

