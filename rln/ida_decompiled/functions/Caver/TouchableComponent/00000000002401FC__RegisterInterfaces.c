/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002401FC
 * Mangled: _ZN5Caver18TouchableComponent18RegisterInterfacesEPNS_16ComponentManagerE
 * Demangled: Caver::TouchableComponent::RegisterInterfaces(Caver::ComponentManager *)
 *
 * Callers: 0
 *
 * Callees: 3
 *   0x00000000001F38A0  Caver::Component::RegisterInterface(Caver::ComponentManager *,long)
 *   0x00000000002002D0  Caver::Component::RegisterInterfaces(Caver::ComponentManager *)
 *   0x000000000023DE3C  Caver::GUITextBubble::~GUITextBubble()
 *
 * Referenced strings: 5
 *   insn=0x0000000000240204 string=0x0000000000240208 ""%"
 *   insn=0x0000000000240208 string=0x000000000024020C "B|A"
 *   insn=0x000000000024020C string=0x000000000023E174 "@%"
 *   insn=0x0000000000240218 string=0x00000000001F38A0 "P'"
 *   insn=0x0000000000240228 string=0x000000000024022C ")"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::TouchableComponent::RegisterInterfaces(
        Caver::TouchableComponent *this,
        Caver::ComponentManager *a2)
{
  Caver::Component::RegisterInterface(this, a2, (__int64)Caver::TouchableComponent::Interface);
  return Caver::Component::RegisterInterfaces(this, a2);
}

