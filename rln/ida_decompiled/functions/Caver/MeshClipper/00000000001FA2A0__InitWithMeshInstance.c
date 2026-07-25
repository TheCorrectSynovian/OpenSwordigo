/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FA2A0
 * Mangled: ._ZN5Caver11MeshClipper20InitWithMeshInstanceEPNS_12MeshInstanceERKNS_7Matrix4E
 * Demangled: Caver::MeshClipper::InitWithMeshInstance(Caver::MeshInstance *,Caver::Matrix4 const&)
 *
 * Callers: 1
 *   0x000000000029A714  Caver::MonsterDeathControllerComponent::CreateSliceObject(boost::shared_ptr<Caver::Model> const&,Caver::Vector3 const&)
 *
 * Callees: 1
 *   0x0000000000447FD8  Caver::MeshClipper::InitWithMeshInstance(Caver::MeshInstance *,Caver::Matrix4 const&)
 *
 * Referenced strings: 1
 *   insn=0x00000000001FA2A8 string=0x00000000001FA2AC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::MeshClipper::InitWithMeshInstance(
        Caver::MeshClipper *this,
        Caver::MeshInstance *a2,
        const Caver::Matrix4 *a3)
{
  return _ZN5Caver11MeshClipper20InitWithMeshInstanceEPNS_12MeshInstanceERKNS_7Matrix4E(this, a2, a3);
}

