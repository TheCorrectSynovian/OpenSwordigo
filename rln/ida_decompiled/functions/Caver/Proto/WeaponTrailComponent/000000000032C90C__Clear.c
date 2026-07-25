/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000032C90C
 * Mangled: _ZN5Caver5Proto20WeaponTrailComponent5ClearEv
 * Demangled: Caver::Proto::WeaponTrailComponent::Clear(void)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000001FBAB0  Caver::Proto::FloatColor::Clear(void)
 *
 * Referenced strings: 5
 *   insn=0x000000000032C918 string=0x000000000032C91C "hb@9"
 *   insn=0x000000000032C920 string=0x000000000032C924 "`\n@"
 *   insn=0x000000000032C924 string=0x000000000032C928 "@"
 *   insn=0x000000000032C928 string=0x000000000032C92C "a<"
 *   insn=0x000000000032C92C string=0x00000000001FBAB0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Proto::WeaponTrailComponent::Clear(__int64 this)
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

