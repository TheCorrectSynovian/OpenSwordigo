/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F79C0
 * Mangled: ._ZN5boost6detail12shared_countC2IN5Caver12MeshInstanceEEEPT_
 * Demangled: boost::detail::shared_count::shared_count<Caver::MeshInstance>(Caver::MeshInstance *)
 *
 * Callers: 1
 *   0x00000000004484F8  Caver::MeshInstance::MeshInstance(void)
 *
 * Callees: 1
 *   0x00000000004492CC  boost::detail::shared_count::shared_count<Caver::MeshInstance>(Caver::MeshInstance *)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F79C8 string=0x00000000001F79CC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 boost::detail::shared_count::shared_count<Caver::MeshInstance>()
{
  return _ZN5boost6detail12shared_countC2IN5Caver12MeshInstanceEEEPT_();
}

