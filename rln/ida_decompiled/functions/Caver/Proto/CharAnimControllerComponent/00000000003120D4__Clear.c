/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000003120D4
 * Mangled: _ZN5Caver5Proto27CharAnimControllerComponent5ClearEv
 * Demangled: Caver::Proto::CharAnimControllerComponent::Clear(void)
 *
 * Callers: 0
 *
 * Callees: 0
 *
 * Referenced strings: 0
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Proto::CharAnimControllerComponent::Clear(__int64 this)
{
  if ( *(_BYTE *)(this + 36) )
  {
    *(_QWORD *)(this + 20) = 0;
    *(_QWORD *)(this + 12) = 0;
    *(_QWORD *)(this + 28) = 0;
  }
  *(_DWORD *)(this + 36) = 0;
  return this;
}

