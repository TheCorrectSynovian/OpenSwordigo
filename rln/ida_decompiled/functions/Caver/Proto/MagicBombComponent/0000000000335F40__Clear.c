/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000335F40
 * Mangled: _ZN5Caver5Proto18MagicBombComponent5ClearEv
 * Demangled: Caver::Proto::MagicBombComponent::Clear(void)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000001FBAB0  Caver::Proto::FloatColor::Clear(void)
 *
 * Referenced strings: 4
 *   insn=0x0000000000335F4C string=0x0000000000335F50 "hb@9"
 *   insn=0x0000000000335F54 string=0x0000000000335F58 "`\n@"
 *   insn=0x0000000000335F58 string=0x0000000000335F5C "@"
 *   insn=0x0000000000335F60 string=0x00000000001FBAB0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Proto::MagicBombComponent::Clear(__int64 this)
{
  __int64 v1; // x19

  v1 = this;
  if ( (*(_BYTE *)(this + 24) & 1) != 0 )
  {
    this = *(_QWORD *)(this + 16);
    if ( this )
      this = Caver::Proto::FloatColor::Clear((Caver::Proto::FloatColor *)this);
  }
  *(_DWORD *)(v1 + 24) = 0;
  return this;
}

