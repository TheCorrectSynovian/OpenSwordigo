/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FA890
 * Mangled: ._ZN5boost6detail12shared_countC2IN5Caver16RenderingContextEEEPT_
 * Demangled: boost::detail::shared_count::shared_count<Caver::RenderingContext>(Caver::RenderingContext *)
 *
 * Callers: 1
 *   0x0000000000477D9C  Java_com_touchfoo_swordigo_Native_setFilesDir
 *
 * Callees: 1
 *   0x000000000047B968  boost::detail::shared_count::shared_count<Caver::RenderingContext>(Caver::RenderingContext *)
 *
 * Referenced strings: 1
 *   insn=0x00000000001FA898 string=0x00000000001FA89C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 boost::detail::shared_count::shared_count<Caver::RenderingContext>()
{
  return _ZN5boost6detail12shared_countC2IN5Caver16RenderingContextEEEPT_();
}

