/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000261334
 * Mangled: _ZN5Caver14SwingComponent9InterfaceEv
 * Demangled: Caver::SwingComponent::Interface(void)
 *
 * Callers: 4
 *   0x00000000002611C4  Caver::CharControllerComponent::className(void)
 *   0x0000000000261334  Caver::SwingComponent::Interface(void)
 *   0x00000000002CA518  Caver::SwingComponent::ImplementsInterface(long)
 *   0x00000000002CA52C  Caver::SwingComponent::RegisterInterfaces(Caver::ComponentManager *)
 *
 * Callees: 0
 *
 * Referenced strings: 1
 *   insn=0x0000000000261338 string=0x0000000000261334 " $"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 (__fastcall *__fastcall Caver::SwingComponent::Interface(
        Caver::SwingComponent *this))(Caver::SwingComponent *__hidden this)
{
  return Caver::SwingComponent::Interface;
}

