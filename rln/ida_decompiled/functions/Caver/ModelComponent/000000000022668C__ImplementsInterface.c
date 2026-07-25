/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000022668C
 * Mangled: _ZN5Caver14ModelComponent19ImplementsInterfaceEl
 * Demangled: Caver::ModelComponent::ImplementsInterface(long)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x0000000000215678  Caver::ModelComponent::Interface(void)
 *
 * Referenced strings: 2
 *   insn=0x000000000022668C string=0x0000000000226690 "1D"
 *   insn=0x0000000000226690 string=0x0000000000226694 "?"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

bool __fastcall Caver::ModelComponent::ImplementsInterface(
        Caver::ModelComponent *this,
        __int64 (__fastcall *(__fastcall *a2)(Caver::ModelComponent *this))(Caver::ModelComponent *__hidden this))
{
  return a2 == Caver::ModelComponent::Interface;
}

