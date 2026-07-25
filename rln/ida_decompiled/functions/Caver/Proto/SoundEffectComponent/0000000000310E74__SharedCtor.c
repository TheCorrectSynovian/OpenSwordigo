/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000310E74
 * Mangled: _ZN5Caver5Proto20SoundEffectComponent10SharedCtorEv
 * Demangled: Caver::Proto::SoundEffectComponent::SharedCtor(void)
 *
 * Callers: 0
 *
 * Callees: 0
 *
 * Referenced strings: 2
 *   insn=0x0000000000310E80 string=0x0000000000310E84 ""
 *   insn=0x0000000000310E8C string=0x0000000000310E90 ""
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

double __fastcall Caver::Proto::SoundEffectComponent::SharedCtor(Caver::Proto::SoundEffectComponent *this)
{
  double result; // d0

  *(_QWORD *)&result = 1065353216;
  *((_DWORD *)this + 2) = 0;
  *((_QWORD *)this + 3) = 1065353216;
  *((_DWORD *)this + 8) = 0;
  *((_QWORD *)this + 2) = &Caver::Proto::SoundEffectComponent::_default_name_;
  return result;
}

