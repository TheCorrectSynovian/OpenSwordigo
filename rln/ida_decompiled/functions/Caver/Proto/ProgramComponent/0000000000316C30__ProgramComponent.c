/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000316C30
 * Mangled: _ZN5Caver5Proto16ProgramComponentC2Ev
 * Demangled: Caver::Proto::ProgramComponent::ProgramComponent(void)
 *
 * Callers: 0
 *
 * Callees: 0
 *
 * Referenced strings: 4
 *   insn=0x0000000000316C30 string=0x0000000000316C34 ""
 *   insn=0x0000000000316C40 string=0x0000000000316C44 "A"
 *   insn=0x0000000000316C48 string=0x0000000000316C4C "\t"
 *   insn=0x0000000000316C4C string=0x0000000000316C50 ""
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Proto::ProgramComponent::ProgramComponent(__int64 this)
{
  *(_DWORD *)(this + 8) = 0;
  *(_WORD *)(this + 12) = 0;
  *(_QWORD *)(this + 24) = 0;
  *(_DWORD *)(this + 16) = 1;
  *(_QWORD *)this = off_6C8208;
  *(_DWORD *)(this + 32) = 0;
  return this;
}

