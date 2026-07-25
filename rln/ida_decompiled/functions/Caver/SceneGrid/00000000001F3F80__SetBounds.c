/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F3F80
 * Mangled: ._ZN5Caver9SceneGrid9SetBoundsERKNS_9RectangleE
 * Demangled: Caver::SceneGrid::SetBounds(Caver::Rectangle const&)
 *
 * Callers: 1
 *   0x00000000004642A8  Caver::Scene::FinishLoad(void)
 *
 * Callees: 1
 *   0x000000000046C550  Caver::FastVector<boost::shared_ptr<Caver::SceneGridLayer>>::~FastVector()
 *
 * Referenced strings: 1
 *   insn=0x00000000001F3F88 string=0x00000000001F3F8C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void Caver::SceneGrid::SetBounds()
{
  JUMPOUT(0x46C674);
}

