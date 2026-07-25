/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000315C40
 * Mangled: _ZNK5Caver5Proto24PressureTriggerComponent13SetCachedSizeEi
 * Demangled: Caver::Proto::PressureTriggerComponent::SetCachedSize(int)
 *
 * Callers: 1
 *   0x0000000000315BA4  Caver::Proto::PressureTriggerComponent::~PressureTriggerComponent()
 *
 * Callees: 0
 *
 * Referenced strings: 0
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Proto::PressureTriggerComponent::SetCachedSize(__int64 this, int a2)
{
  *(_DWORD *)(this + 8) = a2;
  return this;
}

