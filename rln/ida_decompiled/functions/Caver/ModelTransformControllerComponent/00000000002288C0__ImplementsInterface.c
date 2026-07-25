/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002288C0
 * Mangled: _ZN5Caver33ModelTransformControllerComponent19ImplementsInterfaceEl
 * Demangled: Caver::ModelTransformControllerComponent::ImplementsInterface(long)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x0000000000228978  Caver::ModelTransformControllerComponent::Interface(void)
 *
 * Referenced strings: 2
 *   insn=0x00000000002288C0 string=0x00000000002288C4 ""
 *   insn=0x00000000002288C4 string=0x00000000002288C8 "?"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

bool __fastcall Caver::ModelTransformControllerComponent::ImplementsInterface(
        Caver::ModelTransformControllerComponent *this,
        __int64 (__fastcall *a2)(Caver::ModelTransformControllerComponent *__hidden this))
{
  return a2 == Caver::ModelTransformControllerComponent::Interface;
}

