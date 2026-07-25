/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000200190
 * Mangled: ._ZN5Caver9SceneGrid8AddLayerEffff
 * Demangled: Caver::SceneGrid::AddLayer(float,float,float,float)
 *
 * Callers: 1
 *   0x00000000004625B0  Caver::Scene::Scene(void)
 *
 * Callees: 1
 *   0x000000000046C550  Caver::FastVector<boost::shared_ptr<Caver::SceneGridLayer>>::~FastVector()
 *
 * Referenced strings: 1
 *   insn=0x0000000000200198 string=0x000000000020019C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void __fastcall Caver::SceneGrid::AddLayer(Caver::SceneGrid *this, float a2, float a3, float a4, float a5)
{
  JUMPOUT(0x46C880);
}

