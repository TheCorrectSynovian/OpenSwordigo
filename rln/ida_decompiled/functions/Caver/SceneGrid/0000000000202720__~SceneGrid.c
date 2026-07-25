/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000202720
 * Mangled: ._ZN5Caver9SceneGridD2Ev
 * Demangled: Caver::SceneGrid::~SceneGrid()
 *
 * Callers: 2
 *   0x00000000004625B0  Caver::Scene::Scene(void)
 *   0x0000000000462DAC  Caver::Scene::RegisterLibrary(void)
 *
 * Callees: 1
 *   0x000000000046C21C  std::vector<boost::intrusive_ptr<Caver::SceneObjectGroup>,std::allocator<boost::intrusive_ptr<Caver::SceneObjectGroup>>>::_M_insert_aux(__gnu_cxx::__normal_iterator<boost::intrusive_ptr<Caver::SceneObjectGroup>*,std::vector<boost::intrusive_ptr<Caver::SceneObjectGroup>,std::allocator<boost::intrusive_ptr<Caver::SceneObjectGroup>>>>,boost::intrusive_ptr<Caver::SceneObjectGroup> const&)
 *
 * Referenced strings: 1
 *   insn=0x0000000000202728 string=0x000000000020272C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void __fastcall Caver::SceneGrid::~SceneGrid(Caver::SceneGrid *this)
{
  JUMPOUT(0x46C514);
}

