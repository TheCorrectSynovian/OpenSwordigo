/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F4190
 * Mangled: ._ZN5boost20checked_array_deleteINS_10shared_ptrIN5Caver12MeshInstanceEEEEEvPT_
 * Demangled: boost::checked_array_delete<boost::shared_ptr<Caver::MeshInstance>>(boost::shared_ptr<Caver::MeshInstance> *)
 *
 * Callers: 2
 *   0x0000000000226704  Caver::ModelComponent::className(void)
 *   0x000000000044AA1C  Caver::ModelInstance::InitWithModel(boost::shared_ptr<Caver::Model const> const&)
 *
 * Callees: 1
 *   0x0000000000226704  Caver::ModelComponent::className(void)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F4198 string=0x00000000001F419C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void boost::checked_array_delete<boost::shared_ptr<Caver::MeshInstance>>()
{
  JUMPOUT(0x2268D4);
}

