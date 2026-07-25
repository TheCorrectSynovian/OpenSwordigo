/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000326E98
 * Mangled: _ZN5Caver5Proto32SkellyMonsterControllerComponent5ClearEv
 * Demangled: Caver::Proto::SkellyMonsterControllerComponent::Clear(void)
 *
 * Callers: 0
 *
 * Callees: 0
 *
 * Referenced strings: 1
 *   insn=0x0000000000326E98 string=0x0000000000326E9C "H"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Proto::SkellyMonsterControllerComponent::Clear(__int64 this)
{
  if ( *(_BYTE *)(this + 20) )
  {
    *(_DWORD *)(this + 12) = 0;
    *(_DWORD *)(this + 16) = 0;
  }
  *(_DWORD *)(this + 20) = 0;
  return this;
}

