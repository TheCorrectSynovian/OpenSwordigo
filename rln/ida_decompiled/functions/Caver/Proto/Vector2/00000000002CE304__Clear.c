/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002CE304
 * Mangled: _ZN5Caver5Proto7Vector25ClearEv
 * Demangled: Caver::Proto::Vector2::Clear(void)
 *
 * Callers: 1
 *   0x00000000001F3B50  Caver::Proto::Vector2::Clear(void)
 *
 * Callees: 0
 *
 * Referenced strings: 1
 *   insn=0x00000000002CE304 string=0x00000000002CE308 "H"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Proto::Vector2::Clear(__int64 this)
{
  if ( *(_BYTE *)(this + 20) )
  {
    *(_DWORD *)(this + 12) = 0;
    *(_DWORD *)(this + 16) = 0;
  }
  *(_DWORD *)(this + 20) = 0;
  return this;
}

