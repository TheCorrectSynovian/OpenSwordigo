/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FFBF0
 * Mangled: ._ZN5Caver19FireBreathComponentC2Ev_0
 * Demangled: Caver::FireBreathComponent::FireBreathComponent(void)
 *
 * Callers: 1
 *   0x0000000000282FD8  Caver::FireBreathComponent::Clone(void)
 *
 * Callees: 1
 *   0x0000000000282208  Caver::FireBreathComponent::FireBreathComponent(void)
 *
 * Referenced strings: 1
 *   insn=0x00000000001FFBF8 string=0x00000000001FFBFC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::FireBreathComponent::FireBreathComponent(Caver::FireBreathComponent *this)
{
  return _ZN5Caver19FireBreathComponentC2Ev(this);
}

