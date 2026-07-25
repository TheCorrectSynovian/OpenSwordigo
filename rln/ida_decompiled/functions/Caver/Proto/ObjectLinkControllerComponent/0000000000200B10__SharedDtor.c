/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000200B10
 * Mangled: ._ZN5Caver5Proto29ObjectLinkControllerComponent10SharedDtorEv
 * Demangled: Caver::Proto::ObjectLinkControllerComponent::SharedDtor(void)
 *
 * Callers: 2
 *   0x000000000030E9D4  Caver::Proto::ObjectLinkControllerComponent::ObjectLinkControllerComponent(Caver::Proto::ObjectLinkControllerComponent const&)
 *   0x000000000030EEB8  Caver::Proto::ObjectLinkControllerComponent::~ObjectLinkControllerComponent()
 *
 * Callees: 1
 *   0x000000000030E9D4  Caver::Proto::ObjectLinkControllerComponent::ObjectLinkControllerComponent(Caver::Proto::ObjectLinkControllerComponent const&)
 *
 * Referenced strings: 1
 *   insn=0x0000000000200B18 string=0x0000000000200B1C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void __fastcall Caver::Proto::ObjectLinkControllerComponent::SharedDtor(
        Caver::Proto::ObjectLinkControllerComponent *this)
{
  JUMPOUT(0x30ED1C);
}

