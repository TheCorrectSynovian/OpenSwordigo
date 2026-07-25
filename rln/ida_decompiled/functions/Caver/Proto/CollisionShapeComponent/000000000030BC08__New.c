/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000030BC08
 * Mangled: _ZNK5Caver5Proto23CollisionShapeComponent3NewEv
 * Demangled: Caver::Proto::CollisionShapeComponent::New(void)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000001F55E0  operator new(ulong)
 *
 * Referenced strings: 6
 *   insn=0x000000000030BC10 string=0x000000000030BC14 "s"
 *   insn=0x000000000030BC14 string=0x00000000001F55E0 "P'"
 *   insn=0x000000000030BC18 string=0x000000000030BC1C "0"
 *   insn=0x000000000030BC20 string=0x000000000030BC24 ""
 *   insn=0x000000000030BC30 string=0x000000000030BC34 "A"
 *   insn=0x000000000030BC44 string=0x000000000030BC48 ""
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Proto::CollisionShapeComponent::New(Caver::Proto::CollisionShapeComponent *this)
{
  __int64 result; // x0

  result = operator new(0x48u);
  *(_BYTE *)(result + 12) = 1;
  *(_DWORD *)(result + 8) = 0;
  *(_DWORD *)(result + 13) = 0;
  *(_QWORD *)(result + 28) = 0;
  *(_QWORD *)(result + 20) = 0;
  *(_BYTE *)(result + 36) = 0;
  *(_QWORD *)(result + 48) = 0;
  *(_QWORD *)(result + 56) = 0;
  *(_QWORD *)(result + 40) = 0;
  *(_QWORD *)result = off_6C7A88;
  *(_DWORD *)(result + 64) = 0;
  return result;
}

