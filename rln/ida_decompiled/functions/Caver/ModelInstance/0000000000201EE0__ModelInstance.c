/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000201EE0
 * Mangled: ._ZN5Caver13ModelInstanceC2Ev
 * Demangled: Caver::ModelInstance::ModelInstance(void)
 *
 * Callers: 1
 *   0x0000000000224274  Caver::ModelComponent::Prepare(void)
 *
 * Callees: 1
 *   0x000000000044A508  Caver::MeshPrimitives::Cube(bool)
 *
 * Referenced strings: 1
 *   insn=0x0000000000201EE8 string=0x0000000000201EEC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void __fastcall Caver::ModelInstance::ModelInstance(Caver::ModelInstance *this)
{
  JUMPOUT(0x44A9F4);
}

