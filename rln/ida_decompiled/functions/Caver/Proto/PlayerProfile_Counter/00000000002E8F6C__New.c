/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002E8F6C
 * Mangled: _ZNK5Caver5Proto21PlayerProfile_Counter3NewEv
 * Demangled: Caver::Proto::PlayerProfile_Counter::New(void)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000001F55E0  operator new(ulong)
 *
 * Referenced strings: 6
 *   insn=0x00000000002E8F78 string=0x00000000001F55E0 "P'"
 *   insn=0x00000000002E8F7C string=0x00000000002E8F80 ""
 *   insn=0x00000000002E8F88 string=0x00000000002E8F8C ")"
 *   insn=0x00000000002E8F8C string=0x00000000002E8F90 "A"
 *   insn=0x00000000002E8F90 string=0x00000000002E8F94 ""
 *   insn=0x00000000002E8F94 string=0x00000000002E8F98 "\t|"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Proto::PlayerProfile_Counter::New(Caver::Proto::PlayerProfile_Counter *this)
{
  __int64 result; // x0

  result = operator new(0x20u);
  *(_DWORD *)(result + 8) = 0;
  *(_QWORD *)result = off_6C6D30;
  *(_QWORD *)(result + 16) = &Caver::Proto::PlayerProfile_Counter::_default_name_;
  *(_QWORD *)(result + 24) = 0;
  return result;
}

