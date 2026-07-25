/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002E8AEC
 * Mangled: _ZN5Caver5Proto21PlayerProfile_CounterC2Ev
 * Demangled: Caver::Proto::PlayerProfile_Counter::PlayerProfile_Counter(void)
 *
 * Callers: 1
 *   0x00000000001FC230  Caver::Proto::PlayerProfile_Counter::PlayerProfile_Counter(void)
 *
 * Callees: 0
 *
 * Referenced strings: 5
 *   insn=0x00000000002E8AEC string=0x00000000002E8AF0 ""
 *   insn=0x00000000002E8AF8 string=0x00000000002E8AFC ")"
 *   insn=0x00000000002E8AFC string=0x00000000002E8B00 "A"
 *   insn=0x00000000002E8B00 string=0x00000000002E8B04 ""
 *   insn=0x00000000002E8B04 string=0x00000000002E8B08 "\t|"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Proto::PlayerProfile_Counter::PlayerProfile_Counter(__int64 this)
{
  *(_DWORD *)(this + 8) = 0;
  *(_QWORD *)this = off_6C6D30;
  *(_QWORD *)(this + 16) = &Caver::Proto::PlayerProfile_Counter::_default_name_;
  *(_QWORD *)(this + 24) = 0;
  return this;
}

