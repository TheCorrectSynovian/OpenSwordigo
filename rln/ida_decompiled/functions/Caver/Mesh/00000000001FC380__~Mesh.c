/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FC380
 * Mangled: ._ZN5Caver4MeshD2Ev
 * Demangled: Caver::Mesh::~Mesh()
 *
 * Callers: 2
 *   0x00000000002B8EAC  boost::detail::shared_count::shared_count<Caver::Mesh>(Caver::Mesh *)
 *   0x00000000002B8F40  boost::detail::sp_counted_impl_p<Caver::Mesh>::dispose(void)
 *
 * Callees: 1
 *   0x00000000002B8F94  Caver::Mesh::~Mesh()
 *
 * Referenced strings: 1
 *   insn=0x00000000001FC388 string=0x00000000001FC38C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void __fastcall Caver::Mesh::~Mesh(Caver::Mesh *this)
{
  _ZN5Caver4MeshD2Ev(this);
}

