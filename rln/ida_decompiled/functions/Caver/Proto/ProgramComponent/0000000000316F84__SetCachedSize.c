/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000316F84
 * Mangled: _ZNK5Caver5Proto16ProgramComponent13SetCachedSizeEi
 * Demangled: Caver::Proto::ProgramComponent::SetCachedSize(int)
 *
 * Callers: 1
 *   0x0000000000316EFC  Caver::Proto::ProgramComponent::~ProgramComponent()
 *
 * Callees: 0
 *
 * Referenced strings: 0
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Proto::ProgramComponent::SetCachedSize(__int64 this, int a2)
{
  *(_DWORD *)(this + 8) = a2;
  return this;
}

