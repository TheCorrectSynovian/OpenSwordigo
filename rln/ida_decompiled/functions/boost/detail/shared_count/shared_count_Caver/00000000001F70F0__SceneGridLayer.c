/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F70F0
 * Mangled: ._ZN5boost6detail12shared_countC2IN5Caver14SceneGridLayerEEEPT_
 * Demangled: boost::detail::shared_count::shared_count<Caver::SceneGridLayer>(Caver::SceneGridLayer *)
 *
 * Callers: 1
 *   0x000000000046C550  Caver::FastVector<boost::shared_ptr<Caver::SceneGridLayer>>::~FastVector()
 *
 * Callees: 1
 *   0x000000000046D05C  boost::detail::shared_count::shared_count<Caver::SceneGridLayer>(Caver::SceneGridLayer *)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F70F8 string=0x00000000001F70FC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 boost::detail::shared_count::shared_count<Caver::SceneGridLayer>()
{
  return _ZN5boost6detail12shared_countC2IN5Caver14SceneGridLayerEEEPT_();
}

