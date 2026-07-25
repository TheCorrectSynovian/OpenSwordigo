/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000314D94
 * Mangled: _ZNK5Caver5Proto23BushControllerComponent3NewEv
 * Demangled: Caver::Proto::BushControllerComponent::New(void)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000001F55E0  operator new(ulong)
 *
 * Referenced strings: 4
 *   insn=0x0000000000314DA0 string=0x00000000001F55E0 "P'"
 *   insn=0x0000000000314DA4 string=0x0000000000314DA8 "IF"
 *   insn=0x0000000000314DB0 string=0x0000000000314DB4 "A"
 *   insn=0x0000000000314DB4 string=0x0000000000314DB8 ""
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Proto::BushControllerComponent::New(Caver::Proto::BushControllerComponent *this)
{
  __int64 result; // x0

  result = operator new(0x20u);
  *(_QWORD *)(result + 8) = 0;
  *(_QWORD *)(result + 16) = 0;
  *(_DWORD *)(result + 24) = 0;
  *(_QWORD *)result = off_6C8028;
  return result;
}

