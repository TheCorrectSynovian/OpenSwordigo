/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F6170
 * Mangled: ._ZN5Caver13ModelInstance13InitWithModelERKN5boost10shared_ptrIKNS_5ModelEEE
 * Demangled: Caver::ModelInstance::InitWithModel(boost::shared_ptr<Caver::Model const> const&)
 *
 * Callers: 1
 *   0x0000000000224274  Caver::ModelComponent::Prepare(void)
 *
 * Callees: 1
 *   0x000000000044AA1C  Caver::ModelInstance::InitWithModel(boost::shared_ptr<Caver::Model const> const&)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F6178 string=0x00000000001F617C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 Caver::ModelInstance::InitWithModel()
{
  return _ZN5Caver13ModelInstance13InitWithModelERKN5boost10shared_ptrIKNS_5ModelEEE();
}

