/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000316C5C
 * Mangled: _ZN5Caver5Proto16ProgramComponent10SharedCtorEv
 * Demangled: Caver::Proto::ProgramComponent::SharedCtor(void)
 *
 * Callers: 0
 *
 * Callees: 0
 *
 * Referenced strings: 1
 *   insn=0x0000000000316C68 string=0x0000000000316C6C ""
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Proto::ProgramComponent::SharedCtor(__int64 this)
{
  *(_DWORD *)(this + 8) = 0;
  *(_WORD *)(this + 12) = 0;
  *(_QWORD *)(this + 24) = 0;
  *(_DWORD *)(this + 16) = 1;
  *(_DWORD *)(this + 32) = 0;
  return this;
}

