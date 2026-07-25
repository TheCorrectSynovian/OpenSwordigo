/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002026E0
 * Mangled: ._ZN5boost10scoped_ptrIN5Caver11MeshBuilderEED2Ev
 * Demangled: boost::scoped_ptr<Caver::MeshBuilder>::~scoped_ptr()
 *
 * Callers: 1
 *   0x00000000002B78CC  Caver::GroundMeshComponent::Process(std::vector<boost::intrusive_ptr<Caver::Component>,std::allocator<boost::intrusive_ptr<Caver::Component>>> *)
 *
 * Callees: 1
 *   0x00000000002B80BC  Caver::MeshBuilder::MeshBuilder(void)
 *
 * Referenced strings: 1
 *   insn=0x00000000002026E8 string=0x00000000002026EC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void boost::scoped_ptr<Caver::MeshBuilder>::~scoped_ptr()
{
  JUMPOUT(0x2B8264);
}

