/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000003DAD4C
 * Mangled: _ZN5Caver9HealthBar16SetCurrentHealthEi
 * Demangled: Caver::HealthBar::SetCurrentHealth(int)
 *
 * Callers: 1
 *   0x00000000001FAC80  Caver::HealthBar::SetCurrentHealth(int)
 *
 * Callees: 0
 *
 * Referenced strings: 1
 *   insn=0x00000000003DAD50 string=0x00000000003DAD54 "@"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::HealthBar::SetCurrentHealth(__int64 this, int a2)
{
  if ( *(_DWORD *)(this + 272) != a2 )
    *(_DWORD *)(this + 272) = a2;
  return this;
}

