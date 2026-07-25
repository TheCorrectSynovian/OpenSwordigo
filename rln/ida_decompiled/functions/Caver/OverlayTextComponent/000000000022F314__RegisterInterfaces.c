/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000022F314
 * Mangled: _ZN5Caver20OverlayTextComponent18RegisterInterfacesEPNS_16ComponentManagerE
 * Demangled: Caver::OverlayTextComponent::RegisterInterfaces(Caver::ComponentManager *)
 *
 * Callers: 0
 *
 * Callees: 4
 *   0x00000000001F38A0  Caver::Component::RegisterInterface(Caver::ComponentManager *,long)
 *   0x00000000002002D0  Caver::Component::RegisterInterfaces(Caver::ComponentManager *)
 *   0x000000000022B9F4  Caver::OverlayComponent::className(void)
 *   0x000000000022F364  Caver::OverlayTextComponent::className(void)
 *
 * Referenced strings: 5
 *   insn=0x000000000022F320 string=0x000000000022F324 "B"
 *   insn=0x000000000022F32C string=0x000000000022F330 "\"
 *   insn=0x000000000022F330 string=0x00000000001F38A0 "P'"
 *   insn=0x000000000022F334 string=0x000000000022F338 "B"
 *   insn=0x000000000022F340 string=0x000000000022F344 "W"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::OverlayTextComponent::RegisterInterfaces(
        Caver::OverlayTextComponent *this,
        Caver::ComponentManager *a2)
{
  Caver::Component::RegisterInterface(this, a2, (__int64)Caver::OverlayTextComponent::Interface);
  Caver::Component::RegisterInterface(this, a2, (__int64)Caver::OverlayComponent::Interface);
  return Caver::Component::RegisterInterfaces(this, a2);
}

