/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FFD00
 * Mangled: ._ZN5Caver10FastVectorIN5boost10shared_ptrINS_14SceneGridLayerEEEE6ResizeEi
 * Demangled: Caver::FastVector<boost::shared_ptr<Caver::SceneGridLayer>>::Resize(int)
 *
 * Callers: 1
 *   0x000000000046C550  Caver::FastVector<boost::shared_ptr<Caver::SceneGridLayer>>::~FastVector()
 *
 * Callees: 1
 *   0x000000000046D144  Caver::FastVector<boost::shared_ptr<Caver::SceneGridLayer>>::Resize(int)
 *
 * Referenced strings: 1
 *   insn=0x00000000001FFD08 string=0x00000000001FFD0C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 Caver::FastVector<boost::shared_ptr<Caver::SceneGridLayer>>::Resize()
{
  return _ZN5Caver10FastVectorIN5boost10shared_ptrINS_14SceneGridLayerEEEE6ResizeEi();
}

