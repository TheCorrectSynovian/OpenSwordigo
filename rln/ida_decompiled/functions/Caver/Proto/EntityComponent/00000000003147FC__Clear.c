/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000003147FC
 * Mangled: _ZN5Caver5Proto15EntityComponent5ClearEv
 * Demangled: Caver::Proto::EntityComponent::Clear(void)
 *
 * Callers: 0
 *
 * Callees: 0
 *
 * Referenced strings: 2
 *   insn=0x0000000000314804 string=0x0000000000314808 ""
 *   insn=0x0000000000314808 string=0x000000000031480C "@"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Proto::EntityComponent::Clear(__int64 this)
{
  if ( *(_BYTE *)(this + 20) )
  {
    *(_DWORD *)(this + 12) = 1;
    *(_BYTE *)(this + 16) = 1;
  }
  *(_DWORD *)(this + 20) = 0;
  return this;
}

