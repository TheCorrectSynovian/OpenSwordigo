/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FB200
 * Mangled: ._ZN5Caver27RotatingBackgroundComponentC2Ev
 * Demangled: Caver::RotatingBackgroundComponent::RotatingBackgroundComponent(void)
 *
 * Callers: 1
 *   0x0000000000250638  Caver::RotatingBackgroundComponent::Create(void)
 *
 * Callees: 1
 *   0x00000000002B6680  Caver::RotatingBackgroundComponent::RotatingBackgroundComponent(void)
 *
 * Referenced strings: 1
 *   insn=0x00000000001FB208 string=0x00000000001FB20C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::RotatingBackgroundComponent::RotatingBackgroundComponent(
        Caver::RotatingBackgroundComponent *this)
{
  return _ZN5Caver27RotatingBackgroundComponentC2Ev(this);
}

