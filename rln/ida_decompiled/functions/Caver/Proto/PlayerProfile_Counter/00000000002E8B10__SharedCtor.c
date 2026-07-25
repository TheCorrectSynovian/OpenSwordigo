/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002E8B10
 * Mangled: _ZN5Caver5Proto21PlayerProfile_Counter10SharedCtorEv
 * Demangled: Caver::Proto::PlayerProfile_Counter::SharedCtor(void)
 *
 * Callers: 0
 *
 * Callees: 0
 *
 * Referenced strings: 2
 *   insn=0x00000000002E8B14 string=0x00000000002E8B18 ""
 *   insn=0x00000000002E8B18 string=0x00000000002E8B1C "|"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Proto::PlayerProfile_Counter::SharedCtor(__int64 this)
{
  *(_DWORD *)(this + 8) = 0;
  *(_QWORD *)(this + 16) = &Caver::Proto::PlayerProfile_Counter::_default_name_;
  *(_QWORD *)(this + 24) = 0;
  return this;
}

