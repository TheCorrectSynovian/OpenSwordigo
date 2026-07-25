/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002C909C
 * Mangled: _ZN5Caver34SwingableWeaponControllerComponent10StartSwingEiff
 * Demangled: Caver::SwingableWeaponControllerComponent::StartSwing(int,float,float)
 *
 * Callers: 1
 *   0x00000000001F4A10  Caver::SwingableWeaponControllerComponent::StartSwing(int,float,float)
 *
 * Callees: 1
 *   0x0000000000200A10  Caver::SwingableWeaponComponent::StartSwing(int,float,float)
 *
 * Referenced strings: 2
 *   insn=0x00000000002C90A4 string=0x00000000002C90A8 "@"
 *   insn=0x00000000002C90A8 string=0x00000000002C90AC "Y"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::SwingableWeaponControllerComponent::StartSwing(
        Caver::SwingableWeaponControllerComponent *this,
        int a2,
        float a3,
        float a4)
{
  Caver::SwingableWeaponComponent *v5; // x0

  v5 = (Caver::SwingableWeaponComponent *)*((_QWORD *)this + 19);
  *((_DWORD *)this + 42) = a2;
  if ( v5 )
    Caver::SwingableWeaponComponent::StartSwing(v5, a3, a4);
}

