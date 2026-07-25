/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F9010
 * Mangled: ._ZN5Caver13ModelInstance29ExtractSkeletonDataFromBufferEPKNS_15FloatDataBufferE
 * Demangled: Caver::ModelInstance::ExtractSkeletonDataFromBuffer(Caver::FloatDataBuffer const*)
 *
 * Callers: 1
 *   0x000000000021340C  Caver::AnimNode::UpdateWithModelInstance(float,Caver::ModelInstance *)
 *
 * Callees: 1
 *   0x000000000044AA1C  Caver::ModelInstance::InitWithModel(boost::shared_ptr<Caver::Model const> const&)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F9018 string=0x00000000001F901C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void Caver::ModelInstance::ExtractSkeletonDataFromBuffer()
{
  JUMPOUT(0x44AE0C);
}

