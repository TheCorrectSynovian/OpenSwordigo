/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002032F0
 * Mangled: ._ZN5boost5uuids9to_stringERKNS0_4uuidE
 * Demangled: boost::uuids::to_string(boost::uuids::uuid const&)
 *
 * Callers: 1
 *   0x00000000004B2D7C  Caver::UniqueIdentifier(void)
 *
 * Callees: 1
 *   0x00000000004B2D7C  Caver::UniqueIdentifier(void)
 *
 * Referenced strings: 1
 *   insn=0x00000000002032F8 string=0x00000000002032FC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void boost::uuids::to_string()
{
  JUMPOUT(0x4B30A0);
}

