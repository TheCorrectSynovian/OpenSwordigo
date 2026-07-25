/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000241DC0
 * Mangled: _ZN5Caver28TransformControllerComponent19ImplementsInterfaceEl
 * Demangled: Caver::TransformControllerComponent::ImplementsInterface(long)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x0000000000241E78  Caver::TransformControllerComponent::Interface(void)
 *
 * Referenced strings: 3
 *   insn=0x0000000000241DC0 string=0x0000000000241DC4 "1E"
 *   insn=0x0000000000241DC4 string=0x0000000000241DC8 "?"
 *   insn=0x0000000000241DC4 string=0x0000000000241E78 " %"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

bool __fastcall Caver::TransformControllerComponent::ImplementsInterface(
        Caver::TransformControllerComponent *this,
        __int64 (__fastcall *a2)(Caver::TransformControllerComponent *__hidden this))
{
  return a2 == Caver::TransformControllerComponent::Interface;
}

