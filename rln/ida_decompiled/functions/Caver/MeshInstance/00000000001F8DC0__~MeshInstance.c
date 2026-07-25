/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F8DC0
 * Mangled: ._ZN5Caver12MeshInstanceD2Ev
 * Demangled: Caver::MeshInstance::~MeshInstance()
 *
 * Callers: 2
 *   0x00000000004492CC  boost::detail::shared_count::shared_count<Caver::MeshInstance>(Caver::MeshInstance *)
 *   0x0000000000449360  boost::detail::sp_counted_impl_p<Caver::MeshInstance>::dispose(void)
 *
 * Callees: 1
 *   0x00000000004493B4  Caver::MeshInstance::~MeshInstance()
 *
 * Referenced strings: 1
 *   insn=0x00000000001F8DC8 string=0x00000000001F8DCC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void __fastcall Caver::MeshInstance::~MeshInstance(Caver::MeshInstance *this)
{
  _ZN5Caver12MeshInstanceD2Ev(this);
}

