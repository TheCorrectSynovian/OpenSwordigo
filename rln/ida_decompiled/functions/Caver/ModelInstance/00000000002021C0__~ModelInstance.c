/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002021C0
 * Mangled: ._ZN5Caver13ModelInstanceD2Ev
 * Demangled: Caver::ModelInstance::~ModelInstance()
 *
 * Callers: 5
 *   0x0000000000223F44  Caver::ModelComponent::InitWithModel(boost::shared_ptr<Caver::Model const> const&)
 *   0x0000000000224024  Caver::ModelComponent::setModelName(std::string const&)
 *   0x00000000002240E4  Caver::ModelComponent::LoadModel(void)
 *   0x0000000000224274  Caver::ModelComponent::Prepare(void)
 *   0x000000000022628C  Caver::ModelComponent::~ModelComponent()
 *
 * Callees: 1
 *   0x0000000000226704  Caver::ModelComponent::className(void)
 *
 * Referenced strings: 1
 *   insn=0x00000000002021C8 string=0x00000000002021CC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void __fastcall Caver::ModelInstance::~ModelInstance(Caver::ModelInstance *this)
{
  JUMPOUT(0x22675C);
}

