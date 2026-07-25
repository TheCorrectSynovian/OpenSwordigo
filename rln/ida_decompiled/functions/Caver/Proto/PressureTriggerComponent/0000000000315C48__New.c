/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000315C48
 * Mangled: _ZNK5Caver5Proto24PressureTriggerComponent3NewEv
 * Demangled: Caver::Proto::PressureTriggerComponent::New(void)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000001F55E0  operator new(ulong)
 *
 * Referenced strings: 5
 *   insn=0x0000000000315C50 string=0x0000000000315C54 "c~"
 *   insn=0x0000000000315C54 string=0x00000000001F55E0 "P'"
 *   insn=0x0000000000315C58 string=0x0000000000315C5C ""
 *   insn=0x0000000000315C68 string=0x0000000000315C6C "A"
 *   insn=0x0000000000315C6C string=0x0000000000315C70 "|"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Proto::PressureTriggerComponent::New(Caver::Proto::PressureTriggerComponent *this)
{
  __int64 result; // x0

  result = operator new(0x30u);
  *(_BYTE *)(result + 16) = 0;
  *(_QWORD *)(result + 24) = 0;
  *(_QWORD *)(result + 32) = 0;
  *(_DWORD *)(result + 40) = 0;
  *(_QWORD *)result = off_6C8118;
  *(_QWORD *)(result + 8) = 0;
  return result;
}

