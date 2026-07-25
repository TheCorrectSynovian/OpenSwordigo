/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000003112E8
 * Mangled: _ZNK5Caver5Proto20SoundEffectComponent3NewEv
 * Demangled: Caver::Proto::SoundEffectComponent::New(void)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000001F55E0  operator new(ulong)
 *
 * Referenced strings: 7
 *   insn=0x00000000003112F4 string=0x00000000001F55E0 "P'"
 *   insn=0x00000000003112F8 string=0x00000000003112FC "UB"
 *   insn=0x0000000000311308 string=0x000000000031130C ")"
 *   insn=0x000000000031130C string=0x0000000000311310 "@"
 *   insn=0x0000000000311310 string=0x0000000000311314 "A"
 *   insn=0x0000000000311314 string=0x0000000000311318 ""
 *   insn=0x0000000000311318 string=0x000000000031131C "\t"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

double __fastcall Caver::Proto::SoundEffectComponent::New(Caver::Proto::SoundEffectComponent *this)
{
  __int64 v1; // x0
  double result; // d0

  v1 = operator new(0x28u);
  *(_DWORD *)(v1 + 8) = 0;
  *(_QWORD *)&result = 1065353216;
  *(_QWORD *)v1 = off_6C7DD0;
  *(_QWORD *)(v1 + 16) = &Caver::Proto::SoundEffectComponent::_default_name_;
  *(_QWORD *)(v1 + 24) = 1065353216;
  *(_DWORD *)(v1 + 32) = 0;
  return result;
}

