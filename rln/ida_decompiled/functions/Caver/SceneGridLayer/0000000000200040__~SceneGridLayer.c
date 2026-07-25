/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000200040
 * Mangled: ._ZN5Caver14SceneGridLayerD2Ev
 * Demangled: Caver::SceneGridLayer::~SceneGridLayer()
 *
 * Callers: 2
 *   0x000000000046D05C  boost::detail::shared_count::shared_count<Caver::SceneGridLayer>(Caver::SceneGridLayer *)
 *   0x000000000046D0F0  boost::detail::sp_counted_impl_p<Caver::SceneGridLayer>::dispose(void)
 *
 * Callees: 1
 *   0x000000000046D734  Caver::SceneGridLayer::~SceneGridLayer()
 *
 * Referenced strings: 1
 *   insn=0x0000000000200048 string=0x000000000020004C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void __fastcall Caver::SceneGridLayer::~SceneGridLayer(Caver::SceneGridLayer *this)
{
  _ZN5Caver14SceneGridLayerD2Ev(this);
}

