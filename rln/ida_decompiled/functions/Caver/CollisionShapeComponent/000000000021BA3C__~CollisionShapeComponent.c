/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000021BA3C
 * Mangled: _ZN5Caver23CollisionShapeComponentD0Ev
 * Demangled: Caver::CollisionShapeComponent::~CollisionShapeComponent()
 *
 * Callers: 1
 *   0x000000000021B980  sub_21B980
 *
 * Callees: 4
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000001F8310  Caver::CollisionShapeComponent::~CollisionShapeComponent()
 *   0x000000000021BA74  Caver::CollisionShapeComponent::Clone(void)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 3
 *   insn=0x000000000021BA48 string=0x000000000021BA4C "1r"
 *   insn=0x000000000021BA4C string=0x00000000001F8310 "0'"
 *   insn=0x000000000021BA5C string=0x00000000001F72B0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::CollisionShapeComponent::~CollisionShapeComponent(Caver::CollisionShapeComponent *this)
{
  Caver::CollisionShapeComponent::~CollisionShapeComponent(this);
  operator delete(this);
}

