/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000003DAD24
 * Mangled: _ZN5Caver9HealthBar12SetMaxHealthEi
 * Demangled: Caver::HealthBar::SetMaxHealth(int)
 *
 * Callers: 1
 *   0x00000000001FF640  Caver::HealthBar::SetMaxHealth(int)
 *
 * Callees: 1
 *   0x00000000001FAFE0  Caver::HealthBar::UpdateSprite(void)
 *
 * Referenced strings: 4
 *   insn=0x00000000003DAD28 string=0x00000000003DAD2C "A"
 *   insn=0x00000000003DAD2C string=0x00000000003DAD34 ""
 *   insn=0x00000000003DAD3C string=0x00000000003DAD40 "M"
 *   insn=0x00000000003DAD48 string=0x00000000001FAFE0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

Caver::HealthBar *__fastcall Caver::HealthBar::SetMaxHealth(Caver::HealthBar *this, int a2)
{
  int v2; // w8

  if ( *((_DWORD *)this + 67) != a2 )
  {
    v2 = *((_DWORD *)this + 68);
    *((_DWORD *)this + 67) = a2;
    if ( v2 > a2 )
      *((_DWORD *)this + 68) = a2;
    return (Caver::HealthBar *)Caver::HealthBar::UpdateSprite(this);
  }
  return this;
}

