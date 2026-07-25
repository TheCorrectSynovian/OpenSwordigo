/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000202740
 * Mangled: ._ZNSt6vectorIN5boost10shared_ptrIN5Caver4MeshEEESaIS4_EE13_M_insert_auxEN9__gnu_cxx17__normal_iteratorIPS4_S6_EERKS4_
 * Demangled: std::vector<boost::shared_ptr<Caver::Mesh>,std::allocator<boost::shared_ptr<Caver::Mesh>>>::_M_insert_aux(__gnu_cxx::__normal_iterator<boost::shared_ptr<Caver::Mesh>*,std::vector<boost::shared_ptr<Caver::Mesh>,std::allocator<boost::shared_ptr<Caver::Mesh>>>>,boost::shared_ptr<Caver::Mesh> const&)
 *
 * Callers: 2
 *   0x000000000029A714  Caver::MonsterDeathControllerComponent::CreateSliceObject(boost::shared_ptr<Caver::Model> const&,Caver::Vector3 const&)
 *   0x000000000044E094  Caver::PODLoader::CreateModel(void)
 *
 * Callees: 1
 *   0x000000000029B708  Caver::MonsterDeathControllerComponent::className(void)
 *
 * Referenced strings: 1
 *   insn=0x0000000000202748 string=0x000000000020274C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void std::vector<boost::shared_ptr<Caver::Mesh>>::_M_insert_aux()
{
  JUMPOUT(0x29B760);
}

