/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002FA874
 * Mangled: _ZN5Caver5Proto24SwingableWeaponComponent21InitAsDefaultInstanceEv
 * Demangled: Caver::Proto::SwingableWeaponComponent::InitAsDefaultInstance(void)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000001F6310  Caver::Proto::FloatColor::default_instance(void)
 *
 * Referenced strings: 2
 *   insn=0x00000000002FA884 string=0x00000000002FA888 "`"
 *   insn=0x00000000002FA884 string=0x00000000001F6310 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Proto::SwingableWeaponComponent::InitAsDefaultInstance(
        Caver::Proto::SwingableWeaponComponent *this)
{
  __int64 result; // x0

  result = Caver::Proto::FloatColor::default_instance(this);
  *((_QWORD *)this + 4) = result;
  return result;
}

