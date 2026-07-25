/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000032B5B4
 * Mangled: _ZN5Caver5Proto14SwingComponent5ClearEv
 * Demangled: Caver::Proto::SwingComponent::Clear(void)
 *
 * Callers: 0
 *
 * Callees: 0
 *
 * Referenced strings: 0
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Proto::SwingComponent::Clear(__int64 this)
{
  if ( *(_BYTE *)(this + 28) )
  {
    *(_DWORD *)(this + 12) = 0;
    *(_WORD *)(this + 16) = 0;
    *(_DWORD *)(this + 20) = 0;
    *(_DWORD *)(this + 24) = 0;
  }
  *(_DWORD *)(this + 28) = 0;
  return this;
}

