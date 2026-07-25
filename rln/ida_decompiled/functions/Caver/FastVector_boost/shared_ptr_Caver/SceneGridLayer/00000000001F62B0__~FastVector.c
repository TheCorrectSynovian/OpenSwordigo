/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F62B0
 * Mangled: ._ZN5Caver10FastVectorIN5boost10shared_ptrINS_14SceneGridLayerEEEED2Ev
 * Demangled: Caver::FastVector<boost::shared_ptr<Caver::SceneGridLayer>>::~FastVector()
 *
 * Callers: 1
 *   0x000000000046C21C  std::vector<boost::intrusive_ptr<Caver::SceneObjectGroup>,std::allocator<boost::intrusive_ptr<Caver::SceneObjectGroup>>>::_M_insert_aux(__gnu_cxx::__normal_iterator<boost::intrusive_ptr<Caver::SceneObjectGroup>*,std::vector<boost::intrusive_ptr<Caver::SceneObjectGroup>,std::allocator<boost::intrusive_ptr<Caver::SceneObjectGroup>>>>,boost::intrusive_ptr<Caver::SceneObjectGroup> const&)
 *
 * Callees: 1
 *   0x000000000046C550  Caver::FastVector<boost::shared_ptr<Caver::SceneGridLayer>>::~FastVector()
 *
 * Referenced strings: 1
 *   insn=0x00000000001F62B8 string=0x00000000001F62BC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 Caver::FastVector<boost::shared_ptr<Caver::SceneGridLayer>>::~FastVector()
{
  return _ZN5Caver10FastVectorIN5boost10shared_ptrINS_14SceneGridLayerEEEED2Ev();
}

