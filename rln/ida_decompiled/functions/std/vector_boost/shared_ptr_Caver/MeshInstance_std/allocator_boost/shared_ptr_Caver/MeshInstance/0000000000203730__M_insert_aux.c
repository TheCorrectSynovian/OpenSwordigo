/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000203730
 * Mangled: ._ZNSt6vectorIN5boost10shared_ptrIN5Caver12MeshInstanceEEESaIS4_EE13_M_insert_auxEN9__gnu_cxx17__normal_iteratorIPS4_S6_EERKS4_
 * Demangled: std::vector<boost::shared_ptr<Caver::MeshInstance>,std::allocator<boost::shared_ptr<Caver::MeshInstance>>>::_M_insert_aux(__gnu_cxx::__normal_iterator<boost::shared_ptr<Caver::MeshInstance>*,std::vector<boost::shared_ptr<Caver::MeshInstance>,std::allocator<boost::shared_ptr<Caver::MeshInstance>>>>,boost::shared_ptr<Caver::MeshInstance> const&)
 *
 * Callers: 2
 *   0x00000000002B6F2C  Caver::GroundMeshComponent::LoadFromProtobufMessage(Caver::Proto::Component const&)
 *   0x00000000002B88A8  Caver::GroundMeshComponent::GetAllMeshes(std::vector<boost::shared_ptr<Caver::MeshInstance>,std::allocator<boost::shared_ptr<Caver::MeshInstance>>> *)
 *
 * Callees: 1
 *   0x00000000002B8F94  Caver::Mesh::~Mesh()
 *
 * Referenced strings: 1
 *   insn=0x0000000000203738 string=0x000000000020373C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void std::vector<boost::shared_ptr<Caver::MeshInstance>>::_M_insert_aux()
{
  JUMPOUT(0x2B9204);
}

