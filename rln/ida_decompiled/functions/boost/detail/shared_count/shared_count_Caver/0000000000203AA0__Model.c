/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000203AA0
 * Mangled: ._ZN5boost6detail12shared_countC2IN5Caver5ModelEEEPT_
 * Demangled: boost::detail::shared_count::shared_count<Caver::Model>(Caver::Model *)
 *
 * Callers: 2
 *   0x000000000029A714  Caver::MonsterDeathControllerComponent::CreateSliceObject(boost::shared_ptr<Caver::Model> const&,Caver::Vector3 const&)
 *   0x000000000044E094  Caver::PODLoader::CreateModel(void)
 *
 * Callees: 1
 *   0x000000000029B708  Caver::MonsterDeathControllerComponent::className(void)
 *
 * Referenced strings: 1
 *   insn=0x0000000000203AA8 string=0x0000000000203AAC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void boost::detail::shared_count::shared_count<Caver::Model>()
{
  JUMPOUT(0x29BB3C);
}

