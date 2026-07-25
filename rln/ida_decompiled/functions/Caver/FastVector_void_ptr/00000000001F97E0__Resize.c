/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F97E0
 * Mangled: ._ZN5Caver10FastVectorIPvE6ResizeEi
 * Demangled: Caver::FastVector<void *>::Resize(int)
 *
 * Callers: 2
 *   0x000000000046CC30  Caver::SceneGrid::GetObjectsInBounds(Caver::Rectangle const&,void ***)
 *   0x000000000046CE8C  Caver::SceneGrid::GetObjectsNearCamera(float,void ***)
 *
 * Callees: 1
 *   0x000000000046D144  Caver::FastVector<boost::shared_ptr<Caver::SceneGridLayer>>::Resize(int)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F97E8 string=0x00000000001F97EC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void Caver::FastVector<void *>::Resize()
{
  JUMPOUT(0x46D464);
}

