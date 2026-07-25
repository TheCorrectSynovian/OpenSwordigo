/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FDE80
 * Mangled: ._ZN5Caver29ObjectLinkControllerComponentD2Ev
 * Demangled: Caver::ObjectLinkControllerComponent::~ObjectLinkControllerComponent()
 *
 * Callers: 1
 *   0x000000000022B11C  sub_22B11C
 *
 * Callees: 1
 *   0x000000000022B11C  sub_22B11C
 *
 * Referenced strings: 1
 *   insn=0x00000000001FDE88 string=0x00000000001FDE8C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void __fastcall Caver::ObjectLinkControllerComponent::~ObjectLinkControllerComponent(
        Caver::ObjectLinkControllerComponent *this)
{
  JUMPOUT(0x22B414);
}

