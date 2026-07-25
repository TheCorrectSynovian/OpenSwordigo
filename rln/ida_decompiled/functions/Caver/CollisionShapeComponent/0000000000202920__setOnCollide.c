/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000202920
 * Mangled: ._ZN5Caver23CollisionShapeComponent12setOnCollideERKNS_7ProgramE
 * Demangled: Caver::CollisionShapeComponent::setOnCollide(Caver::Program const&)
 *
 * Callers: 1
 *   0x00000000002BFAB8  Caver::GroundPolygonComponent::Process(std::vector<boost::intrusive_ptr<Caver::Component>,std::allocator<boost::intrusive_ptr<Caver::Component>>> *)
 *
 * Callees: 1
 *   0x00000000002C0418  Caver::CollisionShapeComponent::setOnCollide(Caver::Program const&)
 *
 * Referenced strings: 1
 *   insn=0x0000000000202928 string=0x000000000020292C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::CollisionShapeComponent::setOnCollide(
        Caver::CollisionShapeComponent *this,
        const Caver::Program *a2)
{
  return _ZN5Caver23CollisionShapeComponent12setOnCollideERKNS_7ProgramE(this, a2);
}

