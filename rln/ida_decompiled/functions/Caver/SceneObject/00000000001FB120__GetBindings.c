/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FB120
 * Mangled: ._ZN5Caver11SceneObject11GetBindingsEPSt6vectorINS_7BindingESaIS2_EE
 * Demangled: Caver::SceneObject::GetBindings(std::vector<Caver::Binding,std::allocator<Caver::Binding>> *)
 *
 * Callers: 1
 *   0x0000000000470EC4  Caver::SceneObject::FinishLoad(void)
 *
 * Callees: 1
 *   0x0000000000470EC4  Caver::SceneObject::FinishLoad(void)
 *
 * Referenced strings: 1
 *   insn=0x00000000001FB128 string=0x00000000001FB12C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void Caver::SceneObject::GetBindings()
{
  JUMPOUT(0x4710CC);
}

