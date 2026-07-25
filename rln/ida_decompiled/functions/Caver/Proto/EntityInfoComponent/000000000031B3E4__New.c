/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000031B3E4
 * Mangled: _ZNK5Caver5Proto19EntityInfoComponent3NewEv
 * Demangled: Caver::Proto::EntityInfoComponent::New(void)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000001F55E0  operator new(ulong)
 *
 * Referenced strings: 9
 *   insn=0x000000000031B3EC string=0x000000000031B3F0 "|h"
 *   insn=0x000000000031B3F0 string=0x000000000031B3F4 "H"
 *   insn=0x000000000031B3F0 string=0x00000000001F55E0 "P'"
 *   insn=0x000000000031B3F4 string=0x000000000031B3F8 ""
 *   insn=0x000000000031B3FC string=0x000000000031B400 "I"
 *   insn=0x000000000031B400 string=0x000000000031B404 ")"
 *   insn=0x000000000031B404 string=0x000000000031B408 "A"
 *   insn=0x000000000031B408 string=0x000000000031B40C ""
 *   insn=0x000000000031B410 string=0x000000000031B414 "\t"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Proto::EntityInfoComponent::New(Caver::Proto::EntityInfoComponent *this)
{
  __int64 result; // x0

  result = operator new(0x20u);
  *(_DWORD *)(result + 8) = 0;
  *(_QWORD *)result = off_6C8550;
  *(_DWORD *)(result + 24) = 0;
  *(_QWORD *)(result + 16) = &Caver::Proto::EntityInfoComponent::_default_entity_class_;
  return result;
}

