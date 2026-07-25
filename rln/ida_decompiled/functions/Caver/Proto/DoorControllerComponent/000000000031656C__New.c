/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000031656C
 * Mangled: _ZNK5Caver5Proto23DoorControllerComponent3NewEv
 * Demangled: Caver::Proto::DoorControllerComponent::New(void)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000001F55E0  operator new(ulong)
 *
 * Referenced strings: 4
 *   insn=0x0000000000316578 string=0x00000000001F55E0 "P'"
 *   insn=0x000000000031657C string=0x0000000000316580 ""
 *   insn=0x000000000031658C string=0x0000000000316590 "A"
 *   insn=0x0000000000316590 string=0x0000000000316594 ""
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Proto::DoorControllerComponent::New(Caver::Proto::DoorControllerComponent *this)
{
  __int64 result; // x0

  result = operator new(0x28u);
  *(_DWORD *)(result + 32) = 0;
  *(_QWORD *)(result + 8) = 0;
  *(_QWORD *)(result + 16) = 0;
  *(_QWORD *)(result + 21) = 0;
  *(_QWORD *)result = off_6C8190;
  return result;
}

