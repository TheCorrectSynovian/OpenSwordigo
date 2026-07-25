/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002004B0
 * Mangled: ._ZN5Caver24OrbitControllerComponentC2Ev
 * Demangled: Caver::OrbitControllerComponent::OrbitControllerComponent(void)
 *
 * Callers: 1
 *   0x00000000002503F8  Caver::OrbitControllerComponent::Create(void)
 *
 * Callees: 1
 *   0x00000000002A3ADC  Caver::OrbitControllerComponent::OrbitControllerComponent(void)
 *
 * Referenced strings: 1
 *   insn=0x00000000002004B8 string=0x00000000002004BC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::OrbitControllerComponent::OrbitControllerComponent(Caver::OrbitControllerComponent *this)
{
  return _ZN5Caver24OrbitControllerComponentC2Ev(this);
}

