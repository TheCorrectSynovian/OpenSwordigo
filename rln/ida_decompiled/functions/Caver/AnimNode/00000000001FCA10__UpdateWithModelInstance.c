/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FCA10
 * Mangled: ._ZN5Caver8AnimNode23UpdateWithModelInstanceEfPNS_13ModelInstanceE
 * Demangled: Caver::AnimNode::UpdateWithModelInstance(float,Caver::ModelInstance *)
 *
 * Callers: 2
 *   0x000000000021C984  Caver::AnimationControllerComponent::Prepare(void)
 *   0x00000000002B199C  Caver::BushControllerComponent::Update(float)
 *
 * Callees: 1
 *   0x000000000021340C  Caver::AnimNode::UpdateWithModelInstance(float,Caver::ModelInstance *)
 *
 * Referenced strings: 1
 *   insn=0x00000000001FCA18 string=0x00000000001FCA1C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::AnimNode::UpdateWithModelInstance(Caver::AnimNode *this, float a2, Caver::ModelInstance *a3)
{
  return _ZN5Caver8AnimNode23UpdateWithModelInstanceEfPNS_13ModelInstanceE(this, a2, a3);
}

