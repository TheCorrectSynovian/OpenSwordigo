/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F48C0
 * Mangled: ._ZN5boost5uuids6detail4sha113process_blockEv
 * Demangled: boost::uuids::detail::sha1::process_block(void)
 *
 * Callers: 2
 *   0x00000000004B7A54  boost::uuids::detail::sha1::get_digest(uint (&)[5])
 *   0x00000000004B7D10  boost::uuids::detail::sha1::process_byte(uchar)
 *
 * Callees: 1
 *   0x00000000004B8080  boost::uuids::detail::sha1::process_block(void)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F48C8 string=0x00000000001F48CC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall boost::uuids::detail::sha1::process_block(boost::uuids::detail::sha1 *this)
{
  return _ZN5boost5uuids6detail4sha113process_blockEv(this);
}

