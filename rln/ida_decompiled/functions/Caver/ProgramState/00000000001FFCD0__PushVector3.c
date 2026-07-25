/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FFCD0
 * Mangled: ._ZN5Caver12ProgramState11PushVector3ERKNS_7Vector3E
 * Demangled: Caver::ProgramState::PushVector3(Caver::Vector3 const&)
 *
 * Callers: 8
 *   0x000000000021AE00  Caver::CollisionShapeComponent::SetDefaultShapeOfType(Caver::Shape::Type)
 *   0x0000000000269858  sub_269858
 *   0x000000000027FB90  sub_27FB90
 *   0x000000000028F40C  sub_28F40C
 *   0x0000000000290364  sub_290364
 *   0x00000000004773BC  sub_4773BC
 *   0x0000000000477538  sub_477538
 *   0x0000000000477850  sub_477850
 *
 * Callees: 1
 *   0x00000000004C1AB0  Caver::ProgramState::PushVector3(Caver::Vector3 const&)
 *
 * Referenced strings: 2
 *   insn=0x00000000001FFCD4 string=0x00000000004C1AB0 "$"
 *   insn=0x00000000001FFCD8 string=0x00000000001FFCDC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::ProgramState::PushVector3(Caver::ProgramState *this, const Caver::Vector3 *a2)
{
  return _ZN5Caver12ProgramState11PushVector3ERKNS_7Vector3E(this, a2);
}

