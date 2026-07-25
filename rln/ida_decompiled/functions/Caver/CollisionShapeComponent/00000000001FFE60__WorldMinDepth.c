/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FFE60
 * Mangled: ._ZNK5Caver23CollisionShapeComponent13WorldMinDepthEv
 * Demangled: Caver::CollisionShapeComponent::WorldMinDepth(void)
 *
 * Callers: 1
 *   0x00000000002303C4  Caver::PortalComponent::RegisterLibrary(void)
 *
 * Callees: 1
 *   0x000000000021A8A8  Caver::CollisionShapeComponent::RegisterLibrary(void)
 *
 * Referenced strings: 2
 *   insn=0x00000000001FFE64 string=0x000000000021A9E8 ""
 *   insn=0x00000000001FFE68 string=0x00000000001FFE6C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void __fastcall Caver::CollisionShapeComponent::WorldMinDepth(Caver::CollisionShapeComponent *this)
{
  JUMPOUT(0x21A9E8);
}

